// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
        vlTOPp->traceChgSub1(userp, tracep);
        vlTOPp->traceChgSub2(userp, tracep);
        vlTOPp->traceChgSub3(userp, tracep);
        vlTOPp->traceChgSub4(userp, tracep);
        vlTOPp->traceChgSub5(userp, tracep);
        vlTOPp->traceChgSub6(userp, tracep);
        vlTOPp->traceChgSub7(userp, tracep);
        vlTOPp->traceChgSub8(userp, tracep);
    }
}

void Vsim::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSymsp->TOP__sim.__PVT__array_muxed7),2);
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_clear));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_clear));
            tracep->chgBit(oldp+3,(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_clear));
            tracep->chgBit(oldp+4,(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_clear));
            tracep->chgBit(oldp+5,(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_clear));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_clear));
            tracep->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_clear));
            tracep->chgBit(oldp+8,(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_clear));
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_clear));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_clear));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_clear));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_clear));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_clear));
            tracep->chgBit(oldp+14,(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_clear));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_clear));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_clear));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_clear));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_clear));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_clear));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_clear));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_clear));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_clear));
            tracep->chgBit(oldp+23,(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_clear));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_clear));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_clear));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_clear));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_clear));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_clear));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_clear));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_clear));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_clear));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_clear));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__sim_trace_storage));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable));
            tracep->chgCData(oldp+36,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data),8);
            tracep->chgBit(oldp+37,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
            tracep->chgIData(oldp+38,(vlSymsp->TOP__sim.gpio_oe),32);
            tracep->chgIData(oldp+39,(vlSymsp->TOP__sim.gpio_o),32);
            tracep->chgBit(oldp+40,(vlSymsp->TOP__sim.__PVT__int_rst));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__sim.__PVT__soc_rst));
            tracep->chgBit(oldp+42,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                           >> 1U))));
            tracep->chgCData(oldp+43,(vlSymsp->TOP__sim.__PVT__reset_storage),2);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__sim.__PVT__reset_re));
            tracep->chgIData(oldp+45,(vlSymsp->TOP__sim.__PVT__scratch_storage),32);
            tracep->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__scratch_re));
            tracep->chgIData(oldp+47,(vlSymsp->TOP__sim.__PVT__bus_errors),32);
            tracep->chgBit(oldp+48,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_we));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__bus_errors_re));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim.__PVT__error));
            tracep->chgBit(oldp+51,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__soc_rst) 
                                           | ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                              >> 1U)))));
            tracep->chgIData(oldp+52,(vlSymsp->TOP__sim.__PVT__interrupt),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ADR),30);
            tracep->chgIData(oldp+54,(vlSymsp->TOP__sim.__PVT__shared_dat_r),32);
            tracep->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__ibus_ack));
            tracep->chgCData(oldp+58,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                        ? 7U : 2U)),3);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR),30);
            tracep->chgIData(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
            tracep->chgCData(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL),4);
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__dbus_ack));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
            tracep->chgCData(oldp+65,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                        ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                            ? 7U : 2U)
                                        : 0U)),3);
            tracep->chgIData(oldp+66,(vlSymsp->TOP__sim.__PVT__array_muxed0),30);
            tracep->chgIData(oldp+67,(vlSymsp->TOP__sim.__PVT__array_muxed1),32);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
            tracep->chgCData(oldp+69,(vlSymsp->TOP__sim.__PVT__array_muxed2),4);
            tracep->chgBit(oldp+70,(((IData)(vlSymsp->TOP__sim.__PVT__array_muxed3) 
                                     & (IData)(vlSymsp->TOP__sim.__PVT__slave_sel))));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__array_muxed4));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__ram_bus_ack));
            tracep->chgBit(oldp+73,(vlSymsp->TOP__sim.__PVT__array_muxed5));
            tracep->chgCData(oldp+74,(vlSymsp->TOP__sim.__PVT__array_muxed6),3);
            tracep->chgSData(oldp+75,((0x7fffU & vlSymsp->TOP__sim.__PVT__array_muxed0)),15);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__sim.__PVT__sram
                                      [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
            tracep->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack));
            tracep->chgSData(oldp+79,((0x7ffU & vlSymsp->TOP__sim.__PVT__array_muxed0)),11);
            tracep->chgCData(oldp+80,(vlSymsp->TOP__sim.__PVT__sram0_we),4);
            tracep->chgIData(oldp+81,(vlSymsp->TOP__sim.__PVT__main_ram
                                      [vlSymsp->TOP__sim.__PVT__main_ram_adr0]),32);
            tracep->chgBit(oldp+82,(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc));
            tracep->chgBit(oldp+83,(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack));
            tracep->chgSData(oldp+84,((0x3fffU & vlSymsp->TOP__sim.__PVT__array_muxed0)),14);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__sim.__PVT__sram1_we),4);
            tracep->chgBit(oldp+86,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_first));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_last));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__sim.__PVT__uart_rxtx_re));
            tracep->chgCData(oldp+89,((0xffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),8);
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim.__PVT__uart_rxtx_we));
            tracep->chgCData(oldp+91,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data),8);
            tracep->chgBit(oldp+92,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_we));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim.__PVT__uart_txfull_re));
            tracep->chgBit(oldp+95,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_we));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__uart_rxempty_re));
            tracep->chgBit(oldp+98,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                            & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                           | (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                              >> 1U)))));
            tracep->chgBit(oldp+99,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim.__PVT__uart_tx_pending));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__sim.__PVT__uart_tx_clear));
            tracep->chgBit(oldp+102,(vlSymsp->TOP__sim.__PVT__uart_tx_trigger_d));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__sim.__PVT__uart_rx_pending));
            tracep->chgBit(oldp+105,(vlSymsp->TOP__sim.__PVT__uart_rx_clear));
            tracep->chgBit(oldp+106,(vlSymsp->TOP__sim.__PVT__uart_rx_trigger_d));
            tracep->chgCData(oldp+107,(vlSymsp->TOP__sim.__PVT__uart_status_status),2);
            tracep->chgBit(oldp+108,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_we));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__sim.__PVT__uart_status_re));
            tracep->chgCData(oldp+110,(vlSymsp->TOP__sim.__PVT__uart_pending_status),2);
            tracep->chgBit(oldp+111,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_we));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__sim.__PVT__uart_pending_re));
            tracep->chgCData(oldp+113,(vlSymsp->TOP__sim.__PVT__uart_pending_r),2);
            tracep->chgBit(oldp+114,((1U & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage))));
            tracep->chgBit(oldp+115,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage) 
                                            >> 1U))));
            tracep->chgCData(oldp+116,(vlSymsp->TOP__sim.__PVT__uart_enable_storage),2);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__sim.__PVT__uart_enable_re));
            tracep->chgBit(oldp+118,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_we));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__sim.__PVT__uart_txempty_re));
            tracep->chgBit(oldp+121,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_we));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__sim.__PVT__uart_rxfull_re));
            tracep->chgBit(oldp+124,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
            tracep->chgSData(oldp+125,((0xffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),10);
            tracep->chgSData(oldp+126,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
            tracep->chgCData(oldp+127,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0),5);
            tracep->chgCData(oldp+128,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce),4);
            tracep->chgCData(oldp+129,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume),4);
            tracep->chgCData(oldp+130,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr),4);
            tracep->chgSData(oldp+131,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
            tracep->chgBit(oldp+132,(((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
                                      & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))));
            tracep->chgCData(oldp+133,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0) 
                                                 + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))),5);
            tracep->chgBit(oldp+134,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_first));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_last));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re));
            tracep->chgBit(oldp+137,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
            tracep->chgSData(oldp+138,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
            tracep->chgCData(oldp+139,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0),5);
            tracep->chgCData(oldp+140,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce),4);
            tracep->chgCData(oldp+141,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume),4);
            tracep->chgCData(oldp+142,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr),4);
            tracep->chgSData(oldp+143,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
            tracep->chgBit(oldp+144,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read));
            tracep->chgCData(oldp+145,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0) 
                                                 + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))),5);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__sim.__PVT__timer_load_storage),32);
            tracep->chgBit(oldp+147,(vlSymsp->TOP__sim.__PVT__timer_load_re));
            tracep->chgIData(oldp+148,(vlSymsp->TOP__sim.__PVT__timer_reload_storage),32);
            tracep->chgBit(oldp+149,(vlSymsp->TOP__sim.__PVT__timer_reload_re));
            tracep->chgBit(oldp+150,(vlSymsp->TOP__sim.__PVT__timer_en_storage));
            tracep->chgBit(oldp+151,(vlSymsp->TOP__sim.__PVT__timer_en_re));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__sim.__PVT__timer_update_value_storage));
            tracep->chgBit(oldp+153,(vlSymsp->TOP__sim.__PVT__timer_update_value_re));
            tracep->chgIData(oldp+154,(vlSymsp->TOP__sim.__PVT__timer_value_status),32);
            tracep->chgBit(oldp+155,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_we));
            tracep->chgBit(oldp+156,(vlSymsp->TOP__sim.__PVT__timer_value_re));
            tracep->chgBit(oldp+157,(((IData)(vlSymsp->TOP__sim.__PVT__timer_zero_pending) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage))));
            tracep->chgBit(oldp+158,((0U == vlSymsp->TOP__sim.__PVT__timer_value)));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__sim.__PVT__timer_zero_pending));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__sim.__PVT__timer_zero_clear));
            tracep->chgBit(oldp+161,(vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d));
            tracep->chgBit(oldp+162,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_we));
            tracep->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__timer_status_re));
            tracep->chgBit(oldp+164,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_we));
            tracep->chgBit(oldp+165,(vlSymsp->TOP__sim.__PVT__timer_pending_re));
            tracep->chgBit(oldp+166,(vlSymsp->TOP__sim.__PVT__timer_pending_r));
            tracep->chgBit(oldp+167,(vlSymsp->TOP__sim.__PVT__timer_enable_storage));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__sim.__PVT__timer_enable_re));
            tracep->chgIData(oldp+169,(vlSymsp->TOP__sim.__PVT__timer_value),32);
            tracep->chgIData(oldp+170,(vlSymsp->TOP__sim.__PVT__oe_storage),32);
            tracep->chgBit(oldp+171,(vlSymsp->TOP__sim.__PVT__oe_re));
            tracep->chgIData(oldp+172,(vlSymsp->TOP__sim.__PVT__in_status),32);
            tracep->chgBit(oldp+173,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_we));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__sim.__PVT__in_re));
            tracep->chgIData(oldp+175,(vlSymsp->TOP__sim.__PVT__out_storage),32);
            tracep->chgBit(oldp+176,(vlSymsp->TOP__sim.__PVT__out_re));
            tracep->chgIData(oldp+177,(vlSymsp->TOP__sim.__PVT__mode_storage),32);
            tracep->chgBit(oldp+178,(vlSymsp->TOP__sim.__PVT__mode_re));
            tracep->chgIData(oldp+179,(vlSymsp->TOP__sim.__PVT__edge_storage),32);
            tracep->chgBit(oldp+180,(vlSymsp->TOP__sim.__PVT__edge_re));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__sim.__PVT__in_pads_n_d0));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_pending));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger_d));
            tracep->chgBit(oldp+185,(vlSymsp->TOP__sim.__PVT__in_pads_n_d1));
            tracep->chgBit(oldp+186,(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger));
            tracep->chgBit(oldp+187,(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_pending));
            tracep->chgBit(oldp+188,(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger_d));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__sim.__PVT__in_pads_n_d2));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger));
            tracep->chgBit(oldp+191,(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_pending));
            tracep->chgBit(oldp+192,(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger_d));
            tracep->chgBit(oldp+193,(vlSymsp->TOP__sim.__PVT__in_pads_n_d3));
            tracep->chgBit(oldp+194,(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_pending));
            tracep->chgBit(oldp+196,(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger_d));
            tracep->chgBit(oldp+197,(vlSymsp->TOP__sim.__PVT__in_pads_n_d4));
        }
    }
}

