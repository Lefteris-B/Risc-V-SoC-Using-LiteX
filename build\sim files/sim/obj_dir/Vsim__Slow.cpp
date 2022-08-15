// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vsim) {
    Vsim__Syms* __restrict vlSymsp = __VlSymsp = new Vsim__Syms(this, name());
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(sim, Vsim_sim);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsim::__Vconfigure(Vsim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vsim::~Vsim() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsim::_settle__TOP__1(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_settle__TOP__1\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim_trace = vlSymsp->TOP__sim.__PVT__sim_trace_storage;
    vlTOPp->serial_source_valid = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable;
    vlTOPp->serial_sink_ready = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0));
    vlTOPp->serial_source_data = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data;
    vlTOPp->gpio_oe = vlSymsp->TOP__sim.gpio_oe;
    vlTOPp->gpio_o = vlSymsp->TOP__sim.gpio_o;
}

void Vsim::_eval_initial(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_eval_initial\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv._initial__TOP__sim__VexRiscv__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__sim._initial__TOP__sim__1(vlSymsp);
    vlSymsp->TOP__sim._initial__TOP__sim__2(vlSymsp);
    vlSymsp->TOP__sim._initial__TOP__sim__3(vlSymsp);
    vlSymsp->TOP__sim._initial__TOP__sim__4(vlSymsp);
    vlSymsp->TOP__sim._initial__TOP__sim__5(vlSymsp);
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
}

void Vsim::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::final\n"); );
    // Variables
    Vsim__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsim::_eval_settle(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_eval_settle\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__3(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__4(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__5(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__6(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__7(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__8(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__9(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__10(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__11(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__12(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__6(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__7(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__8(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__9(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__10(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__11(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__12(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__13(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__14(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__15(vlSymsp);
    vlSymsp->TOP__sim._settle__TOP__sim__16(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__13(vlSymsp);
}

void Vsim::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_ctor_var_reset\n"); );
    // Body
    sim_trace = VL_RAND_RESET_I(1);
    sys_clk = VL_RAND_RESET_I(1);
    serial_source_valid = VL_RAND_RESET_I(1);
    serial_source_ready = VL_RAND_RESET_I(1);
    serial_source_data = VL_RAND_RESET_I(8);
    serial_sink_valid = VL_RAND_RESET_I(1);
    serial_sink_ready = VL_RAND_RESET_I(1);
    serial_sink_data = VL_RAND_RESET_I(8);
    gpio_oe = VL_RAND_RESET_I(32);
    gpio_o = VL_RAND_RESET_I(32);
    gpio_i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
