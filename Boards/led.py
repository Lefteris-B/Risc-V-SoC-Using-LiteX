import math

from migen import *
from migen.genlib.misc import WaitTimer

from litex.soc.interconnect.csr import *
from litex.soc.interconnect import wishbone

from litex.soc.cores.clock import Max10PLL
from litex.soc.integration.soc import SoCRegion
from litex.soc.integration.soc_core import *
from litex.soc.integration.builder import *

from litex.build.io import DDROutput

from litex_boards.platforms import terasic_de10lite

from litedram.modules import IS42S16320
from litedram.phy import GENSDRPHY

# Led Chaser ---------------------------------------------------------------------------------------

_CHASER_MODE  = 0
_CONTROL_MODE = 1
# Η κλάση υλοποιεί ένα κύκλωμα που αναβοσβήνει τα led στο board
class LedChaser(Module, AutoCSR):
    def __init__(self, pads, sys_clk_freq, period=1e0, polarity=0): #Αρχικοποίηση 
        self.pads     = pads
        self.polarity = polarity
        self.n        = len(pads)
        self._out     = CSRStorage(len(pads), description="Led Output(s) Control.")

        # # #


        chaser = Signal(self.n)#Σήματα
        mode   = Signal(reset=_CHASER_MODE)
        timer  = WaitTimer(int(period*sys_clk_freq/(2*self.n)))
        leds   = Signal(self.n)
        self.submodules += timer #Υλοποίηση συνδιαστικού κυκλώματος μέσω self.comb
        self.comb += timer.wait.eq(~timer.done)
        self.sync += If(timer.done, chaser.eq(Cat(~chaser[-1], chaser)))
        self.sync += If(self._out.re, mode.eq(_CONTROL_MODE))
        self.comb += [
            If(mode == _CONTROL_MODE,
                leds.eq(self._out.storage)
            ).Else(
                leds.eq(chaser)
            )
        ]
        self.comb += pads.eq(leds ^ (self.polarity*(2**self.n-1)))

    def add_pwm(self, default_width=512, default_period=1024, with_csr=True):#Yλοποίησh κυκλώματος μέσω PWM
        from litex.soc.cores.pwm import PWM
        self.submodules.pwm = PWM(
            with_csr       = with_csr,
            default_enable = 1,
            default_width  = default_width,
            default_period = default_period
        )
        # Έλεγχος των LED μέσω PWM
        self.comb += If(~self.pwm.pwm, self.pads.eq(self.polarity*(2**self.n-1)))

# CRG ----------------------------------------------------------------------------------------------

class _CRG(Module):
    def __init__(self, platform, sys_clk_freq):
        self.rst = Signal()
        self.clock_domains.cd_sys    = ClockDomain()
        self.clock_domains.cd_sys_ps = ClockDomain()
        self.clock_domains.cd_vga    = ClockDomain()

        # # #

        # Clk / Rst
        clk50 = platform.request("clk50")

        # PLL
        self.submodules.pll = pll = Max10PLL(speedgrade="-7")
        self.comb += pll.reset.eq(self.rst)
        pll.register_clkin(clk50, 50e6)
        pll.create_clkout(self.cd_sys,    sys_clk_freq)
        pll.create_clkout(self.cd_sys_ps, sys_clk_freq, phase=90)
        pll.create_clkout(self.cd_vga,    40e6)

        # SDRAM clock
        self.specials += DDROutput(1, 0, platform.request("sdram_clock"), ClockSignal("sys_ps"))

# BaseSoC ------------------------------------------------------------------------------------------

class BaseSoC(SoCCore):
    def __init__(self, sys_clk_freq=int(50e6), with_led_chaser=True, with_video_terminal=False,
                 **kwargs):
        platform = terasic_de10lite.Platform()

        # CRG --------------------------------------------------------------------------------------
        self.submodules.crg = _CRG(platform, sys_clk_freq)

        # SoCCore ----------------------------------------------------------------------------------
        SoCCore.__init__(self, platform, sys_clk_freq, ident="LiteX SoC on DE10-Lite", **kwargs)

        # SDR SDRAM --------------------------------------------------------------------------------
        if not self.integrated_main_ram_size:
            self.submodules.sdrphy = GENSDRPHY(platform.request("sdram"), sys_clk_freq)
            self.add_sdram("sdram",
                phy           = self.sdrphy,
                module        = IS42S16320(sys_clk_freq, "1:1"),
                l2_cache_size = kwargs.get("l2_size", 8192)
            )
        self.submodules.leds = LedChaser(
            pads         = platform.request_all("user_led"),
            sys_clk_freq = sys_clk_freq
        )

def main():
    from litex.soc.integration.soc import LiteXSoCArgumentParser
    parser = LiteXSoCArgumentParser(description="LiteX SoC on DE10-Lite")
    target_group = parser.add_argument_group(title="Target options")
    target_group.add_argument("--build",               action="store_true", help="Build design.")
    target_group.add_argument("--load",                action="store_true", help="Load bitstream.")
    target_group.add_argument("--sys-clk-freq",        default=50e6,        help="System clock frequency.")
    builder_args(parser)
    soc_core_args(parser)
    args = parser.parse_args()

    soc = BaseSoC(
        sys_clk_freq        = int(float(args.sys_clk_freq)),
        with_video_terminal = args.with_video_terminal,
        **soc_core_argdict(args)
    )
    builder = Builder(soc, **builder_argdict(args))
    if args.build:
        builder.build()

    if args.load:
        prog = soc.platform.create_programmer()
        prog.load_bitstream(builder.get_bitstream_filename(mode="sram"))

if __name__ == "__main__":
    main()