void Vsim::traceChgSub1(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 199);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*223:0*/ __Vtemp32[7];
    WData/*415:0*/ __Vtemp35[13];
    WData/*415:0*/ __Vtemp36[13];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_pending));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger_d));
            tracep->chgBit(oldp+3,(vlSymsp->TOP__sim.__PVT__in_pads_n_d5));
            tracep->chgBit(oldp+4,(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger));
            tracep->chgBit(oldp+5,(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_pending));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger_d));
            tracep->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__in_pads_n_d6));
            tracep->chgBit(oldp+8,(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger));
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_pending));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger_d));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__in_pads_n_d7));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_pending));
            tracep->chgBit(oldp+14,(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger_d));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__sim.__PVT__in_pads_n_d8));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_pending));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger_d));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__in_pads_n_d9));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_pending));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger_d));
            tracep->chgBit(oldp+23,(vlSymsp->TOP__sim.__PVT__in_pads_n_d10));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_pending));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger_d));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__in_pads_n_d11));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_pending));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger_d));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__sim.__PVT__in_pads_n_d12));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_pending));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger_d));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__in_pads_n_d13));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_pending));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger_d));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__sim.__PVT__in_pads_n_d14));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_pending));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger_d));
            tracep->chgBit(oldp+43,(vlSymsp->TOP__sim.__PVT__in_pads_n_d15));
            tracep->chgBit(oldp+44,(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_pending));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger_d));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim.__PVT__in_pads_n_d16));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_pending));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger_d));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__sim.__PVT__in_pads_n_d17));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_pending));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger_d));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__sim.__PVT__in_pads_n_d18));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_pending));
            tracep->chgBit(oldp+58,(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger_d));
            tracep->chgBit(oldp+59,(vlSymsp->TOP__sim.__PVT__in_pads_n_d19));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_pending));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger_d));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__in_pads_n_d20));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_pending));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger_d));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__sim.__PVT__in_pads_n_d21));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_pending));
            tracep->chgBit(oldp+70,(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger_d));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__in_pads_n_d22));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger));
            tracep->chgBit(oldp+73,(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_pending));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger_d));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__sim.__PVT__in_pads_n_d23));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger));
            tracep->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_pending));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger_d));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__in_pads_n_d24));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_pending));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger_d));
            tracep->chgBit(oldp+83,(vlSymsp->TOP__sim.__PVT__in_pads_n_d25));
            tracep->chgBit(oldp+84,(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_pending));
            tracep->chgBit(oldp+86,(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger_d));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim.__PVT__in_pads_n_d26));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_pending));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger_d));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__sim.__PVT__in_pads_n_d27));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_pending));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger_d));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__sim.__PVT__in_pads_n_d28));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_trigger));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_pending));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_trigger_d));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__sim.__PVT__in_pads_n_d29));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_trigger));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_pending));
            tracep->chgBit(oldp+102,(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_trigger_d));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__sim.__PVT__in_pads_n_d30));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_trigger));
            tracep->chgBit(oldp+105,(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_pending));
            tracep->chgBit(oldp+106,(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_trigger_d));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__sim.__PVT__in_pads_n_d31));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_trigger));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_pending));
            tracep->chgBit(oldp+110,(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_trigger_d));
            tracep->chgBit(oldp+111,(vlSymsp->TOP__sim.__PVT__sim_trace_re));
            tracep->chgCData(oldp+112,(vlSymsp->TOP__sim.__PVT__sim_marker_storage),8);
            tracep->chgBit(oldp+113,(vlSymsp->TOP__sim.__PVT__sim_marker_re));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__sim.__PVT__finish_re));
            tracep->chgBit(oldp+115,((1U & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__sim.__PVT__finish_we));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__sim.__PVT__mux_ready));
            __Vtemp32[0U] = (IData)((0x3c00000000ULL 
                                     | (((QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__sim.__PVT__ibus_ack) 
                                                           << 0x1fU) 
                                                          | vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ADR))) 
                                         << 2U) | (QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC) 
                                                                    << 1U) 
                                                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB)))))));
            __Vtemp32[1U] = ((0xffffffc0U & ((IData)(
                                                     ((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                      << 0x20U)) 
                                             << 6U)) 
                             | (IData)(((0x3c00000000ULL 
                                         | (((QData)((IData)(
                                                             (((IData)(vlSymsp->TOP__sim.__PVT__ibus_ack) 
                                                               << 0x1fU) 
                                                              | vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ADR))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC) 
                                                                << 1U) 
                                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB)))))) 
                                        >> 0x20U)));
            __Vtemp32[2U] = ((0x3fU & ((IData)(((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                << 0x20U)) 
                                       >> 0x1aU)) | 
                             (0xffffffc0U & ((IData)(
                                                     (((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 6U)));
            __Vtemp32[3U] = ((0xffffff00U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR 
                                             << 8U)) 
                             | ((0xffffff80U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                                << 7U)) 
                                | ((0xffffffc0U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                                   << 6U)) 
                                   | (0x3fU & ((IData)(
                                                       (((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                         << 0x20U) 
                                                        >> 0x20U)) 
                                               >> 0x1aU)))));
            __Vtemp32[4U] = ((0xfffff000U & ((IData)(
                                                     (((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data)))) 
                                             << 0xcU)) 
                             | ((0xffffff00U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                                << 8U)) 
                                | (0xffU & ((0x80U 
                                             & ((IData)(vlSymsp->TOP__sim.__PVT__dbus_ack) 
                                                << 7U)) 
                                            | ((0xc0U 
                                                & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                                   << 6U)) 
                                               | (vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR 
                                                  >> 0x18U))))));
            __Vtemp32[5U] = ((0xfffU & ((IData)((((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data)))) 
                                        >> 0x14U)) 
                             | (0xfffff000U & ((IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data))) 
                                                        >> 0x20U)) 
                                               << 0xcU)));
            __Vtemp32[6U] = (0xfffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data))) 
                                                >> 0x20U)) 
                                       >> 0x14U));
            tracep->chgWData(oldp+118,(__Vtemp32),204);
            tracep->chgBit(oldp+125,(vlSymsp->TOP__sim.__PVT__mux_source_valid));
            tracep->chgBit(oldp+126,(vlSymsp->TOP__sim.__PVT__storage_sink_sink_ready));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__sim.__PVT__mux_source_first));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__sim.__PVT__mux_source_last));
            tracep->chgWData(oldp+129,(vlSymsp->TOP__sim.__PVT__mux_source_payload_data),204);
            tracep->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__mux_source_payload_hit));
            tracep->chgBit(oldp+137,(vlSymsp->TOP__sim.__PVT__mux_value_storage));
            tracep->chgBit(oldp+138,(vlSymsp->TOP__sim.__PVT__mux_value_re));
            tracep->chgBit(oldp+139,(vlSymsp->TOP__sim.__PVT__multiregimpl32_regs1));
            tracep->chgBit(oldp+140,(vlSymsp->TOP__sim.__PVT__trigger_source_source_payload_hit));
            tracep->chgBit(oldp+141,(vlSymsp->TOP__sim.__PVT__trigger_enable_storage));
            tracep->chgBit(oldp+142,(vlSymsp->TOP__sim.__PVT__trigger_enable_re));
            tracep->chgBit(oldp+143,(vlSymsp->TOP__sim.__PVT__multiregimpl34_regs1));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_we));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__sim.__PVT__trigger_done_re));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__sim.__PVT__trigger_mem_write_re));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__sim.__PVT__trigger_mem_write_we));
            tracep->chgWData(oldp+148,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage),204);
            tracep->chgBit(oldp+155,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_re));
            tracep->chgWData(oldp+156,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage),204);
            tracep->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_re));
            tracep->chgBit(oldp+164,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_writable)))));
            tracep->chgBit(oldp+165,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_we));
            tracep->chgBit(oldp+166,(vlSymsp->TOP__sim.__PVT__trigger_mem_full_re));
            tracep->chgBit(oldp+167,(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__sim.__PVT__trigger_enable_d));
            tracep->chgBit(oldp+169,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_readable)))));
            tracep->chgBit(oldp+170,(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_writable));
            tracep->chgBit(oldp+171,(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_readable));
            tracep->chgBit(oldp+172,((((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1) 
                                       & (0U == (((
                                                   (((((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[0U] 
                                                        & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[0U]) 
                                                       ^ 
                                                       (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[0U] 
                                                        & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[0U])) 
                                                      | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[1U] 
                                                          & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[1U]) 
                                                         ^ 
                                                         (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[1U] 
                                                          & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[1U]))) 
                                                     | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[2U] 
                                                         & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[2U]) 
                                                        ^ 
                                                        (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[2U] 
                                                         & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[2U]))) 
                                                    | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[3U] 
                                                        & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[3U]) 
                                                       ^ 
                                                       (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[3U] 
                                                        & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[3U]))) 
                                                   | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[4U] 
                                                       & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U]) 
                                                      ^ 
                                                      (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[4U] 
                                                       & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U]))) 
                                                  | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[5U] 
                                                      & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U]) 
                                                     ^ 
                                                     (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[5U] 
                                                      & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U]))) 
                                                 | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[6U] 
                                                     & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U]) 
                                                    ^ 
                                                    (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[6U] 
                                                     & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U]))))) 
                                      | (0U != (IData)(vlSymsp->TOP__sim.__PVT__trigger_count)))));
            tracep->chgBit(oldp+173,(vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_first));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_last));
            tracep->chgWData(oldp+175,(vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask),204);
            tracep->chgWData(oldp+182,(vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value),204);
            __Vtemp35[0U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[0U];
            __Vtemp35[1U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[1U];
            __Vtemp35[2U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[2U];
            __Vtemp35[3U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[3U];
            __Vtemp35[4U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[4U];
            __Vtemp35[5U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[5U];
            __Vtemp35[6U] = ((0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U] 
                                             << 0xcU)) 
                             | vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[6U]);
            __Vtemp35[7U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U] 
                                        >> 0x14U)) 
                             | (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U] 
                                               << 0xcU)));
            __Vtemp35[8U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U] 
                                        >> 0x14U)) 
                             | (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U] 
                                               << 0xcU)));
            __Vtemp35[9U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U] 
                                        >> 0x14U)) 
                             | (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U] 
                                               << 0xcU)));
            __Vtemp35[0xaU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U] 
                                          >> 0x14U)) 
                               | (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U] 
                                                 << 0xcU)));
            __Vtemp35[0xbU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U] 
                                          >> 0x14U)) 
                               | (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U] 
                                                 << 0xcU)));
            __Vtemp35[0xcU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U] 
                                          >> 0x14U)) 
                               | (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[6U] 
                                                 << 0xcU)));
            VL_EXTEND_WW(410,408, __Vtemp36, __Vtemp35);
            tracep->chgWData(oldp+189,(__Vtemp36),410);
            tracep->chgWData(oldp+202,(vlSymsp->TOP__sim.__PVT__storage_2_dat1),410);
            tracep->chgBit(oldp+215,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_ce));
            tracep->chgCData(oldp+216,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q),5);
            tracep->chgCData(oldp+217,(((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_next_binary) 
                                        ^ (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_next_binary) 
                                                   >> 1U)))),5);
            tracep->chgCData(oldp+218,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary),5);
            tracep->chgCData(oldp+219,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_next_binary),5);
            tracep->chgBit(oldp+220,(((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_readable) 
                                      & (((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1) 
                                          & (0U == 
                                             ((((((((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[0U] 
                                                     & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[0U]) 
                                                    ^ 
                                                    (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[0U] 
                                                     & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[0U])) 
                                                   | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[1U] 
                                                       & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[1U]) 
                                                      ^ 
                                                      (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[1U] 
                                                       & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[1U]))) 
                                                  | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[2U] 
                                                      & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[2U]) 
                                                     ^ 
                                                     (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[2U] 
                                                      & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[2U]))) 
                                                 | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[3U] 
                                                     & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[3U]) 
                                                    ^ 
                                                    (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[3U] 
                                                     & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[3U]))) 
                                                | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[4U] 
                                                    & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U]) 
                                                   ^ 
                                                   (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[4U] 
                                                    & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U]))) 
                                               | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[5U] 
                                                   & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U]) 
                                                  ^ 
                                                  (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[5U] 
                                                   & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U]))) 
                                              | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[6U] 
                                                  & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U]) 
                                                 ^ 
                                                 (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[6U] 
                                                  & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U]))))) 
                                         | (0U != (IData)(vlSymsp->TOP__sim.__PVT__trigger_count))))));
            tracep->chgCData(oldp+221,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q),5);
            tracep->chgCData(oldp+222,(((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary) 
                                        ^ (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary) 
                                                   >> 1U)))),5);
            tracep->chgCData(oldp+223,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_binary),5);
            tracep->chgCData(oldp+224,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary),5);
            tracep->chgCData(oldp+225,(vlSymsp->TOP__sim.__PVT__multiregimpl35_regs1),5);
            tracep->chgCData(oldp+226,(vlSymsp->TOP__sim.__PVT__multiregimpl36_regs1),5);
            tracep->chgCData(oldp+227,((0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))),4);
            tracep->chgWData(oldp+228,(vlSymsp->TOP__sim.__PVT__storage_2_dat0),410);
            tracep->chgCData(oldp+241,((0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))),4);
            tracep->chgBit(oldp+242,((0U == (((((((
                                                   (vlSymsp->TOP__sim.__PVT__mux_source_payload_data[0U] 
                                                    & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[0U]) 
                                                   ^ 
                                                   (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[0U] 
                                                    & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[0U])) 
                                                  | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[1U] 
                                                      & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[1U]) 
                                                     ^ 
                                                     (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[1U] 
                                                      & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[1U]))) 
                                                 | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[2U] 
                                                     & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[2U]) 
                                                    ^ 
                                                    (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[2U] 
                                                     & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[2U]))) 
                                                | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[3U] 
                                                    & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[3U]) 
                                                   ^ 
                                                   (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[3U] 
                                                    & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[3U]))) 
                                               | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[4U] 
                                                   & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U]) 
                                                  ^ 
                                                  (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[4U] 
                                                   & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U]))) 
                                              | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[5U] 
                                                  & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U]) 
                                                 ^ 
                                                 (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[5U] 
                                                  & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U]))) 
                                             | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[6U] 
                                                 & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U]) 
                                                ^ (
                                                   vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[6U] 
                                                   & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U]))))));
            tracep->chgBit(oldp+243,((1U & (~ ((~ (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1)) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__trigger_enable_d))))));
            tracep->chgBit(oldp+244,((0U == (IData)(vlSymsp->TOP__sim.__PVT__trigger_count))));
            tracep->chgCData(oldp+245,(vlSymsp->TOP__sim.__PVT__trigger_count),6);
            tracep->chgBit(oldp+246,(vlSymsp->TOP__sim.__PVT__subsampler_source_valid));
            tracep->chgSData(oldp+247,(vlSymsp->TOP__sim.__PVT__subsampler_value_storage),16);
            tracep->chgBit(oldp+248,(vlSymsp->TOP__sim.__PVT__subsampler_value_re));
            tracep->chgSData(oldp+249,(vlSymsp->TOP__sim.__PVT__multiregimpl37_regs1),16);
            tracep->chgSData(oldp+250,(vlSymsp->TOP__sim.__PVT__subsampler_counter),16);
            tracep->chgBit(oldp+251,(vlSymsp->TOP__sim.__PVT__subsampler_done));
            tracep->chgBit(oldp+252,(vlSymsp->TOP__sim.__PVT__storage_enable_storage));
            tracep->chgBit(oldp+253,(vlSymsp->TOP__sim.__PVT__storage_enable_re));
            tracep->chgBit(oldp+254,(vlSymsp->TOP__sim.__PVT__multiregimpl41_regs1));
            tracep->chgBit(oldp+255,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_we));
            tracep->chgBit(oldp+256,(vlSymsp->TOP__sim.__PVT__storage_done_re));
            tracep->chgSData(oldp+257,(vlSymsp->TOP__sim.__PVT__storage_length_storage),10);
            tracep->chgBit(oldp+258,(vlSymsp->TOP__sim.__PVT__storage_length_re));
            tracep->chgSData(oldp+259,(vlSymsp->TOP__sim.__PVT__storage_offset_storage),10);
            tracep->chgBit(oldp+260,(vlSymsp->TOP__sim.__PVT__storage_offset_re));
            tracep->chgSData(oldp+261,(vlSymsp->TOP__sim.__PVT__multiregimpl42_regs1),10);
            tracep->chgBit(oldp+262,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_we));
            tracep->chgBit(oldp+263,(vlSymsp->TOP__sim.__PVT__storage_mem_level_re));
            tracep->chgIData(oldp+264,(vlSymsp->TOP__sim.__PVT__storage_converter_source_payload_data),32);
            tracep->chgBit(oldp+265,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_we));
            tracep->chgBit(oldp+266,(vlSymsp->TOP__sim.__PVT__storage_mem_data_re));
            tracep->chgBit(oldp+267,(vlSymsp->TOP__sim.__PVT__multiregimpl38_regs1));
            tracep->chgBit(oldp+268,(vlSymsp->TOP__sim.__PVT__storage_enable_d));
            tracep->chgSData(oldp+269,(vlSymsp->TOP__sim.__PVT__multiregimpl39_regs1),10);
            tracep->chgSData(oldp+270,(vlSymsp->TOP__sim.__PVT__multiregimpl40_regs1),10);
            tracep->chgBit(oldp+271,(vlSymsp->TOP__sim.__PVT__storage_done0));
            tracep->chgSData(oldp+272,(vlSymsp->TOP__sim.__PVT__storage_mem_level1),10);
            tracep->chgBit(oldp+273,(vlSymsp->TOP__sim.__PVT__storage_mem_sink_valid));
        }
    }
}

