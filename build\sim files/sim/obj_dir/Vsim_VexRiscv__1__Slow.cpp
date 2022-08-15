// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__9(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__9\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0xfU;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                         >> 2U));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = ((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                          >> 2U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
            & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                  | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 7U : 5U);
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 0xfU : 0xdU);
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 6U : 4U);
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066 
        = ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling) 
             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError)) 
            | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException)) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address 
            = (0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                           >> 0xcU));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter));
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                        >> 5U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid 
            = (1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg)));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base 
               << 2U);
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077) {
        if ((3U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0x7fffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x1fU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xbfffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x1eU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xdfffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x1dU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xefffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x1cU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xf7ffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x1bU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfbffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x1aU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfdffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x19U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfeffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x18U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xff7fffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x17U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xffbfffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x16U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xffdfffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x15U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xffefffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x14U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfff7ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x13U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfffbffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x12U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfffdffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x11U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfffeffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0x10U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xffff7fffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0xfU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xffffbfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0xeU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xffffdfffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0xdU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xffffefffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0xcU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfffff7ffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0xbU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfffffbffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 0xaU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfffffdffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 9U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xfffffeffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated) 
              << 8U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = ((0xffffff00U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1) 
           | (0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0x7fffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x1fU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xbfffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x1eU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xdfffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x1dU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xefffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x1cU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xf7ffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x1bU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xfbffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x1aU));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xfdffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x19U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xfeffffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x18U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xff7fffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x17U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xffbfffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x16U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xffdfffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x15U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xffefffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x14U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xfff7ffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x13U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xfffbffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x12U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xfffdffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x11U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xfffeffffU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2) 
              << 0x10U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = ((0xffff0000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3) 
           | (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__10(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__10\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp10[3];
    WData/*95:0*/ __Vtemp11[3];
    WData/*95:0*/ __Vtemp12[3];
    WData/*95:0*/ __Vtemp13[3];
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask 
        = (0xfU & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_stage0_mask) 
                   << (3U & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less 
        = (1U & (((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5 
                                              >> 0x1fU)))
                  ? (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                     >> 0x1fU) : ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                                   ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5 
                                      >> 0x1fU) : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                   >> 0x1fU))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid 
                = (1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)));
        } else {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004) {
                if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) {
                    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))) {
                    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))) {
                    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt = 1U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess) {
            if ((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                        ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                        : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
            }
        } else {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004) {
                if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                           | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))) {
                    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
                }
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2 
            = ((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1
                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                 >> 0xcU))) ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3
                    : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted));
    }
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))) {
        __Vtemp10[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp10[1U] = ((0xfff00000U & ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                                >> 0x33U))))) 
                                         << 0x14U)) 
                         | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                    >> 0x20U)));
        __Vtemp10[2U] = (3U & ((- (IData)((1U & (IData)(
                                                        (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                         >> 0x33U))))) 
                               >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp11, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp12, __Vtemp11, 0x20U);
        VL_ADD_W(3, __Vtemp13, __Vtemp10, __Vtemp12);
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2 
            = ((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW)
                : __Vtemp13[1U]);
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1 
        = ((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
           & ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
              | ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
                 | ((0U == (7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                  >> 0xcU))) ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq)
                     : ((1U == (7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))) ? 
                        (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq))
                         : ((5U == (5U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))
                             ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less))
                             : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less)))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2 
        = ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
            ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                   & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                    ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                       | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                    : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                       ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))
            : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less)
                : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub));
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid))) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
           | (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
                     << 1U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed 
        = ((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                    << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext))) 
           | (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
                     << 2U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed 
        = ((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                    << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                               << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext)))) 
           | (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
                     << 3U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_2 = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_2 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1 = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data 
        = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_7) {
        vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x14U)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 
                = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2;
            }
        }
    }
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__11(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__11\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xfU)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0xfU)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 
                = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                 & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself))) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
            & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
               | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                  & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                     | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)))))) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3)));
    vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring = vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring;
    vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_7) {
        vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_1 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_1 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext 
        = (((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))
            ? 0U : (0x3fU & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value) 
                             + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload 
            = (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                        >> 5U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload 
            = (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                         >> 2U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
           & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED);
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
           & (~ ((0x17U == (0x5fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                 | ((0x6fU == (0x7fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                    | ((3U == (0x106fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                       | ((0x1073U == (0x107fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                          | ((0x2073U == (0x207fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                             | ((0x4063U == (0x407fU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                | ((0x2013U == (0x207fU 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                   | ((0x23U == (0x603fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                      | ((3U == (0x207fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         | ((3U == 
                                             (0x505fU 
                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                            | ((0x63U 
                                                == 
                                                (0x707bU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               | ((0xfU 
                                                   == 
                                                   (0x607fU 
                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                  | ((0x33U 
                                                      == 
                                                      (0xfc00007fU 
                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                     | ((0x500fU 
                                                         == 
                                                         (0x1f0707fU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        | ((0x5013U 
                                                            == 
                                                            (0xbc00707fU 
                                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                           | ((0x1013U 
                                                               == 
                                                               (0xfc00307fU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                              | ((0x5033U 
                                                                  == 
                                                                  (0xbe00707fU 
                                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                 | ((0x33U 
                                                                     == 
                                                                     (0xbe00707fU 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                    | ((0x10200073U 
                                                                        == 
                                                                        (0xdfffffffU 
                                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                       | ((0x10500073U 
                                                                           == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                          | (0x73U 
                                                                             == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
}

void Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__12(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_settle__TOP__sim__VexRiscv__12\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                  >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
         & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
          & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
         | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
             & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
            | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
               & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid) 
            << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when = (0U 
                                                   != 
                                                   (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
        = ((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload);
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) 
                   << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) 
                              << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) 
                                         << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid)))));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid) 
            << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) 
                       << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther) 
           | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck) 
               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
           & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
                 - (IData)(1U))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
           & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
                 - (IData)(1U))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen
            : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1);
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                 & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active)) 
                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt) 
            | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext) 
               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                 << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                            << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                       << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 
        = ((2U & ((0x7ffffffeU & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                                  >> 1U)) | (0x3ffffffeU 
                                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                                                >> 2U)))) 
           | (1U & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                     >> 1U) | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                               >> 3U))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid 
        = ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
        = (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
           + ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc) 
              << 2U));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
            = ((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                    ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                    : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                        : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
        = (0xfffffffeU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
        = (0xfffffffdU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc);
}

void Vsim_VexRiscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_ctor_var_reset\n"); );
    // Body
    __PVT__externalResetVector = VL_RAND_RESET_I(32);
    __PVT__timerInterrupt = VL_RAND_RESET_I(1);
    __PVT__softwareInterrupt = VL_RAND_RESET_I(1);
    __PVT__externalInterruptArray = VL_RAND_RESET_I(32);
    __PVT__iBusWishbone_CYC = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_STB = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_ACK = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_WE = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_ADR = VL_RAND_RESET_I(30);
    __PVT__iBusWishbone_DAT_MISO = VL_RAND_RESET_I(32);
    __PVT__iBusWishbone_DAT_MOSI = VL_RAND_RESET_I(32);
    __PVT__iBusWishbone_SEL = VL_RAND_RESET_I(4);
    __PVT__iBusWishbone_ERR = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_CTI = VL_RAND_RESET_I(3);
    __PVT__iBusWishbone_BTE = VL_RAND_RESET_I(2);
    __PVT__dBusWishbone_CYC = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_STB = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_ACK = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_WE = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_ADR = VL_RAND_RESET_I(30);
    __PVT__dBusWishbone_DAT_MISO = VL_RAND_RESET_I(32);
    __PVT__dBusWishbone_DAT_MOSI = VL_RAND_RESET_I(32);
    __PVT__dBusWishbone_SEL = VL_RAND_RESET_I(4);
    __PVT__dBusWishbone_ERR = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_CTI = VL_RAND_RESET_I(3);
    __PVT__dBusWishbone_BTE = VL_RAND_RESET_I(2);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__reset = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache_io_flush = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache_io_cpu_fill_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_execute_isValid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_isValid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_SW = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_SR = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_SO = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_SI = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_PW = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_PR = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_PO = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_PI = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_fence_FM = VL_RAND_RESET_I(4);
    __PVT__dataCache_1_io_cpu_flush_valid = VL_RAND_RESET_I(1);
    __PVT___zz_RegFilePlugin_regFile_port0 = VL_RAND_RESET_I(32);
    __PVT___zz_RegFilePlugin_regFile_port1 = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache_io_mem_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_execute_haltIt = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_haltIt = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1_io_cpu_writeBack_mmuException = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_unalignedAccess = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_accessError = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_writeBack_exclusiveOk = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_flush_ready = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_cpu_redo = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_payload_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_payload_address = VL_RAND_RESET_I(32);
    __PVT__dataCache_1_io_mem_cmd_payload_size = VL_RAND_RESET_I(3);
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 = VL_RAND_RESET_I(2);
    __PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 = VL_RAND_RESET_I(2);
    __PVT___zz_when = VL_RAND_RESET_I(1);
    __PVT___zz_memory_DivPlugin_div_stage_0_outNumerator = VL_RAND_RESET_Q(33);
    __PVT___zz_decode_RS2 = VL_RAND_RESET_I(32);
    __PVT__decode_RS2 = VL_RAND_RESET_I(32);
    __PVT__decode_RS1 = VL_RAND_RESET_I(32);
    __PVT___zz_decode_RS2_1 = VL_RAND_RESET_I(32);
    __PVT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__decode_INSTRUCTION_ANTICIPATED = VL_RAND_RESET_I(32);
    __PVT__decode_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT___zz_decode_RS2_2 = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_rsp_issueDetected_4 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_rsp_issueDetected_3 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_rsp_issueDetected_2 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_rsp_issueDetected_1 = VL_RAND_RESET_I(1);
    __PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    __PVT___zz_decode_to_execute_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    __PVT__decode_arbitration_haltByOther = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_flushNext = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_isStuckByOthers = VL_RAND_RESET_I(1);
    __PVT__decode_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_haltByOther = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_flushNext = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isStuck = VL_RAND_RESET_I(1);
    __PVT__execute_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_flushNext = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isStuck = VL_RAND_RESET_I(1);
    __PVT__memory_arbitration_isFlushed = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_haltItself = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_removeIt = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_flushIt = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_flushNext = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_isValid = VL_RAND_RESET_I(1);
    __PVT__writeBack_arbitration_isFiring = VL_RAND_RESET_I(1);
    lastStageInstruction = VL_RAND_RESET_I(32);
    lastStagePc = VL_RAND_RESET_I(32);
    lastStageIsValid = VL_RAND_RESET_I(1);
    lastStageIsFiring = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetcherHalt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_incomingInstruction = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_predictionJumpInterface_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_predictionJumpInterface_payload = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = VL_RAND_RESET_I(4);
    __PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation = VL_RAND_RESET_I(1);
    __PVT__dBus_rsp_payload_last = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_redoBranch_valid = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_exceptionBus_valid = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_exceptionBus_payload_code = VL_RAND_RESET_I(4);
    __PVT__decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__BranchPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    __PVT__BranchPlugin_branchExceptionPort_valid = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_csrMapping_readDataInit = VL_RAND_RESET_I(32);
    CsrPlugin_inWfi = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_jumpInterface_payload = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_selfException_valid = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_selfException_payload_code = VL_RAND_RESET_I(4);
    __PVT__IBusCachedPlugin_jump_pcLoad_valid = VL_RAND_RESET_I(1);
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload = VL_RAND_RESET_I(4);
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 = VL_RAND_RESET_I(4);
    __PVT__IBusCachedPlugin_fetchPc_output_valid = VL_RAND_RESET_I(1);
    IBusCachedPlugin_fetchPc_pcReg = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_fetchPc_correction = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_correctionReg = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_booted = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_inc = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_fetchPc_pc = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_fetchPc_flushed = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_redoFetch = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_flush = VL_RAND_RESET_I(1);
    __PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 = VL_RAND_RESET_I(1);
    __PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = VL_RAND_RESET_I(1);
    __PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_iBusRsp_readyForError = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = VL_RAND_RESET_I(1);
    __PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 = VL_RAND_RESET_I(19);
    __PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1 = VL_RAND_RESET_I(11);
    __PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 = VL_RAND_RESET_I(19);
    __PVT__IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_s1_tightlyCoupledHit = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_s2_tightlyCoupledHit = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_rsp_redoFetch = VL_RAND_RESET_I(1);
    __PVT__when_IBusCachedPlugin_l239 = VL_RAND_RESET_I(1);
    __PVT__when_IBusCachedPlugin_l244 = VL_RAND_RESET_I(1);
    __PVT__when_IBusCachedPlugin_l250 = VL_RAND_RESET_I(1);
    __PVT__when_IBusCachedPlugin_l256 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_ready = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_rValid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_rData_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_rData_uncached = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_rData_address = VL_RAND_RESET_I(32);
    __PVT__dataCache_1_io_mem_cmd_rData_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1_io_mem_cmd_rData_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1_io_mem_cmd_rData_size = VL_RAND_RESET_I(3);
    __PVT__dataCache_1_io_mem_cmd_rData_last = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached = VL_RAND_RESET_I(1);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address = VL_RAND_RESET_I(32);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size = VL_RAND_RESET_I(3);
    __PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last = VL_RAND_RESET_I(1);
    __PVT__DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    __PVT__when_DBusCachedPlugin_l446 = VL_RAND_RESET_I(1);
    __PVT__writeBack_DBusCachedPlugin_rspShifted = VL_RAND_RESET_I(32);
    __PVT___zz_writeBack_DBusCachedPlugin_rspFormated = VL_RAND_RESET_I(1);
    __PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1 = VL_RAND_RESET_I(32);
    __PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2 = VL_RAND_RESET_I(1);
    __PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3 = VL_RAND_RESET_I(32);
    __PVT___zz_decode_IS_RS2_SIGNED = VL_RAND_RESET_I(32);
    lastStageRegFileWrite_valid = VL_RAND_RESET_I(1);
    lastStageRegFileWrite_payload_address = VL_RAND_RESET_I(5);
    lastStageRegFileWrite_payload_data = VL_RAND_RESET_I(32);
    __PVT___zz_7 = VL_RAND_RESET_I(1);
    __PVT___zz_execute_SRC1 = VL_RAND_RESET_I(32);
    __PVT___zz_execute_SRC2_2 = VL_RAND_RESET_I(20);
    __PVT___zz_execute_SRC2_4 = VL_RAND_RESET_I(20);
    __PVT___zz_execute_SRC2_5 = VL_RAND_RESET_I(32);
    __PVT__execute_SrcPlugin_addSub = VL_RAND_RESET_I(32);
    __PVT__execute_SrcPlugin_less = VL_RAND_RESET_I(1);
    __PVT___zz_execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    __PVT__execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    __PVT___zz_decode_RS2_3 = VL_RAND_RESET_I(32);
    __PVT__HazardSimplePlugin_src0Hazard = VL_RAND_RESET_I(1);
    __PVT__HazardSimplePlugin_src1Hazard = VL_RAND_RESET_I(1);
    __PVT__HazardSimplePlugin_writeBackBuffer_valid = VL_RAND_RESET_I(1);
    __PVT__HazardSimplePlugin_writeBackBuffer_payload_address = VL_RAND_RESET_I(5);
    __PVT__HazardSimplePlugin_writeBackBuffer_payload_data = VL_RAND_RESET_I(32);
    __PVT__when_HazardSimplePlugin_l45 = VL_RAND_RESET_I(1);
    __PVT__when_HazardSimplePlugin_l48_1 = VL_RAND_RESET_I(1);
    __PVT__when_HazardSimplePlugin_l51_1 = VL_RAND_RESET_I(1);
    __PVT__when_HazardSimplePlugin_l45_1 = VL_RAND_RESET_I(1);
    __PVT__when_HazardSimplePlugin_l57_1 = VL_RAND_RESET_I(1);
    __PVT__when_HazardSimplePlugin_l48_2 = VL_RAND_RESET_I(1);
    __PVT__when_HazardSimplePlugin_l51_2 = VL_RAND_RESET_I(1);
    __PVT__when_HazardSimplePlugin_l45_2 = VL_RAND_RESET_I(1);
    __PVT__when_HazardSimplePlugin_l57_2 = VL_RAND_RESET_I(1);
    __PVT__execute_BranchPlugin_eq = VL_RAND_RESET_I(1);
    __PVT___zz_execute_BRANCH_COND_RESULT_1 = VL_RAND_RESET_I(1);
    __PVT__execute_BranchPlugin_branch_src2 = VL_RAND_RESET_I(32);
    __PVT___zz_execute_BranchPlugin_branch_src2_1 = VL_RAND_RESET_I(20);
    __PVT___zz_execute_BranchPlugin_branch_src2_3 = VL_RAND_RESET_I(11);
    __PVT___zz_execute_BranchPlugin_branch_src2_5 = VL_RAND_RESET_I(19);
    __PVT__CsrPlugin_mtvec_mode = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_mtvec_base = VL_RAND_RESET_I(30);
    __PVT__CsrPlugin_mepc = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mstatus_MPIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mstatus_MPP = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_mip_MEIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mip_MTIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mip_MSIP = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MEIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MTIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mie_MSIE = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mcause_interrupt = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_mcause_exceptionCode = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_mtval = VL_RAND_RESET_I(32);
    __PVT__CsrPlugin_mcycle = VL_RAND_RESET_Q(64);
    __PVT__CsrPlugin_minstret = VL_RAND_RESET_Q(64);
    __PVT___zz_when_CsrPlugin_l965 = VL_RAND_RESET_I(1);
    __PVT___zz_when_CsrPlugin_l965_1 = VL_RAND_RESET_I(1);
    __PVT___zz_when_CsrPlugin_l965_2 = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_interrupt_valid = VL_RAND_RESET_I(1);
    CsrPlugin_interrupt_code = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_interrupt_targetPrivilege = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_pipelineLiberator_pcValids_0 = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_pipelineLiberator_pcValids_1 = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_pipelineLiberator_pcValids_2 = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_pipelineLiberator_active = VL_RAND_RESET_I(1);
    __PVT__when_CsrPlugin_l998 = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_pipelineLiberator_done = VL_RAND_RESET_I(1);
    CsrPlugin_interruptJump = VL_RAND_RESET_I(1);
    CsrPlugin_hadException = VL_RAND_RESET_I(1);
    __PVT__CsrPlugin_targetPrivilege = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_trapCause = VL_RAND_RESET_I(4);
    __PVT__CsrPlugin_xtvec_mode = VL_RAND_RESET_I(2);
    __PVT__CsrPlugin_xtvec_base = VL_RAND_RESET_I(30);
    __PVT__when_CsrPlugin_l1032 = VL_RAND_RESET_I(1);
    __PVT__when_CsrPlugin_l1077 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_wfiWake = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_illegalAccess = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_illegalInstruction = VL_RAND_RESET_I(1);
    __PVT__when_CsrPlugin_l1157 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_writeInstruction = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_readInstruction = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_writeEnable = VL_RAND_RESET_I(1);
    __PVT___zz_CsrPlugin_csrMapping_writeDataSignal = VL_RAND_RESET_I(32);
    __PVT__execute_MulPlugin_aHigh = VL_RAND_RESET_I(17);
    __PVT__execute_MulPlugin_bHigh = VL_RAND_RESET_I(17);
    __PVT__memory_DivPlugin_rs1 = VL_RAND_RESET_Q(33);
    __PVT__memory_DivPlugin_rs2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, __PVT__memory_DivPlugin_accumulator);
    __PVT__memory_DivPlugin_div_needRevert = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_counter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_counter_willClear = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_counter_valueNext = VL_RAND_RESET_I(6);
    __PVT__memory_DivPlugin_div_counter_value = VL_RAND_RESET_I(6);
    __PVT__memory_DivPlugin_div_done = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_result = VL_RAND_RESET_I(32);
    __PVT__when_MulDivIterativePlugin_l128 = VL_RAND_RESET_I(1);
    __PVT__memory_DivPlugin_div_stage_0_remainderShifted = VL_RAND_RESET_Q(33);
    __PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator = VL_RAND_RESET_Q(33);
    __PVT___zz_memory_DivPlugin_div_result = VL_RAND_RESET_I(32);
    __PVT___zz_memory_DivPlugin_rs2 = VL_RAND_RESET_I(1);
    __PVT___zz_memory_DivPlugin_rs1 = VL_RAND_RESET_I(1);
    __PVT___zz_memory_DivPlugin_rs1_1 = VL_RAND_RESET_Q(33);
    __PVT__externalInterruptArray_regNext = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_1 = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_PC = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_PC = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_PC = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_INSTRUCTION = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_SRC1_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_SRC_USE_SUB_LESS = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_ALU_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_SRC2_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_MEMORY_WR = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_MEMORY_MANAGMENT = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_SRC_LESS_UNSIGNED = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_ALU_BITWISE_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_SHIFT_CTRL = VL_RAND_RESET_I(2);
    __PVT__execute_to_memory_SHIFT_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_BRANCH_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_IS_CSR = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_ENV_CTRL = VL_RAND_RESET_I(2);
    __PVT__execute_to_memory_ENV_CTRL = VL_RAND_RESET_I(2);
    __PVT__memory_to_writeBack_ENV_CTRL = VL_RAND_RESET_I(2);
    __PVT__decode_to_execute_IS_MUL = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_IS_MUL = VL_RAND_RESET_I(1);
    __PVT__memory_to_writeBack_IS_MUL = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_DIV = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_IS_DIV = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_RS1_SIGNED = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_IS_RS2_SIGNED = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_RS1 = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_RS2 = VL_RAND_RESET_I(32);
    __PVT__decode_to_execute_SRC2_FORCE_ZERO = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_CSR_WRITE_OPCODE = VL_RAND_RESET_I(1);
    __PVT__decode_to_execute_CSR_READ_OPCODE = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_MEMORY_STORE_DATA_RF = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    __PVT__memory_to_writeBack_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_SHIFT_RIGHT = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_BRANCH_DO = VL_RAND_RESET_I(1);
    __PVT__execute_to_memory_BRANCH_CALC = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_MUL_LL = VL_RAND_RESET_I(32);
    __PVT__execute_to_memory_MUL_LH = VL_RAND_RESET_Q(34);
    __PVT__execute_to_memory_MUL_HL = VL_RAND_RESET_Q(34);
    __PVT__execute_to_memory_MUL_HH = VL_RAND_RESET_Q(34);
    __PVT__memory_to_writeBack_MUL_HH = VL_RAND_RESET_Q(34);
    __PVT__memory_to_writeBack_MUL_LOW = VL_RAND_RESET_Q(52);
    __PVT__execute_CsrPlugin_csr_3264 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_768 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_836 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_772 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_773 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_833 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_834 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_835 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_3008 = VL_RAND_RESET_I(1);
    __PVT__execute_CsrPlugin_csr_4032 = VL_RAND_RESET_I(1);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_4 = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_5 = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_7 = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = VL_RAND_RESET_I(32);
    __PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = VL_RAND_RESET_I(32);
    __PVT___zz_iBusWishbone_ADR = VL_RAND_RESET_I(3);
    __PVT__when_InstructionCache_l239 = VL_RAND_RESET_I(1);
    __PVT___zz_iBus_rsp_valid = VL_RAND_RESET_I(1);
    __PVT__iBusWishbone_DAT_MISO_regNext = VL_RAND_RESET_I(32);
    __PVT___zz_dBus_cmd_ready = VL_RAND_RESET_I(3);
    __PVT___zz_dBus_cmd_ready_2 = VL_RAND_RESET_I(1);
    __PVT___zz_dBus_cmd_ready_4 = VL_RAND_RESET_I(1);
    __PVT___zz_dBus_rsp_valid = VL_RAND_RESET_I(1);
    __PVT__dBusWishbone_DAT_MISO_regNext = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(72, __PVT__decode_SHIFT_CTRL_string);
    VL_RAND_RESET_W(96, __PVT__decode_SRC1_CTRL_string);
    VL_RAND_RESET_W(72, __PVT__memory_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72, __PVT__execute_SHIFT_CTRL_string);
    VL_RAND_RESET_W(96, __PVT__execute_SRC1_CTRL_string);
    VL_RAND_RESET_W(96, __PVT__decode_to_execute_SRC1_CTRL_string);
    VL_RAND_RESET_W(72, __PVT__decode_to_execute_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72, __PVT__execute_to_memory_SHIFT_CTRL_string);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            RegFilePlugin_regFile[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1 = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 = VL_RAND_RESET_I(22);
    __PVT__IBusCachedPlugin_cache__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT___zz_2 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_address = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(8);
    __PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l338 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    __PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid = VL_RAND_RESET_I(1);
    __PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            __PVT__IBusCachedPlugin_cache__DOT__banks_0[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            __PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }}
    __PVT__dataCache_1__DOT___zz_ways_0_tags_port0 = VL_RAND_RESET_I(22);
    __PVT__dataCache_1__DOT___zz_loader_waysAllocator = VL_RAND_RESET_I(2);
    __PVT__dataCache_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsReadCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsReadCmd_payload = VL_RAND_RESET_I(7);
    __PVT__dataCache_1__DOT__tagsWriteCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = VL_RAND_RESET_I(7);
    __PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = VL_RAND_RESET_I(20);
    __PVT__dataCache_1__DOT__tagsWriteLastCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address = VL_RAND_RESET_I(7);
    __PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address = VL_RAND_RESET_I(20);
    __PVT__dataCache_1__DOT__dataReadCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__dataReadCmd_payload = VL_RAND_RESET_I(10);
    __PVT__dataCache_1__DOT__dataWriteCmd_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__dataWriteCmd_payload_way = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__dataWriteCmd_payload_address = VL_RAND_RESET_I(10);
    __PVT__dataCache_1__DOT__dataWriteCmd_payload_data = VL_RAND_RESET_I(32);
    __PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__when_DataCache_l664 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__memCmdSent = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT___zz_stage0_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1__DOT__stage0_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1__DOT__stageA_request_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageA_request_size = VL_RAND_RESET_I(2);
    __PVT__dataCache_1__DOT__stageA_request_totalyConsistent = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageA_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1__DOT__stageA_wayInvalidate = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_request_wr = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_request_size = VL_RAND_RESET_I(2);
    __PVT__dataCache_1__DOT__stageB_request_totalyConsistent = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRspFreeze = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__when_DataCache_l824 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_exception = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_refilling = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address = VL_RAND_RESET_I(20);
    __PVT__dataCache_1__DOT__stageB_dataReadRsp_0 = VL_RAND_RESET_I(32);
    __PVT__dataCache_1__DOT__stageB_wayInvalidate = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_dataColisions = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_unaligned = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_waysHits = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_mask = VL_RAND_RESET_I(4);
    __PVT__dataCache_1__DOT__stageB_loaderValid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_flusher_waitDone = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_flusher_counter = VL_RAND_RESET_I(8);
    __PVT__dataCache_1__DOT__when_DataCache_l850 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_flusher_start = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__stageB_cpuWriteToCache = VL_RAND_RESET_I(1);
    _ctor_var_reset_1();
}

void Vsim_VexRiscv::_ctor_var_reset_1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_ctor_var_reset_1\n"); );
    // Body
    __PVT__dataCache_1__DOT__stageB_loadStoreFault = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__when_DataCache_l1004 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__when_DataCache_l1066 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__loader_valid = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__loader_counter_willIncrement = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__loader_counter_valueNext = VL_RAND_RESET_I(3);
    __PVT__dataCache_1__DOT__loader_counter_value = VL_RAND_RESET_I(3);
    __PVT__dataCache_1__DOT__loader_counter_willOverflow = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__loader_waysAllocator = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__loader_error = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__loader_killReg = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__when_DataCache_l1090 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__when_DataCache_l1118 = VL_RAND_RESET_I(1);
    __PVT__dataCache_1__DOT__loader_valid_regNext = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            __PVT__dataCache_1__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            __PVT__dataCache_1__DOT__ways_0_data_symbol0[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            __PVT__dataCache_1__DOT__ways_0_data_symbol1[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            __PVT__dataCache_1__DOT__ways_0_data_symbol2[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            __PVT__dataCache_1__DOT__ways_0_data_symbol3[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read = VL_RAND_RESET_I(8);
    __PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 = VL_RAND_RESET_I(8);
    __PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 = VL_RAND_RESET_I(8);
    __PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 = VL_RAND_RESET_I(8);
    __Vtableidx3 = 0;
    VL_CONST_W_3X(72,__Vtable3___PVT__decode_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable3___PVT__decode_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable3___PVT__decode_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable3___PVT__decode_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx7 = 0;
    VL_CONST_W_3X(96,__Vtable7___PVT__decode_SRC1_CTRL_string[0],0x52532020,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable7___PVT__decode_SRC1_CTRL_string[1],0x494d5520,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable7___PVT__decode_SRC1_CTRL_string[2],0x50435f49,0x4e435245,0x4d454e54);
    VL_CONST_W_3X(96,__Vtable7___PVT__decode_SRC1_CTRL_string[3],0x55525331,0x20202020,0x20202020);
    __Vtableidx11 = 0;
    VL_CONST_W_3X(72,__Vtable11___PVT__memory_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable11___PVT__memory_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable11___PVT__memory_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable11___PVT__memory_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx13 = 0;
    VL_CONST_W_3X(72,__Vtable13___PVT__execute_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable13___PVT__execute_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable13___PVT__execute_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable13___PVT__execute_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx15 = 0;
    VL_CONST_W_3X(96,__Vtable15___PVT__execute_SRC1_CTRL_string[0],0x52532020,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable15___PVT__execute_SRC1_CTRL_string[1],0x494d5520,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable15___PVT__execute_SRC1_CTRL_string[2],0x50435f49,0x4e435245,0x4d454e54);
    VL_CONST_W_3X(96,__Vtable15___PVT__execute_SRC1_CTRL_string[3],0x55525331,0x20202020,0x20202020);
    __Vtableidx21 = 0;
    VL_CONST_W_3X(96,__Vtable21___PVT__decode_to_execute_SRC1_CTRL_string[0],0x52532020,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable21___PVT__decode_to_execute_SRC1_CTRL_string[1],0x494d5520,0x20202020,0x20202020);
    VL_CONST_W_3X(96,__Vtable21___PVT__decode_to_execute_SRC1_CTRL_string[2],0x50435f49,0x4e435245,0x4d454e54);
    VL_CONST_W_3X(96,__Vtable21___PVT__decode_to_execute_SRC1_CTRL_string[3],0x55525331,0x20202020,0x20202020);
    __Vtableidx22 = 0;
    VL_CONST_W_3X(72,__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable22___PVT__decode_to_execute_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vtableidx23 = 0;
    VL_CONST_W_3X(72,__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[0],0x00000044,0x49534142,0x4c455f31);
    VL_CONST_W_3X(72,__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[1],0x00000053,0x4c4c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[2],0x00000053,0x524c5f31,0x20202020);
    VL_CONST_W_3X(72,__Vtable23___PVT__execute_to_memory_SHIFT_CTRL_string[3],0x00000053,0x52415f31,0x20202020);
    __Vdlyvdim0__RegFilePlugin_regFile__v0 = 0;
    __Vdlyvval__RegFilePlugin_regFile__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__RegFilePlugin_regFile__v0 = 0;
    __Vdly___zz_dBus_cmd_ready = VL_RAND_RESET_I(3);
    __Vdly___zz_iBusWishbone_ADR = VL_RAND_RESET_I(3);
    __Vdly__IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    __Vdly__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    __Vdly__DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    __Vdly__CsrPlugin_minstret = VL_RAND_RESET_Q(64);
    __Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    __Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    __Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    __Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = VL_RAND_RESET_I(22);
    __Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(8);
    __Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0 = 0;
    __Vdlyvval__dataCache_1__DOT__ways_0_tags__v0 = VL_RAND_RESET_I(22);
    __Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 0;
    __Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    __Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    __Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    __Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    __Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    __Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    __Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
    __Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
    __Vdly__dataCache_1__DOT__stageB_flusher_waitDone = VL_RAND_RESET_I(1);
    __Vdly__dataCache_1__DOT__stageB_flusher_counter = VL_RAND_RESET_I(8);
    __Vdly__dataCache_1__DOT__stageB_flusher_start = VL_RAND_RESET_I(1);
    __Vdly__dataCache_1__DOT__loader_error = VL_RAND_RESET_I(1);
}
