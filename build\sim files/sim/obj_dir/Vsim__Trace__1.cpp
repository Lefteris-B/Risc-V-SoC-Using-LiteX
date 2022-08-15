// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim::traceChgSub8(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1665);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
            tracep->chgBit(oldp+1,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                     & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                        == (0x3ffU 
                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                               >> 2U)))) 
                                    & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
            tracep->chgCData(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
            tracep->chgBit(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
            tracep->chgCData(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
            tracep->chgBit(oldp+5,((((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                  >> 0xcU)) 
                                     == (0xfffffU & 
                                         (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                          >> 2U))) 
                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
            tracep->chgBit(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
            tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                                    | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                        & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                           == (0x3ffU 
                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                  >> 2U)))) 
                                       & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
            tracep->chgCData(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824));
            tracep->chgIData(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
            tracep->chgIData(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
            tracep->chgIData(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
            tracep->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
            tracep->chgCData(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
            tracep->chgBit(oldp+34,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                              >> 7U)))));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
            tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
            tracep->chgBit(oldp+38,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                           | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
            tracep->chgBit(oldp+40,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                            ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                            : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004));
            tracep->chgBit(oldp+42,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                           | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
            tracep->chgBit(oldp+43,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                     & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                        & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
            tracep->chgBit(oldp+44,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066));
            tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
            tracep->chgCData(oldp+48,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                             + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
            tracep->chgCData(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
            tracep->chgBit(oldp+50,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090));
            tracep->chgBit(oldp+56,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
            tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
            tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
        }
        tracep->chgBit(oldp+60,(vlTOPp->sim_trace));
        tracep->chgBit(oldp+61,(vlTOPp->sys_clk));
        tracep->chgBit(oldp+62,(vlTOPp->serial_source_valid));
        tracep->chgBit(oldp+63,(vlTOPp->serial_source_ready));
        tracep->chgCData(oldp+64,(vlTOPp->serial_source_data),8);
        tracep->chgBit(oldp+65,(vlTOPp->serial_sink_valid));
        tracep->chgBit(oldp+66,(vlTOPp->serial_sink_ready));
        tracep->chgCData(oldp+67,(vlTOPp->serial_sink_data),8);
        tracep->chgIData(oldp+68,(vlTOPp->gpio_oe),32);
        tracep->chgIData(oldp+69,(vlTOPp->gpio_o),32);
        tracep->chgIData(oldp+70,(vlTOPp->gpio_i),32);
        tracep->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
        tracep->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read));
        tracep->chgSData(oldp+73,(vlTOPp->serial_sink_data),10);
        tracep->chgBit(oldp+74,(((IData)(vlTOPp->serial_sink_valid) 
                                 & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))));
        tracep->chgIData(oldp+75,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
        tracep->chgIData(oldp+76,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
        tracep->chgIData(oldp+77,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
        tracep->chgBit(oldp+78,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
        tracep->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
        tracep->chgBit(oldp+80,((1U & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                       >> 0x1fU))));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
        tracep->chgIData(oldp+84,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
        tracep->chgCData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
        tracep->chgBit(oldp+86,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
        tracep->chgIData(oldp+88,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
        tracep->chgIData(oldp+89,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
        tracep->chgIData(oldp+90,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
        tracep->chgIData(oldp+91,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
        tracep->chgIData(oldp+92,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
        tracep->chgIData(oldp+93,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
        tracep->chgIData(oldp+94,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
        tracep->chgIData(oldp+95,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
        tracep->chgIData(oldp+96,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
        tracep->chgIData(oldp+97,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
        tracep->chgIData(oldp+98,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
        tracep->chgIData(oldp+99,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
        tracep->chgIData(oldp+100,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
        tracep->chgIData(oldp+101,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
        tracep->chgIData(oldp+102,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
        tracep->chgIData(oldp+103,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
        tracep->chgIData(oldp+104,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
        tracep->chgIData(oldp+105,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
        tracep->chgIData(oldp+106,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
        tracep->chgIData(oldp+107,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
        tracep->chgIData(oldp+108,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
        tracep->chgIData(oldp+109,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
        tracep->chgIData(oldp+110,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
        tracep->chgIData(oldp+111,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
        tracep->chgIData(oldp+112,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
        tracep->chgIData(oldp+113,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
        tracep->chgIData(oldp+114,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
        tracep->chgIData(oldp+115,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
        tracep->chgIData(oldp+116,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
        tracep->chgIData(oldp+117,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
        tracep->chgIData(oldp+118,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
        tracep->chgIData(oldp+119,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
        tracep->chgBit(oldp+120,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                  & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                  >> 2U)) 
                                     == (0xfffffU & 
                                         (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                          >> 0xcU))))));
    }
}

void Vsim::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