void Vsim::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 473);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*223:0*/ __Vtemp42[7];
    WData/*223:0*/ __Vtemp44[7];
    WData/*223:0*/ __Vtemp45[7];
    WData/*223:0*/ __Vtemp46[7];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0))));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim.__PVT__storage_mem_sink_first));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__storage_mem_sink_last));
            tracep->chgWData(oldp+3,(vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data),204);
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim.__PVT__storage_mem_readable));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__storage_mem_source_ready));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_first));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_last));
            tracep->chgWData(oldp+14,(vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data),204);
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim.__PVT__storage_mem_syncfifo_re));
            tracep->chgBit(oldp+22,((0U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0))));
            __Vtemp42[0U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[0U];
            __Vtemp42[1U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[1U];
            __Vtemp42[2U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[2U];
            __Vtemp42[3U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[3U];
            __Vtemp42[4U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[4U];
            __Vtemp42[5U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[5U];
            __Vtemp42[6U] = ((0xffffe000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_last) 
                                             << 0xdU)) 
                             | ((0xfffff000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_first) 
                                                << 0xcU)) 
                                | vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[6U]));
            tracep->chgWData(oldp+23,(__Vtemp42),206);
            tracep->chgWData(oldp+30,(vlSymsp->TOP__sim.__PVT__storage_3_dat1),206);
            tracep->chgSData(oldp+37,(vlSymsp->TOP__sim.__PVT__storage_mem_level0),10);
            tracep->chgSData(oldp+38,(vlSymsp->TOP__sim.__PVT__storage_mem_produce),9);
            tracep->chgSData(oldp+39,(vlSymsp->TOP__sim.__PVT__storage_mem_consume),9);
            tracep->chgSData(oldp+40,(vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr),9);
            tracep->chgWData(oldp+41,(vlSymsp->TOP__sim.__PVT__storage_3_dat0),206);
            tracep->chgBit(oldp+48,(((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_valid) 
                                     & (0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0)))));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__storage_mem_do_read));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_valid));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_writable));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_first));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_last));
            tracep->chgWData(oldp+54,(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data),204);
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_readable));
            tracep->chgBit(oldp+62,(((6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)) 
                                     & (IData)(vlSymsp->TOP__sim.__PVT__storage_read_source_ready))));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_first));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_last));
            tracep->chgWData(oldp+65,(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data),204);
            __Vtemp44[0U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[0U];
            __Vtemp44[1U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[1U];
            __Vtemp44[2U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[2U];
            __Vtemp44[3U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[3U];
            __Vtemp44[4U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[4U];
            __Vtemp44[5U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[5U];
            __Vtemp44[6U] = ((0xffffe000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_last) 
                                             << 0xdU)) 
                             | ((0xfffff000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_first) 
                                                << 0xcU)) 
                                | vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[6U]));
            tracep->chgWData(oldp+72,(__Vtemp44),206);
            tracep->chgWData(oldp+79,(vlSymsp->TOP__sim.__PVT__storage_4_dat1),206);
            tracep->chgBit(oldp+86,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_ce));
            tracep->chgCData(oldp+87,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q),3);
            tracep->chgCData(oldp+88,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_next_binary) 
                                       ^ (3U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_next_binary) 
                                                >> 1U)))),3);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary),3);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_next_binary),3);
            tracep->chgBit(oldp+91,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_readable) 
                                     & ((6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)) 
                                        & (IData)(vlSymsp->TOP__sim.__PVT__storage_read_source_ready)))));
            tracep->chgCData(oldp+92,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q),3);
            tracep->chgCData(oldp+93,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary) 
                                       ^ (3U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary) 
                                                >> 1U)))),3);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_binary),3);
            tracep->chgCData(oldp+95,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary),3);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__sim.__PVT__multiregimpl43_regs1),3);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__sim.__PVT__multiregimpl44_regs1),3);
            tracep->chgCData(oldp+98,((3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))),2);
            tracep->chgWData(oldp+99,(vlSymsp->TOP__sim.__PVT__storage_4_dat0),206);
            tracep->chgCData(oldp+106,((3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))),2);
            tracep->chgBit(oldp+107,(vlSymsp->TOP__sim.__PVT__storage_wait));
            tracep->chgBit(oldp+108,((0U == (IData)(vlSymsp->TOP__sim.__PVT__storage_count))));
            tracep->chgSData(oldp+109,(vlSymsp->TOP__sim.__PVT__storage_count),10);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__sim.__PVT__storage_read_source_ready));
            tracep->chgBit(oldp+111,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_first) 
                                      & (0U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)))));
            tracep->chgBit(oldp+112,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_last) 
                                      & (6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)))));
            VL_EXTEND_WI(204,32, __Vtemp45, vlSymsp->TOP__sim.__PVT__storage_converter_source_payload_data);
            tracep->chgWData(oldp+113,(__Vtemp45),204);
            VL_EXTEND_WW(224,204, __Vtemp46, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
            tracep->chgWData(oldp+120,(__Vtemp46),224);
            tracep->chgBit(oldp+127,((6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))));
            tracep->chgCData(oldp+128,(vlSymsp->TOP__sim.__PVT__storage_converter_mux),3);
            tracep->chgBit(oldp+129,((0U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))));
            tracep->chgSData(oldp+130,(vlSymsp->TOP__sim.__PVT__simsoc_adr),14);
            tracep->chgBit(oldp+131,(vlSymsp->TOP__sim.__PVT__simsoc_we));
            tracep->chgIData(oldp+132,(vlSymsp->TOP__sim.__PVT__simsoc_dat_w),32);
            tracep->chgIData(oldp+133,(((((((((vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                                               | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r) 
                                              | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r) 
                                             | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface3_bank_bus_dat_r) 
                                            | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface4_bank_bus_dat_r) 
                                           | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface5_bank_bus_dat_r) 
                                          | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface6_bank_bus_dat_r) 
                                         | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface7_bank_bus_dat_r) 
                                        | vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r)),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone_dat_r),32);
            tracep->chgBit(oldp+135,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone_cyc));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone_ack));
            tracep->chgBit(oldp+137,(vlSymsp->TOP__sim.__PVT__array_muxed3));
            tracep->chgBit(oldp+138,(vlSymsp->TOP__sim.__PVT__shared_ack));
            tracep->chgCData(oldp+139,(vlSymsp->TOP__sim.__PVT__request),2);
            tracep->chgBit(oldp+140,(vlSymsp->TOP__sim.__PVT__grant));
            tracep->chgCData(oldp+141,(vlSymsp->TOP__sim.__PVT__slave_sel),4);
            tracep->chgCData(oldp+142,(vlSymsp->TOP__sim.__PVT__slave_sel_r),4);
            tracep->chgBit(oldp+143,((((IData)(vlSymsp->TOP__sim.__PVT__array_muxed4) 
                                       & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed3)) 
                                      & (~ (IData)(vlSymsp->TOP__sim.__PVT__shared_ack)))));
            tracep->chgBit(oldp+144,((0U == vlSymsp->TOP__sim.__PVT__count)));
            tracep->chgIData(oldp+145,(vlSymsp->TOP__sim.__PVT__count),20);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r),32);
            tracep->chgBit(oldp+147,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_re));
            tracep->chgBit(oldp+148,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_we));
            tracep->chgBit(oldp+149,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_re));
            tracep->chgBit(oldp+150,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_we));
            tracep->chgBit(oldp+151,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_re));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_re));
            tracep->chgSData(oldp+153,((0xfffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),12);
            tracep->chgBit(oldp+154,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_we));
            tracep->chgSData(oldp+155,((0xfffU & vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[6U])),12);
            tracep->chgBit(oldp+156,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_re));
            tracep->chgBit(oldp+157,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_we));
            tracep->chgIData(oldp+158,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[5U]),32);
            tracep->chgBit(oldp+159,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_re));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_we));
            tracep->chgIData(oldp+161,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[4U]),32);
            tracep->chgBit(oldp+162,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_re));
            tracep->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_we));
            tracep->chgIData(oldp+164,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[3U]),32);
            tracep->chgBit(oldp+165,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_re));
            tracep->chgBit(oldp+166,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_we));
            tracep->chgIData(oldp+167,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[2U]),32);
            tracep->chgBit(oldp+168,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_re));
            tracep->chgBit(oldp+169,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_we));
            tracep->chgIData(oldp+170,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[1U]),32);
            tracep->chgBit(oldp+171,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_re));
            tracep->chgBit(oldp+172,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_we));
            tracep->chgIData(oldp+173,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[0U]),32);
            tracep->chgBit(oldp+174,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_re));
            tracep->chgBit(oldp+175,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_we));
            tracep->chgSData(oldp+176,((0xfffU & vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[6U])),12);
            tracep->chgBit(oldp+177,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_re));
            tracep->chgBit(oldp+178,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_we));
            tracep->chgIData(oldp+179,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U]),32);
            tracep->chgBit(oldp+180,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_re));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_we));
            tracep->chgIData(oldp+182,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U]),32);
            tracep->chgBit(oldp+183,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_re));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_we));
            tracep->chgIData(oldp+185,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U]),32);
            tracep->chgBit(oldp+186,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_re));
            tracep->chgBit(oldp+187,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_we));
            tracep->chgIData(oldp+188,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U]),32);
            tracep->chgBit(oldp+189,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_re));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_we));
            tracep->chgIData(oldp+191,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U]),32);
            tracep->chgBit(oldp+192,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_re));
            tracep->chgBit(oldp+193,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_we));
            tracep->chgIData(oldp+194,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U]),32);
            tracep->chgBit(oldp+195,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_re));
            tracep->chgBit(oldp+196,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_re));
            tracep->chgSData(oldp+197,((0xffffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),16);
            tracep->chgBit(oldp+198,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_we));
            tracep->chgBit(oldp+199,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_re));
            tracep->chgBit(oldp+200,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_we));
            tracep->chgBit(oldp+201,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_re));
            tracep->chgBit(oldp+202,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_re));
            tracep->chgSData(oldp+203,((0x3ffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),10);
            tracep->chgBit(oldp+204,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_we));
            tracep->chgBit(oldp+205,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_re));
            tracep->chgBit(oldp+206,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_we));
            tracep->chgBit(oldp+207,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_re));
            tracep->chgBit(oldp+208,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_re));
            tracep->chgBit(oldp+209,((3U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                >> 9U)))));
            tracep->chgIData(oldp+210,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r),32);
            tracep->chgBit(oldp+211,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_re));
            tracep->chgCData(oldp+212,((3U & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),2);
            tracep->chgBit(oldp+213,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_we));
            tracep->chgBit(oldp+214,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_re));
            tracep->chgBit(oldp+215,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_we));
            tracep->chgBit(oldp+216,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_re));
            tracep->chgBit(oldp+217,((4U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                >> 9U)))));
            tracep->chgIData(oldp+218,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r),32);
            tracep->chgBit(oldp+219,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_re));
            tracep->chgBit(oldp+220,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_we));
            tracep->chgBit(oldp+221,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_re));
            tracep->chgBit(oldp+222,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_re));
            tracep->chgBit(oldp+223,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_we));
            tracep->chgBit(oldp+224,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_re));
            tracep->chgBit(oldp+225,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_we));
            tracep->chgBit(oldp+226,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_re));
            tracep->chgBit(oldp+227,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_we));
            tracep->chgBit(oldp+228,((5U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                >> 9U)))));
            tracep->chgIData(oldp+229,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r),32);
            tracep->chgCData(oldp+230,((0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))),6);
            tracep->chgCData(oldp+231,(((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                         ? vlSymsp->TOP__sim.__PVT__mem
                                        [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                         : 0U)),8);
            tracep->chgBit(oldp+232,((6U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                >> 9U)))));
            tracep->chgBit(oldp+233,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r));
            tracep->chgIData(oldp+234,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface3_bank_bus_dat_r),32);
            tracep->chgBit(oldp+235,((2U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                >> 9U)))));
        }
    }
}

