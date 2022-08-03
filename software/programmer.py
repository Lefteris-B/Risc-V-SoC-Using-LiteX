from litex.build.altera.programmer import USBBlaster

prog = USBBlaster()
prog.load_bitstream("bitstream.sof")