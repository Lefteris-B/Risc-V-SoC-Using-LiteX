// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__28(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__28\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext
            : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0);
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError 
        = ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)) 
           & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits) 
               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error)) 
              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
                 & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging)))));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE 
            = (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 4U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_valueNext 
        = (7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                 + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow 
        = ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
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
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2 = 1U;
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
        }
    }
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
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__29(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__29\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid))) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2)));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 1U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid = 0U;
    } else {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid = 1U;
        }
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid = 0U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1 
        = ((0xffffffffULL & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1) 
           | ((QData)((IData)(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED) 
                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                  >> 0x1fU)))) << 0x20U));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1 
        = ((0x100000000ULL & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1_1) 
           | (IData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs1 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV) 
            & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
               >> 0x1fU)) & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
            = vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_div_result 
        = ((0x2000U & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION)
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U]
            : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen;
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
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated 
        = (1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
                  >> 7U) & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                               >> 0xeU))));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_2 
        = (1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
                  >> 0xfU) & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                 >> 0xeU))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt = 1U;
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
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
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__30(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__30\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
           & (2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)));
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
           | (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
                     << 1U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed 
        = ((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                    << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext))) 
           | (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
                     << 2U)));
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
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__31(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__31\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
             & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))) {
            vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_memory_DivPlugin_rs2 
        = ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
            >> 0x1fU) & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
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
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__32(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__32\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp23[3];
    WData/*95:0*/ __Vtemp24[3];
    WData/*95:0*/ __Vtemp25[3];
    WData/*95:0*/ __Vtemp26[3];
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
        = ((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
            : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
                ? 4U : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL))
                         ? (0xfffff000U & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
                         : (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xfU)))));
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
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1;
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
        __Vtemp23[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp23[1U] = ((0xfff00000U & ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                                >> 0x33U))))) 
                                         << 0x14U)) 
                         | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                    >> 0x20U)));
        __Vtemp23[2U] = (3U & ((- (IData)((1U & (IData)(
                                                        (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                         >> 0x33U))))) 
                               >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp24, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp25, __Vtemp24, 0x20U);
        VL_ADD_W(3, __Vtemp26, __Vtemp23, __Vtemp25);
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2 
            = ((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW)
                : __Vtemp26[1U]);
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
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__33(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__33\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext = 1U;
    }
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
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION)
                ? (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit 
                   & (~ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1))
                : (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit 
                   | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1))
            : vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1);
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
    vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data 
        = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_7) {
        vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data = 0U;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__34(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__34\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed 
        = ((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                    << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                               << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext)))) 
           | (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
                     << 3U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted 
        = (1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)));
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
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__banks_0
            [(0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
                        >> 2U))];
    }
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
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__35(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__35\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)));
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
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__banks_0[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0;
    }
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
}
