// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========

void Vsim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsim::eval\n"); );
    Vsim__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/iamme/build/sim/gateware/sim.v", 20, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsim::_eval_initial_loop(Vsim__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/iamme/build/sim/gateware/sim.v", 20, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsim::_sequent__TOP__2(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_sequent__TOP__2\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->serial_sink_ready = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0));
    vlTOPp->serial_source_data = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data;
    vlTOPp->sim_trace = vlSymsp->TOP__sim.__PVT__sim_trace_storage;
    vlTOPp->serial_source_valid = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable;
    vlTOPp->gpio_oe = vlSymsp->TOP__sim.gpio_oe;
    vlTOPp->gpio_o = vlSymsp->TOP__sim.gpio_o;
}

void Vsim::_eval(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_eval\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->sys_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__sys_clk)))) {
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlSymsp->TOP__sim._sequent__TOP__sim__23(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__24(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__25(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__26(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__27(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__28(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__29(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__30(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__31(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__32(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__33(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__34(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__35(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__36(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__37(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__38(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__39(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__18(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__19(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__20(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__21(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__22(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__23(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__24(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__25(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__26(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__27(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__28(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__29(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__30(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__31(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__32(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__33(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__34(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__35(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__36(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._sequent__TOP__sim__VexRiscv__37(vlSymsp);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__40(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__41(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__42(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__43(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__44(vlSymsp);
        vlSymsp->TOP__sim._sequent__TOP__sim__45(vlSymsp);
        vlSymsp->TOP__sim__VexRiscv._settle__TOP__sim__VexRiscv__13(vlSymsp);
    }
    vlSymsp->TOP__sim._combo__TOP__sim__46(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__sys_clk = vlTOPp->sys_clk;
}

VL_INLINE_OPT QData Vsim::_change_request(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_change_request\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsim::_change_request_1(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_change_request_1\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsim::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((sys_clk & 0xfeU))) {
        Verilated::overWidthError("sys_clk");}
    if (VL_UNLIKELY((serial_source_ready & 0xfeU))) {
        Verilated::overWidthError("serial_source_ready");}
    if (VL_UNLIKELY((serial_sink_valid & 0xfeU))) {
        Verilated::overWidthError("serial_sink_valid");}
}
#endif  // VL_DEBUG