void Vsim::traceChgSub3(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 709);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface4_bank_bus_dat_r),32);
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_re));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_we));
            tracep->chgBit(oldp+3,((1U == (0x1fU & 
                                           ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                            >> 9U)))));
            tracep->chgIData(oldp+4,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface5_bank_bus_dat_r),32);
            tracep->chgBit(oldp+5,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_re));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_we));
            tracep->chgBit(oldp+7,((0U == (0x1fU & 
                                           ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                            >> 9U)))));
            tracep->chgIData(oldp+8,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface6_bank_bus_dat_r),32);
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_re));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_we));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_re));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_we));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_re));
            tracep->chgBit(oldp+14,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_we));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_re));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_we));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_re));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_re));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_re));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_re));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_we));
            tracep->chgBit(oldp+22,((7U == (0x1fU & 
                                            ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                             >> 9U)))));
            tracep->chgIData(oldp+23,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface7_bank_bus_dat_r),32);
            tracep->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_re));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_re));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_re));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_re));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_re));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_we));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_re));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_re));
            tracep->chgBit(oldp+32,((8U == (0x1fU & 
                                            ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                             >> 9U)))));
            tracep->chgCData(oldp+33,(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state),2);
            tracep->chgCData(oldp+34,(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_next_state),2);
            tracep->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_next_state));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim.__PVT__multiregimpl0_regs0));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__sim.__PVT__multiregimpl0_regs1));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__sim.__PVT__multiregimpl1_regs0));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__sim.__PVT__multiregimpl1_regs1));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__sim.__PVT__multiregimpl2_regs0));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__sim.__PVT__multiregimpl2_regs1));
            tracep->chgBit(oldp+43,(vlSymsp->TOP__sim.__PVT__multiregimpl3_regs0));
            tracep->chgBit(oldp+44,(vlSymsp->TOP__sim.__PVT__multiregimpl3_regs1));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim.__PVT__multiregimpl4_regs0));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__multiregimpl4_regs1));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim.__PVT__multiregimpl5_regs0));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__sim.__PVT__multiregimpl5_regs1));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__multiregimpl6_regs0));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim.__PVT__multiregimpl6_regs1));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__sim.__PVT__multiregimpl7_regs0));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim.__PVT__multiregimpl7_regs1));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__multiregimpl8_regs0));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__sim.__PVT__multiregimpl8_regs1));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__sim.__PVT__multiregimpl9_regs0));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__sim.__PVT__multiregimpl9_regs1));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__multiregimpl10_regs0));
            tracep->chgBit(oldp+58,(vlSymsp->TOP__sim.__PVT__multiregimpl10_regs1));
            tracep->chgBit(oldp+59,(vlSymsp->TOP__sim.__PVT__multiregimpl11_regs0));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__multiregimpl11_regs1));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__multiregimpl12_regs0));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__multiregimpl12_regs1));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__multiregimpl13_regs0));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim.__PVT__multiregimpl13_regs1));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__sim.__PVT__multiregimpl14_regs0));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__sim.__PVT__multiregimpl14_regs1));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__sim.__PVT__multiregimpl15_regs0));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__sim.__PVT__multiregimpl15_regs1));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__multiregimpl16_regs0));
            tracep->chgBit(oldp+70,(vlSymsp->TOP__sim.__PVT__multiregimpl16_regs1));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__multiregimpl17_regs0));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__multiregimpl17_regs1));
            tracep->chgBit(oldp+73,(vlSymsp->TOP__sim.__PVT__multiregimpl18_regs0));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__sim.__PVT__multiregimpl18_regs1));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__sim.__PVT__multiregimpl19_regs0));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__multiregimpl19_regs1));
            tracep->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__multiregimpl20_regs0));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__multiregimpl20_regs1));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__multiregimpl21_regs0));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__sim.__PVT__multiregimpl21_regs1));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__sim.__PVT__multiregimpl22_regs0));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__sim.__PVT__multiregimpl22_regs1));
            tracep->chgBit(oldp+83,(vlSymsp->TOP__sim.__PVT__multiregimpl23_regs0));
            tracep->chgBit(oldp+84,(vlSymsp->TOP__sim.__PVT__multiregimpl23_regs1));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__sim.__PVT__multiregimpl24_regs0));
            tracep->chgBit(oldp+86,(vlSymsp->TOP__sim.__PVT__multiregimpl24_regs1));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim.__PVT__multiregimpl25_regs0));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__sim.__PVT__multiregimpl25_regs1));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__sim.__PVT__multiregimpl26_regs0));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim.__PVT__multiregimpl26_regs1));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__sim.__PVT__multiregimpl27_regs0));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__sim.__PVT__multiregimpl27_regs1));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__sim.__PVT__multiregimpl28_regs0));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim.__PVT__multiregimpl28_regs1));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__sim.__PVT__multiregimpl29_regs0));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__sim.__PVT__multiregimpl29_regs1));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__multiregimpl30_regs0));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__sim.__PVT__multiregimpl30_regs1));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__sim.__PVT__multiregimpl31_regs0));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim.__PVT__multiregimpl31_regs1));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__sim.__PVT__multiregimpl32_regs0));
            tracep->chgBit(oldp+102,(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs0));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__sim.__PVT__multiregimpl34_regs0));
            tracep->chgCData(oldp+104,(vlSymsp->TOP__sim.__PVT__multiregimpl35_regs0),5);
            tracep->chgCData(oldp+105,(vlSymsp->TOP__sim.__PVT__multiregimpl36_regs0),5);
            tracep->chgSData(oldp+106,(vlSymsp->TOP__sim.__PVT__multiregimpl37_regs0),16);
            tracep->chgBit(oldp+107,(vlSymsp->TOP__sim.__PVT__multiregimpl38_regs0));
            tracep->chgSData(oldp+108,(vlSymsp->TOP__sim.__PVT__multiregimpl39_regs0),10);
            tracep->chgSData(oldp+109,(vlSymsp->TOP__sim.__PVT__multiregimpl40_regs0),10);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__sim.__PVT__multiregimpl41_regs0));
            tracep->chgSData(oldp+111,(vlSymsp->TOP__sim.__PVT__multiregimpl42_regs0),10);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__sim.__PVT__multiregimpl43_regs0),3);
            tracep->chgCData(oldp+113,(vlSymsp->TOP__sim.__PVT__multiregimpl44_regs0),3);
            tracep->chgSData(oldp+114,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
            tracep->chgSData(oldp+115,(vlSymsp->TOP__sim.__PVT__main_ram_adr0),14);
            tracep->chgCData(oldp+116,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
            tracep->chgSData(oldp+117,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
            tracep->chgSData(oldp+118,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
            tracep->chgSData(oldp+119,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
            tracep->chgSData(oldp+120,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
            tracep->chgSData(oldp+121,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
            tracep->chgSData(oldp+122,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
            tracep->chgSData(oldp+123,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
            tracep->chgSData(oldp+124,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
            tracep->chgSData(oldp+125,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
            tracep->chgSData(oldp+126,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
            tracep->chgSData(oldp+127,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
            tracep->chgSData(oldp+128,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
            tracep->chgSData(oldp+129,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
            tracep->chgSData(oldp+130,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
            tracep->chgSData(oldp+131,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
            tracep->chgSData(oldp+132,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
            tracep->chgSData(oldp+133,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
            tracep->chgSData(oldp+134,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
            tracep->chgSData(oldp+135,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
            tracep->chgSData(oldp+136,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
            tracep->chgSData(oldp+137,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
            tracep->chgSData(oldp+138,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
            tracep->chgSData(oldp+139,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
            tracep->chgSData(oldp+140,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
            tracep->chgSData(oldp+141,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
            tracep->chgSData(oldp+142,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
            tracep->chgSData(oldp+143,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
            tracep->chgSData(oldp+144,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
            tracep->chgSData(oldp+145,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
            tracep->chgSData(oldp+146,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
            tracep->chgSData(oldp+147,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
            tracep->chgSData(oldp+148,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
            tracep->chgWData(oldp+149,(vlSymsp->TOP__sim.__PVT__storage_2[0]),410);
            tracep->chgWData(oldp+162,(vlSymsp->TOP__sim.__PVT__storage_2[1]),410);
            tracep->chgWData(oldp+175,(vlSymsp->TOP__sim.__PVT__storage_2[2]),410);
            tracep->chgWData(oldp+188,(vlSymsp->TOP__sim.__PVT__storage_2[3]),410);
            tracep->chgWData(oldp+201,(vlSymsp->TOP__sim.__PVT__storage_2[4]),410);
            tracep->chgWData(oldp+214,(vlSymsp->TOP__sim.__PVT__storage_2[5]),410);
            tracep->chgWData(oldp+227,(vlSymsp->TOP__sim.__PVT__storage_2[6]),410);
            tracep->chgWData(oldp+240,(vlSymsp->TOP__sim.__PVT__storage_2[7]),410);
            tracep->chgWData(oldp+253,(vlSymsp->TOP__sim.__PVT__storage_2[8]),410);
            tracep->chgWData(oldp+266,(vlSymsp->TOP__sim.__PVT__storage_2[9]),410);
            tracep->chgWData(oldp+279,(vlSymsp->TOP__sim.__PVT__storage_2[10]),410);
            tracep->chgWData(oldp+292,(vlSymsp->TOP__sim.__PVT__storage_2[11]),410);
            tracep->chgWData(oldp+305,(vlSymsp->TOP__sim.__PVT__storage_2[12]),410);
            tracep->chgWData(oldp+318,(vlSymsp->TOP__sim.__PVT__storage_2[13]),410);
            tracep->chgWData(oldp+331,(vlSymsp->TOP__sim.__PVT__storage_2[14]),410);
            tracep->chgWData(oldp+344,(vlSymsp->TOP__sim.__PVT__storage_2[15]),410);
            tracep->chgWData(oldp+357,(vlSymsp->TOP__sim.__PVT__storage_4[0]),206);
            tracep->chgWData(oldp+364,(vlSymsp->TOP__sim.__PVT__storage_4[1]),206);
            tracep->chgWData(oldp+371,(vlSymsp->TOP__sim.__PVT__storage_4[2]),206);
            tracep->chgWData(oldp+378,(vlSymsp->TOP__sim.__PVT__storage_4[3]),206);
            tracep->chgBit(oldp+385,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
            tracep->chgBit(oldp+386,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
            tracep->chgBit(oldp+387,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
            tracep->chgBit(oldp+388,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
            tracep->chgBit(oldp+389,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
            tracep->chgBit(oldp+390,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
            tracep->chgBit(oldp+391,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
            tracep->chgBit(oldp+392,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
            tracep->chgIData(oldp+393,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
            tracep->chgBit(oldp+394,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE))));
            tracep->chgIData(oldp+395,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
            tracep->chgBit(oldp+396,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+397,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
            tracep->chgIData(oldp+398,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
            tracep->chgIData(oldp+399,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
            tracep->chgBit(oldp+400,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
            tracep->chgBit(oldp+401,((0U != (0x1fU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xfU)))));
            tracep->chgCData(oldp+402,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                 >> 5U))),7);
            tracep->chgBit(oldp+403,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
            tracep->chgBit(oldp+404,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
            tracep->chgIData(oldp+405,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
            tracep->chgBit(oldp+406,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                            | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                                  | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))))));
            tracep->chgBit(oldp+407,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
            tracep->chgBit(oldp+408,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                       & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                      & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                         | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))));
            tracep->chgIData(oldp+409,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
            tracep->chgBit(oldp+410,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
            tracep->chgIData(oldp+411,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
            tracep->chgBit(oldp+412,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
            tracep->chgIData(oldp+413,((0xffffffe0U 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
            tracep->chgBit(oldp+414,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
            tracep->chgBit(oldp+415,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
            tracep->chgBit(oldp+416,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
            tracep->chgBit(oldp+417,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
            tracep->chgIData(oldp+418,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
            tracep->chgBit(oldp+419,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
            tracep->chgBit(oldp+420,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
            tracep->chgBit(oldp+421,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
            tracep->chgBit(oldp+422,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
            tracep->chgBit(oldp+423,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
            tracep->chgBit(oldp+424,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
            tracep->chgBit(oldp+425,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
            tracep->chgBit(oldp+426,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
            tracep->chgBit(oldp+427,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
            tracep->chgIData(oldp+428,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
            tracep->chgCData(oldp+429,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
            tracep->chgCData(oldp+430,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
            tracep->chgQData(oldp+431,((0xfffffffffffffULL 
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
            tracep->chgQData(oldp+433,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
            tracep->chgQData(oldp+435,((0x3ffffffffULL 
                                        & VL_MULS_QQQ(34,34,34, 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
            tracep->chgQData(oldp+437,((0x3ffffffffULL 
                                        & VL_MULS_QQQ(34,34,34, 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, 
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
            tracep->chgQData(oldp+439,((0x3ffffffffULL 
                                        & VL_MULS_QQQ(34,34,34, 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, 
                                                                       (0xffffU 
                                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
            tracep->chgIData(oldp+441,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                                        * (0xffffU 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
            tracep->chgIData(oldp+442,((0xfffffffeU 
                                        & (((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                             ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                             : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                           + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
            tracep->chgBit(oldp+443,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                                       != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                                      | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                         & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                             ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x15U) 
                                                ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                   >> 1U))
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                 ? 
                                                (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x15U)
                                                 : 
                                                (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 8U)))))));
        }
    }
}

void Vsim::traceChgSub4(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1153);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,((IData)((0x1ffffffffULL 
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
            tracep->chgIData(oldp+1,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
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
            tracep->chgIData(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
            tracep->chgIData(oldp+3,(((0U == (3U & 
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
            tracep->chgBit(oldp+4,((0x20U != (0x7fU 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 7U)))));
            tracep->chgBit(oldp+5,((1U & (~ (((1U == 
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
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
            tracep->chgBit(oldp+7,((1U & ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x14U) 
                                          & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 3U))))));
            tracep->chgBit(oldp+8,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+9,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+10,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
            tracep->chgBit(oldp+13,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x1cU))));
            tracep->chgCData(oldp+14,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x1aU))),2);
            tracep->chgBit(oldp+15,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x19U))));
            tracep->chgCData(oldp+16,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x15U))),2);
            tracep->chgCData(oldp+17,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x12U))),2);
            tracep->chgBit(oldp+18,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x11U))));
            tracep->chgBit(oldp+19,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x10U))));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
            tracep->chgBit(oldp+21,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0xdU))));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
            tracep->chgBit(oldp+23,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0xcU))));
            tracep->chgBit(oldp+24,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0xbU))));
            tracep->chgCData(oldp+25,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 8U))),2);
            tracep->chgCData(oldp+26,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 6U))),2);
            tracep->chgCData(oldp+27,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 1U))),2);
            tracep->chgIData(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
            tracep->chgIData(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
            tracep->chgIData(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
            tracep->chgIData(oldp+31,(((IData)(4U) 
                                       + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
            tracep->chgIData(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
            tracep->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
            tracep->chgQData(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
            tracep->chgQData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
            tracep->chgQData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
            tracep->chgQData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
            tracep->chgIData(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
            tracep->chgCData(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
            tracep->chgCData(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
            tracep->chgCData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
            tracep->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
            tracep->chgIData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
            tracep->chgBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
            tracep->chgCData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
            tracep->chgBit(oldp+59,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0xfU))));
            tracep->chgBit(oldp+60,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 5U))));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
            tracep->chgIData(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
            tracep->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
            tracep->chgIData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
            tracep->chgCData(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
            tracep->chgCData(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
            tracep->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
            tracep->chgBit(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
            tracep->chgCData(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
            tracep->chgCData(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
            tracep->chgBit(oldp+77,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 3U))));
            tracep->chgBit(oldp+78,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 0x14U))));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less));
            tracep->chgCData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
            tracep->chgIData(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5),32);
            tracep->chgIData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
            tracep->chgCData(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
            tracep->chgIData(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
            tracep->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
            tracep->chgBit(oldp+86,(((0x17U == (0x5fU 
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
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
            tracep->chgIData(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
            tracep->chgIData(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
            tracep->chgIData(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
            tracep->chgBit(oldp+97,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                           >> 4U))));
        }
    }
}

void Vsim::traceChgSub5(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1251);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
            tracep->chgBit(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
            tracep->chgBit(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
            tracep->chgCData(oldp+5,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                            >> 0x17U))),2);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
            tracep->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
            tracep->chgBit(oldp+15,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                                           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))));
            tracep->chgBit(oldp+16,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers))) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)))));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
            tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                                     | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
            tracep->chgBit(oldp+25,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))));
            tracep->chgBit(oldp+26,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck))) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
            tracep->chgBit(oldp+34,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))));
            tracep->chgBit(oldp+35,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck))) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
            tracep->chgBit(oldp+40,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
            tracep->chgBit(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
            tracep->chgBit(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
            tracep->chgIData(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
            tracep->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
            tracep->chgCData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
            tracep->chgIData(oldp+53,((0xfffffffcU 
                                       & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
            tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                                     | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
            tracep->chgBit(oldp+55,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                                     & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
            tracep->chgIData(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
            tracep->chgCData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
            tracep->chgIData(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
            tracep->chgBit(oldp+63,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
            tracep->chgCData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
            tracep->chgBit(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
            tracep->chgIData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit),32);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
            tracep->chgBit(oldp+71,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))))));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
            tracep->chgIData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
            tracep->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
            tracep->chgBit(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
            tracep->chgBit(oldp+78,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
            tracep->chgCData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
            tracep->chgBit(oldp+81,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
            tracep->chgIData(oldp+83,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                            ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                                : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
            tracep->chgIData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
            tracep->chgBit(oldp+86,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
            tracep->chgBit(oldp+88,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
            tracep->chgBit(oldp+89,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
            tracep->chgBit(oldp+93,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))));
            tracep->chgBit(oldp+94,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
            tracep->chgBit(oldp+97,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                                     & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
            tracep->chgBit(oldp+98,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
            tracep->chgBit(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
            tracep->chgBit(oldp+103,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
            tracep->chgBit(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
            tracep->chgBit(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
            tracep->chgBit(oldp+107,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
            tracep->chgBit(oldp+108,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
            tracep->chgBit(oldp+110,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
            tracep->chgBit(oldp+111,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
            tracep->chgBit(oldp+112,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
            tracep->chgBit(oldp+113,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ack))));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
            tracep->chgIData(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
            tracep->chgIData(oldp+116,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239));
            tracep->chgBit(oldp+121,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
            tracep->chgBit(oldp+124,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
            tracep->chgBit(oldp+126,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                       ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                                       : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
            tracep->chgBit(oldp+127,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                       ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                                       : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
            tracep->chgIData(oldp+128,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                         ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                                         : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
            tracep->chgIData(oldp+129,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                         ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                         : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
            tracep->chgCData(oldp+130,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                         ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                         : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
            tracep->chgCData(oldp+131,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                         ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                                         : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
            tracep->chgBit(oldp+132,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                                            | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last)))));
            tracep->chgBit(oldp+133,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
            tracep->chgIData(oldp+136,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
            tracep->chgIData(oldp+137,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
            tracep->chgCData(oldp+138,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
            tracep->chgCData(oldp+139,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
            tracep->chgBit(oldp+140,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
            tracep->chgBit(oldp+141,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
            tracep->chgIData(oldp+142,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
            tracep->chgCData(oldp+143,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+144,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)))));
            tracep->chgBit(oldp+145,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                       & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
            tracep->chgBit(oldp+146,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446));
            tracep->chgBit(oldp+148,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
            tracep->chgCData(oldp+149,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
            tracep->chgCData(oldp+150,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+151,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+152,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                                 >> 0x18U))),8);
            tracep->chgIData(oldp+153,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
            tracep->chgCData(oldp+154,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                              >> 0xcU))),2);
            tracep->chgIData(oldp+155,(((0U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                   >> 0xcU)))
                                         ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1
                                         : ((1U == 
                                             (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                               >> 0xcU)))
                                             ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3
                                             : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
        }
    }
}

void Vsim::traceChgSub6(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1407);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp48[3];
    WData/*95:0*/ __Vtemp49[3];
    WData/*95:0*/ __Vtemp50[3];
    WData/*95:0*/ __Vtemp51[3];
    WData/*95:0*/ __Vtemp52[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))));
            tracep->chgBit(oldp+1,((0U == (0x1fU & 
                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 7U)))));
            tracep->chgCData(oldp+2,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+3,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                               >> 0x14U))),5);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
            tracep->chgIData(oldp+6,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                       ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                          & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                       : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                           ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                              | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                           : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                              ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))),32);
            tracep->chgCData(oldp+7,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)),5);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
            tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring))));
            tracep->chgCData(oldp+12,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                >> 7U))),5);
            tracep->chgIData(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
            tracep->chgCData(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
            tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                     == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 0xfU)))));
            tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                     == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 0x14U)))));
            tracep->chgBit(oldp+19,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                               >> 7U)) 
                                     == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 0xfU)))));
            tracep->chgBit(oldp+20,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                               >> 7U)) 
                                     == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 0x14U)))));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
            tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID))));
            tracep->chgBit(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1));
            tracep->chgBit(oldp+27,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2));
            tracep->chgBit(oldp+32,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
            tracep->chgBit(oldp+33,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                              >> 5U)))));
            tracep->chgBit(oldp+34,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                              >> 0xfU)))));
            tracep->chgBit(oldp+35,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                     & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
            tracep->chgCData(oldp+37,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
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
            tracep->chgIData(oldp+39,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                        : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
            tracep->chgIData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
            tracep->chgIData(oldp+41,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                         ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                         : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                       + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
            tracep->chgCData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
            tracep->chgIData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
            tracep->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
            tracep->chgCData(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
            tracep->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
            tracep->chgCData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
            tracep->chgIData(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
            tracep->chgQData(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
            tracep->chgQData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
            tracep->chgCData(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
            tracep->chgIData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
            tracep->chgBit(oldp+67,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
            tracep->chgCData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
            tracep->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2));
            tracep->chgBit(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
            tracep->chgBit(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
            tracep->chgBit(oldp+79,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
            tracep->chgCData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
            tracep->chgCData(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
            tracep->chgCData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
            tracep->chgIData(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077));
            tracep->chgCData(oldp+86,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                             >> 0x1cU))),2);
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
            tracep->chgBit(oldp+88,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
                                     | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                         & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                        | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                           & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
            tracep->chgBit(oldp+89,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
            tracep->chgBit(oldp+91,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                     & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
            tracep->chgBit(oldp+96,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
            tracep->chgBit(oldp+97,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xdU))));
            tracep->chgBit(oldp+98,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))));
            tracep->chgSData(oldp+99,((0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x14U))),12);
            tracep->chgBit(oldp+100,(((1U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU))) 
                                      | (2U == (3U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+101,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU)))));
            tracep->chgSData(oldp+102,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
            tracep->chgSData(oldp+103,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
            tracep->chgIData(oldp+104,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
            tracep->chgIData(oldp+105,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
            __Vtemp48[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
            __Vtemp48[1U] = ((0xfff00000U & ((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                                    >> 0x33U))))) 
                                             << 0x14U)) 
                             | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                        >> 0x20U)));
            __Vtemp48[2U] = (3U & ((- (IData)((1U & (IData)(
                                                            (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                             >> 0x33U))))) 
                                   >> 0xcU));
            VL_EXTEND_WQ(66,34, __Vtemp49, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
            VL_SHIFTL_WWI(66,66,32, __Vtemp50, __Vtemp49, 0x20U);
            VL_ADD_W(3, __Vtemp51, __Vtemp48, __Vtemp50);
            __Vtemp52[0U] = __Vtemp51[0U];
            __Vtemp52[1U] = __Vtemp51[1U];
            __Vtemp52[2U] = (3U & __Vtemp51[2U]);
            tracep->chgWData(oldp+108,(__Vtemp52),66);
            tracep->chgBit(oldp+111,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))));
            tracep->chgQData(oldp+112,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
            tracep->chgIData(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
            tracep->chgWData(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
            tracep->chgBit(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
            tracep->chgCData(oldp+121,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
            tracep->chgCData(oldp+122,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
            tracep->chgBit(oldp+123,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
            tracep->chgBit(oldp+124,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
            tracep->chgBit(oldp+126,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
            tracep->chgIData(oldp+127,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
            tracep->chgBit(oldp+128,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
            tracep->chgBit(oldp+129,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
            tracep->chgQData(oldp+130,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
            tracep->chgQData(oldp+132,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
            tracep->chgIData(oldp+134,(((1U & (IData)(
                                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                       >> 0x20U)))
                                         ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                                         : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
            tracep->chgIData(oldp+135,(((0xfffffffeU 
                                         & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                            << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                            >> 0x20U)))))),32);
        }
    }
}

void Vsim::traceChgSub7(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1543);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
            tracep->chgBit(oldp+1,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                          & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
            tracep->chgBit(oldp+2,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
            tracep->chgBit(oldp+3,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
            tracep->chgBit(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
            tracep->chgBit(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
            tracep->chgBit(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
            tracep->chgBit(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
            tracep->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
            tracep->chgCData(oldp+14,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                             >> 0xbU))),2);
            tracep->chgBit(oldp+15,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                                           | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
            tracep->chgQData(oldp+17,(((0U == (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 0x1aU)))
                                        ? 0x4e4f4e4520ULL
                                        : ((1U == (3U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                      >> 0x1aU)))
                                            ? 0x5852455420ULL
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 0x1aU)))
                                                ? 0x4543414c4cULL
                                                : 0x3f3f3f3f3fULL)))),40);
            tracep->chgWData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
            tracep->chgQData(oldp+22,(((0U == (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 0x12U)))
                                        ? 0x584f525f31ULL
                                        : ((1U == (3U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                      >> 0x12U)))
                                            ? 0x4f525f3120ULL
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 0x12U)))
                                                ? 0x414e445f31ULL
                                                : 0x3f3f3f3f3fULL)))),40);
            tracep->chgIData(oldp+24,(((0x200U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                        ? ((0x100U 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                            ? 0x504320U
                                            : 0x494d53U)
                                        : ((0x100U 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                            ? 0x494d49U
                                            : 0x525320U))),24);
            tracep->chgQData(oldp+25,(((0U == (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 6U)))
                                        ? 0x4144445f53554220ULL
                                        : ((1U == (3U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                      >> 6U)))
                                            ? 0x534c545f534c5455ULL
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 6U)))
                                                ? 0x4249545749534520ULL
                                                : 0x3f3f3f3f3f3f3f3fULL)))),64);
            tracep->chgWData(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
            tracep->chgQData(oldp+30,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                        ? 0x4e4f4e4520ULL
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                            ? 0x5852455420ULL
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                                ? 0x4543414c4cULL
                                                : 0x3f3f3f3f3fULL)))),40);
            tracep->chgQData(oldp+32,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                        ? 0x4e4f4e4520ULL
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                            ? 0x5852455420ULL
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                                ? 0x4543414c4cULL
                                                : 0x3f3f3f3f3fULL)))),40);
            tracep->chgQData(oldp+34,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                        ? 0x4e4f4e4520ULL
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                            ? 0x5852455420ULL
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                                ? 0x4543414c4cULL
                                                : 0x3f3f3f3f3fULL)))),40);
            tracep->chgIData(oldp+36,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                        ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                            ? 0x4a414c52U
                                            : 0x4a414c20U)
                                        : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                            ? 0x42202020U
                                            : 0x494e4320U))),32);
            tracep->chgWData(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
            tracep->chgWData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
            tracep->chgIData(oldp+43,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                        ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                            ? 0x504320U
                                            : 0x494d53U)
                                        : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                            ? 0x494d49U
                                            : 0x525320U))),24);
            tracep->chgWData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
            tracep->chgQData(oldp+47,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                        ? 0x4144445f53554220ULL
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                            ? 0x534c545f534c5455ULL
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                                ? 0x4249545749534520ULL
                                                : 0x3f3f3f3f3f3f3f3fULL)))),64);
            tracep->chgQData(oldp+49,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                        ? 0x584f525f31ULL
                                        : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                            ? 0x4f525f3120ULL
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                                ? 0x414e445f31ULL
                                                : 0x3f3f3f3f3fULL)))),40);
            tracep->chgIData(oldp+51,(((0x1000000U 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                        ? ((0x800000U 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                            ? 0x4a414c52U
                                            : 0x4a414c20U)
                                        : ((0x800000U 
                                            & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                            ? 0x42202020U
                                            : 0x494e4320U))),32);
            tracep->chgWData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
            tracep->chgWData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
            tracep->chgWData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
            tracep->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
            tracep->chgIData(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
            tracep->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
            tracep->chgCData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
            tracep->chgBit(oldp+67,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                              >> 7U)))));
            tracep->chgBit(oldp+68,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
            tracep->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
            tracep->chgBit(oldp+71,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
            tracep->chgCData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
            tracep->chgBit(oldp+74,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                           | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                                 >> 7U))))));
            tracep->chgCData(oldp+75,((0x7fU & ((0x80U 
                                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                                 ? 
                                                (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 5U)
                                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
            tracep->chgBit(oldp+76,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                           >> 7U))));
            tracep->chgIData(oldp+77,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                   >> 0xcU))),20);
            tracep->chgSData(oldp+78,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                  >> 2U)) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
            tracep->chgBit(oldp+79,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
            tracep->chgBit(oldp+80,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
            tracep->chgBit(oldp+81,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                           >> 1U))));
            tracep->chgIData(oldp+82,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                   >> 2U))),20);
            tracep->chgBit(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
            tracep->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
            tracep->chgBit(oldp+86,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
            tracep->chgCData(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
            tracep->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
            tracep->chgCData(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
            tracep->chgBit(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
            tracep->chgIData(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
            tracep->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
            tracep->chgCData(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
            tracep->chgBit(oldp+103,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
            tracep->chgIData(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
            tracep->chgBit(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
            tracep->chgSData(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
            tracep->chgBit(oldp+108,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
            tracep->chgSData(oldp+110,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
            tracep->chgIData(oldp+111,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
            tracep->chgBit(oldp+113,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
            tracep->chgBit(oldp+114,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                            >> 1U))));
            tracep->chgIData(oldp+115,((0xfffffU & 
                                        (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                         >> 2U))),20);
            tracep->chgIData(oldp+116,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                         << 0x18U) 
                                        | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                            << 0x10U) 
                                           | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
            tracep->chgBit(oldp+117,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
            tracep->chgBit(oldp+118,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
            tracep->chgBit(oldp+121,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        }
    }
}
