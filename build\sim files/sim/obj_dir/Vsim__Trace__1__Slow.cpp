// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim::traceFullSub3(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+713,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface5_bank_bus_dat_r),32);
        tracep->fullBit(oldp+714,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_re));
        tracep->fullBit(oldp+715,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_we));
        tracep->fullBit(oldp+716,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
        tracep->fullIData(oldp+717,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface6_bank_bus_dat_r),32);
        tracep->fullBit(oldp+718,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_re));
        tracep->fullBit(oldp+719,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_we));
        tracep->fullBit(oldp+720,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_re));
        tracep->fullBit(oldp+721,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_we));
        tracep->fullBit(oldp+722,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_re));
        tracep->fullBit(oldp+723,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_we));
        tracep->fullBit(oldp+724,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_re));
        tracep->fullBit(oldp+725,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_we));
        tracep->fullBit(oldp+726,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_re));
        tracep->fullBit(oldp+727,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_re));
        tracep->fullBit(oldp+728,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_re));
        tracep->fullBit(oldp+729,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_re));
        tracep->fullBit(oldp+730,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_we));
        tracep->fullBit(oldp+731,((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
        tracep->fullIData(oldp+732,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface7_bank_bus_dat_r),32);
        tracep->fullBit(oldp+733,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_re));
        tracep->fullBit(oldp+734,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_re));
        tracep->fullBit(oldp+735,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_re));
        tracep->fullBit(oldp+736,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_re));
        tracep->fullBit(oldp+737,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_re));
        tracep->fullBit(oldp+738,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_we));
        tracep->fullBit(oldp+739,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_re));
        tracep->fullBit(oldp+740,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_re));
        tracep->fullBit(oldp+741,((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
        tracep->fullCData(oldp+742,(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state),2);
        tracep->fullCData(oldp+743,(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_next_state),2);
        tracep->fullBit(oldp+744,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state));
        tracep->fullBit(oldp+745,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_next_state));
        tracep->fullBit(oldp+746,(vlSymsp->TOP__sim.__PVT__multiregimpl0_regs0));
        tracep->fullBit(oldp+747,(vlSymsp->TOP__sim.__PVT__multiregimpl0_regs1));
        tracep->fullBit(oldp+748,(vlSymsp->TOP__sim.__PVT__multiregimpl1_regs0));
        tracep->fullBit(oldp+749,(vlSymsp->TOP__sim.__PVT__multiregimpl1_regs1));
        tracep->fullBit(oldp+750,(vlSymsp->TOP__sim.__PVT__multiregimpl2_regs0));
        tracep->fullBit(oldp+751,(vlSymsp->TOP__sim.__PVT__multiregimpl2_regs1));
        tracep->fullBit(oldp+752,(vlSymsp->TOP__sim.__PVT__multiregimpl3_regs0));
        tracep->fullBit(oldp+753,(vlSymsp->TOP__sim.__PVT__multiregimpl3_regs1));
        tracep->fullBit(oldp+754,(vlSymsp->TOP__sim.__PVT__multiregimpl4_regs0));
        tracep->fullBit(oldp+755,(vlSymsp->TOP__sim.__PVT__multiregimpl4_regs1));
        tracep->fullBit(oldp+756,(vlSymsp->TOP__sim.__PVT__multiregimpl5_regs0));
        tracep->fullBit(oldp+757,(vlSymsp->TOP__sim.__PVT__multiregimpl5_regs1));
        tracep->fullBit(oldp+758,(vlSymsp->TOP__sim.__PVT__multiregimpl6_regs0));
        tracep->fullBit(oldp+759,(vlSymsp->TOP__sim.__PVT__multiregimpl6_regs1));
        tracep->fullBit(oldp+760,(vlSymsp->TOP__sim.__PVT__multiregimpl7_regs0));
        tracep->fullBit(oldp+761,(vlSymsp->TOP__sim.__PVT__multiregimpl7_regs1));
        tracep->fullBit(oldp+762,(vlSymsp->TOP__sim.__PVT__multiregimpl8_regs0));
        tracep->fullBit(oldp+763,(vlSymsp->TOP__sim.__PVT__multiregimpl8_regs1));
        tracep->fullBit(oldp+764,(vlSymsp->TOP__sim.__PVT__multiregimpl9_regs0));
        tracep->fullBit(oldp+765,(vlSymsp->TOP__sim.__PVT__multiregimpl9_regs1));
        tracep->fullBit(oldp+766,(vlSymsp->TOP__sim.__PVT__multiregimpl10_regs0));
        tracep->fullBit(oldp+767,(vlSymsp->TOP__sim.__PVT__multiregimpl10_regs1));
        tracep->fullBit(oldp+768,(vlSymsp->TOP__sim.__PVT__multiregimpl11_regs0));
        tracep->fullBit(oldp+769,(vlSymsp->TOP__sim.__PVT__multiregimpl11_regs1));
        tracep->fullBit(oldp+770,(vlSymsp->TOP__sim.__PVT__multiregimpl12_regs0));
        tracep->fullBit(oldp+771,(vlSymsp->TOP__sim.__PVT__multiregimpl12_regs1));
        tracep->fullBit(oldp+772,(vlSymsp->TOP__sim.__PVT__multiregimpl13_regs0));
        tracep->fullBit(oldp+773,(vlSymsp->TOP__sim.__PVT__multiregimpl13_regs1));
        tracep->fullBit(oldp+774,(vlSymsp->TOP__sim.__PVT__multiregimpl14_regs0));
        tracep->fullBit(oldp+775,(vlSymsp->TOP__sim.__PVT__multiregimpl14_regs1));
        tracep->fullBit(oldp+776,(vlSymsp->TOP__sim.__PVT__multiregimpl15_regs0));
        tracep->fullBit(oldp+777,(vlSymsp->TOP__sim.__PVT__multiregimpl15_regs1));
        tracep->fullBit(oldp+778,(vlSymsp->TOP__sim.__PVT__multiregimpl16_regs0));
        tracep->fullBit(oldp+779,(vlSymsp->TOP__sim.__PVT__multiregimpl16_regs1));
        tracep->fullBit(oldp+780,(vlSymsp->TOP__sim.__PVT__multiregimpl17_regs0));
        tracep->fullBit(oldp+781,(vlSymsp->TOP__sim.__PVT__multiregimpl17_regs1));
        tracep->fullBit(oldp+782,(vlSymsp->TOP__sim.__PVT__multiregimpl18_regs0));
        tracep->fullBit(oldp+783,(vlSymsp->TOP__sim.__PVT__multiregimpl18_regs1));
        tracep->fullBit(oldp+784,(vlSymsp->TOP__sim.__PVT__multiregimpl19_regs0));
        tracep->fullBit(oldp+785,(vlSymsp->TOP__sim.__PVT__multiregimpl19_regs1));
        tracep->fullBit(oldp+786,(vlSymsp->TOP__sim.__PVT__multiregimpl20_regs0));
        tracep->fullBit(oldp+787,(vlSymsp->TOP__sim.__PVT__multiregimpl20_regs1));
        tracep->fullBit(oldp+788,(vlSymsp->TOP__sim.__PVT__multiregimpl21_regs0));
        tracep->fullBit(oldp+789,(vlSymsp->TOP__sim.__PVT__multiregimpl21_regs1));
        tracep->fullBit(oldp+790,(vlSymsp->TOP__sim.__PVT__multiregimpl22_regs0));
        tracep->fullBit(oldp+791,(vlSymsp->TOP__sim.__PVT__multiregimpl22_regs1));
        tracep->fullBit(oldp+792,(vlSymsp->TOP__sim.__PVT__multiregimpl23_regs0));
        tracep->fullBit(oldp+793,(vlSymsp->TOP__sim.__PVT__multiregimpl23_regs1));
        tracep->fullBit(oldp+794,(vlSymsp->TOP__sim.__PVT__multiregimpl24_regs0));
        tracep->fullBit(oldp+795,(vlSymsp->TOP__sim.__PVT__multiregimpl24_regs1));
        tracep->fullBit(oldp+796,(vlSymsp->TOP__sim.__PVT__multiregimpl25_regs0));
        tracep->fullBit(oldp+797,(vlSymsp->TOP__sim.__PVT__multiregimpl25_regs1));
        tracep->fullBit(oldp+798,(vlSymsp->TOP__sim.__PVT__multiregimpl26_regs0));
        tracep->fullBit(oldp+799,(vlSymsp->TOP__sim.__PVT__multiregimpl26_regs1));
        tracep->fullBit(oldp+800,(vlSymsp->TOP__sim.__PVT__multiregimpl27_regs0));
        tracep->fullBit(oldp+801,(vlSymsp->TOP__sim.__PVT__multiregimpl27_regs1));
        tracep->fullBit(oldp+802,(vlSymsp->TOP__sim.__PVT__multiregimpl28_regs0));
        tracep->fullBit(oldp+803,(vlSymsp->TOP__sim.__PVT__multiregimpl28_regs1));
        tracep->fullBit(oldp+804,(vlSymsp->TOP__sim.__PVT__multiregimpl29_regs0));
        tracep->fullBit(oldp+805,(vlSymsp->TOP__sim.__PVT__multiregimpl29_regs1));
        tracep->fullBit(oldp+806,(vlSymsp->TOP__sim.__PVT__multiregimpl30_regs0));
        tracep->fullBit(oldp+807,(vlSymsp->TOP__sim.__PVT__multiregimpl30_regs1));
        tracep->fullBit(oldp+808,(vlSymsp->TOP__sim.__PVT__multiregimpl31_regs0));
        tracep->fullBit(oldp+809,(vlSymsp->TOP__sim.__PVT__multiregimpl31_regs1));
        tracep->fullBit(oldp+810,(vlSymsp->TOP__sim.__PVT__multiregimpl32_regs0));
        tracep->fullBit(oldp+811,(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs0));
        tracep->fullBit(oldp+812,(vlSymsp->TOP__sim.__PVT__multiregimpl34_regs0));
        tracep->fullCData(oldp+813,(vlSymsp->TOP__sim.__PVT__multiregimpl35_regs0),5);
        tracep->fullCData(oldp+814,(vlSymsp->TOP__sim.__PVT__multiregimpl36_regs0),5);
        tracep->fullSData(oldp+815,(vlSymsp->TOP__sim.__PVT__multiregimpl37_regs0),16);
        tracep->fullBit(oldp+816,(vlSymsp->TOP__sim.__PVT__multiregimpl38_regs0));
        tracep->fullSData(oldp+817,(vlSymsp->TOP__sim.__PVT__multiregimpl39_regs0),10);
        tracep->fullSData(oldp+818,(vlSymsp->TOP__sim.__PVT__multiregimpl40_regs0),10);
        tracep->fullBit(oldp+819,(vlSymsp->TOP__sim.__PVT__multiregimpl41_regs0));
        tracep->fullSData(oldp+820,(vlSymsp->TOP__sim.__PVT__multiregimpl42_regs0),10);
        tracep->fullCData(oldp+821,(vlSymsp->TOP__sim.__PVT__multiregimpl43_regs0),3);
        tracep->fullCData(oldp+822,(vlSymsp->TOP__sim.__PVT__multiregimpl44_regs0),3);
        tracep->fullSData(oldp+823,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
        tracep->fullSData(oldp+824,(vlSymsp->TOP__sim.__PVT__main_ram_adr0),14);
        tracep->fullCData(oldp+825,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
        tracep->fullSData(oldp+826,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
        tracep->fullSData(oldp+827,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
        tracep->fullSData(oldp+828,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
        tracep->fullSData(oldp+829,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
        tracep->fullSData(oldp+830,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
        tracep->fullSData(oldp+831,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
        tracep->fullSData(oldp+832,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
        tracep->fullSData(oldp+833,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
        tracep->fullSData(oldp+834,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
        tracep->fullSData(oldp+835,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
        tracep->fullSData(oldp+836,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
        tracep->fullSData(oldp+837,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
        tracep->fullSData(oldp+838,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
        tracep->fullSData(oldp+839,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
        tracep->fullSData(oldp+840,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
        tracep->fullSData(oldp+841,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
        tracep->fullSData(oldp+842,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
        tracep->fullSData(oldp+843,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
        tracep->fullSData(oldp+844,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
        tracep->fullSData(oldp+845,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
        tracep->fullSData(oldp+846,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
        tracep->fullSData(oldp+847,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
        tracep->fullSData(oldp+848,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
        tracep->fullSData(oldp+849,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
        tracep->fullSData(oldp+850,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
        tracep->fullSData(oldp+851,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
        tracep->fullSData(oldp+852,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
        tracep->fullSData(oldp+853,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
        tracep->fullSData(oldp+854,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
        tracep->fullSData(oldp+855,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
        tracep->fullSData(oldp+856,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
        tracep->fullSData(oldp+857,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
        tracep->fullWData(oldp+858,(vlSymsp->TOP__sim.__PVT__storage_2[0]),410);
        tracep->fullWData(oldp+871,(vlSymsp->TOP__sim.__PVT__storage_2[1]),410);
        tracep->fullWData(oldp+884,(vlSymsp->TOP__sim.__PVT__storage_2[2]),410);
        tracep->fullWData(oldp+897,(vlSymsp->TOP__sim.__PVT__storage_2[3]),410);
        tracep->fullWData(oldp+910,(vlSymsp->TOP__sim.__PVT__storage_2[4]),410);
        tracep->fullWData(oldp+923,(vlSymsp->TOP__sim.__PVT__storage_2[5]),410);
        tracep->fullWData(oldp+936,(vlSymsp->TOP__sim.__PVT__storage_2[6]),410);
        tracep->fullWData(oldp+949,(vlSymsp->TOP__sim.__PVT__storage_2[7]),410);
        tracep->fullWData(oldp+962,(vlSymsp->TOP__sim.__PVT__storage_2[8]),410);
        tracep->fullWData(oldp+975,(vlSymsp->TOP__sim.__PVT__storage_2[9]),410);
        tracep->fullWData(oldp+988,(vlSymsp->TOP__sim.__PVT__storage_2[10]),410);
        tracep->fullWData(oldp+1001,(vlSymsp->TOP__sim.__PVT__storage_2[11]),410);
        tracep->fullWData(oldp+1014,(vlSymsp->TOP__sim.__PVT__storage_2[12]),410);
        tracep->fullWData(oldp+1027,(vlSymsp->TOP__sim.__PVT__storage_2[13]),410);
        tracep->fullWData(oldp+1040,(vlSymsp->TOP__sim.__PVT__storage_2[14]),410);
        tracep->fullWData(oldp+1053,(vlSymsp->TOP__sim.__PVT__storage_2[15]),410);
        tracep->fullWData(oldp+1066,(vlSymsp->TOP__sim.__PVT__storage_4[0]),206);
        tracep->fullWData(oldp+1073,(vlSymsp->TOP__sim.__PVT__storage_4[1]),206);
        tracep->fullWData(oldp+1080,(vlSymsp->TOP__sim.__PVT__storage_4[2]),206);
        tracep->fullWData(oldp+1087,(vlSymsp->TOP__sim.__PVT__storage_4[3]),206);
        tracep->fullBit(oldp+1094,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
        tracep->fullBit(oldp+1095,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
        tracep->fullBit(oldp+1096,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
        tracep->fullBit(oldp+1097,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
        tracep->fullBit(oldp+1098,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
        tracep->fullBit(oldp+1099,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
        tracep->fullBit(oldp+1100,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
        tracep->fullBit(oldp+1101,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
        tracep->fullIData(oldp+1102,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
        tracep->fullBit(oldp+1103,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE))));
        tracep->fullIData(oldp+1104,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
        tracep->fullBit(oldp+1105,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1106,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
        tracep->fullIData(oldp+1107,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
        tracep->fullIData(oldp+1108,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
        tracep->fullBit(oldp+1109,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
        tracep->fullBit(oldp+1110,((0U != (0x1fU & 
                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xfU)))));
        tracep->fullCData(oldp+1111,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                               >> 5U))),7);
        tracep->fullBit(oldp+1112,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        tracep->fullBit(oldp+1113,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
        tracep->fullIData(oldp+1114,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
        tracep->fullBit(oldp+1115,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                          | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                                | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))))));
        tracep->fullBit(oldp+1116,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
        tracep->fullBit(oldp+1117,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                       | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))));
        tracep->fullIData(oldp+1118,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
        tracep->fullBit(oldp+1119,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
        tracep->fullIData(oldp+1120,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
        tracep->fullBit(oldp+1121,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
        tracep->fullIData(oldp+1122,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
        tracep->fullBit(oldp+1123,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
        tracep->fullBit(oldp+1124,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
        tracep->fullBit(oldp+1125,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
        tracep->fullBit(oldp+1126,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
        tracep->fullIData(oldp+1127,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
        tracep->fullBit(oldp+1128,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
        tracep->fullBit(oldp+1129,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
        tracep->fullBit(oldp+1130,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
        tracep->fullBit(oldp+1131,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
        tracep->fullBit(oldp+1132,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
        tracep->fullBit(oldp+1133,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
        tracep->fullBit(oldp+1134,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
        tracep->fullBit(oldp+1135,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
        tracep->fullBit(oldp+1136,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
        tracep->fullIData(oldp+1137,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
        tracep->fullCData(oldp+1138,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
        tracep->fullCData(oldp+1139,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
        tracep->fullQData(oldp+1140,((0xfffffffffffffULL 
                                      & (((((QData)((IData)(
                                                            (0x7ffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                                                                >> 0x20U)))))))) 
                                            << 0x21U) 
                                           | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL))) 
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
                                                  << 0x10U)))))),52);
        tracep->fullQData(oldp+1142,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
        tracep->fullQData(oldp+1144,((0x3ffffffffULL 
                                      & VL_MULS_QQQ(34,34,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        tracep->fullQData(oldp+1146,((0x3ffffffffULL 
                                      & VL_MULS_QQQ(34,34,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, 
                                                                     (0xffffU 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
        tracep->fullQData(oldp+1148,((0x3ffffffffULL 
                                      & VL_MULS_QQQ(34,34,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, 
                                                                     (0xffffU 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                    (0x3ffffffffULL 
                                                     & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        tracep->fullIData(oldp+1150,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                                      * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        tracep->fullIData(oldp+1151,((0xfffffffeU & 
                                      (((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                         ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                         : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                       + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
        tracep->fullBit(oldp+1152,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                                     != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                                    | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                       & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                           ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x15U) 
                                              ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                 >> 1U))
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                               ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0x15U)
                                               : (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 8U)))))));
    }
}

void Vsim::traceFullSub4(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1153,((IData)((0x1ffffffffULL 
                                              & VL_SHIFTRS_QQI(33,33,5, 
                                                               (((QData)((IData)(
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                                >> 0x1fU)))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                               (0x1fU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5))))),32);
        tracep->fullIData(oldp+1154,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
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
                                           : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
        tracep->fullIData(oldp+1155,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
        tracep->fullIData(oldp+1156,(((0U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU)))
                                       ? ((0xff000000U 
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
                                       : ((1U == (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 0xcU)))
                                           ? ((0xffff0000U 
                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                  << 0x10U)) 
                                              | (0xffffU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                           : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        tracep->fullBit(oldp+1157,((0x20U != (0x7fU 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 7U)))));
        tracep->fullBit(oldp+1158,((1U & (~ (((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0xdU))) 
                                              & (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                     >> 0xfU)))) 
                                             | ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                     >> 0xdU))) 
                                                & (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                       >> 0xfU)))))))));
        tracep->fullBit(oldp+1159,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
        tracep->fullBit(oldp+1160,((1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x14U) 
                                          & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 3U))))));
        tracep->fullBit(oldp+1161,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1162,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+1163,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+1164,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
        tracep->fullBit(oldp+1165,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
        tracep->fullBit(oldp+1166,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x1cU))));
        tracep->fullCData(oldp+1167,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x1aU))),2);
        tracep->fullBit(oldp+1168,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x19U))));
        tracep->fullCData(oldp+1169,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x15U))),2);
        tracep->fullCData(oldp+1170,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x12U))),2);
        tracep->fullBit(oldp+1171,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1172,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1173,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
        tracep->fullBit(oldp+1174,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1175,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
        tracep->fullBit(oldp+1176,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1177,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1178,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 8U))),2);
        tracep->fullCData(oldp+1179,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 6U))),2);
        tracep->fullCData(oldp+1180,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 1U))),2);
        tracep->fullIData(oldp+1181,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
        tracep->fullIData(oldp+1182,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
        tracep->fullIData(oldp+1183,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
        tracep->fullIData(oldp+1184,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        tracep->fullIData(oldp+1185,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
        tracep->fullBit(oldp+1186,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
        tracep->fullBit(oldp+1187,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
        tracep->fullBit(oldp+1188,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
        tracep->fullBit(oldp+1189,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
        tracep->fullBit(oldp+1190,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
        tracep->fullQData(oldp+1191,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
        tracep->fullQData(oldp+1193,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
        tracep->fullQData(oldp+1195,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
        tracep->fullQData(oldp+1197,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
        tracep->fullIData(oldp+1199,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
        tracep->fullBit(oldp+1200,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
        tracep->fullBit(oldp+1201,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
        tracep->fullBit(oldp+1202,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
        tracep->fullCData(oldp+1203,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
        tracep->fullCData(oldp+1204,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
        tracep->fullCData(oldp+1205,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
        tracep->fullIData(oldp+1206,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
        tracep->fullBit(oldp+1207,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
        tracep->fullIData(oldp+1208,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
        tracep->fullBit(oldp+1209,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
        tracep->fullBit(oldp+1210,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
        tracep->fullCData(oldp+1211,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
        tracep->fullBit(oldp+1212,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1213,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 5U))));
        tracep->fullBit(oldp+1214,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
        tracep->fullBit(oldp+1215,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
        tracep->fullBit(oldp+1216,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
        tracep->fullIData(oldp+1217,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
        tracep->fullBit(oldp+1218,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
        tracep->fullBit(oldp+1219,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
        tracep->fullIData(oldp+1220,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
        tracep->fullIData(oldp+1221,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
        tracep->fullIData(oldp+1222,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
        tracep->fullCData(oldp+1223,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
        tracep->fullCData(oldp+1224,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
        tracep->fullBit(oldp+1225,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
        tracep->fullBit(oldp+1226,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
        tracep->fullBit(oldp+1227,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
        tracep->fullCData(oldp+1228,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
        tracep->fullCData(oldp+1229,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
        tracep->fullBit(oldp+1230,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 3U))));
        tracep->fullBit(oldp+1231,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x14U))));
        tracep->fullBit(oldp+1232,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less));
        tracep->fullCData(oldp+1233,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
        tracep->fullIData(oldp+1234,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5),32);
        tracep->fullIData(oldp+1235,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
        tracep->fullCData(oldp+1236,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
        tracep->fullIData(oldp+1237,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
        tracep->fullBit(oldp+1238,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
        tracep->fullBit(oldp+1239,(((0x17U == (0x5fU 
                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                    | ((0x6fU == (0x7fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                       | ((3U == (0x106fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                          | ((0x1073U 
                                              == (0x107fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                             | ((0x2073U 
                                                 == 
                                                 (0x207fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                | ((0x4063U 
                                                    == 
                                                    (0x407fU 
                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                   | ((0x2013U 
                                                       == 
                                                       (0x207fU 
                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                      | ((0x23U 
                                                          == 
                                                          (0x603fU 
                                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                         | ((3U 
                                                             == 
                                                             (0x207fU 
                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                            | ((3U 
                                                                == 
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
        tracep->fullBit(oldp+1240,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
        tracep->fullBit(oldp+1241,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
        tracep->fullBit(oldp+1242,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
        tracep->fullBit(oldp+1243,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
        tracep->fullIData(oldp+1244,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
        tracep->fullBit(oldp+1245,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
        tracep->fullIData(oldp+1246,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
        tracep->fullBit(oldp+1247,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
        tracep->fullBit(oldp+1248,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
        tracep->fullIData(oldp+1249,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
        tracep->fullBit(oldp+1250,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 4U))));
        tracep->fullBit(oldp+1251,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)));
    }
}

void Vsim::traceFullSub5(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1252,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
        tracep->fullBit(oldp+1253,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
        tracep->fullBit(oldp+1254,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
        tracep->fullBit(oldp+1255,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
        tracep->fullCData(oldp+1256,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x17U))),2);
        tracep->fullIData(oldp+1257,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
        tracep->fullIData(oldp+1258,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
        tracep->fullIData(oldp+1259,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
        tracep->fullBit(oldp+1260,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
        tracep->fullBit(oldp+1261,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
        tracep->fullBit(oldp+1262,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
        tracep->fullBit(oldp+1263,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
        tracep->fullBit(oldp+1264,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
        tracep->fullBit(oldp+1265,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
        tracep->fullBit(oldp+1266,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                                          & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))));
        tracep->fullBit(oldp+1267,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers))) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)))));
        tracep->fullBit(oldp+1268,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
        tracep->fullBit(oldp+1269,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
        tracep->fullBit(oldp+1270,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
        tracep->fullBit(oldp+1271,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
        tracep->fullBit(oldp+1272,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
        tracep->fullBit(oldp+1273,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
        tracep->fullBit(oldp+1274,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                                    | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        tracep->fullBit(oldp+1275,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
        tracep->fullBit(oldp+1276,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                          & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))));
        tracep->fullBit(oldp+1277,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck))) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        tracep->fullBit(oldp+1278,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
        tracep->fullBit(oldp+1279,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
        tracep->fullBit(oldp+1280,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
        tracep->fullBit(oldp+1281,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
        tracep->fullBit(oldp+1282,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
        tracep->fullBit(oldp+1283,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
        tracep->fullBit(oldp+1284,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
        tracep->fullBit(oldp+1285,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                          & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))));
        tracep->fullBit(oldp+1286,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck))) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        tracep->fullBit(oldp+1287,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
        tracep->fullBit(oldp+1288,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
        tracep->fullBit(oldp+1289,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
        tracep->fullBit(oldp+1290,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
        tracep->fullBit(oldp+1291,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                          & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
        tracep->fullBit(oldp+1292,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
        tracep->fullBit(oldp+1293,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
        tracep->fullBit(oldp+1294,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
        tracep->fullBit(oldp+1295,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
        tracep->fullIData(oldp+1296,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
        tracep->fullBit(oldp+1297,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
        tracep->fullBit(oldp+1298,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
        tracep->fullBit(oldp+1299,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
        tracep->fullBit(oldp+1300,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
        tracep->fullBit(oldp+1301,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
        tracep->fullBit(oldp+1302,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
        tracep->fullCData(oldp+1303,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
        tracep->fullIData(oldp+1304,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        tracep->fullBit(oldp+1305,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                                    | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
        tracep->fullBit(oldp+1306,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
        tracep->fullBit(oldp+1307,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
        tracep->fullIData(oldp+1308,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
        tracep->fullCData(oldp+1309,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
        tracep->fullCData(oldp+1310,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
        tracep->fullBit(oldp+1311,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
        tracep->fullBit(oldp+1312,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
        tracep->fullIData(oldp+1313,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
        tracep->fullBit(oldp+1314,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        tracep->fullBit(oldp+1315,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
        tracep->fullBit(oldp+1316,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
        tracep->fullCData(oldp+1317,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
        tracep->fullBit(oldp+1318,(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid));
        tracep->fullBit(oldp+1319,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
        tracep->fullIData(oldp+1320,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit),32);
        tracep->fullIData(oldp+1321,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
        tracep->fullBit(oldp+1322,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))))));
        tracep->fullBit(oldp+1323,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
        tracep->fullIData(oldp+1324,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
        tracep->fullBit(oldp+1325,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
        tracep->fullBit(oldp+1326,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
        tracep->fullBit(oldp+1327,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
        tracep->fullBit(oldp+1328,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
        tracep->fullBit(oldp+1329,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
        tracep->fullBit(oldp+1330,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
        tracep->fullCData(oldp+1331,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
        tracep->fullBit(oldp+1332,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
        tracep->fullBit(oldp+1333,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
        tracep->fullIData(oldp+1334,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                           ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                               ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                               : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
        tracep->fullBit(oldp+1335,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
        tracep->fullIData(oldp+1336,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
        tracep->fullBit(oldp+1337,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
        tracep->fullBit(oldp+1338,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
        tracep->fullBit(oldp+1339,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        tracep->fullBit(oldp+1340,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
        tracep->fullBit(oldp+1341,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
        tracep->fullBit(oldp+1342,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
        tracep->fullBit(oldp+1343,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
        tracep->fullBit(oldp+1344,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))));
        tracep->fullBit(oldp+1345,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        tracep->fullBit(oldp+1346,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
        tracep->fullBit(oldp+1347,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
        tracep->fullBit(oldp+1348,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                                    & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
        tracep->fullBit(oldp+1349,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
        tracep->fullBit(oldp+1350,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
        tracep->fullBit(oldp+1351,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
        tracep->fullBit(oldp+1352,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
        tracep->fullBit(oldp+1353,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
        tracep->fullBit(oldp+1354,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
        tracep->fullBit(oldp+1355,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
        tracep->fullBit(oldp+1356,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
        tracep->fullBit(oldp+1357,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
        tracep->fullBit(oldp+1358,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
        tracep->fullBit(oldp+1359,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
        tracep->fullBit(oldp+1360,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
        tracep->fullBit(oldp+1361,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        tracep->fullBit(oldp+1362,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
        tracep->fullBit(oldp+1363,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        tracep->fullBit(oldp+1364,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                    & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ack))));
        tracep->fullBit(oldp+1365,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
        tracep->fullIData(oldp+1366,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
        tracep->fullIData(oldp+1367,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
        tracep->fullBit(oldp+1368,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
        tracep->fullBit(oldp+1369,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
        tracep->fullBit(oldp+1370,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
        tracep->fullBit(oldp+1371,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239));
        tracep->fullBit(oldp+1372,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
        tracep->fullBit(oldp+1373,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
        tracep->fullBit(oldp+1374,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
        tracep->fullBit(oldp+1375,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))));
        tracep->fullBit(oldp+1376,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
        tracep->fullBit(oldp+1377,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                     ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                                     : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
        tracep->fullBit(oldp+1378,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                     ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                                     : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
        tracep->fullIData(oldp+1379,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                                       : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
        tracep->fullIData(oldp+1380,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                       : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
        tracep->fullCData(oldp+1381,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                       ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                       : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
        tracep->fullCData(oldp+1382,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                       ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                                       : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
        tracep->fullBit(oldp+1383,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last)))));
        tracep->fullBit(oldp+1384,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
        tracep->fullBit(oldp+1385,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
        tracep->fullBit(oldp+1386,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
        tracep->fullIData(oldp+1387,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
        tracep->fullIData(oldp+1388,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
        tracep->fullCData(oldp+1389,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
        tracep->fullCData(oldp+1390,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
        tracep->fullBit(oldp+1391,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
        tracep->fullBit(oldp+1392,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
        tracep->fullIData(oldp+1393,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
        tracep->fullCData(oldp+1394,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xcU))),2);
        tracep->fullBit(oldp+1395,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)))));
        tracep->fullBit(oldp+1396,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
        tracep->fullBit(oldp+1397,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
        tracep->fullBit(oldp+1398,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446));
        tracep->fullBit(oldp+1399,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
        tracep->fullCData(oldp+1400,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
        tracep->fullCData(oldp+1401,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                               >> 8U))),8);
        tracep->fullCData(oldp+1402,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                               >> 0x10U))),8);
        tracep->fullCData(oldp+1403,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                               >> 0x18U))),8);
        tracep->fullIData(oldp+1404,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
        tracep->fullCData(oldp+1405,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                            >> 0xcU))),2);
        tracep->fullIData(oldp+1406,(((0U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                               >> 0xcU)))
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1
                                       : ((1U == (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                     >> 0xcU)))
                                           ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3
                                           : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
        tracep->fullBit(oldp+1407,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))));
    }
}

void Vsim::traceFullSub6(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp22[3];
    WData/*95:0*/ __Vtemp23[3];
    WData/*95:0*/ __Vtemp24[3];
    WData/*95:0*/ __Vtemp25[3];
    WData/*95:0*/ __Vtemp26[3];
    // Body
    {
        tracep->fullBit(oldp+1408,((0U == (0x1fU & 
                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 7U)))));
        tracep->fullCData(oldp+1409,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                               >> 0xfU))),5);
        tracep->fullCData(oldp+1410,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                               >> 0x14U))),5);
        tracep->fullIData(oldp+1411,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
        tracep->fullIData(oldp+1412,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
        tracep->fullIData(oldp+1413,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                       ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                          & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                           ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                              | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                           : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                              ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))),32);
        tracep->fullCData(oldp+1414,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)),5);
        tracep->fullIData(oldp+1415,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
        tracep->fullBit(oldp+1416,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
        tracep->fullBit(oldp+1417,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
        tracep->fullBit(oldp+1418,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring))));
        tracep->fullCData(oldp+1419,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                               >> 7U))),5);
        tracep->fullIData(oldp+1420,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
        tracep->fullBit(oldp+1421,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
        tracep->fullCData(oldp+1422,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
        tracep->fullIData(oldp+1423,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
        tracep->fullBit(oldp+1424,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                    == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 0xfU)))));
        tracep->fullBit(oldp+1425,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                    == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+1426,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                              >> 7U)) 
                                    == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 0xfU)))));
        tracep->fullBit(oldp+1427,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                              >> 7U)) 
                                    == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+1428,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
        tracep->fullBit(oldp+1429,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID))));
        tracep->fullBit(oldp+1430,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
        tracep->fullBit(oldp+1431,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
        tracep->fullBit(oldp+1432,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
        tracep->fullBit(oldp+1433,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1));
        tracep->fullBit(oldp+1434,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
        tracep->fullBit(oldp+1435,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
        tracep->fullBit(oldp+1436,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
        tracep->fullBit(oldp+1437,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
        tracep->fullBit(oldp+1438,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2));
        tracep->fullBit(oldp+1439,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
        tracep->fullBit(oldp+1440,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 5U)))));
        tracep->fullBit(oldp+1441,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0xfU)))));
        tracep->fullBit(oldp+1442,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
        tracep->fullBit(oldp+1443,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
        tracep->fullCData(oldp+1444,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xcU))),3);
        tracep->fullBit(oldp+1445,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                    & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                        ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0x15U) 
                                           ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                              >> 1U))
                                        : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                            ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x15U)
                                            : (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 8U))))));
        tracep->fullIData(oldp+1446,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                       : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
        tracep->fullIData(oldp+1447,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
        tracep->fullIData(oldp+1448,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                        : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                      + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
        tracep->fullCData(oldp+1449,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
        tracep->fullIData(oldp+1450,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
        tracep->fullIData(oldp+1451,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
        tracep->fullBit(oldp+1452,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
        tracep->fullBit(oldp+1453,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
        tracep->fullCData(oldp+1454,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
        tracep->fullBit(oldp+1455,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
        tracep->fullBit(oldp+1456,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
        tracep->fullBit(oldp+1457,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
        tracep->fullBit(oldp+1458,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
        tracep->fullBit(oldp+1459,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
        tracep->fullBit(oldp+1460,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
        tracep->fullBit(oldp+1461,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
        tracep->fullCData(oldp+1462,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
        tracep->fullIData(oldp+1463,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
        tracep->fullQData(oldp+1464,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
        tracep->fullQData(oldp+1466,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
        tracep->fullBit(oldp+1468,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
        tracep->fullBit(oldp+1469,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
        tracep->fullBit(oldp+1470,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
        tracep->fullBit(oldp+1471,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
        tracep->fullCData(oldp+1472,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
        tracep->fullIData(oldp+1473,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
        tracep->fullBit(oldp+1474,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
        tracep->fullBit(oldp+1475,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
        tracep->fullCData(oldp+1476,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
        tracep->fullBit(oldp+1477,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965));
        tracep->fullBit(oldp+1478,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1));
        tracep->fullBit(oldp+1479,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2));
        tracep->fullBit(oldp+1480,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
        tracep->fullBit(oldp+1481,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
        tracep->fullBit(oldp+1482,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
        tracep->fullBit(oldp+1483,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
        tracep->fullBit(oldp+1484,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998));
        tracep->fullBit(oldp+1485,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
        tracep->fullBit(oldp+1486,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
        tracep->fullCData(oldp+1487,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
        tracep->fullCData(oldp+1488,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
        tracep->fullCData(oldp+1489,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
        tracep->fullIData(oldp+1490,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
        tracep->fullBit(oldp+1491,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032));
        tracep->fullBit(oldp+1492,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077));
        tracep->fullCData(oldp+1493,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                            >> 0x1cU))),2);
        tracep->fullBit(oldp+1494,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
        tracep->fullBit(oldp+1495,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                     & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
                                    | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                        & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                       | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                          & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
        tracep->fullBit(oldp+1496,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
        tracep->fullBit(oldp+1497,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
        tracep->fullBit(oldp+1498,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                    & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
        tracep->fullBit(oldp+1499,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157));
        tracep->fullBit(oldp+1500,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
        tracep->fullBit(oldp+1501,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
        tracep->fullBit(oldp+1502,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
        tracep->fullBit(oldp+1503,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        tracep->fullBit(oldp+1504,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1505,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))));
        tracep->fullSData(oldp+1506,((0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0x14U))),12);
        tracep->fullBit(oldp+1507,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0xcU))) 
                                    | (2U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU))))));
        tracep->fullBit(oldp+1508,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xcU)))));
        tracep->fullSData(oldp+1509,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
        tracep->fullSData(oldp+1510,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
        tracep->fullIData(oldp+1511,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
        tracep->fullIData(oldp+1512,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
        tracep->fullIData(oldp+1513,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
        tracep->fullIData(oldp+1514,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
        __Vtemp22[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp22[1U] = ((0xfff00000U & ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                                >> 0x33U))))) 
                                         << 0x14U)) 
                         | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                    >> 0x20U)));
        __Vtemp22[2U] = (3U & ((- (IData)((1U & (IData)(
                                                        (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                         >> 0x33U))))) 
                               >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp23, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp24, __Vtemp23, 0x20U);
        VL_ADD_W(3, __Vtemp25, __Vtemp22, __Vtemp24);
        __Vtemp26[0U] = __Vtemp25[0U];
        __Vtemp26[1U] = __Vtemp25[1U];
        __Vtemp26[2U] = (3U & __Vtemp25[2U]);
        tracep->fullWData(oldp+1515,(__Vtemp26),66);
        tracep->fullBit(oldp+1518,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))));
        tracep->fullQData(oldp+1519,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
        tracep->fullIData(oldp+1521,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
        tracep->fullWData(oldp+1522,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
        tracep->fullBit(oldp+1525,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
        tracep->fullBit(oldp+1526,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
        tracep->fullBit(oldp+1527,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
        tracep->fullCData(oldp+1528,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
        tracep->fullCData(oldp+1529,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
        tracep->fullBit(oldp+1530,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        tracep->fullBit(oldp+1531,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
        tracep->fullBit(oldp+1532,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
        tracep->fullBit(oldp+1533,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        tracep->fullIData(oldp+1534,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
        tracep->fullBit(oldp+1535,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
        tracep->fullBit(oldp+1536,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
        tracep->fullQData(oldp+1537,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
        tracep->fullQData(oldp+1539,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
        tracep->fullIData(oldp+1541,(((1U & (IData)(
                                                    (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                     >> 0x20U)))
                                       ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                                       : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
        tracep->fullIData(oldp+1542,(((0xfffffffeU 
                                       & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                          << 1U)) | 
                                      (1U & (~ (IData)(
                                                       (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                        >> 0x20U)))))),32);
        tracep->fullIData(oldp+1543,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
        tracep->fullBit(oldp+1544,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                          & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
    }
}

void Vsim::traceFullSub7(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1545,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        tracep->fullBit(oldp+1546,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
        tracep->fullBit(oldp+1547,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
        tracep->fullBit(oldp+1548,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
        tracep->fullBit(oldp+1549,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
        tracep->fullBit(oldp+1550,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
        tracep->fullBit(oldp+1551,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
        tracep->fullBit(oldp+1552,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
        tracep->fullBit(oldp+1553,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
        tracep->fullBit(oldp+1554,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
        tracep->fullBit(oldp+1555,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
        tracep->fullBit(oldp+1556,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
        tracep->fullCData(oldp+1557,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+1558,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                                          | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))));
        tracep->fullBit(oldp+1559,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
        tracep->fullQData(oldp+1560,(((0U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0x1aU)))
                                       ? 0x4e4f4e4520ULL
                                       : ((1U == (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                     >> 0x1aU)))
                                           ? 0x5852455420ULL
                                           : ((2U == 
                                               (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x1aU)))
                                               ? 0x4543414c4cULL
                                               : 0x3f3f3f3f3fULL)))),40);
        tracep->fullWData(oldp+1562,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
        tracep->fullQData(oldp+1565,(((0U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0x12U)))
                                       ? 0x584f525f31ULL
                                       : ((1U == (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                     >> 0x12U)))
                                           ? 0x4f525f3120ULL
                                           : ((2U == 
                                               (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x12U)))
                                               ? 0x414e445f31ULL
                                               : 0x3f3f3f3f3fULL)))),40);
        tracep->fullIData(oldp+1567,(((0x200U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                       ? ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                           ? 0x504320U
                                           : 0x494d53U)
                                       : ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                           ? 0x494d49U
                                           : 0x525320U))),24);
        tracep->fullQData(oldp+1568,(((0U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 6U)))
                                       ? 0x4144445f53554220ULL
                                       : ((1U == (3U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                     >> 6U)))
                                           ? 0x534c545f534c5455ULL
                                           : ((2U == 
                                               (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 6U)))
                                               ? 0x4249545749534520ULL
                                               : 0x3f3f3f3f3f3f3f3fULL)))),64);
        tracep->fullWData(oldp+1570,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
        tracep->fullQData(oldp+1573,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                       ? 0x4e4f4e4520ULL
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                           ? 0x5852455420ULL
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                               ? 0x4543414c4cULL
                                               : 0x3f3f3f3f3fULL)))),40);
        tracep->fullQData(oldp+1575,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                       ? 0x4e4f4e4520ULL
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                           ? 0x5852455420ULL
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                               ? 0x4543414c4cULL
                                               : 0x3f3f3f3f3fULL)))),40);
        tracep->fullQData(oldp+1577,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                       ? 0x4e4f4e4520ULL
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                           ? 0x5852455420ULL
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                               ? 0x4543414c4cULL
                                               : 0x3f3f3f3f3fULL)))),40);
        tracep->fullIData(oldp+1579,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                       ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                           ? 0x4a414c52U
                                           : 0x4a414c20U)
                                       : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                           ? 0x42202020U
                                           : 0x494e4320U))),32);
        tracep->fullWData(oldp+1580,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
        tracep->fullWData(oldp+1583,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
        tracep->fullIData(oldp+1586,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                       ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                           ? 0x504320U
                                           : 0x494d53U)
                                       : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                           ? 0x494d49U
                                           : 0x525320U))),24);
        tracep->fullWData(oldp+1587,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
        tracep->fullQData(oldp+1590,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                       ? 0x4144445f53554220ULL
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                           ? 0x534c545f534c5455ULL
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                               ? 0x4249545749534520ULL
                                               : 0x3f3f3f3f3f3f3f3fULL)))),64);
        tracep->fullQData(oldp+1592,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                       ? 0x584f525f31ULL
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                           ? 0x4f525f3120ULL
                                           : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                               ? 0x414e445f31ULL
                                               : 0x3f3f3f3f3fULL)))),40);
        tracep->fullIData(oldp+1594,(((0x1000000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                       ? ((0x800000U 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                           ? 0x4a414c52U
                                           : 0x4a414c20U)
                                       : ((0x800000U 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                           ? 0x42202020U
                                           : 0x494e4320U))),32);
        tracep->fullWData(oldp+1595,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
        tracep->fullWData(oldp+1598,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
        tracep->fullWData(oldp+1601,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
        tracep->fullBit(oldp+1604,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
        tracep->fullBit(oldp+1605,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
        tracep->fullIData(oldp+1606,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
        tracep->fullBit(oldp+1607,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
        tracep->fullBit(oldp+1608,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
        tracep->fullCData(oldp+1609,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
        tracep->fullBit(oldp+1610,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                             >> 7U)))));
        tracep->fullBit(oldp+1611,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
        tracep->fullBit(oldp+1612,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
        tracep->fullBit(oldp+1613,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
        tracep->fullBit(oldp+1614,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
        tracep->fullBit(oldp+1615,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
        tracep->fullCData(oldp+1616,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
        tracep->fullBit(oldp+1617,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                          | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                                >> 7U))))));
        tracep->fullCData(oldp+1618,((0x7fU & ((0x80U 
                                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                                ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                   >> 5U)
                                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
        tracep->fullBit(oldp+1619,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                          >> 7U))));
        tracep->fullIData(oldp+1620,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                  >> 0xcU))),20);
        tracep->fullSData(oldp+1621,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 2U)) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
        tracep->fullBit(oldp+1622,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
        tracep->fullBit(oldp+1623,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
        tracep->fullBit(oldp+1624,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                          >> 1U))));
        tracep->fullIData(oldp+1625,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                  >> 2U))),20);
        tracep->fullBit(oldp+1626,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
        tracep->fullBit(oldp+1627,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
        tracep->fullBit(oldp+1628,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
        tracep->fullBit(oldp+1629,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
        tracep->fullBit(oldp+1630,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
        tracep->fullBit(oldp+1631,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
        tracep->fullBit(oldp+1632,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
        tracep->fullBit(oldp+1633,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
        tracep->fullBit(oldp+1634,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
        tracep->fullBit(oldp+1635,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
        tracep->fullCData(oldp+1636,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
        tracep->fullBit(oldp+1637,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
        tracep->fullBit(oldp+1638,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
        tracep->fullCData(oldp+1639,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
        tracep->fullBit(oldp+1640,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
        tracep->fullBit(oldp+1641,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
        tracep->fullIData(oldp+1642,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
        tracep->fullBit(oldp+1643,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
        tracep->fullBit(oldp+1644,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
        tracep->fullCData(oldp+1645,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
        tracep->fullBit(oldp+1646,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
        tracep->fullBit(oldp+1647,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
        tracep->fullIData(oldp+1648,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
        tracep->fullBit(oldp+1649,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
        tracep->fullSData(oldp+1650,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
        tracep->fullBit(oldp+1651,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
        tracep->fullBit(oldp+1652,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
        tracep->fullSData(oldp+1653,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
        tracep->fullIData(oldp+1654,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
        tracep->fullCData(oldp+1655,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
        tracep->fullBit(oldp+1656,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        tracep->fullBit(oldp+1657,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                          >> 1U))));
        tracep->fullIData(oldp+1658,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                  >> 2U))),20);
        tracep->fullIData(oldp+1659,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                       << 0x18U) | 
                                      (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                        << 0x10U) | 
                                       (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                         << 8U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
        tracep->fullBit(oldp+1660,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
        tracep->fullBit(oldp+1661,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
        tracep->fullBit(oldp+1662,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664));
        tracep->fullBit(oldp+1663,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
        tracep->fullBit(oldp+1664,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        tracep->fullCData(oldp+1665,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
        tracep->fullBit(oldp+1666,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                     & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                        == (0x3ffU 
                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                               >> 2U)))) 
                                    & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
    }
}

void Vsim::traceFullSub8(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1667,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
        tracep->fullBit(oldp+1668,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
        tracep->fullCData(oldp+1669,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
        tracep->fullBit(oldp+1670,((((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                  >> 0xcU)) 
                                     == (0xfffffU & 
                                         (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                          >> 2U))) 
                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        tracep->fullBit(oldp+1671,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
        tracep->fullBit(oldp+1672,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
        tracep->fullBit(oldp+1673,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                                    | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                        & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                           == (0x3ffU 
                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                  >> 2U)))) 
                                       & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
        tracep->fullCData(oldp+1674,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
        tracep->fullBit(oldp+1675,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
        tracep->fullBit(oldp+1676,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
        tracep->fullBit(oldp+1677,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824));
        tracep->fullIData(oldp+1678,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
        tracep->fullBit(oldp+1679,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
        tracep->fullBit(oldp+1680,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
        tracep->fullBit(oldp+1681,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
        tracep->fullBit(oldp+1682,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
        tracep->fullBit(oldp+1683,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
        tracep->fullBit(oldp+1684,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
        tracep->fullBit(oldp+1685,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
        tracep->fullBit(oldp+1686,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
        tracep->fullBit(oldp+1687,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
        tracep->fullIData(oldp+1688,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
        tracep->fullIData(oldp+1689,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
        tracep->fullBit(oldp+1690,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
        tracep->fullBit(oldp+1691,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
        tracep->fullBit(oldp+1692,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
        tracep->fullBit(oldp+1693,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
        tracep->fullBit(oldp+1694,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        tracep->fullBit(oldp+1695,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        tracep->fullBit(oldp+1696,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
        tracep->fullBit(oldp+1697,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
        tracep->fullCData(oldp+1698,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
        tracep->fullBit(oldp+1699,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                             >> 7U)))));
        tracep->fullBit(oldp+1700,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
        tracep->fullBit(oldp+1701,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
        tracep->fullBit(oldp+1702,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
        tracep->fullBit(oldp+1703,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                          | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
        tracep->fullBit(oldp+1704,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
        tracep->fullBit(oldp+1705,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                           ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                           : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
        tracep->fullBit(oldp+1706,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004));
        tracep->fullBit(oldp+1707,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                          | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
        tracep->fullBit(oldp+1708,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                       & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
        tracep->fullBit(oldp+1709,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
        tracep->fullBit(oldp+1710,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066));
        tracep->fullBit(oldp+1711,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
        tracep->fullBit(oldp+1712,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
        tracep->fullCData(oldp+1713,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                            + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
        tracep->fullCData(oldp+1714,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
        tracep->fullBit(oldp+1715,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
        tracep->fullBit(oldp+1716,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
        tracep->fullBit(oldp+1717,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
        tracep->fullBit(oldp+1718,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
        tracep->fullBit(oldp+1719,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
        tracep->fullBit(oldp+1720,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090));
        tracep->fullBit(oldp+1721,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
        tracep->fullBit(oldp+1722,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
        tracep->fullBit(oldp+1723,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
        tracep->fullBit(oldp+1724,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
        tracep->fullBit(oldp+1725,(vlTOPp->sim_trace));
        tracep->fullBit(oldp+1726,(vlTOPp->sys_clk));
        tracep->fullBit(oldp+1727,(vlTOPp->serial_source_valid));
        tracep->fullBit(oldp+1728,(vlTOPp->serial_source_ready));
        tracep->fullCData(oldp+1729,(vlTOPp->serial_source_data),8);
        tracep->fullBit(oldp+1730,(vlTOPp->serial_sink_valid));
        tracep->fullBit(oldp+1731,(vlTOPp->serial_sink_ready));
        tracep->fullCData(oldp+1732,(vlTOPp->serial_sink_data),8);
        tracep->fullIData(oldp+1733,(vlTOPp->gpio_oe),32);
        tracep->fullIData(oldp+1734,(vlTOPp->gpio_o),32);
        tracep->fullIData(oldp+1735,(vlTOPp->gpio_i),32);
        tracep->fullBit(oldp+1736,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
        tracep->fullBit(oldp+1737,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read));
        tracep->fullSData(oldp+1738,(vlTOPp->serial_sink_data),10);
        tracep->fullBit(oldp+1739,(((IData)(vlTOPp->serial_sink_valid) 
                                    & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))));
        tracep->fullIData(oldp+1740,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
        tracep->fullIData(oldp+1741,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
        tracep->fullIData(oldp+1742,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
        tracep->fullBit(oldp+1743,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
        tracep->fullBit(oldp+1744,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
        tracep->fullBit(oldp+1745,((1U & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1746,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
        tracep->fullBit(oldp+1747,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
        tracep->fullCData(oldp+1748,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
        tracep->fullIData(oldp+1749,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
        tracep->fullCData(oldp+1750,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
        tracep->fullBit(oldp+1751,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
        tracep->fullBit(oldp+1752,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
        tracep->fullIData(oldp+1753,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
        tracep->fullIData(oldp+1754,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
        tracep->fullIData(oldp+1755,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
        tracep->fullIData(oldp+1756,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
        tracep->fullIData(oldp+1757,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
        tracep->fullIData(oldp+1758,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
        tracep->fullIData(oldp+1759,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
        tracep->fullIData(oldp+1760,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
        tracep->fullIData(oldp+1761,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
        tracep->fullIData(oldp+1762,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
        tracep->fullIData(oldp+1763,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
        tracep->fullIData(oldp+1764,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
        tracep->fullIData(oldp+1765,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
        tracep->fullIData(oldp+1766,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
        tracep->fullIData(oldp+1767,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
        tracep->fullIData(oldp+1768,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
        tracep->fullIData(oldp+1769,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
        tracep->fullIData(oldp+1770,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
        tracep->fullIData(oldp+1771,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
        tracep->fullIData(oldp+1772,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
        tracep->fullIData(oldp+1773,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
        tracep->fullIData(oldp+1774,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
        tracep->fullIData(oldp+1775,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
        tracep->fullIData(oldp+1776,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
        tracep->fullIData(oldp+1777,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
        tracep->fullIData(oldp+1778,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
        tracep->fullIData(oldp+1779,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
        tracep->fullIData(oldp+1780,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
        tracep->fullIData(oldp+1781,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
        tracep->fullIData(oldp+1782,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
        tracep->fullIData(oldp+1783,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
        tracep->fullIData(oldp+1784,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
        tracep->fullBit(oldp+1785,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                    & ((0xfffffU & 
                                        (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                         >> 2U)) == 
                                       (0xfffffU & 
                                        (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                         >> 0xcU))))));
        tracep->fullIData(oldp+1786,(0U),32);
        tracep->fullCData(oldp+1787,(0xfU),4);
        tracep->fullBit(oldp+1788,(0U));
        tracep->fullCData(oldp+1789,(0U),2);
        tracep->fullBit(oldp+1790,(1U));
        tracep->fullCData(oldp+1791,(1U),2);
        tracep->fullCData(oldp+1792,(2U),2);
        tracep->fullCData(oldp+1793,(3U),2);
        tracep->fullBit(oldp+1794,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved));
        tracep->fullBit(oldp+1795,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SW));
        tracep->fullBit(oldp+1796,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SR));
        tracep->fullBit(oldp+1797,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SO));
        tracep->fullBit(oldp+1798,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SI));
        tracep->fullBit(oldp+1799,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PW));
        tracep->fullBit(oldp+1800,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PR));
        tracep->fullBit(oldp+1801,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PO));
        tracep->fullBit(oldp+1802,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PI));
        tracep->fullCData(oldp+1803,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_FM),4);
        tracep->fullCData(oldp+1804,(5U),3);
        tracep->fullBit(oldp+1805,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_exclusiveOk));
        tracep->fullBit(oldp+1806,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation));
        tracep->fullBit(oldp+1807,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBus_rsp_payload_last));
        tracep->fullBit(oldp+1808,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation));
        tracep->fullCData(oldp+1809,(2U),4);
        tracep->fullCData(oldp+1810,(0U),4);
        tracep->fullBit(oldp+1811,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error));
        tracep->fullBit(oldp+1812,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc));
        tracep->fullIData(oldp+1813,(0x42U),26);
    }
}
