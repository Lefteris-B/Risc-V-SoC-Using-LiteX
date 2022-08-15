// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__13(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__13\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
           & (IData)(vlSymsp->TOP__sim.__PVT__dbus_ack));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready = 1U;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__18(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__18\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__RegFilePlugin_regFile__v0 = 0U;
    vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 0U;
    vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0U;
    vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0U;
    vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0U;
    vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0U;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_minstret 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_rspCounter 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__DBusCachedPlugin_rspCounter 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter;
    vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0U;
    vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0U;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_mstatus_MIE 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE;
    vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_dBus_cmd_ready 
        = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_start 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__loader_error 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_waitDone 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone;
    vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_counter 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter;
    vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_iBusWishbone_ADR 
        = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_1) {
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__RegFilePlugin_regFile__v0 
            = vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__RegFilePlugin_regFile__v0 = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__RegFilePlugin_regFile__v0 
            = vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_2) {
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0 
            = ((vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address 
                << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error) 
                           << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid)));
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__19(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__19\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 3U) & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1))) {
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0 
            = (0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
                        >> 0x18U));
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    if ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 1U) & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1))) {
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0 
            = (0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
                        >> 8U));
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1))) {
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0 
            = (0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data);
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    if ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 2U) & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1))) {
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0 
            = (0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
                        >> 0x10U));
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle 
        = ((IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)
            ? 0ULL : (1ULL + vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1 
        = vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile
        [(0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                   >> 0x14U))];
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0 
        = vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile
        [(0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                   >> 0xfU))];
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg = 1U;
        }
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg = 0U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2) 
                      << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1) 
                                 << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965)))));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_minstret = 0ULL;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_minstret 
                = (1ULL + vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret);
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc = 1U;
        }
        if (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_7 = vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset;
    vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data 
        = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
            = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342 
        = (1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                 >> 7U));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = 0U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                     >> 0x1fU));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers) 
              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965) {
            vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code = 7U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1) {
            vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code = 3U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2) {
            vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code = 0xbU;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP 
        = (0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1);
    vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext 
        = vlSymsp->TOP__sim.__PVT__interrupt;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid 
            = (1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address 
            = (0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                           >> 2U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x1eU));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
        if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1))
                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code)
                : 2U);
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL 
            = (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x12U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL 
            = (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 6U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x11U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x19U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO 
            = (1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                      >> 0x14U) & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                      >> 3U))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 3U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x10U));
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0xbU));
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__20(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__20\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2 
            = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs2)
                 ? (~ vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)
                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2) 
               + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs2));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT 
            = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                       (((QData)((IData)(
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                          & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                             >> 0x1fU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                       (0x1fU 
                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5))));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                = ((0x100000000ULL & vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                   | (IData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_div_stage_0_outNumerator)));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
            = (0x1ffffffffULL & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1)
                                   ? (~ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1)
                                   : vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1) 
                                 + (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1))));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U] 
                = ((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                  >> 0x20U))) ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                    : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U] = 0U;
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[1U] = 0U;
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[2U] = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL 
            = (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 8U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL 
            = (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 1U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring)));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext 
        = vlSymsp->TOP__sim.__PVT__shared_dat_r;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0 
            = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                << 0x18U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                              << 0x10U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 0U;
    } else {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 0U;
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 1U;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid = 0U;
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_rspCounter = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_rspCounter 
                = ((IData)(1U) + vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter);
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
                = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex)));
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last 
            = (1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
            = (0xfffffffffffffULL & (((((QData)((IData)(
                                                        (0x7ffffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                                                                >> 0x20U)))))))) 
                                        << 0x21U) | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL))) 
                                      + (((QData)((IData)(
                                                          (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (1ULL 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                          << 0x32U) 
                                         | (0x3ffffffffffffULL 
                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                               << 0x10U)))) 
                                     + (((QData)((IData)(
                                                         (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                         << 0x32U) 
                                        | (0x3ffffffffffffULL 
                                           & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                              << 0x10U)))));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)
               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute)
               : ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode) 
                  & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)
               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory)
               : ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                  & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE 
            = (0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                  >> 7U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE 
            = (1U & (~ (((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                       >> 0xdU))) & 
                         (0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0xfU)))) 
                        | ((3U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                         >> 0xdU))) 
                           & (0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                              >> 0xfU)))))));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base 
                = (0x3fffffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                  >> 2U));
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode 
                = (3U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264 
            = (0xcc0U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835 
            = (0x343U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032 
            = (0xfc0U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834 
            = (0x342U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                 & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP 
                = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                         >> 3U));
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE 
                    = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 3U));
            }
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE 
                    = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 7U));
            }
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE 
                    = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 0xbU));
            }
        }
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__21(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__21\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions 
            = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
               | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                      == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                    >> 2U)))) & (0U 
                                                 != 
                                                 ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
        if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt 
                = (1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException)));
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
        if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc 
                = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask 
            = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                     >> 1U));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                     >> 1U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address 
        = (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))) {
            if ((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result 
                    = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert)
                         ? (~ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_div_result)
                         : vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_div_result) 
                       + (IData)((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert))));
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO 
            = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                  & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                      ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                          >> 0x15U) ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                       >> 1U)) : ((2U 
                                                   == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                   ? 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 8U)))));
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP = 3U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
            if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP = 3U;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077) {
            if ((3U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP = 0U;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
                if ((3U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                  >> 0xbU)))) {
                    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP = 3U;
                }
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging = 0U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly__DBusCachedPlugin_rspCounter = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly__DBusCachedPlugin_rspCounter 
                = ((IData)(1U) + vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned 
            = (0U != ((((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size)) 
                        & (0U != (3U & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA))) 
                       << 1U) | ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size)) 
                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA)));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_2) {
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
            = ((0x3ffffcU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                             >> 0xaU)) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                                 >> 7U))));
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
            = (0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                         ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                            >> 5U) : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1) {
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0 
            = ((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                          >> 2U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
        if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
            if (vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data 
            = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF);
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address 
            = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address);
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size 
            = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size));
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_mstatus_MIE = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
            if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
                vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_mstatus_MIE = 0U;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077) {
            if ((3U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_mstatus_MIE 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_mstatus_MIE 
                    = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 3U));
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached 
            = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_dBus_cmd_ready = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2))) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_dBus_cmd_ready 
                = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready)));
            if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4) {
                vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_dBus_cmd_ready = 0U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate 
            = (((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                             >> 0xcU)) == (0xfffffU 
                                           & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                              >> 2U))) 
               & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 1U;
        }
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__22(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__22\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid 
            = (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
               & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                               >> 2U)) == (0xfffffU 
                                           & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                              >> 0xcU))));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid;
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_iBusWishbone_ADR = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239) {
            if (vlSymsp->TOP__sim.__PVT__ibus_ack) {
                vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_iBusWishbone_ADR 
                    = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
            }
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
             & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ack))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 1U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush) {
            vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = 0U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
            vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid 
                = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush)));
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__RegFilePlugin_regFile__v0) {
        vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__RegFilePlugin_regFile__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__RegFilePlugin_regFile__v0;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_minstret;
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_rspCounter;
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__23(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__23\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__DBusCachedPlugin_rspCounter;
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_dBus_cmd_ready;
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly___zz_iBusWishbone_ADR;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_to_execute_FORMAL_PC_NEXT;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH 
            = (0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))));
    }
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
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0xcU));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL;
    }
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
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__24(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__24\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL 
            = (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x15U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
        = (((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U])) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                                                    >> 0x1fU))))));
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
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x1dU));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_data_symbol3
            [vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload];
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_data_symbol2
            [vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload];
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_data_symbol1
            [vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload];
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_data_symbol0
            [vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload];
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC) 
              & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ack)));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
            = (0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (0xffffU 
                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
            = (0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (0xffffU 
                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL 
            = ((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
               * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773 
            = (0x305U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x1000U | (0xffffe000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x2000000U | (0xfc0fffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836 
            = (0x344U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772 
            = (0x304U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
        = (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit 
           & vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext);
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008 
            = (0xbc0U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen 
            = ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                   == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                 >> 2U)))) & (0U != 
                                              ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))));
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
    if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833 
            = (0x341U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask;
    }
    if ((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert 
            = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1) 
                ^ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs2) 
                   & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                         >> 0xdU)))) & (~ (((0U == vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2) 
                                            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED)) 
                                           & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xdU)))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr))) 
              & (IData)(vlSymsp->TOP__sim.__PVT__dbus_ack)));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size 
            = (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                     >> 0xcU));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l338 
        = (1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                    >> 7U)));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext 
        = vlSymsp->TOP__sim.__PVT__shared_dat_r;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval;
    }
    vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1))
                ? (0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)
                : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen);
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
            if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077) {
            if ((3U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE = 1U;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE 
                    = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 7U));
            }
        }
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__25(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__25\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4 
        = ((5U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size)) 
           | (7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR 
        = (0x3fffffffU & (((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                            ? ((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                  << 2U)) : (0xfffffffcU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                          >> 2U));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid) 
         & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_tags
            [vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload];
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate)));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags
            [(0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
                       >> 5U))];
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent = 0U;
        vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0U;
        vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_counter = 0U;
        vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_start = 1U;
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid = 0U;
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value = 0U;
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator = 1U;
        vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__loader_error = 0U;
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0U;
        }
        if (VL_UNLIKELY((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                          & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))) 
                         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
            VL_WRITEF("ERROR writeBack stuck by another plugin is not allowed\n");
        }
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent = 1U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l850) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter)));
            if ((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0xfU)))) {
                vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                    = (0x80U | (IData)(vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_counter));
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid = 1U;
        }
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_valueNext;
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1118) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator 
                = (1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_loader_waysAllocator));
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent = 0U;
        }
        vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_start 
            = (((((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone)) 
                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start))) 
                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid)) 
                  & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid))) 
                 & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                       & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE)))) 
                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid))) 
               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo)));
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__loader_error 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start) {
            vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 1U;
            vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_counter = 0U;
            if ((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0xfU)))) {
                vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                    = (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                >> 5U));
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid = 0U;
            vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__loader_error = 0U;
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg = 0U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)));
    vlSymsp->TOP__sim__VexRiscv.lastStageIsValid = vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid;
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit = 0U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush) {
            vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 = 0U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
            vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 
                = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
        = (0x1ffffffffULL & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
                             - (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2))));
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_data_symbol3[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_data_symbol2[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_data_symbol1[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_data_symbol0[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__26(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__26\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__CsrPlugin_mstatus_MIE;
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
           & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL)));
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__ways_0_tags[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_start;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__loader_error;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_waitDone;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter 
        = vlSymsp->TOP__sim__VexRiscv.__Vdly__dataCache_1__DOT__stageB_flusher_counter;
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
           | (0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY = 0U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x1cU));
    }
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
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_div_stage_0_outNumerator 
        = (((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1)) 
            << 1U) | (QData)((IData)((1U & (~ (IData)(
                                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                       >> 0x20U)))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL 
            = (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x1aU));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid) {
        if ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
        }
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
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 1U;
            }
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit;
    }
    vlSymsp->TOP__sim__VexRiscv.lastStagePc = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value 
        = ((IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)
            ? 0U : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x1fU));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr 
            = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid 
                = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
            = vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ADR 
        = ((0x3ffffff8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                           >> 2U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR));
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause 
        = vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code;
    if (vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege = 3U;
    }
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
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC 
            = (0xfffffffeU & (((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                              + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768 
            = (0x300U == (0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                     >> 0x1fU));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0xdU));
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__27(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__27\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_loader_waysAllocator 
        = (3U & (- (IData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l850 
        = (1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                    >> 7U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
              >> 7U));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1118 
        = (1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid;
        }
    }
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending) 
           & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
                 | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 1U;
    }
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
    vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
            & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                  | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1)));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
            ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
            : 0xfU);
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL 
            = (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x17U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF 
            = ((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU))) ? ((0xff000000U 
                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                               << 0x18U)) 
                                           | ((0xff0000U 
                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0xcU))) ? ((0xffff0000U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                    : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2));
    }
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
    vlSymsp->TOP__sim__VexRiscv.lastStageInstruction 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address 
        = (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_7) {
        vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2;
    }
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
}
