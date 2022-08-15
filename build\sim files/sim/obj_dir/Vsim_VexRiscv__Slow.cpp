// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========
WData/*71:0*/ Vsim_VexRiscv::__Vtable3___PVT__decode_SHIFT_CTRL_string[4][3];
WData/*95:0*/ Vsim_VexRiscv::__Vtable7___PVT__decode_SRC1_CTRL_string[4][3];
WData/*71:0*/ Vsim_VexRiscv::__Vtable11___PVT__memory_SHIFT_CTRL_string[4][3];
WData/*71:0*/ Vsim_VexRiscv::__Vtable13___PVT__execute_SHIFT_CTRL_string[4][3];
WData/*95:0*/ Vsim_VexRiscv::__Vtable15___PVT__execute_SRC1_CTRL_string[4][3];
WData/*95:0*/ Vsim_VexRiscv::__Vtable21___PVT__decode_to_execute_SRC1_CTRL_string[4][3];
WData/*71:0*/ Vsim_VexRiscv::__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[4][3];
WData/*71:0*/ Vsim_VexRiscv::__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[4][3];

VL_CTOR_IMP(Vsim_VexRiscv) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vsim_VexRiscv::__Vconfigure(Vsim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vsim_VexRiscv::~Vsim_VexRiscv() {
}

void Vsim_VexRiscv::_initial__TOP__sim__VexRiscv__1(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_initial__TOP__sim__VexRiscv__1\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi = 0U;
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__2(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__2\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction = 0U;
    vlSymsp->TOP__sim__VexRiscv.lastStageIsValid = vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid;
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l338 
        = (1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                    >> 7U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx11 = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx11][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx11][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable11___PVT__memory_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx11][2U];
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx15 = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL;
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx15][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx15][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable15___PVT__execute_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx15][2U];
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx21 = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL;
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable21___PVT__decode_to_execute_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx21][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable21___PVT__decode_to_execute_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx21][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable21___PVT__decode_to_execute_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx21][2U];
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx23 = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx23][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx23][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx23][2U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
        = (((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U])) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                                                    >> 0x1fU))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4 
        = ((5U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size)) 
           | (7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffffffeU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffffffdU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffffffbU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                    >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffffff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                    >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffffffefU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                       >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffffffdfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                       >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffffffbfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                       >> 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffffff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                       >> 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffffeffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                        >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffffdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                        >> 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffffbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                        >> 0xbU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffff7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                        >> 9U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffffefffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                         >> 7U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffffdfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x2000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                         >> 5U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffffbfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x4000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                         >> 3U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffff7fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x8000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                         >> 1U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffeffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x10000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                          << 1U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffdffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x20000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                          << 3U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfffbffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x40000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                          << 5U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfff7ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x80000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                          << 7U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffefffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x100000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                           << 9U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffdfffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x200000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                           << 0xbU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xffbfffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x400000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                           << 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xff7fffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x800000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                           << 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfeffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x1000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                            << 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfdffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x2000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                            << 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xfbffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x4000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                            << 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xf7ffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x8000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                            << 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xefffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x10000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                             << 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xdfffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x20000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                             << 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0xbfffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x40000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                             << 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3 
        = ((0x7fffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3) 
           | (0x80000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
                             << 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x1000U | (0xffffe000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x2000000U | (0xfc0fffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0x7fffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xfffffff0U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
        = (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit 
           & vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext);
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR 
        = (0x3fffffffU & (((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                            ? ((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                  << 2U)) : (0xfffffffcU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                          >> 2U));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
           & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    vlSymsp->TOP__sim__VexRiscv.lastStagePc = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC;
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 1U;
    }
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__3(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__3\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_loader_waysAllocator 
        = (3U & (- (IData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l850 
        = (1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                    >> 7U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1118 
        = (1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause 
        = vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code;
    if (vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending) 
           & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
                 | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit))))));
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx13 = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL;
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx13][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx13][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable13___PVT__execute_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx13][2U];
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx22 = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL;
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx22][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx22][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx22][2U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid) {
        if ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege = 3U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xfffff7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xffffff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xfffffff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffff7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xffffff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffffff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
              >> 7U));
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if ((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                 << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                            << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ADR 
        = ((0x3ffffff8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                           >> 2U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR));
    vlSymsp->TOP__sim__VexRiscv.lastStageInstruction 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address 
        = (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_7) {
        vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xffffff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xfffffff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xffffe7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO) 
              & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC 
                 >> 1U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext
            : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0);
    vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
            ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
            : 0xfU);
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1 
        = ((0xffffffffULL & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED) 
                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                  >> 0x1fU)))) << 0x20U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1 
        = ((0x100000000ULL & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1) 
           | (IData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_div_result 
        = ((0x2000U & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION)
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U]
            : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV) 
            & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
               >> 0x1fU)) & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
               | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
           & (2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh 
        = ((0x10000U & ((((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0xcU))) 
                          | (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))) 
                         << 0x10U) & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                      >> 0xfU))) | 
           (0xffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                       >> 0x10U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh 
        = ((0x10000U & (((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0xcU))) << 0x10U) 
                        & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                           >> 0xfU))) | (0xffffU & 
                                         (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                          >> 0x10U)));
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__4(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__4\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs2 
        = ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
            >> 0x1fU) & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_stage0_mask = 0U;
    if ((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                      >> 0xcU)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_stage0_mask = 1U;
    } else {
        if ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xcU)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_stage0_mask = 3U;
        } else {
            if ((2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                              >> 0xcU)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_stage0_mask = 0xfU;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0x7ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x80000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xcU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xbffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x40000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xdffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x20000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xeU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xeffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x10000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xf7fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x8000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x10U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xfbfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x4000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xfdfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x2000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x12U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xfefffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xff7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x14U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xffbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xffdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x16U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xffeffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xfff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x18U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xfffbfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xfffdfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1aU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xfffefU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xffff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1cU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xffffbU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xffffdU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1eU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
        = ((0xffffeU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x3ffU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x5ffU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x16U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x6ffU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x77fU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x18U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x7bfU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x7dfU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1aU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x7efU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x7f7U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1cU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x7fbU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x7fdU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1eU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3 
        = ((0x7feU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3)) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x3ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x40000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x5ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x20000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xeU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x6ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x10000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x77fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x8000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x10U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7bfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x4000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7dfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x2000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x12U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7efffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7f7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x14U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7fbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7fdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x16U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7feffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7ff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x18U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7ffbfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7ffdfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1aU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7ffefU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7fff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1cU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7fffbU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7fffdU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1eU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
        = ((0x7fffeU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
        = ((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
            : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
                ? 4U : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
                         ? (0xfffff000U & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
                         : (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xfU)))));
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__5(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__5\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0x7ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x80000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xcU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xbffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x40000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xdffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x20000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xeU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xeffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x10000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xf7fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x8000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x10U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xfbfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x4000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xfdfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x2000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x12U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xfefffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xff7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x14U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xffbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xffdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x16U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xffeffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xfff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x18U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xfffbfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xfffdfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1aU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xfffefU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xffff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1cU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xffffbU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xffffdU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1eU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
        = ((0xffffeU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0x7ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x80000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xcU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xbffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x40000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xdffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x20000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xeU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xeffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x10000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xf7fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x8000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x10U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xfbfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x4000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xfdfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x2000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x12U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xfefffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xff7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x14U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xffbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xffdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x16U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xffeffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                        >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xfff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x18U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xfffbfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xfffdfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1aU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xfffefU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                       >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xffff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1cU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xffffbU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xffffdU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1eU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
        = ((0xffffeU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x3ffU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x5ffU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x16U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x6ffU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x77fU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x18U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x7bfU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x7dfU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x1aU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x7efU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x7f7U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1cU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x7fbU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x7fdU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1eU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 
        = ((0x7feU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1)) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x3ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x40000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x5ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x20000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xeU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x6ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x10000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x77fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x8000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 0x10U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7bfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x4000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7dfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x2000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 0x12U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7efffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7f7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7fbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7fdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x16U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7feffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7ff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x18U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7ffbfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7ffdfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x1aU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7ffefU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7fff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1cU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7fffbU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7fffdU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1eU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
        = ((0x7fffeU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1fU)));
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__6(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__6\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1 
        = ((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1 
        = ((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0x14U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2 
        = ((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2 
        = ((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0x14U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x3ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x40000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x5ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x20000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xeU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x6ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x10000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x77fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x8000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 0x10U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7bfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x4000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7dfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x2000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 0x12U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7efffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7f7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7fbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7fdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x16U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7feffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7ff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x18U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7ffbfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7ffdfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x1aU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7ffefU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                       >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7fff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1cU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7fffbU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7fffdU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1eU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
        = ((0x7fffeU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
        = (((0U == (0x1000U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
            << 0x1fU) | (((0U == (0x1000U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                          << 0x1eU) | (((0x2004020U 
                                         == (0x2004064U 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                        << 0x1dU) | 
                                       (((0x2000030U 
                                          == (0x2004074U 
                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         << 0x1cU) 
                                        | (((0x50U 
                                             == (0x10003050U 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                            << 0x1bU) 
                                           | (((0x10000050U 
                                                == 
                                                (0x10403050U 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               << 0x1aU) 
                                              | ((((0x1050U 
                                                    == 
                                                    (0x1050U 
                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                   | (0x2050U 
                                                      == 
                                                      (0x2050U 
                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                  << 0x19U) 
                                                 | ((((0x48U 
                                                       == 
                                                       (0x48U 
                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                      | (4U 
                                                         == 
                                                         (0x1cU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                     << 0x18U) 
                                                    | (((0x40U 
                                                         == 
                                                         (0x58U 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        << 0x17U) 
                                                       | ((((0x5010U 
                                                             == 
                                                             (0x7034U 
                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                            | (0x5020U 
                                                               == 
                                                               (0x2007064U 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                           << 0x16U) 
                                                          | ((((0x40001010U 
                                                                == 
                                                                (0x40003054U 
                                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                               | ((0x1010U 
                                                                   == 
                                                                   (0x7034U 
                                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                  | (0x1010U 
                                                                     == 
                                                                     (0x2007054U 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
                                                              << 0x15U) 
                                                             | (((0x24U 
                                                                  == 
                                                                  (0x64U 
                                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                 << 0x14U) 
                                                                | (((0x1000U 
                                                                     == 
                                                                     (0x1000U 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                    << 0x13U) 
                                                                   | (((0x2000U 
                                                                        == 
                                                                        (0x3000U 
                                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                       << 0x12U) 
                                                                      | ((((0x2000U 
                                                                            == 
                                                                            (0x2010U 
                                                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                           | (0x1000U 
                                                                              == 
                                                                              (0x5000U 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                          << 0x11U) 
                                                                         | (((0x4008U 
                                                                              == 
                                                                              (0x4048U 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                             << 0x10U) 
                                                                            | ((((0x20U 
                                                                                == 
                                                                                (0x34U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x64U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 0xfU) 
                                                                               | ((((0x40U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x40U 
                                                                                == 
                                                                                (0x403040U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
                                                                                << 0xeU) 
                                                                                | (((0x20U 
                                                                                == 
                                                                                (0x20U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 0xdU) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0x40U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x4020U 
                                                                                == 
                                                                                (0x4020U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x2000020U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))) 
                                                                                << 0xcU) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2010U 
                                                                                == 
                                                                                (0x2030U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10U 
                                                                                == 
                                                                                (0x1030U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2020U 
                                                                                == 
                                                                                (0x2002060U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x2003020U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))) 
                                                                                << 0xbU) 
                                                                                | ((((0x48U 
                                                                                == 
                                                                                (0x48U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x1010U 
                                                                                == 
                                                                                (0x1010U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2010U 
                                                                                == 
                                                                                (0x2010U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))) 
                                                                                << 0xaU) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 9U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x20U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 8U) 
                                                                                | (((0x4010U 
                                                                                == 
                                                                                (0x4014U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 7U) 
                                                                                | (((0x2010U 
                                                                                == 
                                                                                (0x6014U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2000U 
                                                                                == 
                                                                                (0x6004U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x1000U 
                                                                                == 
                                                                                (0x5004U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x4000U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x58U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 4U) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2010U 
                                                                                == 
                                                                                (0x2014U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x40000030U 
                                                                                == 
                                                                                (0x40000034U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
                                                                                << 3U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 2U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 1U) 
                                                                                | (0x1008U 
                                                                                == 
                                                                                (0x5048U 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))))))))))))));
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__7(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__7\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
        = (0x1ffffffffULL & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
                             - (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2))));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
           | (0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception) 
              | (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                  & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                 | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 0U;
    if ((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
               | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                     >> 7U))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode = 0U;
    if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself = 1U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1 
                = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_3;
        } else {
            if (((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL)) 
                 | (3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
        = ((0xffffff00U & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
           | (0xffU & ((0U == (3U & vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data
                        : ((1U == (3U & vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                            ? (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                               >> 8U) : ((2U == (3U 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                          ? (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                             >> 0x10U)
                                          : (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                             >> 0x18U))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
        = ((0xffff00ffU & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
           | (0xff00U & (((2U & vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA)
                           ? (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                              >> 0x18U) : (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                           >> 8U)) 
                         << 8U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
        = ((0xff00ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
           | (0xff0000U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data));
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
        = ((0xffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted) 
           | (0xff000000U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself = 0U;
    if ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
          & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))) {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself = 1U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code = 0xbU;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid = 1U;
    }
    if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2 
            = ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_1 
                << 0xcU) | (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0x14U)));
    } else {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2 
            = ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                ? (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_3) 
                    << 0x15U) | ((0x100000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xbU)) 
                                 | ((0xff000U & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION) 
                                    | ((0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 9U)) 
                                       | (0x7feU & 
                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0x14U))))))
                : ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BranchPlugin_branch_src2_5 
                    << 0xdU) | ((0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0x13U)) 
                                | ((0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              << 4U)) 
                                   | ((0x7e0U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 7U)))))));
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2 = 4U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffffeU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                    >> 0x1fU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffffdU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (2U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                    >> 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffffbU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (4U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                    >> 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffff7U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (8U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                    >> 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffefU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x10U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                       >> 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffdfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x20U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                       >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffbfU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x40U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                       >> 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffff7fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x80U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                       >> 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffeffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x100U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                        >> 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x200U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                        >> 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x400U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                        >> 0xbU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffff7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                        >> 9U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffefffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                         >> 7U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffdfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x2000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                         >> 5U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffbfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x4000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                         >> 3U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffff7fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x8000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                         >> 1U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffeffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x10000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                          << 1U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffdffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x20000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                          << 3U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffbffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x40000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                          << 5U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfff7ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x80000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                          << 7U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffefffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x100000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                           << 9U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffdfffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x200000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                           << 0xbU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffbfffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x400000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                           << 0xdU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xff7fffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x800000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                           << 0xfU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfeffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x1000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                            << 0x11U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfdffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x2000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                            << 0x13U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfbffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x4000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                            << 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xf7ffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x8000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                            << 0x17U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xefffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x10000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                             << 0x19U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xdfffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x20000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                             << 0x1bU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xbfffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x40000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                             << 0x1dU)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0x7fffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (0x80000000U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                             << 0x1fU)));
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__8(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__8\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5 
        = ((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2
            : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                ? ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_2 
                    << 0xcU) | (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0x14U)))
                : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                    ? ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
                        << 0xcU) | ((0xfe0U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 7U))))
                    : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID 
        = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                 >> 0xaU));
    if ((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx3 = (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x15U));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable3___PVT__decode_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx3][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable3___PVT__decode_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx3][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable3___PVT__decode_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx3][2U];
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx7 = (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 1U));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable7___PVT__decode_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx7][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable7___PVT__decode_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx7][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable7___PVT__decode_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx7][2U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload 
        = (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
           + ((2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                            >> 0x17U))) ? (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1) 
                                            << 0x15U) 
                                           | ((0x100000U 
                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                          >> 0x14U))))))
               : ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
                   << 0xdU) | ((0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 7U))))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard = 1U;
            }
        }
    }
    if ((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                  >> 5U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard = 1U;
            }
        }
    }
    if ((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                  >> 0xfU)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch 
        = ((2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                         >> 0x17U))) | ((1U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x17U))) 
                                        & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
                                           >> 0x12U)));
    if ((1U & ((2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                             >> 0x17U))) ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x15U)
                : (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                   >> 8U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_div_stage_0_outNumerator 
        = (((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1)) 
            << 1U) | (QData)((IData)((1U & (~ (IData)(
                                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                       >> 0x20U)))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit 
        = ((((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
              | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
             | (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
                | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_5)) 
            | ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
                | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
                  | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_9))) 
           | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_10);
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address 
                    = (0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address);
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size = 5U;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 1U;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004) {
                if (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                     & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                        & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))) {
                    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo = 1U;
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo = 1U;
    }
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
         & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr = 0U;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError 
        = ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)) 
           & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits) 
               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error)) 
              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
                 & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging)))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_valueNext 
        = (7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                 + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow 
        = ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated 
        = (1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
                  >> 7U) & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                               >> 0xeU))));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2 
        = (1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
                  >> 0xfU) & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                 >> 0xeU))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
        = ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL))
            ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_FullBarrelShifterPlugin_reversed
            : vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1);
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq 
        = (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
           == vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5);
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
        = ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
            + ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                ? (~ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                : vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)) 
           + ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
               ? 1U : 0U));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
                ? (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit 
                   & (~ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1))
                : (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit 
                   | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1))
            : vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1);
}
