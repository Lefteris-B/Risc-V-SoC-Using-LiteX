// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


//======================

void Vsim::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsim::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsim::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsim::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
        vlTOPp->traceInitSub1(userp, tracep);
        vlTOPp->traceInitSub2(userp, tracep);
        vlTOPp->traceInitSub3(userp, tracep);
        vlTOPp->traceInitSub4(userp, tracep);
        vlTOPp->traceInitSub5(userp, tracep);
        vlTOPp->traceInitSub6(userp, tracep);
        vlTOPp->traceInitSub7(userp, tracep);
        vlTOPp->traceInitSub8(userp, tracep);
        vlTOPp->traceInitSub9(userp, tracep);
    }
}

void Vsim::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1725,"sim_trace", false,-1);
        tracep->declBit(c+1726,"sys_clk", false,-1);
        tracep->declBit(c+1727,"serial_source_valid", false,-1);
        tracep->declBit(c+1728,"serial_source_ready", false,-1);
        tracep->declBus(c+1729,"serial_source_data", false,-1, 7,0);
        tracep->declBit(c+1730,"serial_sink_valid", false,-1);
        tracep->declBit(c+1731,"serial_sink_ready", false,-1);
        tracep->declBus(c+1732,"serial_sink_data", false,-1, 7,0);
        tracep->declBus(c+1733,"gpio_oe", false,-1, 31,0);
        tracep->declBus(c+1734,"gpio_o", false,-1, 31,0);
        tracep->declBus(c+1735,"gpio_i", false,-1, 31,0);
        tracep->declBit(c+35,"sim sim_trace", false,-1);
        tracep->declBit(c+1726,"sim sys_clk", false,-1);
        tracep->declBit(c+36,"sim serial_source_valid", false,-1);
        tracep->declBit(c+1728,"sim serial_source_ready", false,-1);
        tracep->declBus(c+37,"sim serial_source_data", false,-1, 7,0);
        tracep->declBit(c+1730,"sim serial_sink_valid", false,-1);
        tracep->declBit(c+38,"sim serial_sink_ready", false,-1);
        tracep->declBus(c+1732,"sim serial_sink_data", false,-1, 7,0);
        tracep->declBus(c+39,"sim gpio_oe", false,-1, 31,0);
        tracep->declBus(c+40,"sim gpio_o", false,-1, 31,0);
        tracep->declBus(c+1735,"sim gpio_i", false,-1, 31,0);
        tracep->declBit(c+1726,"sim sys_clk_1", false,-1);
        tracep->declBit(c+41,"sim sys_rst", false,-1);
        tracep->declBit(c+1726,"sim por_clk", false,-1);
        tracep->declBit(c+41,"sim int_rst", false,-1);
        tracep->declBit(c+42,"sim soc_rst", false,-1);
        tracep->declBit(c+43,"sim cpu_rst", false,-1);
        tracep->declBus(c+44,"sim reset_storage", false,-1, 1,0);
        tracep->declBit(c+45,"sim reset_re", false,-1);
        tracep->declBus(c+46,"sim scratch_storage", false,-1, 31,0);
        tracep->declBit(c+47,"sim scratch_re", false,-1);
        tracep->declBus(c+48,"sim bus_errors_status", false,-1, 31,0);
        tracep->declBit(c+49,"sim bus_errors_we", false,-1);
        tracep->declBit(c+50,"sim bus_errors_re", false,-1);
        tracep->declBit(c+51,"sim bus_error", false,-1);
        tracep->declBus(c+48,"sim bus_errors", false,-1, 31,0);
        tracep->declBit(c+52,"sim reset", false,-1);
        tracep->declBus(c+53,"sim interrupt", false,-1, 31,0);
        tracep->declBus(c+54,"sim ibus_adr", false,-1, 29,0);
        tracep->declBus(c+1786,"sim ibus_dat_w", false,-1, 31,0);
        tracep->declBus(c+55,"sim ibus_dat_r", false,-1, 31,0);
        tracep->declBus(c+1787,"sim ibus_sel", false,-1, 3,0);
        tracep->declBit(c+56,"sim ibus_cyc", false,-1);
        tracep->declBit(c+57,"sim ibus_stb", false,-1);
        tracep->declBit(c+58,"sim ibus_ack", false,-1);
        tracep->declBit(c+1788,"sim ibus_we", false,-1);
        tracep->declBus(c+59,"sim ibus_cti", false,-1, 2,0);
        tracep->declBus(c+1789,"sim ibus_bte", false,-1, 1,0);
        tracep->declBit(c+1788,"sim ibus_err", false,-1);
        tracep->declBus(c+60,"sim dbus_adr", false,-1, 29,0);
        tracep->declBus(c+61,"sim dbus_dat_w", false,-1, 31,0);
        tracep->declBus(c+55,"sim dbus_dat_r", false,-1, 31,0);
        tracep->declBus(c+62,"sim dbus_sel", false,-1, 3,0);
        tracep->declBit(c+63,"sim dbus_cyc", false,-1);
        tracep->declBit(c+63,"sim dbus_stb", false,-1);
        tracep->declBit(c+64,"sim dbus_ack", false,-1);
        tracep->declBit(c+65,"sim dbus_we", false,-1);
        tracep->declBus(c+66,"sim dbus_cti", false,-1, 2,0);
        tracep->declBus(c+1789,"sim dbus_bte", false,-1, 1,0);
        tracep->declBit(c+1788,"sim dbus_err", false,-1);
        tracep->declBus(c+1786,"sim vexriscv", false,-1, 31,0);
        tracep->declBus(c+67,"sim ram_bus_adr", false,-1, 29,0);
        tracep->declBus(c+68,"sim ram_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+69,"sim ram_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+70,"sim ram_bus_sel", false,-1, 3,0);
        tracep->declBit(c+71,"sim ram_bus_cyc", false,-1);
        tracep->declBit(c+72,"sim ram_bus_stb", false,-1);
        tracep->declBit(c+73,"sim ram_bus_ack", false,-1);
        tracep->declBit(c+74,"sim ram_bus_we", false,-1);
        tracep->declBus(c+75,"sim ram_bus_cti", false,-1, 2,0);
        tracep->declBus(c+1,"sim ram_bus_bte", false,-1, 1,0);
        tracep->declBit(c+1788,"sim ram_bus_err", false,-1);
        tracep->declBit(c+1788,"sim adr_burst", false,-1);
        tracep->declBus(c+76,"sim adr", false,-1, 14,0);
        tracep->declBus(c+69,"sim dat_r", false,-1, 31,0);
        tracep->declBus(c+67,"sim interface0_ram_bus_adr", false,-1, 29,0);
        tracep->declBus(c+68,"sim interface0_ram_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+77,"sim interface0_ram_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+70,"sim interface0_ram_bus_sel", false,-1, 3,0);
        tracep->declBit(c+78,"sim interface0_ram_bus_cyc", false,-1);
        tracep->declBit(c+72,"sim interface0_ram_bus_stb", false,-1);
        tracep->declBit(c+79,"sim interface0_ram_bus_ack", false,-1);
        tracep->declBit(c+74,"sim interface0_ram_bus_we", false,-1);
        tracep->declBus(c+75,"sim interface0_ram_bus_cti", false,-1, 2,0);
        tracep->declBus(c+1,"sim interface0_ram_bus_bte", false,-1, 1,0);
        tracep->declBit(c+1788,"sim interface0_ram_bus_err", false,-1);
        tracep->declBit(c+1788,"sim sram0_adr_burst", false,-1);
        tracep->declBus(c+80,"sim sram0_adr", false,-1, 10,0);
        tracep->declBus(c+77,"sim sram0_dat_r", false,-1, 31,0);
        tracep->declBus(c+81,"sim sram0_we", false,-1, 3,0);
        tracep->declBus(c+68,"sim sram0_dat_w", false,-1, 31,0);
        tracep->declBus(c+67,"sim interface1_ram_bus_adr", false,-1, 29,0);
        tracep->declBus(c+68,"sim interface1_ram_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+82,"sim interface1_ram_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+70,"sim interface1_ram_bus_sel", false,-1, 3,0);
        tracep->declBit(c+83,"sim interface1_ram_bus_cyc", false,-1);
        tracep->declBit(c+72,"sim interface1_ram_bus_stb", false,-1);
        tracep->declBit(c+84,"sim interface1_ram_bus_ack", false,-1);
        tracep->declBit(c+74,"sim interface1_ram_bus_we", false,-1);
        tracep->declBus(c+75,"sim interface1_ram_bus_cti", false,-1, 2,0);
        tracep->declBus(c+1,"sim interface1_ram_bus_bte", false,-1, 1,0);
        tracep->declBit(c+1788,"sim interface1_ram_bus_err", false,-1);
        tracep->declBit(c+1788,"sim sram1_adr_burst", false,-1);
        tracep->declBus(c+85,"sim sram1_adr", false,-1, 13,0);
        tracep->declBus(c+82,"sim sram1_dat_r", false,-1, 31,0);
        tracep->declBus(c+86,"sim sram1_we", false,-1, 3,0);
        tracep->declBus(c+68,"sim sram1_dat_w", false,-1, 31,0);
        tracep->declBit(c+36,"sim sink_valid", false,-1);
        tracep->declBit(c+1728,"sim sink_ready", false,-1);
        tracep->declBit(c+87,"sim sink_first", false,-1);
        tracep->declBit(c+88,"sim sink_last", false,-1);
        tracep->declBus(c+37,"sim sink_payload_data", false,-1, 7,0);
        tracep->declBit(c+1730,"sim source_valid", false,-1);
        tracep->declBit(c+38,"sim source_ready", false,-1);
        tracep->declBit(c+1788,"sim source_first", false,-1);
        tracep->declBit(c+1788,"sim source_last", false,-1);
        tracep->declBus(c+1732,"sim source_payload_data", false,-1, 7,0);
        tracep->declBit(c+89,"sim uart_rxtx_re", false,-1);
        tracep->declBus(c+90,"sim uart_rxtx_r", false,-1, 7,0);
        tracep->declBit(c+91,"sim uart_rxtx_we", false,-1);
        tracep->declBus(c+92,"sim uart_rxtx_w", false,-1, 7,0);
        tracep->declBit(c+93,"sim uart_txfull_status", false,-1);
        tracep->declBit(c+94,"sim uart_txfull_we", false,-1);
        tracep->declBit(c+95,"sim uart_txfull_re", false,-1);
        tracep->declBit(c+96,"sim uart_rxempty_status", false,-1);
        tracep->declBit(c+97,"sim uart_rxempty_we", false,-1);
        tracep->declBit(c+98,"sim uart_rxempty_re", false,-1);
        tracep->declBit(c+99,"sim uart_irq", false,-1);
        tracep->declBit(c+100,"sim uart_tx_status", false,-1);
        tracep->declBit(c+101,"sim uart_tx_pending", false,-1);
        tracep->declBit(c+100,"sim uart_tx_trigger", false,-1);
        tracep->declBit(c+102,"sim uart_tx_clear", false,-1);
        tracep->declBit(c+103,"sim uart_tx_trigger_d", false,-1);
        tracep->declBit(c+104,"sim uart_rx_status", false,-1);
        tracep->declBit(c+105,"sim uart_rx_pending", false,-1);
        tracep->declBit(c+104,"sim uart_rx_trigger", false,-1);
        tracep->declBit(c+106,"sim uart_rx_clear", false,-1);
        tracep->declBit(c+107,"sim uart_rx_trigger_d", false,-1);
        tracep->declBit(c+100,"sim uart_tx0", false,-1);
        tracep->declBit(c+104,"sim uart_rx0", false,-1);
        tracep->declBus(c+108,"sim uart_status_status", false,-1, 1,0);
        tracep->declBit(c+109,"sim uart_status_we", false,-1);
        tracep->declBit(c+110,"sim uart_status_re", false,-1);
        tracep->declBit(c+101,"sim uart_tx1", false,-1);
        tracep->declBit(c+105,"sim uart_rx1", false,-1);
        tracep->declBus(c+111,"sim uart_pending_status", false,-1, 1,0);
        tracep->declBit(c+112,"sim uart_pending_we", false,-1);
        tracep->declBit(c+113,"sim uart_pending_re", false,-1);
        tracep->declBus(c+114,"sim uart_pending_r", false,-1, 1,0);
        tracep->declBit(c+115,"sim uart_tx2", false,-1);
        tracep->declBit(c+116,"sim uart_rx2", false,-1);
        tracep->declBus(c+117,"sim uart_enable_storage", false,-1, 1,0);
        tracep->declBit(c+118,"sim uart_enable_re", false,-1);
        tracep->declBit(c+119,"sim uart_txempty_status", false,-1);
        tracep->declBit(c+120,"sim uart_txempty_we", false,-1);
        tracep->declBit(c+121,"sim uart_txempty_re", false,-1);
        tracep->declBit(c+122,"sim uart_rxfull_status", false,-1);
        tracep->declBit(c+123,"sim uart_rxfull_we", false,-1);
        tracep->declBit(c+124,"sim uart_rxfull_re", false,-1);
        tracep->declBit(c+1730,"sim uart_uart_sink_valid", false,-1);
        tracep->declBit(c+38,"sim uart_uart_sink_ready", false,-1);
        tracep->declBit(c+1788,"sim uart_uart_sink_first", false,-1);
        tracep->declBit(c+1788,"sim uart_uart_sink_last", false,-1);
        tracep->declBus(c+1732,"sim uart_uart_sink_payload_data", false,-1, 7,0);
        tracep->declBit(c+36,"sim uart_uart_source_valid", false,-1);
        tracep->declBit(c+1728,"sim uart_uart_source_ready", false,-1);
        tracep->declBit(c+87,"sim uart_uart_source_first", false,-1);
        tracep->declBit(c+88,"sim uart_uart_source_last", false,-1);
        tracep->declBus(c+37,"sim uart_uart_source_payload_data", false,-1, 7,0);
        tracep->declBit(c+89,"sim uart_tx_fifo_sink_valid", false,-1);
        tracep->declBit(c+100,"sim uart_tx_fifo_sink_ready", false,-1);
        tracep->declBit(c+1788,"sim uart_tx_fifo_sink_first", false,-1);
        tracep->declBit(c+1788,"sim uart_tx_fifo_sink_last", false,-1);
        tracep->declBus(c+90,"sim uart_tx_fifo_sink_payload_data", false,-1, 7,0);
        tracep->declBit(c+36,"sim uart_tx_fifo_source_valid", false,-1);
        tracep->declBit(c+1728,"sim uart_tx_fifo_source_ready", false,-1);
        tracep->declBit(c+87,"sim uart_tx_fifo_source_first", false,-1);
        tracep->declBit(c+88,"sim uart_tx_fifo_source_last", false,-1);
        tracep->declBus(c+37,"sim uart_tx_fifo_source_payload_data", false,-1, 7,0);
        tracep->declBit(c+1728,"sim uart_tx_fifo_re", false,-1);
        tracep->declBit(c+36,"sim uart_tx_fifo_readable", false,-1);
        tracep->declBit(c+89,"sim uart_tx_fifo_syncfifo_we", false,-1);
        tracep->declBit(c+100,"sim uart_tx_fifo_syncfifo_writable", false,-1);
        tracep->declBit(c+1736,"sim uart_tx_fifo_syncfifo_re", false,-1);
        tracep->declBit(c+125,"sim uart_tx_fifo_syncfifo_readable", false,-1);
        tracep->declBus(c+126,"sim uart_tx_fifo_syncfifo_din", false,-1, 9,0);
        tracep->declBus(c+127,"sim uart_tx_fifo_syncfifo_dout", false,-1, 9,0);
        tracep->declBus(c+128,"sim uart_tx_fifo_level0", false,-1, 4,0);
        tracep->declBit(c+1788,"sim uart_tx_fifo_replace", false,-1);
        tracep->declBus(c+129,"sim uart_tx_fifo_produce", false,-1, 3,0);
        tracep->declBus(c+130,"sim uart_tx_fifo_consume", false,-1, 3,0);
        tracep->declBus(c+131,"sim uart_tx_fifo_wrport_adr", false,-1, 3,0);
        tracep->declBus(c+132,"sim uart_tx_fifo_wrport_dat_r", false,-1, 9,0);
        tracep->declBit(c+133,"sim uart_tx_fifo_wrport_we", false,-1);
        tracep->declBus(c+126,"sim uart_tx_fifo_wrport_dat_w", false,-1, 9,0);
        tracep->declBit(c+1737,"sim uart_tx_fifo_do_read", false,-1);
        tracep->declBus(c+130,"sim uart_tx_fifo_rdport_adr", false,-1, 3,0);
        tracep->declBus(c+127,"sim uart_tx_fifo_rdport_dat_r", false,-1, 9,0);
        tracep->declBit(c+1737,"sim uart_tx_fifo_rdport_re", false,-1);
        tracep->declBus(c+134,"sim uart_tx_fifo_level1", false,-1, 4,0);
        tracep->declBus(c+90,"sim uart_tx_fifo_fifo_in_payload_data", false,-1, 7,0);
        tracep->declBit(c+1788,"sim uart_tx_fifo_fifo_in_first", false,-1);
        tracep->declBit(c+1788,"sim uart_tx_fifo_fifo_in_last", false,-1);
        tracep->declBus(c+37,"sim uart_tx_fifo_fifo_out_payload_data", false,-1, 7,0);
        tracep->declBit(c+87,"sim uart_tx_fifo_fifo_out_first", false,-1);
        tracep->declBit(c+88,"sim uart_tx_fifo_fifo_out_last", false,-1);
        tracep->declBit(c+1730,"sim uart_rx_fifo_sink_valid", false,-1);
        tracep->declBit(c+38,"sim uart_rx_fifo_sink_ready", false,-1);
        tracep->declBit(c+1788,"sim uart_rx_fifo_sink_first", false,-1);
        tracep->declBit(c+1788,"sim uart_rx_fifo_sink_last", false,-1);
        tracep->declBus(c+1732,"sim uart_rx_fifo_sink_payload_data", false,-1, 7,0);
        tracep->declBit(c+104,"sim uart_rx_fifo_source_valid", false,-1);
        tracep->declBit(c+106,"sim uart_rx_fifo_source_ready", false,-1);
        tracep->declBit(c+135,"sim uart_rx_fifo_source_first", false,-1);
        tracep->declBit(c+136,"sim uart_rx_fifo_source_last", false,-1);
        tracep->declBus(c+92,"sim uart_rx_fifo_source_payload_data", false,-1, 7,0);
        tracep->declBit(c+106,"sim uart_rx_fifo_re", false,-1);
        tracep->declBit(c+104,"sim uart_rx_fifo_readable", false,-1);
        tracep->declBit(c+1730,"sim uart_rx_fifo_syncfifo_we", false,-1);
        tracep->declBit(c+38,"sim uart_rx_fifo_syncfifo_writable", false,-1);
        tracep->declBit(c+137,"sim uart_rx_fifo_syncfifo_re", false,-1);
        tracep->declBit(c+138,"sim uart_rx_fifo_syncfifo_readable", false,-1);
        tracep->declBus(c+1738,"sim uart_rx_fifo_syncfifo_din", false,-1, 9,0);
        tracep->declBus(c+139,"sim uart_rx_fifo_syncfifo_dout", false,-1, 9,0);
        tracep->declBus(c+140,"sim uart_rx_fifo_level0", false,-1, 4,0);
        tracep->declBit(c+1788,"sim uart_rx_fifo_replace", false,-1);
        tracep->declBus(c+141,"sim uart_rx_fifo_produce", false,-1, 3,0);
        tracep->declBus(c+142,"sim uart_rx_fifo_consume", false,-1, 3,0);
        tracep->declBus(c+143,"sim uart_rx_fifo_wrport_adr", false,-1, 3,0);
        tracep->declBus(c+144,"sim uart_rx_fifo_wrport_dat_r", false,-1, 9,0);
        tracep->declBit(c+1739,"sim uart_rx_fifo_wrport_we", false,-1);
        tracep->declBus(c+1738,"sim uart_rx_fifo_wrport_dat_w", false,-1, 9,0);
        tracep->declBit(c+145,"sim uart_rx_fifo_do_read", false,-1);
        tracep->declBus(c+142,"sim uart_rx_fifo_rdport_adr", false,-1, 3,0);
        tracep->declBus(c+139,"sim uart_rx_fifo_rdport_dat_r", false,-1, 9,0);
        tracep->declBit(c+145,"sim uart_rx_fifo_rdport_re", false,-1);
        tracep->declBus(c+146,"sim uart_rx_fifo_level1", false,-1, 4,0);
        tracep->declBus(c+1732,"sim uart_rx_fifo_fifo_in_payload_data", false,-1, 7,0);
        tracep->declBit(c+1788,"sim uart_rx_fifo_fifo_in_first", false,-1);
        tracep->declBit(c+1788,"sim uart_rx_fifo_fifo_in_last", false,-1);
        tracep->declBus(c+92,"sim uart_rx_fifo_fifo_out_payload_data", false,-1, 7,0);
        tracep->declBit(c+135,"sim uart_rx_fifo_fifo_out_first", false,-1);
        tracep->declBit(c+136,"sim uart_rx_fifo_fifo_out_last", false,-1);
        tracep->declBus(c+147,"sim timer_load_storage", false,-1, 31,0);
        tracep->declBit(c+148,"sim timer_load_re", false,-1);
        tracep->declBus(c+149,"sim timer_reload_storage", false,-1, 31,0);
        tracep->declBit(c+150,"sim timer_reload_re", false,-1);
        tracep->declBit(c+151,"sim timer_en_storage", false,-1);
        tracep->declBit(c+152,"sim timer_en_re", false,-1);
        tracep->declBit(c+153,"sim timer_update_value_storage", false,-1);
    }
}

void Vsim::traceInitSub1(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+154,"sim timer_update_value_re", false,-1);
        tracep->declBus(c+155,"sim timer_value_status", false,-1, 31,0);
        tracep->declBit(c+156,"sim timer_value_we", false,-1);
        tracep->declBit(c+157,"sim timer_value_re", false,-1);
        tracep->declBit(c+158,"sim timer_irq", false,-1);
        tracep->declBit(c+159,"sim timer_zero_status", false,-1);
        tracep->declBit(c+160,"sim timer_zero_pending", false,-1);
        tracep->declBit(c+159,"sim timer_zero_trigger", false,-1);
        tracep->declBit(c+161,"sim timer_zero_clear", false,-1);
        tracep->declBit(c+162,"sim timer_zero_trigger_d", false,-1);
        tracep->declBit(c+159,"sim timer_zero0", false,-1);
        tracep->declBit(c+159,"sim timer_status_status", false,-1);
        tracep->declBit(c+163,"sim timer_status_we", false,-1);
        tracep->declBit(c+164,"sim timer_status_re", false,-1);
        tracep->declBit(c+160,"sim timer_zero1", false,-1);
        tracep->declBit(c+160,"sim timer_pending_status", false,-1);
        tracep->declBit(c+165,"sim timer_pending_we", false,-1);
        tracep->declBit(c+166,"sim timer_pending_re", false,-1);
        tracep->declBit(c+167,"sim timer_pending_r", false,-1);
        tracep->declBit(c+168,"sim timer_zero2", false,-1);
        tracep->declBit(c+168,"sim timer_enable_storage", false,-1);
        tracep->declBit(c+169,"sim timer_enable_re", false,-1);
        tracep->declBus(c+170,"sim timer_value", false,-1, 31,0);
        tracep->declBus(c+171,"sim oe_storage", false,-1, 31,0);
        tracep->declBit(c+172,"sim oe_re", false,-1);
        tracep->declBus(c+173,"sim in_status", false,-1, 31,0);
        tracep->declBit(c+174,"sim in_we", false,-1);
        tracep->declBit(c+175,"sim in_re", false,-1);
        tracep->declBus(c+176,"sim out_storage", false,-1, 31,0);
        tracep->declBit(c+177,"sim out_re", false,-1);
        tracep->declBus(c+178,"sim mode_storage", false,-1, 31,0);
        tracep->declBit(c+179,"sim mode_re", false,-1);
        tracep->declBus(c+180,"sim edge_storage", false,-1, 31,0);
        tracep->declBit(c+181,"sim edge_re", false,-1);
        tracep->declBit(c+1788,"sim irq", false,-1);
        tracep->declBit(c+182,"sim in_pads_n_d0", false,-1);
        tracep->declBit(c+183,"sim eventsourceprocess0_status", false,-1);
        tracep->declBit(c+184,"sim eventsourceprocess0_pending", false,-1);
        tracep->declBit(c+183,"sim eventsourceprocess0_trigger", false,-1);
        tracep->declBit(c+2,"sim eventsourceprocess0_clear", false,-1);
        tracep->declBit(c+185,"sim eventsourceprocess0_trigger_d", false,-1);
        tracep->declBit(c+186,"sim in_pads_n_d1", false,-1);
        tracep->declBit(c+187,"sim eventsourceprocess1_status", false,-1);
        tracep->declBit(c+188,"sim eventsourceprocess1_pending", false,-1);
        tracep->declBit(c+187,"sim eventsourceprocess1_trigger", false,-1);
        tracep->declBit(c+3,"sim eventsourceprocess1_clear", false,-1);
        tracep->declBit(c+189,"sim eventsourceprocess1_trigger_d", false,-1);
        tracep->declBit(c+190,"sim in_pads_n_d2", false,-1);
        tracep->declBit(c+191,"sim eventsourceprocess2_status", false,-1);
        tracep->declBit(c+192,"sim eventsourceprocess2_pending", false,-1);
        tracep->declBit(c+191,"sim eventsourceprocess2_trigger", false,-1);
        tracep->declBit(c+4,"sim eventsourceprocess2_clear", false,-1);
        tracep->declBit(c+193,"sim eventsourceprocess2_trigger_d", false,-1);
        tracep->declBit(c+194,"sim in_pads_n_d3", false,-1);
        tracep->declBit(c+195,"sim eventsourceprocess3_status", false,-1);
        tracep->declBit(c+196,"sim eventsourceprocess3_pending", false,-1);
        tracep->declBit(c+195,"sim eventsourceprocess3_trigger", false,-1);
        tracep->declBit(c+5,"sim eventsourceprocess3_clear", false,-1);
        tracep->declBit(c+197,"sim eventsourceprocess3_trigger_d", false,-1);
        tracep->declBit(c+198,"sim in_pads_n_d4", false,-1);
        tracep->declBit(c+199,"sim eventsourceprocess4_status", false,-1);
        tracep->declBit(c+200,"sim eventsourceprocess4_pending", false,-1);
        tracep->declBit(c+199,"sim eventsourceprocess4_trigger", false,-1);
        tracep->declBit(c+6,"sim eventsourceprocess4_clear", false,-1);
        tracep->declBit(c+201,"sim eventsourceprocess4_trigger_d", false,-1);
        tracep->declBit(c+202,"sim in_pads_n_d5", false,-1);
        tracep->declBit(c+203,"sim eventsourceprocess5_status", false,-1);
        tracep->declBit(c+204,"sim eventsourceprocess5_pending", false,-1);
        tracep->declBit(c+203,"sim eventsourceprocess5_trigger", false,-1);
        tracep->declBit(c+7,"sim eventsourceprocess5_clear", false,-1);
        tracep->declBit(c+205,"sim eventsourceprocess5_trigger_d", false,-1);
        tracep->declBit(c+206,"sim in_pads_n_d6", false,-1);
        tracep->declBit(c+207,"sim eventsourceprocess6_status", false,-1);
        tracep->declBit(c+208,"sim eventsourceprocess6_pending", false,-1);
        tracep->declBit(c+207,"sim eventsourceprocess6_trigger", false,-1);
        tracep->declBit(c+8,"sim eventsourceprocess6_clear", false,-1);
        tracep->declBit(c+209,"sim eventsourceprocess6_trigger_d", false,-1);
        tracep->declBit(c+210,"sim in_pads_n_d7", false,-1);
        tracep->declBit(c+211,"sim eventsourceprocess7_status", false,-1);
        tracep->declBit(c+212,"sim eventsourceprocess7_pending", false,-1);
        tracep->declBit(c+211,"sim eventsourceprocess7_trigger", false,-1);
        tracep->declBit(c+9,"sim eventsourceprocess7_clear", false,-1);
        tracep->declBit(c+213,"sim eventsourceprocess7_trigger_d", false,-1);
        tracep->declBit(c+214,"sim in_pads_n_d8", false,-1);
        tracep->declBit(c+215,"sim eventsourceprocess8_status", false,-1);
        tracep->declBit(c+216,"sim eventsourceprocess8_pending", false,-1);
        tracep->declBit(c+215,"sim eventsourceprocess8_trigger", false,-1);
        tracep->declBit(c+10,"sim eventsourceprocess8_clear", false,-1);
        tracep->declBit(c+217,"sim eventsourceprocess8_trigger_d", false,-1);
        tracep->declBit(c+218,"sim in_pads_n_d9", false,-1);
        tracep->declBit(c+219,"sim eventsourceprocess9_status", false,-1);
        tracep->declBit(c+220,"sim eventsourceprocess9_pending", false,-1);
        tracep->declBit(c+219,"sim eventsourceprocess9_trigger", false,-1);
        tracep->declBit(c+11,"sim eventsourceprocess9_clear", false,-1);
        tracep->declBit(c+221,"sim eventsourceprocess9_trigger_d", false,-1);
        tracep->declBit(c+222,"sim in_pads_n_d10", false,-1);
        tracep->declBit(c+223,"sim eventsourceprocess10_status", false,-1);
        tracep->declBit(c+224,"sim eventsourceprocess10_pending", false,-1);
        tracep->declBit(c+223,"sim eventsourceprocess10_trigger", false,-1);
        tracep->declBit(c+12,"sim eventsourceprocess10_clear", false,-1);
        tracep->declBit(c+225,"sim eventsourceprocess10_trigger_d", false,-1);
        tracep->declBit(c+226,"sim in_pads_n_d11", false,-1);
        tracep->declBit(c+227,"sim eventsourceprocess11_status", false,-1);
        tracep->declBit(c+228,"sim eventsourceprocess11_pending", false,-1);
        tracep->declBit(c+227,"sim eventsourceprocess11_trigger", false,-1);
        tracep->declBit(c+13,"sim eventsourceprocess11_clear", false,-1);
        tracep->declBit(c+229,"sim eventsourceprocess11_trigger_d", false,-1);
        tracep->declBit(c+230,"sim in_pads_n_d12", false,-1);
        tracep->declBit(c+231,"sim eventsourceprocess12_status", false,-1);
        tracep->declBit(c+232,"sim eventsourceprocess12_pending", false,-1);
        tracep->declBit(c+231,"sim eventsourceprocess12_trigger", false,-1);
        tracep->declBit(c+14,"sim eventsourceprocess12_clear", false,-1);
        tracep->declBit(c+233,"sim eventsourceprocess12_trigger_d", false,-1);
        tracep->declBit(c+234,"sim in_pads_n_d13", false,-1);
        tracep->declBit(c+235,"sim eventsourceprocess13_status", false,-1);
        tracep->declBit(c+236,"sim eventsourceprocess13_pending", false,-1);
        tracep->declBit(c+235,"sim eventsourceprocess13_trigger", false,-1);
        tracep->declBit(c+15,"sim eventsourceprocess13_clear", false,-1);
        tracep->declBit(c+237,"sim eventsourceprocess13_trigger_d", false,-1);
        tracep->declBit(c+238,"sim in_pads_n_d14", false,-1);
        tracep->declBit(c+239,"sim eventsourceprocess14_status", false,-1);
        tracep->declBit(c+240,"sim eventsourceprocess14_pending", false,-1);
        tracep->declBit(c+239,"sim eventsourceprocess14_trigger", false,-1);
        tracep->declBit(c+16,"sim eventsourceprocess14_clear", false,-1);
        tracep->declBit(c+241,"sim eventsourceprocess14_trigger_d", false,-1);
        tracep->declBit(c+242,"sim in_pads_n_d15", false,-1);
        tracep->declBit(c+243,"sim eventsourceprocess15_status", false,-1);
        tracep->declBit(c+244,"sim eventsourceprocess15_pending", false,-1);
        tracep->declBit(c+243,"sim eventsourceprocess15_trigger", false,-1);
        tracep->declBit(c+17,"sim eventsourceprocess15_clear", false,-1);
        tracep->declBit(c+245,"sim eventsourceprocess15_trigger_d", false,-1);
        tracep->declBit(c+246,"sim in_pads_n_d16", false,-1);
        tracep->declBit(c+247,"sim eventsourceprocess16_status", false,-1);
        tracep->declBit(c+248,"sim eventsourceprocess16_pending", false,-1);
        tracep->declBit(c+247,"sim eventsourceprocess16_trigger", false,-1);
        tracep->declBit(c+18,"sim eventsourceprocess16_clear", false,-1);
        tracep->declBit(c+249,"sim eventsourceprocess16_trigger_d", false,-1);
        tracep->declBit(c+250,"sim in_pads_n_d17", false,-1);
        tracep->declBit(c+251,"sim eventsourceprocess17_status", false,-1);
        tracep->declBit(c+252,"sim eventsourceprocess17_pending", false,-1);
        tracep->declBit(c+251,"sim eventsourceprocess17_trigger", false,-1);
        tracep->declBit(c+19,"sim eventsourceprocess17_clear", false,-1);
        tracep->declBit(c+253,"sim eventsourceprocess17_trigger_d", false,-1);
        tracep->declBit(c+254,"sim in_pads_n_d18", false,-1);
        tracep->declBit(c+255,"sim eventsourceprocess18_status", false,-1);
        tracep->declBit(c+256,"sim eventsourceprocess18_pending", false,-1);
        tracep->declBit(c+255,"sim eventsourceprocess18_trigger", false,-1);
        tracep->declBit(c+20,"sim eventsourceprocess18_clear", false,-1);
        tracep->declBit(c+257,"sim eventsourceprocess18_trigger_d", false,-1);
        tracep->declBit(c+258,"sim in_pads_n_d19", false,-1);
        tracep->declBit(c+259,"sim eventsourceprocess19_status", false,-1);
        tracep->declBit(c+260,"sim eventsourceprocess19_pending", false,-1);
        tracep->declBit(c+259,"sim eventsourceprocess19_trigger", false,-1);
        tracep->declBit(c+21,"sim eventsourceprocess19_clear", false,-1);
        tracep->declBit(c+261,"sim eventsourceprocess19_trigger_d", false,-1);
        tracep->declBit(c+262,"sim in_pads_n_d20", false,-1);
        tracep->declBit(c+263,"sim eventsourceprocess20_status", false,-1);
        tracep->declBit(c+264,"sim eventsourceprocess20_pending", false,-1);
        tracep->declBit(c+263,"sim eventsourceprocess20_trigger", false,-1);
        tracep->declBit(c+22,"sim eventsourceprocess20_clear", false,-1);
        tracep->declBit(c+265,"sim eventsourceprocess20_trigger_d", false,-1);
        tracep->declBit(c+266,"sim in_pads_n_d21", false,-1);
        tracep->declBit(c+267,"sim eventsourceprocess21_status", false,-1);
        tracep->declBit(c+268,"sim eventsourceprocess21_pending", false,-1);
        tracep->declBit(c+267,"sim eventsourceprocess21_trigger", false,-1);
        tracep->declBit(c+23,"sim eventsourceprocess21_clear", false,-1);
        tracep->declBit(c+269,"sim eventsourceprocess21_trigger_d", false,-1);
        tracep->declBit(c+270,"sim in_pads_n_d22", false,-1);
        tracep->declBit(c+271,"sim eventsourceprocess22_status", false,-1);
        tracep->declBit(c+272,"sim eventsourceprocess22_pending", false,-1);
        tracep->declBit(c+271,"sim eventsourceprocess22_trigger", false,-1);
        tracep->declBit(c+24,"sim eventsourceprocess22_clear", false,-1);
        tracep->declBit(c+273,"sim eventsourceprocess22_trigger_d", false,-1);
        tracep->declBit(c+274,"sim in_pads_n_d23", false,-1);
        tracep->declBit(c+275,"sim eventsourceprocess23_status", false,-1);
        tracep->declBit(c+276,"sim eventsourceprocess23_pending", false,-1);
        tracep->declBit(c+275,"sim eventsourceprocess23_trigger", false,-1);
        tracep->declBit(c+25,"sim eventsourceprocess23_clear", false,-1);
        tracep->declBit(c+277,"sim eventsourceprocess23_trigger_d", false,-1);
        tracep->declBit(c+278,"sim in_pads_n_d24", false,-1);
        tracep->declBit(c+279,"sim eventsourceprocess24_status", false,-1);
        tracep->declBit(c+280,"sim eventsourceprocess24_pending", false,-1);
        tracep->declBit(c+279,"sim eventsourceprocess24_trigger", false,-1);
        tracep->declBit(c+26,"sim eventsourceprocess24_clear", false,-1);
        tracep->declBit(c+281,"sim eventsourceprocess24_trigger_d", false,-1);
        tracep->declBit(c+282,"sim in_pads_n_d25", false,-1);
        tracep->declBit(c+283,"sim eventsourceprocess25_status", false,-1);
        tracep->declBit(c+284,"sim eventsourceprocess25_pending", false,-1);
        tracep->declBit(c+283,"sim eventsourceprocess25_trigger", false,-1);
        tracep->declBit(c+27,"sim eventsourceprocess25_clear", false,-1);
        tracep->declBit(c+285,"sim eventsourceprocess25_trigger_d", false,-1);
        tracep->declBit(c+286,"sim in_pads_n_d26", false,-1);
        tracep->declBit(c+287,"sim eventsourceprocess26_status", false,-1);
        tracep->declBit(c+288,"sim eventsourceprocess26_pending", false,-1);
        tracep->declBit(c+287,"sim eventsourceprocess26_trigger", false,-1);
        tracep->declBit(c+28,"sim eventsourceprocess26_clear", false,-1);
        tracep->declBit(c+289,"sim eventsourceprocess26_trigger_d", false,-1);
        tracep->declBit(c+290,"sim in_pads_n_d27", false,-1);
        tracep->declBit(c+291,"sim eventsourceprocess27_status", false,-1);
        tracep->declBit(c+292,"sim eventsourceprocess27_pending", false,-1);
        tracep->declBit(c+291,"sim eventsourceprocess27_trigger", false,-1);
        tracep->declBit(c+29,"sim eventsourceprocess27_clear", false,-1);
        tracep->declBit(c+293,"sim eventsourceprocess27_trigger_d", false,-1);
        tracep->declBit(c+294,"sim in_pads_n_d28", false,-1);
        tracep->declBit(c+295,"sim eventsourceprocess28_status", false,-1);
        tracep->declBit(c+296,"sim eventsourceprocess28_pending", false,-1);
        tracep->declBit(c+295,"sim eventsourceprocess28_trigger", false,-1);
        tracep->declBit(c+30,"sim eventsourceprocess28_clear", false,-1);
        tracep->declBit(c+297,"sim eventsourceprocess28_trigger_d", false,-1);
        tracep->declBit(c+298,"sim in_pads_n_d29", false,-1);
        tracep->declBit(c+299,"sim eventsourceprocess29_status", false,-1);
        tracep->declBit(c+300,"sim eventsourceprocess29_pending", false,-1);
        tracep->declBit(c+299,"sim eventsourceprocess29_trigger", false,-1);
        tracep->declBit(c+31,"sim eventsourceprocess29_clear", false,-1);
        tracep->declBit(c+301,"sim eventsourceprocess29_trigger_d", false,-1);
        tracep->declBit(c+302,"sim in_pads_n_d30", false,-1);
        tracep->declBit(c+303,"sim eventsourceprocess30_status", false,-1);
        tracep->declBit(c+304,"sim eventsourceprocess30_pending", false,-1);
        tracep->declBit(c+303,"sim eventsourceprocess30_trigger", false,-1);
        tracep->declBit(c+32,"sim eventsourceprocess30_clear", false,-1);
        tracep->declBit(c+305,"sim eventsourceprocess30_trigger_d", false,-1);
        tracep->declBit(c+306,"sim in_pads_n_d31", false,-1);
        tracep->declBit(c+307,"sim eventsourceprocess31_status", false,-1);
        tracep->declBit(c+308,"sim eventsourceprocess31_pending", false,-1);
        tracep->declBit(c+307,"sim eventsourceprocess31_trigger", false,-1);
        tracep->declBit(c+33,"sim eventsourceprocess31_clear", false,-1);
        tracep->declBit(c+309,"sim eventsourceprocess31_trigger_d", false,-1);
        tracep->declBit(c+35,"sim sim_trace_storage", false,-1);
        tracep->declBit(c+310,"sim sim_trace_re", false,-1);
        tracep->declBus(c+311,"sim sim_marker_storage", false,-1, 7,0);
        tracep->declBit(c+312,"sim sim_marker_re", false,-1);
        tracep->declBit(c+313,"sim finish_re", false,-1);
        tracep->declBit(c+314,"sim finish_r", false,-1);
        tracep->declBit(c+315,"sim finish_we", false,-1);
        tracep->declBit(c+1788,"sim finish_w", false,-1);
        tracep->declBit(c+1726,"sim scope_clk", false,-1);
        tracep->declBit(c+1788,"sim scope_rst", false,-1);
        tracep->declBit(c+1790,"sim mux_valid", false,-1);
        tracep->declBit(c+316,"sim mux_ready", false,-1);
        tracep->declBit(c+1788,"sim mux_first", false,-1);
        tracep->declBit(c+1788,"sim mux_last", false,-1);
        tracep->declArray(c+317,"sim mux_payload_data", false,-1, 203,0);
        tracep->declBit(c+1788,"sim mux_payload_hit", false,-1);
        tracep->declBit(c+324,"sim mux_source_valid", false,-1);
        tracep->declBit(c+325,"sim mux_source_ready", false,-1);
        tracep->declBit(c+326,"sim mux_source_first", false,-1);
        tracep->declBit(c+327,"sim mux_source_last", false,-1);
        tracep->declArray(c+328,"sim mux_source_payload_data", false,-1, 203,0);
        tracep->declBit(c+335,"sim mux_source_payload_hit", false,-1);
        tracep->declBit(c+336,"sim mux_value_storage", false,-1);
        tracep->declBit(c+337,"sim mux_value_re", false,-1);
    }
}

void Vsim::traceInitSub2(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+338,"sim mux_value", false,-1);
        tracep->declBit(c+324,"sim trigger_sink_sink_valid", false,-1);
        tracep->declBit(c+325,"sim trigger_sink_sink_ready", false,-1);
        tracep->declBit(c+326,"sim trigger_sink_sink_first", false,-1);
        tracep->declBit(c+327,"sim trigger_sink_sink_last", false,-1);
        tracep->declArray(c+328,"sim trigger_sink_sink_payload_data", false,-1, 203,0);
        tracep->declBit(c+335,"sim trigger_sink_sink_payload_hit", false,-1);
        tracep->declBit(c+324,"sim trigger_source_source_valid", false,-1);
        tracep->declBit(c+325,"sim trigger_source_source_ready", false,-1);
        tracep->declBit(c+326,"sim trigger_source_source_first", false,-1);
        tracep->declBit(c+327,"sim trigger_source_source_last", false,-1);
        tracep->declArray(c+328,"sim trigger_source_source_payload_data", false,-1, 203,0);
        tracep->declBit(c+339,"sim trigger_source_source_payload_hit", false,-1);
        tracep->declBit(c+340,"sim trigger_enable_storage", false,-1);
        tracep->declBit(c+341,"sim trigger_enable_re", false,-1);
        tracep->declBit(c+342,"sim trigger_done_status", false,-1);
        tracep->declBit(c+343,"sim trigger_done_we", false,-1);
        tracep->declBit(c+344,"sim trigger_done_re", false,-1);
        tracep->declBit(c+345,"sim trigger_mem_write_re", false,-1);
        tracep->declBit(c+314,"sim trigger_mem_write_r", false,-1);
        tracep->declBit(c+346,"sim trigger_mem_write_we", false,-1);
        tracep->declBit(c+1788,"sim trigger_mem_write_w", false,-1);
        tracep->declArray(c+347,"sim trigger_mem_mask_storage", false,-1, 203,0);
        tracep->declBit(c+354,"sim trigger_mem_mask_re", false,-1);
        tracep->declArray(c+355,"sim trigger_mem_value_storage", false,-1, 203,0);
        tracep->declBit(c+362,"sim trigger_mem_value_re", false,-1);
        tracep->declBit(c+363,"sim trigger_mem_full_status", false,-1);
        tracep->declBit(c+364,"sim trigger_mem_full_we", false,-1);
        tracep->declBit(c+365,"sim trigger_mem_full_re", false,-1);
        tracep->declBit(c+366,"sim trigger_enable", false,-1);
        tracep->declBit(c+367,"sim trigger_enable_d", false,-1);
        tracep->declBit(c+368,"sim trigger_done0", false,-1);
        tracep->declBit(c+345,"sim trigger_mem_sink_valid", false,-1);
        tracep->declBit(c+369,"sim trigger_mem_sink_ready", false,-1);
        tracep->declBit(c+1788,"sim trigger_mem_sink_first", false,-1);
        tracep->declBit(c+1788,"sim trigger_mem_sink_last", false,-1);
        tracep->declArray(c+347,"sim trigger_mem_sink_payload_mask", false,-1, 203,0);
        tracep->declArray(c+355,"sim trigger_mem_sink_payload_value", false,-1, 203,0);
        tracep->declBit(c+370,"sim trigger_mem_source_valid", false,-1);
        tracep->declBit(c+371,"sim trigger_mem_source_ready", false,-1);
        tracep->declBit(c+372,"sim trigger_mem_source_first", false,-1);
        tracep->declBit(c+373,"sim trigger_mem_source_last", false,-1);
        tracep->declArray(c+374,"sim trigger_mem_source_payload_mask", false,-1, 203,0);
        tracep->declArray(c+381,"sim trigger_mem_source_payload_value", false,-1, 203,0);
        tracep->declBit(c+345,"sim trigger_mem_asyncfifo_we", false,-1);
        tracep->declBit(c+369,"sim trigger_mem_asyncfifo_writable", false,-1);
        tracep->declBit(c+371,"sim trigger_mem_asyncfifo_re", false,-1);
        tracep->declBit(c+370,"sim trigger_mem_asyncfifo_readable", false,-1);
        tracep->declArray(c+388,"sim trigger_mem_asyncfifo_din", false,-1, 409,0);
        tracep->declArray(c+401,"sim trigger_mem_asyncfifo_dout", false,-1, 409,0);
        tracep->declBit(c+414,"sim trigger_mem_graycounter0_ce", false,-1);
        tracep->declBus(c+415,"sim trigger_mem_graycounter0_q", false,-1, 4,0);
        tracep->declBus(c+416,"sim trigger_mem_graycounter0_q_next", false,-1, 4,0);
        tracep->declBus(c+417,"sim trigger_mem_graycounter0_q_binary", false,-1, 4,0);
        tracep->declBus(c+418,"sim trigger_mem_graycounter0_q_next_binary", false,-1, 4,0);
        tracep->declBit(c+419,"sim trigger_mem_graycounter1_ce", false,-1);
        tracep->declBus(c+420,"sim trigger_mem_graycounter1_q", false,-1, 4,0);
        tracep->declBus(c+421,"sim trigger_mem_graycounter1_q_next", false,-1, 4,0);
        tracep->declBus(c+422,"sim trigger_mem_graycounter1_q_binary", false,-1, 4,0);
        tracep->declBus(c+423,"sim trigger_mem_graycounter1_q_next_binary", false,-1, 4,0);
        tracep->declBus(c+424,"sim trigger_mem_produce_rdomain", false,-1, 4,0);
        tracep->declBus(c+425,"sim trigger_mem_consume_wdomain", false,-1, 4,0);
        tracep->declBus(c+426,"sim trigger_mem_wrport_adr", false,-1, 3,0);
        tracep->declArray(c+427,"sim trigger_mem_wrport_dat_r", false,-1, 409,0);
        tracep->declBit(c+414,"sim trigger_mem_wrport_we", false,-1);
        tracep->declArray(c+388,"sim trigger_mem_wrport_dat_w", false,-1, 409,0);
        tracep->declBus(c+440,"sim trigger_mem_rdport_adr", false,-1, 3,0);
        tracep->declArray(c+401,"sim trigger_mem_rdport_dat_r", false,-1, 409,0);
        tracep->declArray(c+347,"sim trigger_mem_fifo_in_payload_mask", false,-1, 203,0);
        tracep->declArray(c+355,"sim trigger_mem_fifo_in_payload_value", false,-1, 203,0);
        tracep->declBit(c+1788,"sim trigger_mem_fifo_in_first", false,-1);
        tracep->declBit(c+1788,"sim trigger_mem_fifo_in_last", false,-1);
        tracep->declArray(c+374,"sim trigger_mem_fifo_out_payload_mask", false,-1, 203,0);
        tracep->declArray(c+381,"sim trigger_mem_fifo_out_payload_value", false,-1, 203,0);
        tracep->declBit(c+372,"sim trigger_mem_fifo_out_first", false,-1);
        tracep->declBit(c+373,"sim trigger_mem_fifo_out_last", false,-1);
        tracep->declBit(c+441,"sim trigger_hit", false,-1);
        tracep->declBit(c+442,"sim trigger_wait", false,-1);
        tracep->declBit(c+443,"sim trigger_done1", false,-1);
        tracep->declBus(c+444,"sim trigger_count", false,-1, 5,0);
        tracep->declBit(c+324,"sim subsampler_sink_valid", false,-1);
        tracep->declBit(c+325,"sim subsampler_sink_ready", false,-1);
        tracep->declBit(c+326,"sim subsampler_sink_first", false,-1);
        tracep->declBit(c+327,"sim subsampler_sink_last", false,-1);
        tracep->declArray(c+328,"sim subsampler_sink_payload_data", false,-1, 203,0);
        tracep->declBit(c+339,"sim subsampler_sink_payload_hit", false,-1);
        tracep->declBit(c+445,"sim subsampler_source_valid", false,-1);
        tracep->declBit(c+325,"sim subsampler_source_ready", false,-1);
        tracep->declBit(c+326,"sim subsampler_source_first", false,-1);
        tracep->declBit(c+327,"sim subsampler_source_last", false,-1);
        tracep->declArray(c+328,"sim subsampler_source_payload_data", false,-1, 203,0);
        tracep->declBit(c+339,"sim subsampler_source_payload_hit", false,-1);
        tracep->declBus(c+446,"sim subsampler_value_storage", false,-1, 15,0);
        tracep->declBit(c+447,"sim subsampler_value_re", false,-1);
        tracep->declBus(c+448,"sim subsampler_value", false,-1, 15,0);
        tracep->declBus(c+449,"sim subsampler_counter", false,-1, 15,0);
        tracep->declBit(c+450,"sim subsampler_done", false,-1);
        tracep->declBit(c+445,"sim storage_sink_sink_valid", false,-1);
        tracep->declBit(c+325,"sim storage_sink_sink_ready", false,-1);
        tracep->declBit(c+326,"sim storage_sink_sink_first", false,-1);
        tracep->declBit(c+327,"sim storage_sink_sink_last", false,-1);
        tracep->declArray(c+328,"sim storage_sink_sink_payload_data", false,-1, 203,0);
        tracep->declBit(c+339,"sim storage_sink_sink_payload_hit", false,-1);
        tracep->declBit(c+451,"sim storage_enable_storage", false,-1);
        tracep->declBit(c+452,"sim storage_enable_re", false,-1);
        tracep->declBit(c+453,"sim storage_done_status", false,-1);
        tracep->declBit(c+454,"sim storage_done_we", false,-1);
        tracep->declBit(c+455,"sim storage_done_re", false,-1);
        tracep->declBus(c+456,"sim storage_length_storage", false,-1, 9,0);
        tracep->declBit(c+457,"sim storage_length_re", false,-1);
        tracep->declBus(c+458,"sim storage_offset_storage", false,-1, 9,0);
        tracep->declBit(c+459,"sim storage_offset_re", false,-1);
        tracep->declBus(c+460,"sim storage_mem_level_status", false,-1, 9,0);
        tracep->declBit(c+461,"sim storage_mem_level_we", false,-1);
        tracep->declBit(c+462,"sim storage_mem_level_re", false,-1);
        tracep->declBus(c+463,"sim storage_mem_data_status", false,-1, 31,0);
        tracep->declBit(c+464,"sim storage_mem_data_we", false,-1);
        tracep->declBit(c+465,"sim storage_mem_data_re", false,-1);
        tracep->declBit(c+466,"sim storage_enable", false,-1);
        tracep->declBit(c+467,"sim storage_enable_d", false,-1);
        tracep->declBus(c+468,"sim storage_length", false,-1, 9,0);
        tracep->declBus(c+469,"sim storage_offset", false,-1, 9,0);
        tracep->declBit(c+470,"sim storage_done0", false,-1);
        tracep->declBus(c+471,"sim storage_level", false,-1, 9,0);
        tracep->declBit(c+472,"sim storage_mem_sink_valid", false,-1);
        tracep->declBit(c+473,"sim storage_mem_sink_ready", false,-1);
        tracep->declBit(c+474,"sim storage_mem_sink_first", false,-1);
        tracep->declBit(c+475,"sim storage_mem_sink_last", false,-1);
        tracep->declArray(c+476,"sim storage_mem_sink_payload_data", false,-1, 203,0);
        tracep->declBit(c+483,"sim storage_mem_source_valid", false,-1);
        tracep->declBit(c+484,"sim storage_mem_source_ready", false,-1);
        tracep->declBit(c+485,"sim storage_mem_source_first", false,-1);
        tracep->declBit(c+486,"sim storage_mem_source_last", false,-1);
        tracep->declArray(c+487,"sim storage_mem_source_payload_data", false,-1, 203,0);
        tracep->declBit(c+484,"sim storage_mem_re", false,-1);
        tracep->declBit(c+483,"sim storage_mem_readable", false,-1);
        tracep->declBit(c+472,"sim storage_mem_syncfifo_we", false,-1);
        tracep->declBit(c+473,"sim storage_mem_syncfifo_writable", false,-1);
        tracep->declBit(c+494,"sim storage_mem_syncfifo_re", false,-1);
        tracep->declBit(c+495,"sim storage_mem_syncfifo_readable", false,-1);
        tracep->declArray(c+496,"sim storage_mem_syncfifo_din", false,-1, 205,0);
        tracep->declArray(c+503,"sim storage_mem_syncfifo_dout", false,-1, 205,0);
        tracep->declBus(c+510,"sim storage_mem_level0", false,-1, 9,0);
        tracep->declBit(c+1788,"sim storage_mem_replace", false,-1);
        tracep->declBus(c+511,"sim storage_mem_produce", false,-1, 8,0);
        tracep->declBus(c+512,"sim storage_mem_consume", false,-1, 8,0);
        tracep->declBus(c+513,"sim storage_mem_wrport_adr", false,-1, 8,0);
        tracep->declArray(c+514,"sim storage_mem_wrport_dat_r", false,-1, 205,0);
        tracep->declBit(c+521,"sim storage_mem_wrport_we", false,-1);
        tracep->declArray(c+496,"sim storage_mem_wrport_dat_w", false,-1, 205,0);
        tracep->declBit(c+522,"sim storage_mem_do_read", false,-1);
        tracep->declBus(c+512,"sim storage_mem_rdport_adr", false,-1, 8,0);
        tracep->declArray(c+503,"sim storage_mem_rdport_dat_r", false,-1, 205,0);
        tracep->declBit(c+522,"sim storage_mem_rdport_re", false,-1);
        tracep->declBus(c+471,"sim storage_mem_level1", false,-1, 9,0);
        tracep->declArray(c+476,"sim storage_mem_fifo_in_payload_data", false,-1, 203,0);
        tracep->declBit(c+474,"sim storage_mem_fifo_in_first", false,-1);
        tracep->declBit(c+475,"sim storage_mem_fifo_in_last", false,-1);
        tracep->declArray(c+487,"sim storage_mem_fifo_out_payload_data", false,-1, 203,0);
        tracep->declBit(c+485,"sim storage_mem_fifo_out_first", false,-1);
        tracep->declBit(c+486,"sim storage_mem_fifo_out_last", false,-1);
        tracep->declBit(c+523,"sim storage_cdc_sink_valid", false,-1);
        tracep->declBit(c+524,"sim storage_cdc_sink_ready", false,-1);
        tracep->declBit(c+525,"sim storage_cdc_sink_first", false,-1);
        tracep->declBit(c+526,"sim storage_cdc_sink_last", false,-1);
        tracep->declArray(c+527,"sim storage_cdc_sink_payload_data", false,-1, 203,0);
        tracep->declBit(c+534,"sim storage_cdc_source_valid", false,-1);
        tracep->declBit(c+535,"sim storage_cdc_source_ready", false,-1);
        tracep->declBit(c+536,"sim storage_cdc_source_first", false,-1);
        tracep->declBit(c+537,"sim storage_cdc_source_last", false,-1);
        tracep->declArray(c+538,"sim storage_cdc_source_payload_data", false,-1, 203,0);
        tracep->declBit(c+523,"sim storage_cdc_asyncfifo_we", false,-1);
        tracep->declBit(c+524,"sim storage_cdc_asyncfifo_writable", false,-1);
        tracep->declBit(c+535,"sim storage_cdc_asyncfifo_re", false,-1);
        tracep->declBit(c+534,"sim storage_cdc_asyncfifo_readable", false,-1);
        tracep->declArray(c+545,"sim storage_cdc_asyncfifo_din", false,-1, 205,0);
        tracep->declArray(c+552,"sim storage_cdc_asyncfifo_dout", false,-1, 205,0);
        tracep->declBit(c+559,"sim storage_cdc_graycounter0_ce", false,-1);
        tracep->declBus(c+560,"sim storage_cdc_graycounter0_q", false,-1, 2,0);
        tracep->declBus(c+561,"sim storage_cdc_graycounter0_q_next", false,-1, 2,0);
        tracep->declBus(c+562,"sim storage_cdc_graycounter0_q_binary", false,-1, 2,0);
        tracep->declBus(c+563,"sim storage_cdc_graycounter0_q_next_binary", false,-1, 2,0);
        tracep->declBit(c+564,"sim storage_cdc_graycounter1_ce", false,-1);
        tracep->declBus(c+565,"sim storage_cdc_graycounter1_q", false,-1, 2,0);
        tracep->declBus(c+566,"sim storage_cdc_graycounter1_q_next", false,-1, 2,0);
        tracep->declBus(c+567,"sim storage_cdc_graycounter1_q_binary", false,-1, 2,0);
        tracep->declBus(c+568,"sim storage_cdc_graycounter1_q_next_binary", false,-1, 2,0);
        tracep->declBus(c+569,"sim storage_cdc_produce_rdomain", false,-1, 2,0);
        tracep->declBus(c+570,"sim storage_cdc_consume_wdomain", false,-1, 2,0);
        tracep->declBus(c+571,"sim storage_cdc_wrport_adr", false,-1, 1,0);
        tracep->declArray(c+572,"sim storage_cdc_wrport_dat_r", false,-1, 205,0);
        tracep->declBit(c+559,"sim storage_cdc_wrport_we", false,-1);
        tracep->declArray(c+545,"sim storage_cdc_wrport_dat_w", false,-1, 205,0);
        tracep->declBus(c+579,"sim storage_cdc_rdport_adr", false,-1, 1,0);
        tracep->declArray(c+552,"sim storage_cdc_rdport_dat_r", false,-1, 205,0);
        tracep->declArray(c+527,"sim storage_cdc_fifo_in_payload_data", false,-1, 203,0);
        tracep->declBit(c+525,"sim storage_cdc_fifo_in_first", false,-1);
        tracep->declBit(c+526,"sim storage_cdc_fifo_in_last", false,-1);
        tracep->declArray(c+538,"sim storage_cdc_fifo_out_payload_data", false,-1, 203,0);
        tracep->declBit(c+536,"sim storage_cdc_fifo_out_first", false,-1);
        tracep->declBit(c+537,"sim storage_cdc_fifo_out_last", false,-1);
        tracep->declBit(c+580,"sim storage_wait", false,-1);
        tracep->declBit(c+581,"sim storage_done1", false,-1);
        tracep->declBus(c+582,"sim storage_count", false,-1, 9,0);
        tracep->declBit(c+534,"sim storage_read_source_valid", false,-1);
        tracep->declBit(c+583,"sim storage_read_source_ready", false,-1);
        tracep->declBit(c+584,"sim storage_read_source_first", false,-1);
        tracep->declBit(c+585,"sim storage_read_source_last", false,-1);
        tracep->declArray(c+586,"sim storage_read_source_payload_data", false,-1, 203,0);
        tracep->declBit(c+534,"sim storage_converter_sink_valid", false,-1);
        tracep->declBit(c+535,"sim storage_converter_sink_ready", false,-1);
        tracep->declBit(c+536,"sim storage_converter_sink_first", false,-1);
        tracep->declBit(c+537,"sim storage_converter_sink_last", false,-1);
        tracep->declArray(c+593,"sim storage_converter_sink_payload_data", false,-1, 223,0);
        tracep->declBit(c+534,"sim storage_converter_source_valid", false,-1);
        tracep->declBit(c+583,"sim storage_converter_source_ready", false,-1);
        tracep->declBit(c+584,"sim storage_converter_source_first", false,-1);
        tracep->declBit(c+585,"sim storage_converter_source_last", false,-1);
        tracep->declBus(c+463,"sim storage_converter_source_payload_data", false,-1, 31,0);
        tracep->declBit(c+600,"sim storage_converter_source_payload_valid_token_count", false,-1);
        tracep->declBus(c+601,"sim storage_converter_mux", false,-1, 2,0);
        tracep->declBit(c+602,"sim storage_converter_first", false,-1);
        tracep->declBit(c+600,"sim storage_converter_last", false,-1);
        tracep->declBit(c+534,"sim storage_source_source_valid", false,-1);
        tracep->declBit(c+583,"sim storage_source_source_ready", false,-1);
        tracep->declBit(c+584,"sim storage_source_source_first", false,-1);
        tracep->declBit(c+585,"sim storage_source_source_last", false,-1);
        tracep->declBus(c+463,"sim storage_source_source_payload_data", false,-1, 31,0);
        tracep->declBus(c+603,"sim simsoc_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim simsoc_we", false,-1);
        tracep->declBus(c+605,"sim simsoc_dat_w", false,-1, 31,0);
        tracep->declBus(c+606,"sim simsoc_dat_r", false,-1, 31,0);
        tracep->declBus(c+67,"sim simsoc_wishbone_adr", false,-1, 29,0);
        tracep->declBus(c+68,"sim simsoc_wishbone_dat_w", false,-1, 31,0);
        tracep->declBus(c+607,"sim simsoc_wishbone_dat_r", false,-1, 31,0);
        tracep->declBus(c+70,"sim simsoc_wishbone_sel", false,-1, 3,0);
        tracep->declBit(c+608,"sim simsoc_wishbone_cyc", false,-1);
        tracep->declBit(c+72,"sim simsoc_wishbone_stb", false,-1);
        tracep->declBit(c+609,"sim simsoc_wishbone_ack", false,-1);
        tracep->declBit(c+74,"sim simsoc_wishbone_we", false,-1);
        tracep->declBus(c+75,"sim simsoc_wishbone_cti", false,-1, 2,0);
        tracep->declBus(c+1,"sim simsoc_wishbone_bte", false,-1, 1,0);
        tracep->declBit(c+1788,"sim simsoc_wishbone_err", false,-1);
        tracep->declBus(c+67,"sim shared_adr", false,-1, 29,0);
        tracep->declBus(c+68,"sim shared_dat_w", false,-1, 31,0);
        tracep->declBus(c+55,"sim shared_dat_r", false,-1, 31,0);
        tracep->declBus(c+70,"sim shared_sel", false,-1, 3,0);
        tracep->declBit(c+610,"sim shared_cyc", false,-1);
        tracep->declBit(c+72,"sim shared_stb", false,-1);
        tracep->declBit(c+611,"sim shared_ack", false,-1);
        tracep->declBit(c+74,"sim shared_we", false,-1);
    }
}

void Vsim::traceInitSub3(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+75,"sim shared_cti", false,-1, 2,0);
        tracep->declBus(c+1,"sim shared_bte", false,-1, 1,0);
        tracep->declBit(c+1788,"sim shared_err", false,-1);
        tracep->declBus(c+612,"sim request", false,-1, 1,0);
        tracep->declBit(c+613,"sim grant", false,-1);
        tracep->declBus(c+614,"sim slave_sel", false,-1, 3,0);
        tracep->declBus(c+615,"sim slave_sel_r", false,-1, 3,0);
        tracep->declBit(c+51,"sim error", false,-1);
        tracep->declBit(c+616,"sim wait_1", false,-1);
        tracep->declBit(c+617,"sim done", false,-1);
        tracep->declBus(c+618,"sim count", false,-1, 19,0);
        tracep->declBus(c+603,"sim csr_bankarray_interface0_bank_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_interface0_bank_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_interface0_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+619,"sim csr_bankarray_interface0_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBit(c+620,"sim csr_bankarray_csrbank0_mux_value0_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank0_mux_value0_r", false,-1);
        tracep->declBit(c+621,"sim csr_bankarray_csrbank0_mux_value0_we", false,-1);
        tracep->declBit(c+336,"sim csr_bankarray_csrbank0_mux_value0_w", false,-1);
        tracep->declBit(c+622,"sim csr_bankarray_csrbank0_trigger_enable0_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank0_trigger_enable0_r", false,-1);
        tracep->declBit(c+623,"sim csr_bankarray_csrbank0_trigger_enable0_we", false,-1);
        tracep->declBit(c+340,"sim csr_bankarray_csrbank0_trigger_enable0_w", false,-1);
        tracep->declBit(c+624,"sim csr_bankarray_csrbank0_trigger_done_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank0_trigger_done_r", false,-1);
        tracep->declBit(c+343,"sim csr_bankarray_csrbank0_trigger_done_we", false,-1);
        tracep->declBit(c+342,"sim csr_bankarray_csrbank0_trigger_done_w", false,-1);
        tracep->declBit(c+625,"sim csr_bankarray_csrbank0_trigger_mem_mask6_re", false,-1);
        tracep->declBus(c+626,"sim csr_bankarray_csrbank0_trigger_mem_mask6_r", false,-1, 11,0);
        tracep->declBit(c+627,"sim csr_bankarray_csrbank0_trigger_mem_mask6_we", false,-1);
        tracep->declBus(c+628,"sim csr_bankarray_csrbank0_trigger_mem_mask6_w", false,-1, 11,0);
        tracep->declBit(c+629,"sim csr_bankarray_csrbank0_trigger_mem_mask5_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_mask5_r", false,-1, 31,0);
        tracep->declBit(c+630,"sim csr_bankarray_csrbank0_trigger_mem_mask5_we", false,-1);
        tracep->declBus(c+631,"sim csr_bankarray_csrbank0_trigger_mem_mask5_w", false,-1, 31,0);
        tracep->declBit(c+632,"sim csr_bankarray_csrbank0_trigger_mem_mask4_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_mask4_r", false,-1, 31,0);
        tracep->declBit(c+633,"sim csr_bankarray_csrbank0_trigger_mem_mask4_we", false,-1);
        tracep->declBus(c+634,"sim csr_bankarray_csrbank0_trigger_mem_mask4_w", false,-1, 31,0);
        tracep->declBit(c+635,"sim csr_bankarray_csrbank0_trigger_mem_mask3_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_mask3_r", false,-1, 31,0);
        tracep->declBit(c+636,"sim csr_bankarray_csrbank0_trigger_mem_mask3_we", false,-1);
        tracep->declBus(c+637,"sim csr_bankarray_csrbank0_trigger_mem_mask3_w", false,-1, 31,0);
        tracep->declBit(c+638,"sim csr_bankarray_csrbank0_trigger_mem_mask2_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_mask2_r", false,-1, 31,0);
        tracep->declBit(c+639,"sim csr_bankarray_csrbank0_trigger_mem_mask2_we", false,-1);
        tracep->declBus(c+640,"sim csr_bankarray_csrbank0_trigger_mem_mask2_w", false,-1, 31,0);
        tracep->declBit(c+641,"sim csr_bankarray_csrbank0_trigger_mem_mask1_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_mask1_r", false,-1, 31,0);
        tracep->declBit(c+642,"sim csr_bankarray_csrbank0_trigger_mem_mask1_we", false,-1);
        tracep->declBus(c+643,"sim csr_bankarray_csrbank0_trigger_mem_mask1_w", false,-1, 31,0);
        tracep->declBit(c+644,"sim csr_bankarray_csrbank0_trigger_mem_mask0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_mask0_r", false,-1, 31,0);
        tracep->declBit(c+645,"sim csr_bankarray_csrbank0_trigger_mem_mask0_we", false,-1);
        tracep->declBus(c+646,"sim csr_bankarray_csrbank0_trigger_mem_mask0_w", false,-1, 31,0);
        tracep->declBit(c+647,"sim csr_bankarray_csrbank0_trigger_mem_value6_re", false,-1);
        tracep->declBus(c+626,"sim csr_bankarray_csrbank0_trigger_mem_value6_r", false,-1, 11,0);
        tracep->declBit(c+648,"sim csr_bankarray_csrbank0_trigger_mem_value6_we", false,-1);
        tracep->declBus(c+649,"sim csr_bankarray_csrbank0_trigger_mem_value6_w", false,-1, 11,0);
        tracep->declBit(c+650,"sim csr_bankarray_csrbank0_trigger_mem_value5_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_value5_r", false,-1, 31,0);
        tracep->declBit(c+651,"sim csr_bankarray_csrbank0_trigger_mem_value5_we", false,-1);
        tracep->declBus(c+652,"sim csr_bankarray_csrbank0_trigger_mem_value5_w", false,-1, 31,0);
        tracep->declBit(c+653,"sim csr_bankarray_csrbank0_trigger_mem_value4_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_value4_r", false,-1, 31,0);
        tracep->declBit(c+654,"sim csr_bankarray_csrbank0_trigger_mem_value4_we", false,-1);
        tracep->declBus(c+655,"sim csr_bankarray_csrbank0_trigger_mem_value4_w", false,-1, 31,0);
        tracep->declBit(c+656,"sim csr_bankarray_csrbank0_trigger_mem_value3_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_value3_r", false,-1, 31,0);
        tracep->declBit(c+657,"sim csr_bankarray_csrbank0_trigger_mem_value3_we", false,-1);
        tracep->declBus(c+658,"sim csr_bankarray_csrbank0_trigger_mem_value3_w", false,-1, 31,0);
        tracep->declBit(c+659,"sim csr_bankarray_csrbank0_trigger_mem_value2_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_value2_r", false,-1, 31,0);
        tracep->declBit(c+660,"sim csr_bankarray_csrbank0_trigger_mem_value2_we", false,-1);
        tracep->declBus(c+661,"sim csr_bankarray_csrbank0_trigger_mem_value2_w", false,-1, 31,0);
        tracep->declBit(c+662,"sim csr_bankarray_csrbank0_trigger_mem_value1_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_value1_r", false,-1, 31,0);
        tracep->declBit(c+663,"sim csr_bankarray_csrbank0_trigger_mem_value1_we", false,-1);
        tracep->declBus(c+664,"sim csr_bankarray_csrbank0_trigger_mem_value1_w", false,-1, 31,0);
        tracep->declBit(c+665,"sim csr_bankarray_csrbank0_trigger_mem_value0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_trigger_mem_value0_r", false,-1, 31,0);
        tracep->declBit(c+666,"sim csr_bankarray_csrbank0_trigger_mem_value0_we", false,-1);
        tracep->declBus(c+667,"sim csr_bankarray_csrbank0_trigger_mem_value0_w", false,-1, 31,0);
        tracep->declBit(c+668,"sim csr_bankarray_csrbank0_trigger_mem_full_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank0_trigger_mem_full_r", false,-1);
        tracep->declBit(c+364,"sim csr_bankarray_csrbank0_trigger_mem_full_we", false,-1);
        tracep->declBit(c+363,"sim csr_bankarray_csrbank0_trigger_mem_full_w", false,-1);
        tracep->declBit(c+669,"sim csr_bankarray_csrbank0_subsampler_value0_re", false,-1);
        tracep->declBus(c+670,"sim csr_bankarray_csrbank0_subsampler_value0_r", false,-1, 15,0);
        tracep->declBit(c+671,"sim csr_bankarray_csrbank0_subsampler_value0_we", false,-1);
        tracep->declBus(c+446,"sim csr_bankarray_csrbank0_subsampler_value0_w", false,-1, 15,0);
        tracep->declBit(c+672,"sim csr_bankarray_csrbank0_storage_enable0_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank0_storage_enable0_r", false,-1);
        tracep->declBit(c+673,"sim csr_bankarray_csrbank0_storage_enable0_we", false,-1);
        tracep->declBit(c+451,"sim csr_bankarray_csrbank0_storage_enable0_w", false,-1);
        tracep->declBit(c+674,"sim csr_bankarray_csrbank0_storage_done_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank0_storage_done_r", false,-1);
        tracep->declBit(c+454,"sim csr_bankarray_csrbank0_storage_done_we", false,-1);
        tracep->declBit(c+453,"sim csr_bankarray_csrbank0_storage_done_w", false,-1);
        tracep->declBit(c+675,"sim csr_bankarray_csrbank0_storage_length0_re", false,-1);
        tracep->declBus(c+676,"sim csr_bankarray_csrbank0_storage_length0_r", false,-1, 9,0);
        tracep->declBit(c+677,"sim csr_bankarray_csrbank0_storage_length0_we", false,-1);
        tracep->declBus(c+456,"sim csr_bankarray_csrbank0_storage_length0_w", false,-1, 9,0);
        tracep->declBit(c+678,"sim csr_bankarray_csrbank0_storage_offset0_re", false,-1);
        tracep->declBus(c+676,"sim csr_bankarray_csrbank0_storage_offset0_r", false,-1, 9,0);
        tracep->declBit(c+679,"sim csr_bankarray_csrbank0_storage_offset0_we", false,-1);
        tracep->declBus(c+458,"sim csr_bankarray_csrbank0_storage_offset0_w", false,-1, 9,0);
        tracep->declBit(c+680,"sim csr_bankarray_csrbank0_storage_mem_level_re", false,-1);
        tracep->declBus(c+676,"sim csr_bankarray_csrbank0_storage_mem_level_r", false,-1, 9,0);
        tracep->declBit(c+461,"sim csr_bankarray_csrbank0_storage_mem_level_we", false,-1);
        tracep->declBus(c+460,"sim csr_bankarray_csrbank0_storage_mem_level_w", false,-1, 9,0);
        tracep->declBit(c+681,"sim csr_bankarray_csrbank0_storage_mem_data_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank0_storage_mem_data_r", false,-1, 31,0);
        tracep->declBit(c+464,"sim csr_bankarray_csrbank0_storage_mem_data_we", false,-1);
        tracep->declBus(c+463,"sim csr_bankarray_csrbank0_storage_mem_data_w", false,-1, 31,0);
        tracep->declBit(c+682,"sim csr_bankarray_csrbank0_sel", false,-1);
        tracep->declBus(c+603,"sim csr_bankarray_interface1_bank_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_interface1_bank_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_interface1_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+683,"sim csr_bankarray_interface1_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBit(c+684,"sim csr_bankarray_csrbank1_reset0_re", false,-1);
        tracep->declBus(c+685,"sim csr_bankarray_csrbank1_reset0_r", false,-1, 1,0);
        tracep->declBit(c+686,"sim csr_bankarray_csrbank1_reset0_we", false,-1);
        tracep->declBus(c+44,"sim csr_bankarray_csrbank1_reset0_w", false,-1, 1,0);
        tracep->declBit(c+687,"sim csr_bankarray_csrbank1_scratch0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank1_scratch0_r", false,-1, 31,0);
        tracep->declBit(c+688,"sim csr_bankarray_csrbank1_scratch0_we", false,-1);
        tracep->declBus(c+46,"sim csr_bankarray_csrbank1_scratch0_w", false,-1, 31,0);
        tracep->declBit(c+689,"sim csr_bankarray_csrbank1_bus_errors_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank1_bus_errors_r", false,-1, 31,0);
        tracep->declBit(c+49,"sim csr_bankarray_csrbank1_bus_errors_we", false,-1);
        tracep->declBus(c+48,"sim csr_bankarray_csrbank1_bus_errors_w", false,-1, 31,0);
        tracep->declBit(c+690,"sim csr_bankarray_csrbank1_sel", false,-1);
        tracep->declBus(c+603,"sim csr_bankarray_interface2_bank_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_interface2_bank_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_interface2_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+691,"sim csr_bankarray_interface2_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBit(c+692,"sim csr_bankarray_csrbank2_oe0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank2_oe0_r", false,-1, 31,0);
        tracep->declBit(c+693,"sim csr_bankarray_csrbank2_oe0_we", false,-1);
        tracep->declBus(c+171,"sim csr_bankarray_csrbank2_oe0_w", false,-1, 31,0);
        tracep->declBit(c+694,"sim csr_bankarray_csrbank2_in_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank2_in_r", false,-1, 31,0);
        tracep->declBit(c+174,"sim csr_bankarray_csrbank2_in_we", false,-1);
        tracep->declBus(c+173,"sim csr_bankarray_csrbank2_in_w", false,-1, 31,0);
        tracep->declBit(c+695,"sim csr_bankarray_csrbank2_out0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank2_out0_r", false,-1, 31,0);
        tracep->declBit(c+696,"sim csr_bankarray_csrbank2_out0_we", false,-1);
        tracep->declBus(c+176,"sim csr_bankarray_csrbank2_out0_w", false,-1, 31,0);
        tracep->declBit(c+697,"sim csr_bankarray_csrbank2_mode0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank2_mode0_r", false,-1, 31,0);
        tracep->declBit(c+698,"sim csr_bankarray_csrbank2_mode0_we", false,-1);
        tracep->declBus(c+178,"sim csr_bankarray_csrbank2_mode0_w", false,-1, 31,0);
        tracep->declBit(c+699,"sim csr_bankarray_csrbank2_edge0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank2_edge0_r", false,-1, 31,0);
        tracep->declBit(c+700,"sim csr_bankarray_csrbank2_edge0_we", false,-1);
        tracep->declBus(c+180,"sim csr_bankarray_csrbank2_edge0_w", false,-1, 31,0);
        tracep->declBit(c+701,"sim csr_bankarray_csrbank2_sel", false,-1);
        tracep->declBus(c+603,"sim csr_bankarray_sram_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_sram_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_sram_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+702,"sim csr_bankarray_sram_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+703,"sim csr_bankarray_adr", false,-1, 5,0);
        tracep->declBus(c+704,"sim csr_bankarray_dat_r", false,-1, 7,0);
        tracep->declBit(c+705,"sim csr_bankarray_sel", false,-1);
        tracep->declBit(c+706,"sim csr_bankarray_sel_r", false,-1);
        tracep->declBus(c+603,"sim csr_bankarray_interface3_bank_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_interface3_bank_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_interface3_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+707,"sim csr_bankarray_interface3_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBit(c+708,"sim csr_bankarray_csrbank3_sel", false,-1);
        tracep->declBus(c+603,"sim csr_bankarray_interface4_bank_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_interface4_bank_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_interface4_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+709,"sim csr_bankarray_interface4_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBit(c+710,"sim csr_bankarray_csrbank4_marker0_re", false,-1);
        tracep->declBus(c+90,"sim csr_bankarray_csrbank4_marker0_r", false,-1, 7,0);
        tracep->declBit(c+711,"sim csr_bankarray_csrbank4_marker0_we", false,-1);
        tracep->declBus(c+311,"sim csr_bankarray_csrbank4_marker0_w", false,-1, 7,0);
        tracep->declBit(c+712,"sim csr_bankarray_csrbank4_sel", false,-1);
        tracep->declBus(c+603,"sim csr_bankarray_interface5_bank_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_interface5_bank_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_interface5_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+713,"sim csr_bankarray_interface5_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBit(c+714,"sim csr_bankarray_csrbank5_enable0_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank5_enable0_r", false,-1);
        tracep->declBit(c+715,"sim csr_bankarray_csrbank5_enable0_we", false,-1);
        tracep->declBit(c+35,"sim csr_bankarray_csrbank5_enable0_w", false,-1);
        tracep->declBit(c+716,"sim csr_bankarray_csrbank5_sel", false,-1);
        tracep->declBus(c+603,"sim csr_bankarray_interface6_bank_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_interface6_bank_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_interface6_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+717,"sim csr_bankarray_interface6_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBit(c+718,"sim csr_bankarray_csrbank6_load0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank6_load0_r", false,-1, 31,0);
        tracep->declBit(c+719,"sim csr_bankarray_csrbank6_load0_we", false,-1);
        tracep->declBus(c+147,"sim csr_bankarray_csrbank6_load0_w", false,-1, 31,0);
        tracep->declBit(c+720,"sim csr_bankarray_csrbank6_reload0_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank6_reload0_r", false,-1, 31,0);
        tracep->declBit(c+721,"sim csr_bankarray_csrbank6_reload0_we", false,-1);
        tracep->declBus(c+149,"sim csr_bankarray_csrbank6_reload0_w", false,-1, 31,0);
        tracep->declBit(c+722,"sim csr_bankarray_csrbank6_en0_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank6_en0_r", false,-1);
        tracep->declBit(c+723,"sim csr_bankarray_csrbank6_en0_we", false,-1);
        tracep->declBit(c+151,"sim csr_bankarray_csrbank6_en0_w", false,-1);
        tracep->declBit(c+724,"sim csr_bankarray_csrbank6_update_value0_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank6_update_value0_r", false,-1);
        tracep->declBit(c+725,"sim csr_bankarray_csrbank6_update_value0_we", false,-1);
        tracep->declBit(c+153,"sim csr_bankarray_csrbank6_update_value0_w", false,-1);
        tracep->declBit(c+726,"sim csr_bankarray_csrbank6_value_re", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_csrbank6_value_r", false,-1, 31,0);
        tracep->declBit(c+156,"sim csr_bankarray_csrbank6_value_we", false,-1);
        tracep->declBus(c+155,"sim csr_bankarray_csrbank6_value_w", false,-1, 31,0);
        tracep->declBit(c+727,"sim csr_bankarray_csrbank6_ev_status_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank6_ev_status_r", false,-1);
        tracep->declBit(c+163,"sim csr_bankarray_csrbank6_ev_status_we", false,-1);
        tracep->declBit(c+159,"sim csr_bankarray_csrbank6_ev_status_w", false,-1);
        tracep->declBit(c+728,"sim csr_bankarray_csrbank6_ev_pending_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank6_ev_pending_r", false,-1);
        tracep->declBit(c+165,"sim csr_bankarray_csrbank6_ev_pending_we", false,-1);
        tracep->declBit(c+160,"sim csr_bankarray_csrbank6_ev_pending_w", false,-1);
        tracep->declBit(c+729,"sim csr_bankarray_csrbank6_ev_enable0_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank6_ev_enable0_r", false,-1);
        tracep->declBit(c+730,"sim csr_bankarray_csrbank6_ev_enable0_we", false,-1);
        tracep->declBit(c+168,"sim csr_bankarray_csrbank6_ev_enable0_w", false,-1);
        tracep->declBit(c+731,"sim csr_bankarray_csrbank6_sel", false,-1);
        tracep->declBus(c+603,"sim csr_bankarray_interface7_bank_bus_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_bankarray_interface7_bank_bus_we", false,-1);
        tracep->declBus(c+605,"sim csr_bankarray_interface7_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBus(c+732,"sim csr_bankarray_interface7_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBit(c+733,"sim csr_bankarray_csrbank7_txfull_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank7_txfull_r", false,-1);
        tracep->declBit(c+94,"sim csr_bankarray_csrbank7_txfull_we", false,-1);
        tracep->declBit(c+93,"sim csr_bankarray_csrbank7_txfull_w", false,-1);
        tracep->declBit(c+734,"sim csr_bankarray_csrbank7_rxempty_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank7_rxempty_r", false,-1);
        tracep->declBit(c+97,"sim csr_bankarray_csrbank7_rxempty_we", false,-1);
        tracep->declBit(c+96,"sim csr_bankarray_csrbank7_rxempty_w", false,-1);
        tracep->declBit(c+735,"sim csr_bankarray_csrbank7_ev_status_re", false,-1);
        tracep->declBus(c+685,"sim csr_bankarray_csrbank7_ev_status_r", false,-1, 1,0);
        tracep->declBit(c+109,"sim csr_bankarray_csrbank7_ev_status_we", false,-1);
        tracep->declBus(c+108,"sim csr_bankarray_csrbank7_ev_status_w", false,-1, 1,0);
        tracep->declBit(c+736,"sim csr_bankarray_csrbank7_ev_pending_re", false,-1);
        tracep->declBus(c+685,"sim csr_bankarray_csrbank7_ev_pending_r", false,-1, 1,0);
        tracep->declBit(c+112,"sim csr_bankarray_csrbank7_ev_pending_we", false,-1);
        tracep->declBus(c+111,"sim csr_bankarray_csrbank7_ev_pending_w", false,-1, 1,0);
        tracep->declBit(c+737,"sim csr_bankarray_csrbank7_ev_enable0_re", false,-1);
        tracep->declBus(c+685,"sim csr_bankarray_csrbank7_ev_enable0_r", false,-1, 1,0);
        tracep->declBit(c+738,"sim csr_bankarray_csrbank7_ev_enable0_we", false,-1);
        tracep->declBus(c+117,"sim csr_bankarray_csrbank7_ev_enable0_w", false,-1, 1,0);
        tracep->declBit(c+739,"sim csr_bankarray_csrbank7_txempty_re", false,-1);
    }
}

void Vsim::traceInitSub4(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+314,"sim csr_bankarray_csrbank7_txempty_r", false,-1);
        tracep->declBit(c+120,"sim csr_bankarray_csrbank7_txempty_we", false,-1);
        tracep->declBit(c+119,"sim csr_bankarray_csrbank7_txempty_w", false,-1);
        tracep->declBit(c+740,"sim csr_bankarray_csrbank7_rxfull_re", false,-1);
        tracep->declBit(c+314,"sim csr_bankarray_csrbank7_rxfull_r", false,-1);
        tracep->declBit(c+123,"sim csr_bankarray_csrbank7_rxfull_we", false,-1);
        tracep->declBit(c+122,"sim csr_bankarray_csrbank7_rxfull_w", false,-1);
        tracep->declBit(c+741,"sim csr_bankarray_csrbank7_sel", false,-1);
        tracep->declBus(c+603,"sim csr_interconnect_adr", false,-1, 13,0);
        tracep->declBit(c+604,"sim csr_interconnect_we", false,-1);
        tracep->declBus(c+605,"sim csr_interconnect_dat_w", false,-1, 31,0);
        tracep->declBus(c+606,"sim csr_interconnect_dat_r", false,-1, 31,0);
        tracep->declBit(c+183,"sim simsoc_i00", false,-1);
        tracep->declBit(c+187,"sim simsoc_i10", false,-1);
        tracep->declBit(c+191,"sim simsoc_i20", false,-1);
        tracep->declBit(c+195,"sim simsoc_i30", false,-1);
        tracep->declBit(c+199,"sim simsoc_i40", false,-1);
        tracep->declBit(c+203,"sim simsoc_i50", false,-1);
        tracep->declBit(c+207,"sim simsoc_i60", false,-1);
        tracep->declBit(c+211,"sim simsoc_i70", false,-1);
        tracep->declBit(c+215,"sim simsoc_i80", false,-1);
        tracep->declBit(c+219,"sim simsoc_i90", false,-1);
        tracep->declBit(c+223,"sim simsoc_i100", false,-1);
        tracep->declBit(c+227,"sim simsoc_i110", false,-1);
        tracep->declBit(c+231,"sim simsoc_i120", false,-1);
        tracep->declBit(c+235,"sim simsoc_i130", false,-1);
        tracep->declBit(c+239,"sim simsoc_i140", false,-1);
        tracep->declBit(c+243,"sim simsoc_i150", false,-1);
        tracep->declBit(c+247,"sim simsoc_i160", false,-1);
        tracep->declBit(c+251,"sim simsoc_i170", false,-1);
        tracep->declBit(c+255,"sim simsoc_i180", false,-1);
        tracep->declBit(c+259,"sim simsoc_i190", false,-1);
        tracep->declBit(c+263,"sim simsoc_i200", false,-1);
        tracep->declBit(c+267,"sim simsoc_i210", false,-1);
        tracep->declBit(c+271,"sim simsoc_i220", false,-1);
        tracep->declBit(c+275,"sim simsoc_i230", false,-1);
        tracep->declBit(c+279,"sim simsoc_i240", false,-1);
        tracep->declBit(c+283,"sim simsoc_i250", false,-1);
        tracep->declBit(c+287,"sim simsoc_i260", false,-1);
        tracep->declBit(c+291,"sim simsoc_i270", false,-1);
        tracep->declBit(c+295,"sim simsoc_i280", false,-1);
        tracep->declBit(c+299,"sim simsoc_i290", false,-1);
        tracep->declBit(c+303,"sim simsoc_i300", false,-1);
        tracep->declBit(c+307,"sim simsoc_i310", false,-1);
        tracep->declBit(c+184,"sim simsoc_i01", false,-1);
        tracep->declBit(c+188,"sim simsoc_i11", false,-1);
        tracep->declBit(c+192,"sim simsoc_i21", false,-1);
        tracep->declBit(c+196,"sim simsoc_i31", false,-1);
        tracep->declBit(c+200,"sim simsoc_i41", false,-1);
        tracep->declBit(c+204,"sim simsoc_i51", false,-1);
        tracep->declBit(c+208,"sim simsoc_i61", false,-1);
        tracep->declBit(c+212,"sim simsoc_i71", false,-1);
        tracep->declBit(c+216,"sim simsoc_i81", false,-1);
        tracep->declBit(c+220,"sim simsoc_i91", false,-1);
        tracep->declBit(c+224,"sim simsoc_i101", false,-1);
        tracep->declBit(c+228,"sim simsoc_i111", false,-1);
        tracep->declBit(c+232,"sim simsoc_i121", false,-1);
        tracep->declBit(c+236,"sim simsoc_i131", false,-1);
        tracep->declBit(c+240,"sim simsoc_i141", false,-1);
        tracep->declBit(c+244,"sim simsoc_i151", false,-1);
        tracep->declBit(c+248,"sim simsoc_i161", false,-1);
        tracep->declBit(c+252,"sim simsoc_i171", false,-1);
        tracep->declBit(c+256,"sim simsoc_i181", false,-1);
        tracep->declBit(c+260,"sim simsoc_i191", false,-1);
        tracep->declBit(c+264,"sim simsoc_i201", false,-1);
        tracep->declBit(c+268,"sim simsoc_i211", false,-1);
        tracep->declBit(c+272,"sim simsoc_i221", false,-1);
        tracep->declBit(c+276,"sim simsoc_i231", false,-1);
        tracep->declBit(c+280,"sim simsoc_i241", false,-1);
        tracep->declBit(c+284,"sim simsoc_i251", false,-1);
        tracep->declBit(c+288,"sim simsoc_i261", false,-1);
        tracep->declBit(c+292,"sim simsoc_i271", false,-1);
        tracep->declBit(c+296,"sim simsoc_i281", false,-1);
        tracep->declBit(c+300,"sim simsoc_i291", false,-1);
        tracep->declBit(c+304,"sim simsoc_i301", false,-1);
        tracep->declBit(c+308,"sim simsoc_i311", false,-1);
        tracep->declBus(c+1786,"sim simsoc_status", false,-1, 31,0);
        tracep->declBit(c+1788,"sim simsoc_re", false,-1);
        tracep->declBus(c+1786,"sim simsoc_r", false,-1, 31,0);
        tracep->declBus(c+1786,"sim simsoc_storage", false,-1, 31,0);
        tracep->declBus(c+742,"sim simsoc_litescopeanalyzer_state", false,-1, 1,0);
        tracep->declBus(c+743,"sim simsoc_litescopeanalyzer_next_state", false,-1, 1,0);
        tracep->declBit(c+744,"sim simsoc_wishbone2csr_state", false,-1);
        tracep->declBit(c+745,"sim simsoc_wishbone2csr_next_state", false,-1);
        tracep->declBus(c+67,"sim array_muxed0", false,-1, 29,0);
        tracep->declBus(c+68,"sim array_muxed1", false,-1, 31,0);
        tracep->declBus(c+70,"sim array_muxed2", false,-1, 3,0);
        tracep->declBit(c+610,"sim array_muxed3", false,-1);
        tracep->declBit(c+72,"sim array_muxed4", false,-1);
        tracep->declBit(c+74,"sim array_muxed5", false,-1);
        tracep->declBus(c+75,"sim array_muxed6", false,-1, 2,0);
        tracep->declBus(c+1,"sim array_muxed7", false,-1, 1,0);
        tracep->declBit(c+746,"sim multiregimpl0_regs0", false,-1);
        tracep->declBit(c+747,"sim multiregimpl0_regs1", false,-1);
        tracep->declBit(c+748,"sim multiregimpl1_regs0", false,-1);
        tracep->declBit(c+749,"sim multiregimpl1_regs1", false,-1);
        tracep->declBit(c+750,"sim multiregimpl2_regs0", false,-1);
        tracep->declBit(c+751,"sim multiregimpl2_regs1", false,-1);
        tracep->declBit(c+752,"sim multiregimpl3_regs0", false,-1);
        tracep->declBit(c+753,"sim multiregimpl3_regs1", false,-1);
        tracep->declBit(c+754,"sim multiregimpl4_regs0", false,-1);
        tracep->declBit(c+755,"sim multiregimpl4_regs1", false,-1);
        tracep->declBit(c+756,"sim multiregimpl5_regs0", false,-1);
        tracep->declBit(c+757,"sim multiregimpl5_regs1", false,-1);
        tracep->declBit(c+758,"sim multiregimpl6_regs0", false,-1);
        tracep->declBit(c+759,"sim multiregimpl6_regs1", false,-1);
        tracep->declBit(c+760,"sim multiregimpl7_regs0", false,-1);
        tracep->declBit(c+761,"sim multiregimpl7_regs1", false,-1);
        tracep->declBit(c+762,"sim multiregimpl8_regs0", false,-1);
        tracep->declBit(c+763,"sim multiregimpl8_regs1", false,-1);
        tracep->declBit(c+764,"sim multiregimpl9_regs0", false,-1);
        tracep->declBit(c+765,"sim multiregimpl9_regs1", false,-1);
        tracep->declBit(c+766,"sim multiregimpl10_regs0", false,-1);
        tracep->declBit(c+767,"sim multiregimpl10_regs1", false,-1);
        tracep->declBit(c+768,"sim multiregimpl11_regs0", false,-1);
        tracep->declBit(c+769,"sim multiregimpl11_regs1", false,-1);
        tracep->declBit(c+770,"sim multiregimpl12_regs0", false,-1);
        tracep->declBit(c+771,"sim multiregimpl12_regs1", false,-1);
        tracep->declBit(c+772,"sim multiregimpl13_regs0", false,-1);
        tracep->declBit(c+773,"sim multiregimpl13_regs1", false,-1);
        tracep->declBit(c+774,"sim multiregimpl14_regs0", false,-1);
        tracep->declBit(c+775,"sim multiregimpl14_regs1", false,-1);
        tracep->declBit(c+776,"sim multiregimpl15_regs0", false,-1);
        tracep->declBit(c+777,"sim multiregimpl15_regs1", false,-1);
        tracep->declBit(c+778,"sim multiregimpl16_regs0", false,-1);
        tracep->declBit(c+779,"sim multiregimpl16_regs1", false,-1);
        tracep->declBit(c+780,"sim multiregimpl17_regs0", false,-1);
        tracep->declBit(c+781,"sim multiregimpl17_regs1", false,-1);
        tracep->declBit(c+782,"sim multiregimpl18_regs0", false,-1);
        tracep->declBit(c+783,"sim multiregimpl18_regs1", false,-1);
        tracep->declBit(c+784,"sim multiregimpl19_regs0", false,-1);
        tracep->declBit(c+785,"sim multiregimpl19_regs1", false,-1);
        tracep->declBit(c+786,"sim multiregimpl20_regs0", false,-1);
        tracep->declBit(c+787,"sim multiregimpl20_regs1", false,-1);
        tracep->declBit(c+788,"sim multiregimpl21_regs0", false,-1);
        tracep->declBit(c+789,"sim multiregimpl21_regs1", false,-1);
        tracep->declBit(c+790,"sim multiregimpl22_regs0", false,-1);
        tracep->declBit(c+791,"sim multiregimpl22_regs1", false,-1);
        tracep->declBit(c+792,"sim multiregimpl23_regs0", false,-1);
        tracep->declBit(c+793,"sim multiregimpl23_regs1", false,-1);
        tracep->declBit(c+794,"sim multiregimpl24_regs0", false,-1);
        tracep->declBit(c+795,"sim multiregimpl24_regs1", false,-1);
        tracep->declBit(c+796,"sim multiregimpl25_regs0", false,-1);
        tracep->declBit(c+797,"sim multiregimpl25_regs1", false,-1);
        tracep->declBit(c+798,"sim multiregimpl26_regs0", false,-1);
        tracep->declBit(c+799,"sim multiregimpl26_regs1", false,-1);
        tracep->declBit(c+800,"sim multiregimpl27_regs0", false,-1);
        tracep->declBit(c+801,"sim multiregimpl27_regs1", false,-1);
        tracep->declBit(c+802,"sim multiregimpl28_regs0", false,-1);
        tracep->declBit(c+803,"sim multiregimpl28_regs1", false,-1);
        tracep->declBit(c+804,"sim multiregimpl29_regs0", false,-1);
        tracep->declBit(c+805,"sim multiregimpl29_regs1", false,-1);
        tracep->declBit(c+806,"sim multiregimpl30_regs0", false,-1);
        tracep->declBit(c+807,"sim multiregimpl30_regs1", false,-1);
        tracep->declBit(c+808,"sim multiregimpl31_regs0", false,-1);
        tracep->declBit(c+809,"sim multiregimpl31_regs1", false,-1);
        tracep->declBit(c+810,"sim multiregimpl32_regs0", false,-1);
        tracep->declBit(c+338,"sim multiregimpl32_regs1", false,-1);
        tracep->declBit(c+811,"sim multiregimpl33_regs0", false,-1);
        tracep->declBit(c+366,"sim multiregimpl33_regs1", false,-1);
        tracep->declBit(c+812,"sim multiregimpl34_regs0", false,-1);
        tracep->declBit(c+342,"sim multiregimpl34_regs1", false,-1);
        tracep->declBus(c+813,"sim multiregimpl35_regs0", false,-1, 4,0);
        tracep->declBus(c+424,"sim multiregimpl35_regs1", false,-1, 4,0);
        tracep->declBus(c+814,"sim multiregimpl36_regs0", false,-1, 4,0);
        tracep->declBus(c+425,"sim multiregimpl36_regs1", false,-1, 4,0);
        tracep->declBus(c+815,"sim multiregimpl37_regs0", false,-1, 15,0);
        tracep->declBus(c+448,"sim multiregimpl37_regs1", false,-1, 15,0);
        tracep->declBit(c+816,"sim multiregimpl38_regs0", false,-1);
        tracep->declBit(c+466,"sim multiregimpl38_regs1", false,-1);
        tracep->declBus(c+817,"sim multiregimpl39_regs0", false,-1, 9,0);
        tracep->declBus(c+468,"sim multiregimpl39_regs1", false,-1, 9,0);
        tracep->declBus(c+818,"sim multiregimpl40_regs0", false,-1, 9,0);
        tracep->declBus(c+469,"sim multiregimpl40_regs1", false,-1, 9,0);
        tracep->declBit(c+819,"sim multiregimpl41_regs0", false,-1);
        tracep->declBit(c+453,"sim multiregimpl41_regs1", false,-1);
        tracep->declBus(c+820,"sim multiregimpl42_regs0", false,-1, 9,0);
        tracep->declBus(c+460,"sim multiregimpl42_regs1", false,-1, 9,0);
        tracep->declBus(c+821,"sim multiregimpl43_regs0", false,-1, 2,0);
        tracep->declBus(c+569,"sim multiregimpl43_regs1", false,-1, 2,0);
        tracep->declBus(c+822,"sim multiregimpl44_regs0", false,-1, 2,0);
        tracep->declBus(c+570,"sim multiregimpl44_regs1", false,-1, 2,0);
        tracep->declBus(c+69,"sim rom_dat0", false,-1, 31,0);
        tracep->declBus(c+823,"sim sram_adr0", false,-1, 10,0);
        tracep->declBus(c+824,"sim main_ram_adr0", false,-1, 13,0);
        tracep->declBus(c+825,"sim mem_adr0", false,-1, 5,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+826+i*1,"sim storage", true,(i+0), 9,0);}}
        tracep->declBus(c+132,"sim storage_dat0", false,-1, 9,0);
        tracep->declBus(c+127,"sim storage_dat1", false,-1, 9,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+842+i*1,"sim storage_1", true,(i+0), 9,0);}}
        tracep->declBus(c+144,"sim storage_1_dat0", false,-1, 9,0);
        tracep->declBus(c+139,"sim storage_1_dat1", false,-1, 9,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declArray(c+858+i*13,"sim storage_2", true,(i+0), 409,0);}}
        tracep->declArray(c+427,"sim storage_2_dat0", false,-1, 409,0);
        tracep->declArray(c+401,"sim storage_2_dat1", false,-1, 409,0);
        tracep->declArray(c+514,"sim storage_3_dat0", false,-1, 205,0);
        tracep->declArray(c+503,"sim storage_3_dat1", false,-1, 205,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1066+i*7,"sim storage_4", true,(i+0), 205,0);}}
        tracep->declArray(c+572,"sim storage_4_dat0", false,-1, 205,0);
        tracep->declArray(c+552,"sim storage_4_dat1", false,-1, 205,0);
        tracep->declBus(c+1786,"sim VexRiscv externalResetVector", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv timerInterrupt", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv softwareInterrupt", false,-1);
        tracep->declBus(c+53,"sim VexRiscv externalInterruptArray", false,-1, 31,0);
        tracep->declBit(c+56,"sim VexRiscv iBusWishbone_CYC", false,-1);
        tracep->declBit(c+57,"sim VexRiscv iBusWishbone_STB", false,-1);
        tracep->declBit(c+58,"sim VexRiscv iBusWishbone_ACK", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv iBusWishbone_WE", false,-1);
        tracep->declBus(c+54,"sim VexRiscv iBusWishbone_ADR", false,-1, 29,0);
        tracep->declBus(c+55,"sim VexRiscv iBusWishbone_DAT_MISO", false,-1, 31,0);
        tracep->declBus(c+1786,"sim VexRiscv iBusWishbone_DAT_MOSI", false,-1, 31,0);
        tracep->declBus(c+1787,"sim VexRiscv iBusWishbone_SEL", false,-1, 3,0);
        tracep->declBit(c+1788,"sim VexRiscv iBusWishbone_ERR", false,-1);
        tracep->declBus(c+59,"sim VexRiscv iBusWishbone_CTI", false,-1, 2,0);
        tracep->declBus(c+1789,"sim VexRiscv iBusWishbone_BTE", false,-1, 1,0);
        tracep->declBit(c+63,"sim VexRiscv dBusWishbone_CYC", false,-1);
        tracep->declBit(c+63,"sim VexRiscv dBusWishbone_STB", false,-1);
        tracep->declBit(c+64,"sim VexRiscv dBusWishbone_ACK", false,-1);
        tracep->declBit(c+65,"sim VexRiscv dBusWishbone_WE", false,-1);
        tracep->declBus(c+60,"sim VexRiscv dBusWishbone_ADR", false,-1, 29,0);
        tracep->declBus(c+55,"sim VexRiscv dBusWishbone_DAT_MISO", false,-1, 31,0);
        tracep->declBus(c+61,"sim VexRiscv dBusWishbone_DAT_MOSI", false,-1, 31,0);
        tracep->declBus(c+62,"sim VexRiscv dBusWishbone_SEL", false,-1, 3,0);
        tracep->declBit(c+1788,"sim VexRiscv dBusWishbone_ERR", false,-1);
        tracep->declBus(c+66,"sim VexRiscv dBusWishbone_CTI", false,-1, 2,0);
        tracep->declBus(c+1789,"sim VexRiscv dBusWishbone_BTE", false,-1, 1,0);
        tracep->declBit(c+1726,"sim VexRiscv clk", false,-1);
        tracep->declBit(c+1094,"sim VexRiscv reset", false,-1);
        tracep->declBus(c+1789,"sim VexRiscv ShiftCtrlEnum_DISABLE_1", false,-1, 1,0);
        tracep->declBus(c+1791,"sim VexRiscv ShiftCtrlEnum_SLL_1", false,-1, 1,0);
        tracep->declBus(c+1792,"sim VexRiscv ShiftCtrlEnum_SRL_1", false,-1, 1,0);
        tracep->declBus(c+1793,"sim VexRiscv ShiftCtrlEnum_SRA_1", false,-1, 1,0);
        tracep->declBus(c+1789,"sim VexRiscv EnvCtrlEnum_NONE", false,-1, 1,0);
        tracep->declBus(c+1791,"sim VexRiscv EnvCtrlEnum_XRET", false,-1, 1,0);
        tracep->declBus(c+1792,"sim VexRiscv EnvCtrlEnum_ECALL", false,-1, 1,0);
        tracep->declBus(c+1789,"sim VexRiscv BranchCtrlEnum_INC", false,-1, 1,0);
        tracep->declBus(c+1791,"sim VexRiscv BranchCtrlEnum_B", false,-1, 1,0);
        tracep->declBus(c+1792,"sim VexRiscv BranchCtrlEnum_JAL", false,-1, 1,0);
        tracep->declBus(c+1793,"sim VexRiscv BranchCtrlEnum_JALR", false,-1, 1,0);
        tracep->declBus(c+1789,"sim VexRiscv AluBitwiseCtrlEnum_XOR_1", false,-1, 1,0);
        tracep->declBus(c+1791,"sim VexRiscv AluBitwiseCtrlEnum_OR_1", false,-1, 1,0);
        tracep->declBus(c+1792,"sim VexRiscv AluBitwiseCtrlEnum_AND_1", false,-1, 1,0);
        tracep->declBus(c+1789,"sim VexRiscv Src2CtrlEnum_RS", false,-1, 1,0);
        tracep->declBus(c+1791,"sim VexRiscv Src2CtrlEnum_IMI", false,-1, 1,0);
        tracep->declBus(c+1792,"sim VexRiscv Src2CtrlEnum_IMS", false,-1, 1,0);
        tracep->declBus(c+1793,"sim VexRiscv Src2CtrlEnum_PC", false,-1, 1,0);
        tracep->declBus(c+1789,"sim VexRiscv AluCtrlEnum_ADD_SUB", false,-1, 1,0);
        tracep->declBus(c+1791,"sim VexRiscv AluCtrlEnum_SLT_SLTU", false,-1, 1,0);
        tracep->declBus(c+1792,"sim VexRiscv AluCtrlEnum_BITWISE", false,-1, 1,0);
        tracep->declBus(c+1789,"sim VexRiscv Src1CtrlEnum_RS", false,-1, 1,0);
        tracep->declBus(c+1791,"sim VexRiscv Src1CtrlEnum_IMU", false,-1, 1,0);
    }
}

void Vsim::traceInitSub5(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1792,"sim VexRiscv Src1CtrlEnum_PC_INCREMENT", false,-1, 1,0);
        tracep->declBus(c+1793,"sim VexRiscv Src1CtrlEnum_URS1", false,-1, 1,0);
        tracep->declBit(c+1095,"sim VexRiscv IBusCachedPlugin_cache_io_flush", false,-1);
        tracep->declBit(c+1096,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_prefetch_isValid", false,-1);
        tracep->declBit(c+1097,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_isValid", false,-1);
        tracep->declBit(c+1098,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_isStuck", false,-1);
        tracep->declBit(c+1794,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_isRemoved", false,-1);
        tracep->declBit(c+1099,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_isValid", false,-1);
        tracep->declBit(c+1098,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_isStuck", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_isUser", false,-1);
        tracep->declBit(c+1100,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fill_valid", false,-1);
        tracep->declBit(c+1101,"sim VexRiscv dataCache_1_io_cpu_execute_isValid", false,-1);
        tracep->declBus(c+1102,"sim VexRiscv dataCache_1_io_cpu_execute_address", false,-1, 31,0);
        tracep->declBit(c+1103,"sim VexRiscv dataCache_1_io_cpu_memory_isValid", false,-1);
        tracep->declBus(c+1104,"sim VexRiscv dataCache_1_io_cpu_memory_address", false,-1, 31,0);
        tracep->declBit(c+1105,"sim VexRiscv dataCache_1_io_cpu_memory_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+1106,"sim VexRiscv dataCache_1_io_cpu_writeBack_isValid", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1_io_cpu_writeBack_isUser", false,-1);
        tracep->declBus(c+1107,"sim VexRiscv dataCache_1_io_cpu_writeBack_storeData", false,-1, 31,0);
        tracep->declBus(c+1108,"sim VexRiscv dataCache_1_io_cpu_writeBack_address", false,-1, 31,0);
        tracep->declBit(c+1795,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_SW", false,-1);
        tracep->declBit(c+1796,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_SR", false,-1);
        tracep->declBit(c+1797,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_SO", false,-1);
        tracep->declBit(c+1798,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_SI", false,-1);
        tracep->declBit(c+1799,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_PW", false,-1);
        tracep->declBit(c+1800,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_PR", false,-1);
        tracep->declBit(c+1801,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_PO", false,-1);
        tracep->declBit(c+1802,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_PI", false,-1);
        tracep->declBus(c+1803,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_FM", false,-1, 3,0);
        tracep->declBit(c+1109,"sim VexRiscv dataCache_1_io_cpu_flush_valid", false,-1);
        tracep->declBit(c+1110,"sim VexRiscv dataCache_1_io_cpu_flush_payload_singleLine", false,-1);
        tracep->declBus(c+1111,"sim VexRiscv dataCache_1_io_cpu_flush_payload_lineId", false,-1, 6,0);
        tracep->declBit(c+1112,"sim VexRiscv dataCache_1_io_mem_cmd_ready", false,-1);
        tracep->declBit(c+1113,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_prefetch_haltIt", false,-1);
        tracep->declBus(c+1114,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_data", false,-1, 31,0);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+1115,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_error", false,-1);
        tracep->declBit(c+1116,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_mmuRefilling", false,-1);
        tracep->declBit(c+1117,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_mmuException", false,-1);
        tracep->declBus(c+1118,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_data", false,-1, 31,0);
        tracep->declBit(c+1119,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_cacheMiss", false,-1);
        tracep->declBus(c+1120,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+1121,"sim VexRiscv IBusCachedPlugin_cache_io_mem_cmd_valid", false,-1);
        tracep->declBus(c+1122,"sim VexRiscv IBusCachedPlugin_cache_io_mem_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+1804,"sim VexRiscv IBusCachedPlugin_cache_io_mem_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+1123,"sim VexRiscv dataCache_1_io_cpu_execute_haltIt", false,-1);
        tracep->declBit(c+1124,"sim VexRiscv dataCache_1_io_cpu_execute_refilling", false,-1);
        tracep->declBit(c+1125,"sim VexRiscv dataCache_1_io_cpu_memory_isWrite", false,-1);
        tracep->declBit(c+1126,"sim VexRiscv dataCache_1_io_cpu_writeBack_haltIt", false,-1);
        tracep->declBus(c+1127,"sim VexRiscv dataCache_1_io_cpu_writeBack_data", false,-1, 31,0);
        tracep->declBit(c+1128,"sim VexRiscv dataCache_1_io_cpu_writeBack_mmuException", false,-1);
        tracep->declBit(c+1129,"sim VexRiscv dataCache_1_io_cpu_writeBack_unalignedAccess", false,-1);
        tracep->declBit(c+1130,"sim VexRiscv dataCache_1_io_cpu_writeBack_accessError", false,-1);
        tracep->declBit(c+1131,"sim VexRiscv dataCache_1_io_cpu_writeBack_isWrite", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1_io_cpu_writeBack_keepMemRspData", false,-1);
        tracep->declBit(c+1805,"sim VexRiscv dataCache_1_io_cpu_writeBack_exclusiveOk", false,-1);
        tracep->declBit(c+1132,"sim VexRiscv dataCache_1_io_cpu_flush_ready", false,-1);
        tracep->declBit(c+1133,"sim VexRiscv dataCache_1_io_cpu_redo", false,-1);
        tracep->declBit(c+1134,"sim VexRiscv dataCache_1_io_mem_cmd_valid", false,-1);
        tracep->declBit(c+1135,"sim VexRiscv dataCache_1_io_mem_cmd_payload_wr", false,-1);
        tracep->declBit(c+1136,"sim VexRiscv dataCache_1_io_mem_cmd_payload_uncached", false,-1);
        tracep->declBus(c+1137,"sim VexRiscv dataCache_1_io_mem_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+1107,"sim VexRiscv dataCache_1_io_mem_cmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+1138,"sim VexRiscv dataCache_1_io_mem_cmd_payload_mask", false,-1, 3,0);
        tracep->declBus(c+1139,"sim VexRiscv dataCache_1_io_mem_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+1790,"sim VexRiscv dataCache_1_io_mem_cmd_payload_last", false,-1);
        tracep->declQuad(c+1140,"sim VexRiscv memory_MUL_LOW", false,-1, 51,0);
        tracep->declQuad(c+1142,"sim VexRiscv memory_MUL_HH", false,-1, 33,0);
        tracep->declQuad(c+1144,"sim VexRiscv execute_MUL_HH", false,-1, 33,0);
        tracep->declQuad(c+1146,"sim VexRiscv execute_MUL_HL", false,-1, 33,0);
        tracep->declQuad(c+1148,"sim VexRiscv execute_MUL_LH", false,-1, 33,0);
        tracep->declBus(c+1150,"sim VexRiscv execute_MUL_LL", false,-1, 31,0);
        tracep->declBus(c+1151,"sim VexRiscv execute_BRANCH_CALC", false,-1, 31,0);
        tracep->declBit(c+1152,"sim VexRiscv execute_BRANCH_DO", false,-1);
        tracep->declBus(c+1153,"sim VexRiscv execute_SHIFT_RIGHT", false,-1, 31,0);
        tracep->declBus(c+1154,"sim VexRiscv execute_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBus(c+1155,"sim VexRiscv memory_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBus(c+1156,"sim VexRiscv execute_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBit(c+1157,"sim VexRiscv decode_CSR_READ_OPCODE", false,-1);
        tracep->declBit(c+1158,"sim VexRiscv decode_CSR_WRITE_OPCODE", false,-1);
        tracep->declBit(c+1159,"sim VexRiscv decode_PREDICTION_HAD_BRANCHED2", false,-1);
        tracep->declBit(c+1160,"sim VexRiscv decode_SRC2_FORCE_ZERO", false,-1);
        tracep->declBit(c+1161,"sim VexRiscv decode_IS_RS2_SIGNED", false,-1);
        tracep->declBit(c+1162,"sim VexRiscv decode_IS_RS1_SIGNED", false,-1);
        tracep->declBit(c+1163,"sim VexRiscv decode_IS_DIV", false,-1);
        tracep->declBit(c+1164,"sim VexRiscv memory_IS_MUL", false,-1);
        tracep->declBit(c+1165,"sim VexRiscv execute_IS_MUL", false,-1);
        tracep->declBit(c+1166,"sim VexRiscv decode_IS_MUL", false,-1);
        tracep->declBus(c+1167,"sim VexRiscv decode_ENV_CTRL", false,-1, 1,0);
        tracep->declBit(c+1168,"sim VexRiscv decode_IS_CSR", false,-1);
        tracep->declBus(c+1169,"sim VexRiscv decode_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBus(c+1170,"sim VexRiscv decode_ALU_BITWISE_CTRL", false,-1, 1,0);
        tracep->declBit(c+1171,"sim VexRiscv decode_SRC_LESS_UNSIGNED", false,-1);
        tracep->declBit(c+1172,"sim VexRiscv decode_MEMORY_MANAGMENT", false,-1);
        tracep->declBit(c+1173,"sim VexRiscv memory_MEMORY_WR", false,-1);
        tracep->declBit(c+1174,"sim VexRiscv decode_MEMORY_WR", false,-1);
        tracep->declBit(c+1175,"sim VexRiscv execute_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+1176,"sim VexRiscv decode_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+1177,"sim VexRiscv decode_BYPASSABLE_EXECUTE_STAGE", false,-1);
        tracep->declBus(c+1178,"sim VexRiscv decode_SRC2_CTRL", false,-1, 1,0);
        tracep->declBus(c+1179,"sim VexRiscv decode_ALU_CTRL", false,-1, 1,0);
        tracep->declBus(c+1180,"sim VexRiscv decode_SRC1_CTRL", false,-1, 1,0);
        tracep->declBit(c+1788,"sim VexRiscv decode_MEMORY_FORCE_CONSTISTENCY", false,-1);
        tracep->declBus(c+1181,"sim VexRiscv writeBack_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBus(c+1182,"sim VexRiscv memory_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBus(c+1183,"sim VexRiscv execute_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBus(c+1184,"sim VexRiscv decode_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBus(c+1185,"sim VexRiscv memory_PC", false,-1, 31,0);
        tracep->declBit(c+1186,"sim VexRiscv execute_IS_RS1_SIGNED", false,-1);
        tracep->declBit(c+1187,"sim VexRiscv execute_IS_DIV", false,-1);
        tracep->declBit(c+1188,"sim VexRiscv execute_IS_RS2_SIGNED", false,-1);
        tracep->declBit(c+1189,"sim VexRiscv memory_IS_DIV", false,-1);
        tracep->declBit(c+1190,"sim VexRiscv writeBack_IS_MUL", false,-1);
        tracep->declQuad(c+1191,"sim VexRiscv writeBack_MUL_HH", false,-1, 33,0);
        tracep->declQuad(c+1193,"sim VexRiscv writeBack_MUL_LOW", false,-1, 51,0);
        tracep->declQuad(c+1195,"sim VexRiscv memory_MUL_HL", false,-1, 33,0);
        tracep->declQuad(c+1197,"sim VexRiscv memory_MUL_LH", false,-1, 33,0);
        tracep->declBus(c+1199,"sim VexRiscv memory_MUL_LL", false,-1, 31,0);
        tracep->declBit(c+1200,"sim VexRiscv execute_CSR_READ_OPCODE", false,-1);
        tracep->declBit(c+1201,"sim VexRiscv execute_CSR_WRITE_OPCODE", false,-1);
        tracep->declBit(c+1202,"sim VexRiscv execute_IS_CSR", false,-1);
        tracep->declBus(c+1203,"sim VexRiscv memory_ENV_CTRL", false,-1, 1,0);
        tracep->declBus(c+1204,"sim VexRiscv execute_ENV_CTRL", false,-1, 1,0);
        tracep->declBus(c+1205,"sim VexRiscv writeBack_ENV_CTRL", false,-1, 1,0);
        tracep->declBus(c+1206,"sim VexRiscv memory_BRANCH_CALC", false,-1, 31,0);
        tracep->declBit(c+1207,"sim VexRiscv memory_BRANCH_DO", false,-1);
        tracep->declBus(c+1208,"sim VexRiscv execute_PC", false,-1, 31,0);
        tracep->declBit(c+1209,"sim VexRiscv execute_PREDICTION_HAD_BRANCHED2", false,-1);
        tracep->declBit(c+1210,"sim VexRiscv execute_BRANCH_COND_RESULT", false,-1);
        tracep->declBus(c+1211,"sim VexRiscv execute_BRANCH_CTRL", false,-1, 1,0);
        tracep->declBit(c+1212,"sim VexRiscv decode_RS2_USE", false,-1);
        tracep->declBit(c+1213,"sim VexRiscv decode_RS1_USE", false,-1);
        tracep->declBit(c+1214,"sim VexRiscv execute_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+1215,"sim VexRiscv execute_BYPASSABLE_EXECUTE_STAGE", false,-1);
        tracep->declBit(c+1216,"sim VexRiscv memory_REGFILE_WRITE_VALID", false,-1);
        tracep->declBus(c+1217,"sim VexRiscv memory_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+1218,"sim VexRiscv memory_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+1219,"sim VexRiscv writeBack_REGFILE_WRITE_VALID", false,-1);
        tracep->declBus(c+1220,"sim VexRiscv decode_RS2", false,-1, 31,0);
        tracep->declBus(c+1221,"sim VexRiscv decode_RS1", false,-1, 31,0);
        tracep->declBus(c+1222,"sim VexRiscv memory_SHIFT_RIGHT", false,-1, 31,0);
        tracep->declBus(c+1223,"sim VexRiscv memory_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBus(c+1224,"sim VexRiscv execute_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBit(c+1225,"sim VexRiscv execute_SRC_LESS_UNSIGNED", false,-1);
        tracep->declBit(c+1226,"sim VexRiscv execute_SRC2_FORCE_ZERO", false,-1);
        tracep->declBit(c+1227,"sim VexRiscv execute_SRC_USE_SUB_LESS", false,-1);
        tracep->declBus(c+1228,"sim VexRiscv execute_SRC2_CTRL", false,-1, 1,0);
        tracep->declBus(c+1229,"sim VexRiscv execute_SRC1_CTRL", false,-1, 1,0);
        tracep->declBit(c+1230,"sim VexRiscv decode_SRC_USE_SUB_LESS", false,-1);
        tracep->declBit(c+1231,"sim VexRiscv decode_SRC_ADD_ZERO", false,-1);
        tracep->declBus(c+1102,"sim VexRiscv execute_SRC_ADD_SUB", false,-1, 31,0);
        tracep->declBit(c+1232,"sim VexRiscv execute_SRC_LESS", false,-1);
        tracep->declBus(c+1233,"sim VexRiscv execute_ALU_CTRL", false,-1, 1,0);
        tracep->declBus(c+1234,"sim VexRiscv execute_SRC2", false,-1, 31,0);
        tracep->declBus(c+1235,"sim VexRiscv execute_SRC1", false,-1, 31,0);
        tracep->declBus(c+1236,"sim VexRiscv execute_ALU_BITWISE_CTRL", false,-1, 1,0);
        tracep->declBus(c+1237,"sim VexRiscv decode_INSTRUCTION_ANTICIPATED", false,-1, 31,0);
        tracep->declBit(c+1238,"sim VexRiscv decode_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+1239,"sim VexRiscv decode_LEGAL_INSTRUCTION", false,-1);
        tracep->declBit(c+1240,"sim VexRiscv writeBack_MEMORY_WR", false,-1);
        tracep->declBus(c+1107,"sim VexRiscv writeBack_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBus(c+1108,"sim VexRiscv writeBack_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBit(c+1241,"sim VexRiscv writeBack_MEMORY_ENABLE", false,-1);
        tracep->declBus(c+1104,"sim VexRiscv memory_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBit(c+1242,"sim VexRiscv memory_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+1243,"sim VexRiscv execute_MEMORY_FORCE_CONSTISTENCY", false,-1);
        tracep->declBus(c+1244,"sim VexRiscv execute_RS1", false,-1, 31,0);
        tracep->declBit(c+1245,"sim VexRiscv execute_MEMORY_MANAGMENT", false,-1);
        tracep->declBus(c+1246,"sim VexRiscv execute_RS2", false,-1, 31,0);
        tracep->declBit(c+1247,"sim VexRiscv execute_MEMORY_WR", false,-1);
        tracep->declBus(c+1102,"sim VexRiscv execute_SRC_ADD", false,-1, 31,0);
        tracep->declBit(c+1248,"sim VexRiscv execute_MEMORY_ENABLE", false,-1);
        tracep->declBus(c+1249,"sim VexRiscv execute_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+1250,"sim VexRiscv decode_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+1251,"sim VexRiscv decode_FLUSH_ALL", false,-1);
        tracep->declBit(c+1252,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected_4", false,-1);
        tracep->declBit(c+1253,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected_3", false,-1);
        tracep->declBit(c+1254,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected_2", false,-1);
        tracep->declBit(c+1255,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected_1", false,-1);
        tracep->declBus(c+1256,"sim VexRiscv decode_BRANCH_CTRL", false,-1, 1,0);
        tracep->declBus(c+1118,"sim VexRiscv decode_INSTRUCTION", false,-1, 31,0);
        tracep->declBus(c+1257,"sim VexRiscv decode_PC", false,-1, 31,0);
        tracep->declBus(c+1258,"sim VexRiscv writeBack_PC", false,-1, 31,0);
        tracep->declBus(c+1259,"sim VexRiscv writeBack_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv decode_arbitration_haltItself", false,-1);
        tracep->declBit(c+1260,"sim VexRiscv decode_arbitration_haltByOther", false,-1);
        tracep->declBit(c+1261,"sim VexRiscv decode_arbitration_removeIt", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv decode_arbitration_flushIt", false,-1);
        tracep->declBit(c+1262,"sim VexRiscv decode_arbitration_flushNext", false,-1);
        tracep->declBit(c+1263,"sim VexRiscv decode_arbitration_isValid", false,-1);
        tracep->declBit(c+1264,"sim VexRiscv decode_arbitration_isStuck", false,-1);
        tracep->declBit(c+1264,"sim VexRiscv decode_arbitration_isStuckByOthers", false,-1);
        tracep->declBit(c+1265,"sim VexRiscv decode_arbitration_isFlushed", false,-1);
        tracep->declBit(c+1266,"sim VexRiscv decode_arbitration_isMoving", false,-1);
        tracep->declBit(c+1267,"sim VexRiscv decode_arbitration_isFiring", false,-1);
        tracep->declBit(c+1268,"sim VexRiscv execute_arbitration_haltItself", false,-1);
        tracep->declBit(c+1269,"sim VexRiscv execute_arbitration_haltByOther", false,-1);
        tracep->declBit(c+1270,"sim VexRiscv execute_arbitration_removeIt", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv execute_arbitration_flushIt", false,-1);
        tracep->declBit(c+1271,"sim VexRiscv execute_arbitration_flushNext", false,-1);
        tracep->declBit(c+1272,"sim VexRiscv execute_arbitration_isValid", false,-1);
        tracep->declBit(c+1273,"sim VexRiscv execute_arbitration_isStuck", false,-1);
        tracep->declBit(c+1274,"sim VexRiscv execute_arbitration_isStuckByOthers", false,-1);
        tracep->declBit(c+1275,"sim VexRiscv execute_arbitration_isFlushed", false,-1);
        tracep->declBit(c+1276,"sim VexRiscv execute_arbitration_isMoving", false,-1);
        tracep->declBit(c+1277,"sim VexRiscv execute_arbitration_isFiring", false,-1);
        tracep->declBit(c+1278,"sim VexRiscv memory_arbitration_haltItself", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv memory_arbitration_haltByOther", false,-1);
        tracep->declBit(c+1279,"sim VexRiscv memory_arbitration_removeIt", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv memory_arbitration_flushIt", false,-1);
        tracep->declBit(c+1280,"sim VexRiscv memory_arbitration_flushNext", false,-1);
        tracep->declBit(c+1281,"sim VexRiscv memory_arbitration_isValid", false,-1);
        tracep->declBit(c+1282,"sim VexRiscv memory_arbitration_isStuck", false,-1);
        tracep->declBit(c+1283,"sim VexRiscv memory_arbitration_isStuckByOthers", false,-1);
        tracep->declBit(c+1284,"sim VexRiscv memory_arbitration_isFlushed", false,-1);
        tracep->declBit(c+1285,"sim VexRiscv memory_arbitration_isMoving", false,-1);
        tracep->declBit(c+1286,"sim VexRiscv memory_arbitration_isFiring", false,-1);
        tracep->declBit(c+1283,"sim VexRiscv writeBack_arbitration_haltItself", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv writeBack_arbitration_haltByOther", false,-1);
        tracep->declBit(c+1287,"sim VexRiscv writeBack_arbitration_removeIt", false,-1);
        tracep->declBit(c+1288,"sim VexRiscv writeBack_arbitration_flushIt", false,-1);
        tracep->declBit(c+1289,"sim VexRiscv writeBack_arbitration_flushNext", false,-1);
        tracep->declBit(c+1290,"sim VexRiscv writeBack_arbitration_isValid", false,-1);
        tracep->declBit(c+1283,"sim VexRiscv writeBack_arbitration_isStuck", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv writeBack_arbitration_isStuckByOthers", false,-1);
        tracep->declBit(c+1288,"sim VexRiscv writeBack_arbitration_isFlushed", false,-1);
        tracep->declBit(c+1291,"sim VexRiscv writeBack_arbitration_isMoving", false,-1);
        tracep->declBit(c+1292,"sim VexRiscv writeBack_arbitration_isFiring", false,-1);
        tracep->declBus(c+1741,"sim VexRiscv lastStageInstruction", false,-1, 31,0);
        tracep->declBus(c+1742,"sim VexRiscv lastStagePc", false,-1, 31,0);
        tracep->declBit(c+1743,"sim VexRiscv lastStageIsValid", false,-1);
        tracep->declBit(c+1744,"sim VexRiscv lastStageIsFiring", false,-1);
        tracep->declBit(c+1293,"sim VexRiscv IBusCachedPlugin_fetcherHalt", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_forceNoDecodeCond", false,-1);
        tracep->declBit(c+1294,"sim VexRiscv IBusCachedPlugin_incomingInstruction", false,-1);
        tracep->declBit(c+1295,"sim VexRiscv IBusCachedPlugin_predictionJumpInterface_valid", false,-1);
        tracep->declBus(c+1296,"sim VexRiscv IBusCachedPlugin_predictionJumpInterface_payload", false,-1, 31,0);
        tracep->declBit(c+1159,"sim VexRiscv IBusCachedPlugin_decodePrediction_cmd_hadBranch", false,-1);
        tracep->declBit(c+1297,"sim VexRiscv IBusCachedPlugin_decodePrediction_rsp_wasWrong", false,-1);
        tracep->declBit(c+1298,"sim VexRiscv IBusCachedPlugin_pcValids_0", false,-1);
        tracep->declBit(c+1299,"sim VexRiscv IBusCachedPlugin_pcValids_1", false,-1);
        tracep->declBit(c+1300,"sim VexRiscv IBusCachedPlugin_pcValids_2", false,-1);
        tracep->declBit(c+1301,"sim VexRiscv IBusCachedPlugin_pcValids_3", false,-1);
        tracep->declBit(c+1302,"sim VexRiscv IBusCachedPlugin_decodeExceptionPort_valid", false,-1);
        tracep->declBus(c+1303,"sim VexRiscv IBusCachedPlugin_decodeExceptionPort_payload_code", false,-1, 3,0);
        tracep->declBus(c+1304,"sim VexRiscv IBusCachedPlugin_decodeExceptionPort_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+1097,"sim VexRiscv IBusCachedPlugin_mmuBus_cmd_0_isValid", false,-1);
        tracep->declBit(c+1098,"sim VexRiscv IBusCachedPlugin_mmuBus_cmd_0_isStuck", false,-1);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_mmuBus_cmd_0_virtualAddress", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_mmuBus_cmd_0_bypassTranslation", false,-1);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_physicalAddress", false,-1, 31,0);
    }
}

void Vsim::traceInitSub6(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1745,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_isIoAccess", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_isPaging", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_allowRead", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_allowWrite", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_allowExecute", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_exception", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_refilling", false,-1);
        tracep->declBit(c+1806,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_bypassTranslation", false,-1);
        tracep->declBit(c+1305,"sim VexRiscv IBusCachedPlugin_mmuBus_end", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_mmuBus_busy", false,-1);
        tracep->declBit(c+63,"sim VexRiscv dBus_cmd_valid", false,-1);
        tracep->declBit(c+1306,"sim VexRiscv dBus_cmd_ready", false,-1);
        tracep->declBit(c+65,"sim VexRiscv dBus_cmd_payload_wr", false,-1);
        tracep->declBit(c+1307,"sim VexRiscv dBus_cmd_payload_uncached", false,-1);
        tracep->declBus(c+1308,"sim VexRiscv dBus_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+61,"sim VexRiscv dBus_cmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+1309,"sim VexRiscv dBus_cmd_payload_mask", false,-1, 3,0);
        tracep->declBus(c+1310,"sim VexRiscv dBus_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+1311,"sim VexRiscv dBus_cmd_payload_last", false,-1);
        tracep->declBit(c+1312,"sim VexRiscv dBus_rsp_valid", false,-1);
        tracep->declBit(c+1807,"sim VexRiscv dBus_rsp_payload_last", false,-1);
        tracep->declBus(c+1313,"sim VexRiscv dBus_rsp_payload_data", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv dBus_rsp_payload_error", false,-1);
        tracep->declBit(c+1103,"sim VexRiscv DBusCachedPlugin_mmuBus_cmd_0_isValid", false,-1);
        tracep->declBit(c+1282,"sim VexRiscv DBusCachedPlugin_mmuBus_cmd_0_isStuck", false,-1);
        tracep->declBus(c+1104,"sim VexRiscv DBusCachedPlugin_mmuBus_cmd_0_virtualAddress", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv DBusCachedPlugin_mmuBus_cmd_0_bypassTranslation", false,-1);
        tracep->declBus(c+1104,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+1105,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_isIoAccess", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_isPaging", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_allowRead", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_allowWrite", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_allowExecute", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_exception", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_refilling", false,-1);
        tracep->declBit(c+1808,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_bypassTranslation", false,-1);
        tracep->declBit(c+1314,"sim VexRiscv DBusCachedPlugin_mmuBus_end", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv DBusCachedPlugin_mmuBus_busy", false,-1);
        tracep->declBit(c+1315,"sim VexRiscv DBusCachedPlugin_redoBranch_valid", false,-1);
        tracep->declBus(c+1258,"sim VexRiscv DBusCachedPlugin_redoBranch_payload", false,-1, 31,0);
        tracep->declBit(c+1316,"sim VexRiscv DBusCachedPlugin_exceptionBus_valid", false,-1);
        tracep->declBus(c+1317,"sim VexRiscv DBusCachedPlugin_exceptionBus_payload_code", false,-1, 3,0);
        tracep->declBus(c+1108,"sim VexRiscv DBusCachedPlugin_exceptionBus_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+1318,"sim VexRiscv decodeExceptionPort_valid", false,-1);
        tracep->declBus(c+1809,"sim VexRiscv decodeExceptionPort_payload_code", false,-1, 3,0);
        tracep->declBus(c+1118,"sim VexRiscv decodeExceptionPort_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+1297,"sim VexRiscv BranchPlugin_jumpInterface_valid", false,-1);
        tracep->declBus(c+1206,"sim VexRiscv BranchPlugin_jumpInterface_payload", false,-1, 31,0);
        tracep->declBit(c+1319,"sim VexRiscv BranchPlugin_branchExceptionPort_valid", false,-1);
        tracep->declBus(c+1810,"sim VexRiscv BranchPlugin_branchExceptionPort_payload_code", false,-1, 3,0);
        tracep->declBus(c+1206,"sim VexRiscv BranchPlugin_branchExceptionPort_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv BranchPlugin_inDebugNoFetchFlag", false,-1);
        tracep->declBus(c+1320,"sim VexRiscv CsrPlugin_csrMapping_readDataSignal", false,-1, 31,0);
        tracep->declBus(c+1320,"sim VexRiscv CsrPlugin_csrMapping_readDataInit", false,-1, 31,0);
        tracep->declBus(c+1321,"sim VexRiscv CsrPlugin_csrMapping_writeDataSignal", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv CsrPlugin_csrMapping_allowCsrSignal", false,-1);
        tracep->declBit(c+1322,"sim VexRiscv CsrPlugin_csrMapping_hazardFree", false,-1);
        tracep->declBit(c+1746,"sim VexRiscv CsrPlugin_inWfi", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv CsrPlugin_thirdPartyWake", false,-1);
        tracep->declBit(c+1323,"sim VexRiscv CsrPlugin_jumpInterface_valid", false,-1);
        tracep->declBus(c+1324,"sim VexRiscv CsrPlugin_jumpInterface_payload", false,-1, 31,0);
        tracep->declBit(c+1325,"sim VexRiscv CsrPlugin_exceptionPendings_0", false,-1);
        tracep->declBit(c+1326,"sim VexRiscv CsrPlugin_exceptionPendings_1", false,-1);
        tracep->declBit(c+1327,"sim VexRiscv CsrPlugin_exceptionPendings_2", false,-1);
        tracep->declBit(c+1328,"sim VexRiscv CsrPlugin_exceptionPendings_3", false,-1);
        tracep->declBit(c+1329,"sim VexRiscv externalInterrupt", false,-1);
        tracep->declBit(c+1323,"sim VexRiscv contextSwitching", false,-1);
        tracep->declBus(c+1793,"sim VexRiscv CsrPlugin_privilege", false,-1, 1,0);
        tracep->declBit(c+1788,"sim VexRiscv CsrPlugin_forceMachineWire", false,-1);
        tracep->declBit(c+1330,"sim VexRiscv CsrPlugin_selfException_valid", false,-1);
        tracep->declBus(c+1331,"sim VexRiscv CsrPlugin_selfException_payload_code", false,-1, 3,0);
        tracep->declBus(c+1249,"sim VexRiscv CsrPlugin_selfException_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+1790,"sim VexRiscv CsrPlugin_allowInterrupts", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv CsrPlugin_allowException", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv CsrPlugin_allowEbreakException", false,-1);
        tracep->declBit(c+1332,"sim VexRiscv IBusCachedPlugin_externalFlush", false,-1);
        tracep->declBit(c+1333,"sim VexRiscv IBusCachedPlugin_jump_pcLoad_valid", false,-1);
        tracep->declBus(c+1334,"sim VexRiscv IBusCachedPlugin_jump_pcLoad_payload", false,-1, 31,0);
        tracep->declBit(c+1096,"sim VexRiscv IBusCachedPlugin_fetchPc_output_valid", false,-1);
        tracep->declBit(c+1335,"sim VexRiscv IBusCachedPlugin_fetchPc_output_ready", false,-1);
        tracep->declBus(c+1336,"sim VexRiscv IBusCachedPlugin_fetchPc_output_payload", false,-1, 31,0);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_fetchPc_pcReg", false,-1, 31,0);
        tracep->declBit(c+1337,"sim VexRiscv IBusCachedPlugin_fetchPc_correction", false,-1);
        tracep->declBit(c+1338,"sim VexRiscv IBusCachedPlugin_fetchPc_correctionReg", false,-1);
        tracep->declBit(c+1339,"sim VexRiscv IBusCachedPlugin_fetchPc_output_fire", false,-1);
        tracep->declBit(c+1340,"sim VexRiscv IBusCachedPlugin_fetchPc_corrected", false,-1);
        tracep->declBit(c+1341,"sim VexRiscv IBusCachedPlugin_fetchPc_pcRegPropagate", false,-1);
        tracep->declBit(c+1342,"sim VexRiscv IBusCachedPlugin_fetchPc_booted", false,-1);
        tracep->declBit(c+1343,"sim VexRiscv IBusCachedPlugin_fetchPc_inc", false,-1);
        tracep->declBit(c+1344,"sim VexRiscv when_Fetcher_l134", false,-1);
        tracep->declBit(c+1339,"sim VexRiscv IBusCachedPlugin_fetchPc_output_fire_1", false,-1);
        tracep->declBit(c+1345,"sim VexRiscv when_Fetcher_l134_1", false,-1);
        tracep->declBus(c+1336,"sim VexRiscv IBusCachedPlugin_fetchPc_pc", false,-1, 31,0);
        tracep->declBit(c+1346,"sim VexRiscv IBusCachedPlugin_fetchPc_redo_valid", false,-1);
        tracep->declBus(c+1257,"sim VexRiscv IBusCachedPlugin_fetchPc_redo_payload", false,-1, 31,0);
        tracep->declBit(c+1347,"sim VexRiscv IBusCachedPlugin_fetchPc_flushed", false,-1);
        tracep->declBit(c+1348,"sim VexRiscv when_Fetcher_l161", false,-1);
        tracep->declBit(c+1346,"sim VexRiscv IBusCachedPlugin_iBusRsp_redoFetch", false,-1);
        tracep->declBit(c+1096,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_input_valid", false,-1);
        tracep->declBit(c+1335,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_input_ready", false,-1);
        tracep->declBus(c+1336,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_input_payload", false,-1, 31,0);
        tracep->declBit(c+1349,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_output_valid", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_output_ready", false,-1);
        tracep->declBus(c+1336,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_output_payload", false,-1, 31,0);
        tracep->declBit(c+1351,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_halt", false,-1);
        tracep->declBit(c+1352,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_input_valid", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_input_ready", false,-1);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_input_payload", false,-1, 31,0);
        tracep->declBit(c+1352,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_valid", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_ready", false,-1);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_payload", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_halt", false,-1);
        tracep->declBit(c+1353,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_input_valid", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_input_ready", false,-1);
        tracep->declBus(c+1257,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_input_payload", false,-1, 31,0);
        tracep->declBit(c+1263,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_output_valid", false,-1);
        tracep->declBit(c+1354,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_output_ready", false,-1);
        tracep->declBus(c+1257,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_output_payload", false,-1, 31,0);
        tracep->declBit(c+1355,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_halt", false,-1);
        tracep->declBit(c+1356,"sim VexRiscv IBusCachedPlugin_iBusRsp_flush", false,-1);
        tracep->declBit(c+1353,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_ready", false,-1);
        tracep->declBus(c+1257,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload", false,-1, 31,0);
        tracep->declBit(c+1357,"sim VexRiscv IBusCachedPlugin_iBusRsp_readyForError", false,-1);
        tracep->declBit(c+1263,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_valid", false,-1);
        tracep->declBit(c+1354,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_ready", false,-1);
        tracep->declBus(c+1257,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_payload_pc", false,-1, 31,0);
        tracep->declBit(c+1811,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_payload_rsp_error", false,-1);
        tracep->declBus(c+1118,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_payload_rsp_inst", false,-1, 31,0);
        tracep->declBit(c+1812,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_payload_isRvc", false,-1);
        tracep->declBit(c+1358,"sim VexRiscv when_Fetcher_l243", false,-1);
        tracep->declBit(c+1359,"sim VexRiscv when_Fetcher_l323", false,-1);
        tracep->declBit(c+1360,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_0", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv when_Fetcher_l332", false,-1);
        tracep->declBit(c+1298,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_1", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv when_Fetcher_l332_1", false,-1);
        tracep->declBit(c+1299,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_2", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Fetcher_l332_2", false,-1);
        tracep->declBit(c+1300,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_3", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Fetcher_l332_3", false,-1);
        tracep->declBit(c+1301,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_4", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv when_Fetcher_l332_4", false,-1);
        tracep->declBit(c+1121,"sim VexRiscv iBus_cmd_valid", false,-1);
        tracep->declBit(c+1364,"sim VexRiscv iBus_cmd_ready", false,-1);
        tracep->declBus(c+1122,"sim VexRiscv iBus_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+1804,"sim VexRiscv iBus_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+1365,"sim VexRiscv iBus_rsp_valid", false,-1);
        tracep->declBus(c+1366,"sim VexRiscv iBus_rsp_payload_data", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv iBus_rsp_payload_error", false,-1);
        tracep->declBus(c+1367,"sim VexRiscv IBusCachedPlugin_rspCounter", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_s0_tightlyCoupledHit", false,-1);
        tracep->declBit(c+1368,"sim VexRiscv IBusCachedPlugin_s1_tightlyCoupledHit", false,-1);
        tracep->declBit(c+1369,"sim VexRiscv IBusCachedPlugin_s2_tightlyCoupledHit", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_rsp_iBusRspOutputHalt", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected", false,-1);
        tracep->declBit(c+1370,"sim VexRiscv IBusCachedPlugin_rsp_redoFetch", false,-1);
        tracep->declBit(c+1371,"sim VexRiscv when_IBusCachedPlugin_l239", false,-1);
        tracep->declBit(c+1372,"sim VexRiscv when_IBusCachedPlugin_l244", false,-1);
        tracep->declBit(c+1373,"sim VexRiscv when_IBusCachedPlugin_l250", false,-1);
        tracep->declBit(c+1374,"sim VexRiscv when_IBusCachedPlugin_l256", false,-1);
        tracep->declBit(c+1252,"sim VexRiscv when_IBusCachedPlugin_l267", false,-1);
        tracep->declBit(c+1375,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_valid", false,-1);
        tracep->declBit(c+1376,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_ready", false,-1);
        tracep->declBit(c+1377,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_payload_wr", false,-1);
        tracep->declBit(c+1378,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_payload_uncached", false,-1);
        tracep->declBus(c+1379,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_payload_address", false,-1, 31,0);
        tracep->declBus(c+1380,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_payload_data", false,-1, 31,0);
        tracep->declBus(c+1381,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_payload_mask", false,-1, 3,0);
        tracep->declBus(c+1382,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_payload_size", false,-1, 2,0);
        tracep->declBit(c+1383,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_payload_last", false,-1);
        tracep->declBit(c+1384,"sim VexRiscv dataCache_1_io_mem_cmd_rValid", false,-1);
        tracep->declBit(c+1385,"sim VexRiscv dataCache_1_io_mem_cmd_rData_wr", false,-1);
        tracep->declBit(c+1386,"sim VexRiscv dataCache_1_io_mem_cmd_rData_uncached", false,-1);
        tracep->declBus(c+1387,"sim VexRiscv dataCache_1_io_mem_cmd_rData_address", false,-1, 31,0);
        tracep->declBus(c+1388,"sim VexRiscv dataCache_1_io_mem_cmd_rData_data", false,-1, 31,0);
        tracep->declBus(c+1389,"sim VexRiscv dataCache_1_io_mem_cmd_rData_mask", false,-1, 3,0);
        tracep->declBus(c+1390,"sim VexRiscv dataCache_1_io_mem_cmd_rData_size", false,-1, 2,0);
        tracep->declBit(c+1391,"sim VexRiscv dataCache_1_io_mem_cmd_rData_last", false,-1);
        tracep->declBit(c+63,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_valid", false,-1);
        tracep->declBit(c+1306,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_ready", false,-1);
        tracep->declBit(c+65,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_wr", false,-1);
        tracep->declBit(c+1307,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_uncached", false,-1);
        tracep->declBus(c+1308,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_address", false,-1, 31,0);
        tracep->declBus(c+61,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_data", false,-1, 31,0);
        tracep->declBus(c+1309,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_mask", false,-1, 3,0);
        tracep->declBus(c+1310,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_size", false,-1, 2,0);
        tracep->declBit(c+1311,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_last", false,-1);
        tracep->declBit(c+63,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_rValid", false,-1);
        tracep->declBit(c+65,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_rData_wr", false,-1);
        tracep->declBit(c+1307,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_rData_uncached", false,-1);
        tracep->declBus(c+1308,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_rData_address", false,-1, 31,0);
        tracep->declBus(c+61,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_rData_data", false,-1, 31,0);
        tracep->declBus(c+1309,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_rData_mask", false,-1, 3,0);
        tracep->declBus(c+1310,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_rData_size", false,-1, 2,0);
        tracep->declBit(c+1311,"sim VexRiscv dataCache_1_io_mem_cmd_s2mPipe_rData_last", false,-1);
        tracep->declBit(c+1392,"sim VexRiscv when_Stream_l368", false,-1);
        tracep->declBus(c+1393,"sim VexRiscv DBusCachedPlugin_rspCounter", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv when_DBusCachedPlugin_l308", false,-1);
        tracep->declBus(c+1394,"sim VexRiscv execute_DBusCachedPlugin_size", false,-1, 1,0);
        tracep->declBit(c+1395,"sim VexRiscv dataCache_1_io_cpu_flush_isStall", false,-1);
        tracep->declBit(c+1396,"sim VexRiscv when_DBusCachedPlugin_l350", false,-1);
        tracep->declBit(c+1397,"sim VexRiscv when_DBusCachedPlugin_l366", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv when_DBusCachedPlugin_l393", false,-1);
        tracep->declBit(c+1398,"sim VexRiscv when_DBusCachedPlugin_l446", false,-1);
        tracep->declBit(c+1399,"sim VexRiscv when_DBusCachedPlugin_l466", false,-1);
        tracep->declBus(c+1400,"sim VexRiscv writeBack_DBusCachedPlugin_rspSplits_0", false,-1, 7,0);
        tracep->declBus(c+1401,"sim VexRiscv writeBack_DBusCachedPlugin_rspSplits_1", false,-1, 7,0);
        tracep->declBus(c+1402,"sim VexRiscv writeBack_DBusCachedPlugin_rspSplits_2", false,-1, 7,0);
        tracep->declBus(c+1403,"sim VexRiscv writeBack_DBusCachedPlugin_rspSplits_3", false,-1, 7,0);
        tracep->declBus(c+1404,"sim VexRiscv writeBack_DBusCachedPlugin_rspShifted", false,-1, 31,0);
        tracep->declBus(c+1404,"sim VexRiscv writeBack_DBusCachedPlugin_rspRf", false,-1, 31,0);
        tracep->declBus(c+1405,"sim VexRiscv switch_Misc_l210", false,-1, 1,0);
        tracep->declBus(c+1406,"sim VexRiscv writeBack_DBusCachedPlugin_rspFormated", false,-1, 31,0);
        tracep->declBit(c+1407,"sim VexRiscv when_DBusCachedPlugin_l492", false,-1);
        tracep->declBit(c+1408,"sim VexRiscv when_RegFilePlugin_l63", false,-1);
        tracep->declBus(c+1409,"sim VexRiscv decode_RegFilePlugin_regFileReadAddress1", false,-1, 4,0);
        tracep->declBus(c+1410,"sim VexRiscv decode_RegFilePlugin_regFileReadAddress2", false,-1, 4,0);
        tracep->declBus(c+1411,"sim VexRiscv decode_RegFilePlugin_rs1Data", false,-1, 31,0);
        tracep->declBus(c+1412,"sim VexRiscv decode_RegFilePlugin_rs2Data", false,-1, 31,0);
        tracep->declBit(c+1747,"sim VexRiscv lastStageRegFileWrite_valid", false,-1);
        tracep->declBus(c+1748,"sim VexRiscv lastStageRegFileWrite_payload_address", false,-1, 4,0);
        tracep->declBus(c+1749,"sim VexRiscv lastStageRegFileWrite_payload_data", false,-1, 31,0);
        tracep->declBus(c+1413,"sim VexRiscv execute_IntAluPlugin_bitwise", false,-1, 31,0);
        tracep->declBus(c+1102,"sim VexRiscv execute_SrcPlugin_addSub", false,-1, 31,0);
        tracep->declBit(c+1232,"sim VexRiscv execute_SrcPlugin_less", false,-1);
        tracep->declBus(c+1414,"sim VexRiscv execute_FullBarrelShifterPlugin_amplitude", false,-1, 4,0);
        tracep->declBus(c+1415,"sim VexRiscv execute_FullBarrelShifterPlugin_reversed", false,-1, 31,0);
        tracep->declBit(c+1416,"sim VexRiscv HazardSimplePlugin_src0Hazard", false,-1);
        tracep->declBit(c+1417,"sim VexRiscv HazardSimplePlugin_src1Hazard", false,-1);
        tracep->declBit(c+1418,"sim VexRiscv HazardSimplePlugin_writeBackWrites_valid", false,-1);
        tracep->declBus(c+1419,"sim VexRiscv HazardSimplePlugin_writeBackWrites_payload_address", false,-1, 4,0);
        tracep->declBus(c+1420,"sim VexRiscv HazardSimplePlugin_writeBackWrites_payload_data", false,-1, 31,0);
        tracep->declBit(c+1421,"sim VexRiscv HazardSimplePlugin_writeBackBuffer_valid", false,-1);
        tracep->declBus(c+1422,"sim VexRiscv HazardSimplePlugin_writeBackBuffer_payload_address", false,-1, 4,0);
        tracep->declBus(c+1423,"sim VexRiscv HazardSimplePlugin_writeBackBuffer_payload_data", false,-1, 31,0);
        tracep->declBit(c+1424,"sim VexRiscv HazardSimplePlugin_addr0Match", false,-1);
        tracep->declBit(c+1425,"sim VexRiscv HazardSimplePlugin_addr1Match", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv when_HazardSimplePlugin_l47", false,-1);
        tracep->declBit(c+1426,"sim VexRiscv when_HazardSimplePlugin_l48", false,-1);
        tracep->declBit(c+1427,"sim VexRiscv when_HazardSimplePlugin_l51", false,-1);
        tracep->declBit(c+1428,"sim VexRiscv when_HazardSimplePlugin_l45", false,-1);
        tracep->declBit(c+1429,"sim VexRiscv when_HazardSimplePlugin_l57", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv when_HazardSimplePlugin_l58", false,-1);
        tracep->declBit(c+1430,"sim VexRiscv when_HazardSimplePlugin_l48_1", false,-1);
        tracep->declBit(c+1431,"sim VexRiscv when_HazardSimplePlugin_l51_1", false,-1);
        tracep->declBit(c+1432,"sim VexRiscv when_HazardSimplePlugin_l45_1", false,-1);
        tracep->declBit(c+1433,"sim VexRiscv when_HazardSimplePlugin_l57_1", false,-1);
        tracep->declBit(c+1434,"sim VexRiscv when_HazardSimplePlugin_l58_1", false,-1);
        tracep->declBit(c+1435,"sim VexRiscv when_HazardSimplePlugin_l48_2", false,-1);
        tracep->declBit(c+1436,"sim VexRiscv when_HazardSimplePlugin_l51_2", false,-1);
        tracep->declBit(c+1437,"sim VexRiscv when_HazardSimplePlugin_l45_2", false,-1);
    }
}

void Vsim::traceInitSub7(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1438,"sim VexRiscv when_HazardSimplePlugin_l57_2", false,-1);
        tracep->declBit(c+1439,"sim VexRiscv when_HazardSimplePlugin_l58_2", false,-1);
        tracep->declBit(c+1440,"sim VexRiscv when_HazardSimplePlugin_l105", false,-1);
        tracep->declBit(c+1441,"sim VexRiscv when_HazardSimplePlugin_l108", false,-1);
        tracep->declBit(c+1442,"sim VexRiscv when_HazardSimplePlugin_l113", false,-1);
        tracep->declBit(c+1443,"sim VexRiscv execute_BranchPlugin_eq", false,-1);
        tracep->declBus(c+1444,"sim VexRiscv switch_Misc_l210_1", false,-1, 2,0);
        tracep->declBit(c+1445,"sim VexRiscv execute_BranchPlugin_missAlignedTarget", false,-1);
        tracep->declBus(c+1446,"sim VexRiscv execute_BranchPlugin_branch_src1", false,-1, 31,0);
        tracep->declBus(c+1447,"sim VexRiscv execute_BranchPlugin_branch_src2", false,-1, 31,0);
        tracep->declBus(c+1448,"sim VexRiscv execute_BranchPlugin_branchAdder", false,-1, 31,0);
        tracep->declBus(c+1791,"sim VexRiscv CsrPlugin_misa_base", false,-1, 1,0);
        tracep->declBus(c+1813,"sim VexRiscv CsrPlugin_misa_extensions", false,-1, 25,0);
        tracep->declBus(c+1449,"sim VexRiscv CsrPlugin_mtvec_mode", false,-1, 1,0);
        tracep->declBus(c+1450,"sim VexRiscv CsrPlugin_mtvec_base", false,-1, 29,0);
        tracep->declBus(c+1451,"sim VexRiscv CsrPlugin_mepc", false,-1, 31,0);
        tracep->declBit(c+1452,"sim VexRiscv CsrPlugin_mstatus_MIE", false,-1);
        tracep->declBit(c+1453,"sim VexRiscv CsrPlugin_mstatus_MPIE", false,-1);
        tracep->declBus(c+1454,"sim VexRiscv CsrPlugin_mstatus_MPP", false,-1, 1,0);
        tracep->declBit(c+1455,"sim VexRiscv CsrPlugin_mip_MEIP", false,-1);
        tracep->declBit(c+1456,"sim VexRiscv CsrPlugin_mip_MTIP", false,-1);
        tracep->declBit(c+1457,"sim VexRiscv CsrPlugin_mip_MSIP", false,-1);
        tracep->declBit(c+1458,"sim VexRiscv CsrPlugin_mie_MEIE", false,-1);
        tracep->declBit(c+1459,"sim VexRiscv CsrPlugin_mie_MTIE", false,-1);
        tracep->declBit(c+1460,"sim VexRiscv CsrPlugin_mie_MSIE", false,-1);
        tracep->declBit(c+1461,"sim VexRiscv CsrPlugin_mcause_interrupt", false,-1);
        tracep->declBus(c+1462,"sim VexRiscv CsrPlugin_mcause_exceptionCode", false,-1, 3,0);
        tracep->declBus(c+1463,"sim VexRiscv CsrPlugin_mtval", false,-1, 31,0);
        tracep->declQuad(c+1464,"sim VexRiscv CsrPlugin_mcycle", false,-1, 63,0);
        tracep->declQuad(c+1466,"sim VexRiscv CsrPlugin_minstret", false,-1, 63,0);
        tracep->declBit(c+1468,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValids_decode", false,-1);
        tracep->declBit(c+1469,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValids_execute", false,-1);
        tracep->declBit(c+1470,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValids_memory", false,-1);
        tracep->declBit(c+1471,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack", false,-1);
        tracep->declBit(c+1325,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode", false,-1);
        tracep->declBit(c+1326,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute", false,-1);
        tracep->declBit(c+1327,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory", false,-1);
        tracep->declBit(c+1328,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack", false,-1);
        tracep->declBus(c+1472,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionContext_code", false,-1, 3,0);
        tracep->declBus(c+1473,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr", false,-1, 31,0);
        tracep->declBus(c+1793,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped", false,-1, 1,0);
        tracep->declBus(c+1793,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilege", false,-1, 1,0);
        tracep->declBit(c+1354,"sim VexRiscv when_CsrPlugin_l922", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l922_1", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_CsrPlugin_l922_2", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv when_CsrPlugin_l922_3", false,-1);
        tracep->declBit(c+1474,"sim VexRiscv when_CsrPlugin_l935", false,-1);
        tracep->declBit(c+1475,"sim VexRiscv CsrPlugin_interrupt_valid", false,-1);
        tracep->declBus(c+1750,"sim VexRiscv CsrPlugin_interrupt_code", false,-1, 3,0);
        tracep->declBus(c+1476,"sim VexRiscv CsrPlugin_interrupt_targetPrivilege", false,-1, 1,0);
        tracep->declBit(c+1452,"sim VexRiscv when_CsrPlugin_l959", false,-1);
        tracep->declBit(c+1477,"sim VexRiscv when_CsrPlugin_l965", false,-1);
        tracep->declBit(c+1478,"sim VexRiscv when_CsrPlugin_l965_1", false,-1);
        tracep->declBit(c+1479,"sim VexRiscv when_CsrPlugin_l965_2", false,-1);
        tracep->declBit(c+1471,"sim VexRiscv CsrPlugin_exception", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv CsrPlugin_lastStageWasWfi", false,-1);
        tracep->declBit(c+1480,"sim VexRiscv CsrPlugin_pipelineLiberator_pcValids_0", false,-1);
        tracep->declBit(c+1481,"sim VexRiscv CsrPlugin_pipelineLiberator_pcValids_1", false,-1);
        tracep->declBit(c+1482,"sim VexRiscv CsrPlugin_pipelineLiberator_pcValids_2", false,-1);
        tracep->declBit(c+1483,"sim VexRiscv CsrPlugin_pipelineLiberator_active", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l993", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_CsrPlugin_l993_1", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv when_CsrPlugin_l993_2", false,-1);
        tracep->declBit(c+1484,"sim VexRiscv when_CsrPlugin_l998", false,-1);
        tracep->declBit(c+1485,"sim VexRiscv CsrPlugin_pipelineLiberator_done", false,-1);
        tracep->declBit(c+1486,"sim VexRiscv when_CsrPlugin_l1004", false,-1);
        tracep->declBit(c+1751,"sim VexRiscv CsrPlugin_interruptJump", false,-1);
        tracep->declBit(c+1752,"sim VexRiscv CsrPlugin_hadException", false,-1);
        tracep->declBus(c+1487,"sim VexRiscv CsrPlugin_targetPrivilege", false,-1, 1,0);
        tracep->declBus(c+1488,"sim VexRiscv CsrPlugin_trapCause", false,-1, 3,0);
        tracep->declBus(c+1489,"sim VexRiscv CsrPlugin_xtvec_mode", false,-1, 1,0);
        tracep->declBus(c+1490,"sim VexRiscv CsrPlugin_xtvec_base", false,-1, 29,0);
        tracep->declBit(c+1491,"sim VexRiscv when_CsrPlugin_l1032", false,-1);
        tracep->declBit(c+1492,"sim VexRiscv when_CsrPlugin_l1077", false,-1);
        tracep->declBus(c+1493,"sim VexRiscv switch_CsrPlugin_l1081", false,-1, 1,0);
        tracep->declBit(c+1494,"sim VexRiscv execute_CsrPlugin_wfiWake", false,-1);
        tracep->declBit(c+1495,"sim VexRiscv when_CsrPlugin_l1129", false,-1);
        tracep->declBit(c+1496,"sim VexRiscv execute_CsrPlugin_blockedBySideEffects", false,-1);
        tracep->declBit(c+1497,"sim VexRiscv execute_CsrPlugin_illegalAccess", false,-1);
        tracep->declBit(c+34,"sim VexRiscv execute_CsrPlugin_illegalInstruction", false,-1);
        tracep->declBit(c+1498,"sim VexRiscv when_CsrPlugin_l1149", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv when_CsrPlugin_l1150", false,-1);
        tracep->declBit(c+1499,"sim VexRiscv when_CsrPlugin_l1157", false,-1);
        tracep->declBit(c+1500,"sim VexRiscv execute_CsrPlugin_writeInstruction", false,-1);
        tracep->declBit(c+1501,"sim VexRiscv execute_CsrPlugin_readInstruction", false,-1);
        tracep->declBit(c+1502,"sim VexRiscv execute_CsrPlugin_writeEnable", false,-1);
        tracep->declBit(c+1503,"sim VexRiscv execute_CsrPlugin_readEnable", false,-1);
        tracep->declBus(c+1320,"sim VexRiscv execute_CsrPlugin_readToWriteData", false,-1, 31,0);
        tracep->declBit(c+1504,"sim VexRiscv switch_Misc_l210_2", false,-1);
        tracep->declBit(c+1505,"sim VexRiscv when_CsrPlugin_l1189", false,-1);
        tracep->declBit(c+1505,"sim VexRiscv when_CsrPlugin_l1193", false,-1);
        tracep->declBus(c+1506,"sim VexRiscv execute_CsrPlugin_csrAddress", false,-1, 11,0);
        tracep->declBit(c+1507,"sim VexRiscv execute_MulPlugin_aSigned", false,-1);
        tracep->declBit(c+1508,"sim VexRiscv execute_MulPlugin_bSigned", false,-1);
        tracep->declBus(c+1244,"sim VexRiscv execute_MulPlugin_a", false,-1, 31,0);
        tracep->declBus(c+1246,"sim VexRiscv execute_MulPlugin_b", false,-1, 31,0);
        tracep->declBus(c+1394,"sim VexRiscv switch_MulPlugin_l87", false,-1, 1,0);
        tracep->declBus(c+1509,"sim VexRiscv execute_MulPlugin_aULow", false,-1, 15,0);
        tracep->declBus(c+1510,"sim VexRiscv execute_MulPlugin_bULow", false,-1, 15,0);
        tracep->declBus(c+1511,"sim VexRiscv execute_MulPlugin_aSLow", false,-1, 16,0);
        tracep->declBus(c+1512,"sim VexRiscv execute_MulPlugin_bSLow", false,-1, 16,0);
        tracep->declBus(c+1513,"sim VexRiscv execute_MulPlugin_aHigh", false,-1, 16,0);
        tracep->declBus(c+1514,"sim VexRiscv execute_MulPlugin_bHigh", false,-1, 16,0);
        tracep->declArray(c+1515,"sim VexRiscv writeBack_MulPlugin_result", false,-1, 65,0);
        tracep->declBit(c+1518,"sim VexRiscv when_MulPlugin_l147", false,-1);
        tracep->declBus(c+1405,"sim VexRiscv switch_MulPlugin_l148", false,-1, 1,0);
        tracep->declQuad(c+1519,"sim VexRiscv memory_DivPlugin_rs1", false,-1, 32,0);
        tracep->declBus(c+1521,"sim VexRiscv memory_DivPlugin_rs2", false,-1, 31,0);
        tracep->declArray(c+1522,"sim VexRiscv memory_DivPlugin_accumulator", false,-1, 64,0);
        tracep->declBit(c+1790,"sim VexRiscv memory_DivPlugin_frontendOk", false,-1);
        tracep->declBit(c+1525,"sim VexRiscv memory_DivPlugin_div_needRevert", false,-1);
        tracep->declBit(c+1526,"sim VexRiscv memory_DivPlugin_div_counter_willIncrement", false,-1);
        tracep->declBit(c+1527,"sim VexRiscv memory_DivPlugin_div_counter_willClear", false,-1);
        tracep->declBus(c+1528,"sim VexRiscv memory_DivPlugin_div_counter_valueNext", false,-1, 5,0);
        tracep->declBus(c+1529,"sim VexRiscv memory_DivPlugin_div_counter_value", false,-1, 5,0);
        tracep->declBit(c+1530,"sim VexRiscv memory_DivPlugin_div_counter_willOverflowIfInc", false,-1);
        tracep->declBit(c+1531,"sim VexRiscv memory_DivPlugin_div_counter_willOverflow", false,-1);
        tracep->declBit(c+1532,"sim VexRiscv memory_DivPlugin_div_done", false,-1);
        tracep->declBit(c+1533,"sim VexRiscv when_MulDivIterativePlugin_l126", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_MulDivIterativePlugin_l126_1", false,-1);
        tracep->declBus(c+1534,"sim VexRiscv memory_DivPlugin_div_result", false,-1, 31,0);
        tracep->declBit(c+1535,"sim VexRiscv when_MulDivIterativePlugin_l128", false,-1);
        tracep->declBit(c+1536,"sim VexRiscv when_MulDivIterativePlugin_l129", false,-1);
        tracep->declBit(c+1536,"sim VexRiscv when_MulDivIterativePlugin_l132", false,-1);
        tracep->declQuad(c+1537,"sim VexRiscv memory_DivPlugin_div_stage_0_remainderShifted", false,-1, 32,0);
        tracep->declQuad(c+1539,"sim VexRiscv memory_DivPlugin_div_stage_0_remainderMinusDenominator", false,-1, 32,0);
        tracep->declBus(c+1541,"sim VexRiscv memory_DivPlugin_div_stage_0_outRemainder", false,-1, 31,0);
        tracep->declBus(c+1542,"sim VexRiscv memory_DivPlugin_div_stage_0_outNumerator", false,-1, 31,0);
        tracep->declBit(c+1533,"sim VexRiscv when_MulDivIterativePlugin_l151", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_MulDivIterativePlugin_l162", false,-1);
        tracep->declBus(c+1543,"sim VexRiscv externalInterruptArray_regNext", false,-1, 31,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124", false,-1);
        tracep->declBus(c+1208,"sim VexRiscv decode_to_execute_PC", false,-1, 31,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_1", false,-1);
        tracep->declBus(c+1185,"sim VexRiscv execute_to_memory_PC", false,-1, 31,0);
        tracep->declBit(c+1544,"sim VexRiscv when_Pipeline_l124_2", false,-1);
        tracep->declBus(c+1258,"sim VexRiscv memory_to_writeBack_PC", false,-1, 31,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_3", false,-1);
        tracep->declBus(c+1249,"sim VexRiscv decode_to_execute_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_4", false,-1);
        tracep->declBus(c+1217,"sim VexRiscv execute_to_memory_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_5", false,-1);
        tracep->declBus(c+1259,"sim VexRiscv memory_to_writeBack_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_6", false,-1);
        tracep->declBus(c+1183,"sim VexRiscv decode_to_execute_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_7", false,-1);
        tracep->declBus(c+1182,"sim VexRiscv execute_to_memory_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_8", false,-1);
        tracep->declBus(c+1181,"sim VexRiscv memory_to_writeBack_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_9", false,-1);
        tracep->declBit(c+1243,"sim VexRiscv decode_to_execute_MEMORY_FORCE_CONSTISTENCY", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_10", false,-1);
        tracep->declBus(c+1229,"sim VexRiscv decode_to_execute_SRC1_CTRL", false,-1, 1,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_11", false,-1);
        tracep->declBit(c+1227,"sim VexRiscv decode_to_execute_SRC_USE_SUB_LESS", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_12", false,-1);
        tracep->declBit(c+1248,"sim VexRiscv decode_to_execute_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_13", false,-1);
        tracep->declBit(c+1242,"sim VexRiscv execute_to_memory_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_14", false,-1);
        tracep->declBit(c+1241,"sim VexRiscv memory_to_writeBack_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_15", false,-1);
        tracep->declBus(c+1233,"sim VexRiscv decode_to_execute_ALU_CTRL", false,-1, 1,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_16", false,-1);
        tracep->declBus(c+1228,"sim VexRiscv decode_to_execute_SRC2_CTRL", false,-1, 1,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_17", false,-1);
        tracep->declBit(c+1214,"sim VexRiscv decode_to_execute_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_18", false,-1);
        tracep->declBit(c+1216,"sim VexRiscv execute_to_memory_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_19", false,-1);
        tracep->declBit(c+1219,"sim VexRiscv memory_to_writeBack_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_20", false,-1);
        tracep->declBit(c+1215,"sim VexRiscv decode_to_execute_BYPASSABLE_EXECUTE_STAGE", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_21", false,-1);
        tracep->declBit(c+1175,"sim VexRiscv decode_to_execute_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_22", false,-1);
        tracep->declBit(c+1218,"sim VexRiscv execute_to_memory_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_23", false,-1);
        tracep->declBit(c+1247,"sim VexRiscv decode_to_execute_MEMORY_WR", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_24", false,-1);
        tracep->declBit(c+1173,"sim VexRiscv execute_to_memory_MEMORY_WR", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_25", false,-1);
        tracep->declBit(c+1240,"sim VexRiscv memory_to_writeBack_MEMORY_WR", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_26", false,-1);
        tracep->declBit(c+1245,"sim VexRiscv decode_to_execute_MEMORY_MANAGMENT", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_27", false,-1);
        tracep->declBit(c+1225,"sim VexRiscv decode_to_execute_SRC_LESS_UNSIGNED", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_28", false,-1);
        tracep->declBus(c+1236,"sim VexRiscv decode_to_execute_ALU_BITWISE_CTRL", false,-1, 1,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_29", false,-1);
        tracep->declBus(c+1224,"sim VexRiscv decode_to_execute_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_30", false,-1);
        tracep->declBus(c+1223,"sim VexRiscv execute_to_memory_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_31", false,-1);
        tracep->declBus(c+1211,"sim VexRiscv decode_to_execute_BRANCH_CTRL", false,-1, 1,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_32", false,-1);
        tracep->declBit(c+1202,"sim VexRiscv decode_to_execute_IS_CSR", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_33", false,-1);
        tracep->declBus(c+1204,"sim VexRiscv decode_to_execute_ENV_CTRL", false,-1, 1,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_34", false,-1);
        tracep->declBus(c+1203,"sim VexRiscv execute_to_memory_ENV_CTRL", false,-1, 1,0);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_35", false,-1);
        tracep->declBus(c+1205,"sim VexRiscv memory_to_writeBack_ENV_CTRL", false,-1, 1,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_36", false,-1);
        tracep->declBit(c+1165,"sim VexRiscv decode_to_execute_IS_MUL", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_37", false,-1);
        tracep->declBit(c+1164,"sim VexRiscv execute_to_memory_IS_MUL", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_38", false,-1);
        tracep->declBit(c+1190,"sim VexRiscv memory_to_writeBack_IS_MUL", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_39", false,-1);
        tracep->declBit(c+1187,"sim VexRiscv decode_to_execute_IS_DIV", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_40", false,-1);
        tracep->declBit(c+1189,"sim VexRiscv execute_to_memory_IS_DIV", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_41", false,-1);
        tracep->declBit(c+1186,"sim VexRiscv decode_to_execute_IS_RS1_SIGNED", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_42", false,-1);
        tracep->declBit(c+1188,"sim VexRiscv decode_to_execute_IS_RS2_SIGNED", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_43", false,-1);
        tracep->declBus(c+1244,"sim VexRiscv decode_to_execute_RS1", false,-1, 31,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_44", false,-1);
        tracep->declBus(c+1246,"sim VexRiscv decode_to_execute_RS2", false,-1, 31,0);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_45", false,-1);
        tracep->declBit(c+1226,"sim VexRiscv decode_to_execute_SRC2_FORCE_ZERO", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_46", false,-1);
        tracep->declBit(c+1209,"sim VexRiscv decode_to_execute_PREDICTION_HAD_BRANCHED2", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_47", false,-1);
        tracep->declBit(c+1201,"sim VexRiscv decode_to_execute_CSR_WRITE_OPCODE", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_Pipeline_l124_48", false,-1);
        tracep->declBit(c+1200,"sim VexRiscv decode_to_execute_CSR_READ_OPCODE", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_49", false,-1);
        tracep->declBus(c+1155,"sim VexRiscv execute_to_memory_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_50", false,-1);
        tracep->declBus(c+1107,"sim VexRiscv memory_to_writeBack_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_51", false,-1);
        tracep->declBus(c+1104,"sim VexRiscv execute_to_memory_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_52", false,-1);
        tracep->declBus(c+1108,"sim VexRiscv memory_to_writeBack_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_53", false,-1);
        tracep->declBus(c+1222,"sim VexRiscv execute_to_memory_SHIFT_RIGHT", false,-1, 31,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_54", false,-1);
        tracep->declBit(c+1207,"sim VexRiscv execute_to_memory_BRANCH_DO", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_55", false,-1);
        tracep->declBus(c+1206,"sim VexRiscv execute_to_memory_BRANCH_CALC", false,-1, 31,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_56", false,-1);
        tracep->declBus(c+1199,"sim VexRiscv execute_to_memory_MUL_LL", false,-1, 31,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_57", false,-1);
        tracep->declQuad(c+1197,"sim VexRiscv execute_to_memory_MUL_LH", false,-1, 33,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_58", false,-1);
        tracep->declQuad(c+1195,"sim VexRiscv execute_to_memory_MUL_HL", false,-1, 33,0);
        tracep->declBit(c+1362,"sim VexRiscv when_Pipeline_l124_59", false,-1);
        tracep->declQuad(c+1142,"sim VexRiscv execute_to_memory_MUL_HH", false,-1, 33,0);
    }
}

void Vsim::traceInitSub8(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_60", false,-1);
        tracep->declQuad(c+1191,"sim VexRiscv memory_to_writeBack_MUL_HH", false,-1, 33,0);
        tracep->declBit(c+1363,"sim VexRiscv when_Pipeline_l124_61", false,-1);
        tracep->declQuad(c+1193,"sim VexRiscv memory_to_writeBack_MUL_LOW", false,-1, 51,0);
        tracep->declBit(c+1545,"sim VexRiscv when_Pipeline_l151", false,-1);
        tracep->declBit(c+1266,"sim VexRiscv when_Pipeline_l154", false,-1);
        tracep->declBit(c+1314,"sim VexRiscv when_Pipeline_l151_1", false,-1);
        tracep->declBit(c+1276,"sim VexRiscv when_Pipeline_l154_1", false,-1);
        tracep->declBit(c+1546,"sim VexRiscv when_Pipeline_l151_2", false,-1);
        tracep->declBit(c+1285,"sim VexRiscv when_Pipeline_l154_2", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277", false,-1);
        tracep->declBit(c+1547,"sim VexRiscv execute_CsrPlugin_csr_3264", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_1", false,-1);
        tracep->declBit(c+1548,"sim VexRiscv execute_CsrPlugin_csr_768", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_2", false,-1);
        tracep->declBit(c+1549,"sim VexRiscv execute_CsrPlugin_csr_836", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_3", false,-1);
        tracep->declBit(c+1550,"sim VexRiscv execute_CsrPlugin_csr_772", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_4", false,-1);
        tracep->declBit(c+1551,"sim VexRiscv execute_CsrPlugin_csr_773", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_5", false,-1);
        tracep->declBit(c+1552,"sim VexRiscv execute_CsrPlugin_csr_833", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_6", false,-1);
        tracep->declBit(c+1553,"sim VexRiscv execute_CsrPlugin_csr_834", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_7", false,-1);
        tracep->declBit(c+1554,"sim VexRiscv execute_CsrPlugin_csr_835", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_8", false,-1);
        tracep->declBit(c+1555,"sim VexRiscv execute_CsrPlugin_csr_3008", false,-1);
        tracep->declBit(c+1361,"sim VexRiscv when_CsrPlugin_l1277_9", false,-1);
        tracep->declBit(c+1556,"sim VexRiscv execute_CsrPlugin_csr_4032", false,-1);
        tracep->declBus(c+1557,"sim VexRiscv switch_CsrPlugin_l723", false,-1, 1,0);
        tracep->declBit(c+1788,"sim VexRiscv when_CsrPlugin_l1310", false,-1);
        tracep->declBit(c+1558,"sim VexRiscv when_CsrPlugin_l1315", false,-1);
        tracep->declBit(c+1559,"sim VexRiscv when_InstructionCache_l239", false,-1);
        tracep->declBus(c+1366,"sim VexRiscv iBusWishbone_DAT_MISO_regNext", false,-1, 31,0);
        tracep->declBus(c+1313,"sim VexRiscv dBusWishbone_DAT_MISO_regNext", false,-1, 31,0);
        tracep->declQuad(c+1560,"sim VexRiscv decode_ENV_CTRL_string", false,-1, 39,0);
        tracep->declArray(c+1562,"sim VexRiscv decode_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declQuad(c+1565,"sim VexRiscv decode_ALU_BITWISE_CTRL_string", false,-1, 39,0);
        tracep->declBus(c+1567,"sim VexRiscv decode_SRC2_CTRL_string", false,-1, 23,0);
        tracep->declQuad(c+1568,"sim VexRiscv decode_ALU_CTRL_string", false,-1, 63,0);
        tracep->declArray(c+1570,"sim VexRiscv decode_SRC1_CTRL_string", false,-1, 95,0);
        tracep->declQuad(c+1573,"sim VexRiscv memory_ENV_CTRL_string", false,-1, 39,0);
        tracep->declQuad(c+1575,"sim VexRiscv execute_ENV_CTRL_string", false,-1, 39,0);
        tracep->declQuad(c+1577,"sim VexRiscv writeBack_ENV_CTRL_string", false,-1, 39,0);
        tracep->declBus(c+1579,"sim VexRiscv execute_BRANCH_CTRL_string", false,-1, 31,0);
        tracep->declArray(c+1580,"sim VexRiscv memory_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declArray(c+1583,"sim VexRiscv execute_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declBus(c+1586,"sim VexRiscv execute_SRC2_CTRL_string", false,-1, 23,0);
        tracep->declArray(c+1587,"sim VexRiscv execute_SRC1_CTRL_string", false,-1, 95,0);
        tracep->declQuad(c+1590,"sim VexRiscv execute_ALU_CTRL_string", false,-1, 63,0);
        tracep->declQuad(c+1592,"sim VexRiscv execute_ALU_BITWISE_CTRL_string", false,-1, 39,0);
        tracep->declBus(c+1594,"sim VexRiscv decode_BRANCH_CTRL_string", false,-1, 31,0);
        tracep->declArray(c+1595,"sim VexRiscv decode_to_execute_SRC1_CTRL_string", false,-1, 95,0);
        tracep->declQuad(c+1590,"sim VexRiscv decode_to_execute_ALU_CTRL_string", false,-1, 63,0);
        tracep->declBus(c+1586,"sim VexRiscv decode_to_execute_SRC2_CTRL_string", false,-1, 23,0);
        tracep->declQuad(c+1592,"sim VexRiscv decode_to_execute_ALU_BITWISE_CTRL_string", false,-1, 39,0);
        tracep->declArray(c+1598,"sim VexRiscv decode_to_execute_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declArray(c+1601,"sim VexRiscv execute_to_memory_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declBus(c+1579,"sim VexRiscv decode_to_execute_BRANCH_CTRL_string", false,-1, 31,0);
        tracep->declQuad(c+1575,"sim VexRiscv decode_to_execute_ENV_CTRL_string", false,-1, 39,0);
        tracep->declQuad(c+1573,"sim VexRiscv execute_to_memory_ENV_CTRL_string", false,-1, 39,0);
        tracep->declQuad(c+1577,"sim VexRiscv memory_to_writeBack_ENV_CTRL_string", false,-1, 39,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1753+i*1,"sim VexRiscv RegFilePlugin_regFile", true,(i+0), 31,0);}}
        tracep->declBit(c+1095,"sim VexRiscv IBusCachedPlugin_cache io_flush", false,-1);
        tracep->declBit(c+1096,"sim VexRiscv IBusCachedPlugin_cache io_cpu_prefetch_isValid", false,-1);
        tracep->declBit(c+1113,"sim VexRiscv IBusCachedPlugin_cache io_cpu_prefetch_haltIt", false,-1);
        tracep->declBus(c+1336,"sim VexRiscv IBusCachedPlugin_cache io_cpu_prefetch_pc", false,-1, 31,0);
        tracep->declBit(c+1097,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_isValid", false,-1);
        tracep->declBit(c+1098,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_isStuck", false,-1);
        tracep->declBit(c+1794,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_isRemoved", false,-1);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_pc", false,-1, 31,0);
        tracep->declBus(c+1114,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_data", false,-1, 31,0);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+1745,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_isPaging", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_allowRead", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_allowWrite", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_allowExecute", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_exception", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_refilling", false,-1);
        tracep->declBit(c+1806,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_bypassTranslation", false,-1);
        tracep->declBus(c+1740,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+1099,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_isValid", false,-1);
        tracep->declBit(c+1098,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_isStuck", false,-1);
        tracep->declBus(c+1257,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_pc", false,-1, 31,0);
        tracep->declBus(c+1120,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_physicalAddress", false,-1, 31,0);
        tracep->declBus(c+1118,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_data", false,-1, 31,0);
        tracep->declBit(c+1119,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_cacheMiss", false,-1);
        tracep->declBit(c+1115,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_error", false,-1);
        tracep->declBit(c+1116,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_mmuRefilling", false,-1);
        tracep->declBit(c+1117,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_mmuException", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_isUser", false,-1);
        tracep->declBit(c+1100,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fill_valid", false,-1);
        tracep->declBus(c+1120,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fill_payload", false,-1, 31,0);
        tracep->declBit(c+1121,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_valid", false,-1);
        tracep->declBit(c+1364,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_ready", false,-1);
        tracep->declBus(c+1122,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+1804,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+1365,"sim VexRiscv IBusCachedPlugin_cache io_mem_rsp_valid", false,-1);
        tracep->declBus(c+1366,"sim VexRiscv IBusCachedPlugin_cache io_mem_rsp_payload_data", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_cache io_mem_rsp_payload_error", false,-1);
        tracep->declBit(c+1726,"sim VexRiscv IBusCachedPlugin_cache clk", false,-1);
        tracep->declBit(c+1094,"sim VexRiscv IBusCachedPlugin_cache reset", false,-1);
        tracep->declBit(c+1604,"sim VexRiscv IBusCachedPlugin_cache lineLoader_fire", false,-1);
        tracep->declBit(c+1605,"sim VexRiscv IBusCachedPlugin_cache lineLoader_valid", false,-1);
        tracep->declBus(c+1606,"sim VexRiscv IBusCachedPlugin_cache lineLoader_address", false,-1, 31,0);
        tracep->declBit(c+1607,"sim VexRiscv IBusCachedPlugin_cache lineLoader_hadError", false,-1);
        tracep->declBit(c+1608,"sim VexRiscv IBusCachedPlugin_cache lineLoader_flushPending", false,-1);
        tracep->declBus(c+1609,"sim VexRiscv IBusCachedPlugin_cache lineLoader_flushCounter", false,-1, 7,0);
        tracep->declBit(c+1610,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l338", false,-1);
        tracep->declBit(c+1611,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l342", false,-1);
        tracep->declBit(c+1612,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l351", false,-1);
        tracep->declBit(c+1613,"sim VexRiscv IBusCachedPlugin_cache lineLoader_cmdSent", false,-1);
        tracep->declBit(c+1364,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_fire", false,-1);
        tracep->declBit(c+1614,"sim VexRiscv IBusCachedPlugin_cache when_Utils_l515", false,-1);
        tracep->declBit(c+1615,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wayToAllocate_willIncrement", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wayToAllocate_willClear", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wayToAllocate_willOverflowIfInc", false,-1);
        tracep->declBit(c+1615,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wayToAllocate_willOverflow", false,-1);
        tracep->declBus(c+1616,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wordIndex", false,-1, 2,0);
        tracep->declBit(c+1617,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_valid", false,-1);
        tracep->declBus(c+1618,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_payload_address", false,-1, 6,0);
        tracep->declBit(c+1619,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_payload_data_valid", false,-1);
        tracep->declBit(c+1607,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_payload_data_error", false,-1);
        tracep->declBus(c+1620,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_payload_data_address", false,-1, 19,0);
        tracep->declBit(c+1365,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_data_0_valid", false,-1);
        tracep->declBus(c+1621,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_data_0_payload_address", false,-1, 9,0);
        tracep->declBus(c+1366,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_data_0_payload_data", false,-1, 31,0);
        tracep->declBit(c+1622,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l401", false,-1);
        tracep->declBus(c+1114,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_banksValue_0_dataMem", false,-1, 31,0);
        tracep->declBus(c+1114,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_banksValue_0_data", false,-1, 31,0);
        tracep->declBit(c+1623,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_waysValues_0_tag_valid", false,-1);
        tracep->declBit(c+1624,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_waysValues_0_tag_error", false,-1);
        tracep->declBus(c+1625,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_waysValues_0_tag_address", false,-1, 19,0);
        tracep->declBit(c+1785,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_hits_0", false,-1);
        tracep->declBit(c+1785,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_valid", false,-1);
        tracep->declBit(c+1624,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_error", false,-1);
        tracep->declBus(c+1114,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_data", false,-1, 31,0);
        tracep->declBus(c+1114,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_word", false,-1, 31,0);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l435", false,-1);
        tracep->declBus(c+1118,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_data_regNextWhen", false,-1, 31,0);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l459", false,-1);
        tracep->declBus(c+1120,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+1626,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+1627,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_isPaging", false,-1);
        tracep->declBit(c+1628,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_allowRead", false,-1);
        tracep->declBit(c+1629,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_allowWrite", false,-1);
        tracep->declBit(c+1630,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_allowExecute", false,-1);
        tracep->declBit(c+1631,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_exception", false,-1);
        tracep->declBit(c+1116,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_refilling", false,-1);
        tracep->declBit(c+1632,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_bypassTranslation", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l459_1", false,-1);
        tracep->declBit(c+1633,"sim VexRiscv IBusCachedPlugin_cache decodeStage_hit_valid", false,-1);
        tracep->declBit(c+1350,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l459_2", false,-1);
        tracep->declBit(c+1634,"sim VexRiscv IBusCachedPlugin_cache decodeStage_hit_error", false,-1);
        tracep->declBit(c+1101,"sim VexRiscv dataCache_1 io_cpu_execute_isValid", false,-1);
        tracep->declBus(c+1102,"sim VexRiscv dataCache_1 io_cpu_execute_address", false,-1, 31,0);
        tracep->declBit(c+1123,"sim VexRiscv dataCache_1 io_cpu_execute_haltIt", false,-1);
        tracep->declBit(c+1247,"sim VexRiscv dataCache_1 io_cpu_execute_args_wr", false,-1);
        tracep->declBus(c+1394,"sim VexRiscv dataCache_1 io_cpu_execute_args_size", false,-1, 1,0);
        tracep->declBit(c+1243,"sim VexRiscv dataCache_1 io_cpu_execute_args_totalyConsistent", false,-1);
        tracep->declBit(c+1124,"sim VexRiscv dataCache_1 io_cpu_execute_refilling", false,-1);
        tracep->declBit(c+1103,"sim VexRiscv dataCache_1 io_cpu_memory_isValid", false,-1);
        tracep->declBit(c+1282,"sim VexRiscv dataCache_1 io_cpu_memory_isStuck", false,-1);
        tracep->declBit(c+1125,"sim VexRiscv dataCache_1 io_cpu_memory_isWrite", false,-1);
        tracep->declBus(c+1104,"sim VexRiscv dataCache_1 io_cpu_memory_address", false,-1, 31,0);
        tracep->declBus(c+1104,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+1105,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_isPaging", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_allowRead", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_allowWrite", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_allowExecute", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_exception", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_refilling", false,-1);
        tracep->declBit(c+1808,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_bypassTranslation", false,-1);
        tracep->declBit(c+1106,"sim VexRiscv dataCache_1 io_cpu_writeBack_isValid", false,-1);
        tracep->declBit(c+1283,"sim VexRiscv dataCache_1 io_cpu_writeBack_isStuck", false,-1);
        tracep->declBit(c+1292,"sim VexRiscv dataCache_1 io_cpu_writeBack_isFiring", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 io_cpu_writeBack_isUser", false,-1);
        tracep->declBit(c+1126,"sim VexRiscv dataCache_1 io_cpu_writeBack_haltIt", false,-1);
        tracep->declBit(c+1131,"sim VexRiscv dataCache_1 io_cpu_writeBack_isWrite", false,-1);
        tracep->declBus(c+1107,"sim VexRiscv dataCache_1 io_cpu_writeBack_storeData", false,-1, 31,0);
        tracep->declBus(c+1127,"sim VexRiscv dataCache_1 io_cpu_writeBack_data", false,-1, 31,0);
        tracep->declBus(c+1108,"sim VexRiscv dataCache_1 io_cpu_writeBack_address", false,-1, 31,0);
        tracep->declBit(c+1128,"sim VexRiscv dataCache_1 io_cpu_writeBack_mmuException", false,-1);
        tracep->declBit(c+1129,"sim VexRiscv dataCache_1 io_cpu_writeBack_unalignedAccess", false,-1);
        tracep->declBit(c+1130,"sim VexRiscv dataCache_1 io_cpu_writeBack_accessError", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 io_cpu_writeBack_keepMemRspData", false,-1);
        tracep->declBit(c+1795,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_SW", false,-1);
        tracep->declBit(c+1796,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_SR", false,-1);
        tracep->declBit(c+1797,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_SO", false,-1);
        tracep->declBit(c+1798,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_SI", false,-1);
        tracep->declBit(c+1799,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_PW", false,-1);
        tracep->declBit(c+1800,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_PR", false,-1);
        tracep->declBit(c+1801,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_PO", false,-1);
        tracep->declBit(c+1802,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_PI", false,-1);
        tracep->declBus(c+1803,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_FM", false,-1, 3,0);
        tracep->declBit(c+1805,"sim VexRiscv dataCache_1 io_cpu_writeBack_exclusiveOk", false,-1);
        tracep->declBit(c+1133,"sim VexRiscv dataCache_1 io_cpu_redo", false,-1);
        tracep->declBit(c+1109,"sim VexRiscv dataCache_1 io_cpu_flush_valid", false,-1);
        tracep->declBit(c+1132,"sim VexRiscv dataCache_1 io_cpu_flush_ready", false,-1);
        tracep->declBit(c+1110,"sim VexRiscv dataCache_1 io_cpu_flush_payload_singleLine", false,-1);
        tracep->declBus(c+1111,"sim VexRiscv dataCache_1 io_cpu_flush_payload_lineId", false,-1, 6,0);
        tracep->declBit(c+1134,"sim VexRiscv dataCache_1 io_mem_cmd_valid", false,-1);
        tracep->declBit(c+1112,"sim VexRiscv dataCache_1 io_mem_cmd_ready", false,-1);
        tracep->declBit(c+1135,"sim VexRiscv dataCache_1 io_mem_cmd_payload_wr", false,-1);
        tracep->declBit(c+1136,"sim VexRiscv dataCache_1 io_mem_cmd_payload_uncached", false,-1);
        tracep->declBus(c+1137,"sim VexRiscv dataCache_1 io_mem_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+1107,"sim VexRiscv dataCache_1 io_mem_cmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+1138,"sim VexRiscv dataCache_1 io_mem_cmd_payload_mask", false,-1, 3,0);
        tracep->declBus(c+1139,"sim VexRiscv dataCache_1 io_mem_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+1790,"sim VexRiscv dataCache_1 io_mem_cmd_payload_last", false,-1);
        tracep->declBit(c+1312,"sim VexRiscv dataCache_1 io_mem_rsp_valid", false,-1);
        tracep->declBit(c+1807,"sim VexRiscv dataCache_1 io_mem_rsp_payload_last", false,-1);
        tracep->declBus(c+1313,"sim VexRiscv dataCache_1 io_mem_rsp_payload_data", false,-1, 31,0);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 io_mem_rsp_payload_error", false,-1);
        tracep->declBit(c+1726,"sim VexRiscv dataCache_1 clk", false,-1);
        tracep->declBit(c+1094,"sim VexRiscv dataCache_1 reset", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 haltCpu", false,-1);
        tracep->declBit(c+1635,"sim VexRiscv dataCache_1 tagsReadCmd_valid", false,-1);
        tracep->declBus(c+1636,"sim VexRiscv dataCache_1 tagsReadCmd_payload", false,-1, 6,0);
        tracep->declBit(c+1637,"sim VexRiscv dataCache_1 tagsWriteCmd_valid", false,-1);
        tracep->declBus(c+1638,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_way", false,-1, 0,0);
        tracep->declBus(c+1639,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_address", false,-1, 6,0);
        tracep->declBit(c+1640,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_data_valid", false,-1);
        tracep->declBit(c+1641,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_data_error", false,-1);
        tracep->declBus(c+1642,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_data_address", false,-1, 19,0);
        tracep->declBit(c+1643,"sim VexRiscv dataCache_1 tagsWriteLastCmd_valid", false,-1);
        tracep->declBus(c+1644,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_way", false,-1, 0,0);
        tracep->declBus(c+1645,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_address", false,-1, 6,0);
        tracep->declBit(c+1646,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_data_valid", false,-1);
        tracep->declBit(c+1647,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_data_error", false,-1);
        tracep->declBus(c+1648,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_data_address", false,-1, 19,0);
        tracep->declBit(c+1649,"sim VexRiscv dataCache_1 dataReadCmd_valid", false,-1);
        tracep->declBus(c+1650,"sim VexRiscv dataCache_1 dataReadCmd_payload", false,-1, 9,0);
        tracep->declBit(c+1651,"sim VexRiscv dataCache_1 dataWriteCmd_valid", false,-1);
        tracep->declBus(c+1652,"sim VexRiscv dataCache_1 dataWriteCmd_payload_way", false,-1, 0,0);
        tracep->declBus(c+1653,"sim VexRiscv dataCache_1 dataWriteCmd_payload_address", false,-1, 9,0);
        tracep->declBus(c+1654,"sim VexRiscv dataCache_1 dataWriteCmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+1655,"sim VexRiscv dataCache_1 dataWriteCmd_payload_mask", false,-1, 3,0);
        tracep->declBit(c+1656,"sim VexRiscv dataCache_1 ways_0_tagsReadRsp_valid", false,-1);
        tracep->declBit(c+1657,"sim VexRiscv dataCache_1 ways_0_tagsReadRsp_error", false,-1);
        tracep->declBus(c+1658,"sim VexRiscv dataCache_1 ways_0_tagsReadRsp_address", false,-1, 19,0);
        tracep->declBus(c+1659,"sim VexRiscv dataCache_1 ways_0_dataReadRspMem", false,-1, 31,0);
        tracep->declBus(c+1659,"sim VexRiscv dataCache_1 ways_0_dataReadRsp", false,-1, 31,0);
        tracep->declBit(c+1660,"sim VexRiscv dataCache_1 when_DataCache_l642", false,-1);
        tracep->declBit(c+1661,"sim VexRiscv dataCache_1 when_DataCache_l645", false,-1);
        tracep->declBit(c+1662,"sim VexRiscv dataCache_1 when_DataCache_l664", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv dataCache_1 rspSync", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv dataCache_1 rspLast", false,-1);
    }
}

void Vsim::traceInitSub9(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1663,"sim VexRiscv dataCache_1 memCmdSent", false,-1);
        tracep->declBit(c+1664,"sim VexRiscv dataCache_1 io_mem_cmd_fire", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l686", false,-1);
        tracep->declBus(c+1665,"sim VexRiscv dataCache_1 stage0_mask", false,-1, 3,0);
        tracep->declBus(c+1666,"sim VexRiscv dataCache_1 stage0_dataColisions", false,-1, 0,0);
        tracep->declBus(c+1788,"sim VexRiscv dataCache_1 stage0_wayInvalidate", false,-1, 0,0);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stage0_isAmo", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv dataCache_1 when_DataCache_l771", false,-1);
        tracep->declBit(c+1125,"sim VexRiscv dataCache_1 stageA_request_wr", false,-1);
        tracep->declBus(c+1667,"sim VexRiscv dataCache_1 stageA_request_size", false,-1, 1,0);
        tracep->declBit(c+1668,"sim VexRiscv dataCache_1 stageA_request_totalyConsistent", false,-1);
        tracep->declBit(c+1362,"sim VexRiscv dataCache_1 when_DataCache_l771_1", false,-1);
        tracep->declBus(c+1669,"sim VexRiscv dataCache_1 stageA_mask", false,-1, 3,0);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stageA_isAmo", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stageA_isLrsc", false,-1);
        tracep->declBus(c+1670,"sim VexRiscv dataCache_1 stageA_wayHits", false,-1, 0,0);
        tracep->declBit(c+1362,"sim VexRiscv dataCache_1 when_DataCache_l771_2", false,-1);
        tracep->declBus(c+1671,"sim VexRiscv dataCache_1 stageA_wayInvalidate", false,-1, 0,0);
        tracep->declBit(c+1362,"sim VexRiscv dataCache_1 when_DataCache_l771_3", false,-1);
        tracep->declBus(c+1672,"sim VexRiscv dataCache_1 stage0_dataColisions_regNextWhen", false,-1, 0,0);
        tracep->declBus(c+1673,"sim VexRiscv dataCache_1 stageA_dataColisions", false,-1, 0,0);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l822", false,-1);
        tracep->declBit(c+1131,"sim VexRiscv dataCache_1 stageB_request_wr", false,-1);
        tracep->declBus(c+1674,"sim VexRiscv dataCache_1 stageB_request_size", false,-1, 1,0);
        tracep->declBit(c+1675,"sim VexRiscv dataCache_1 stageB_request_totalyConsistent", false,-1);
        tracep->declBit(c+1676,"sim VexRiscv dataCache_1 stageB_mmuRspFreeze", false,-1);
        tracep->declBit(c+1677,"sim VexRiscv dataCache_1 when_DataCache_l824", false,-1);
        tracep->declBus(c+1678,"sim VexRiscv dataCache_1 stageB_mmuRsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+1136,"sim VexRiscv dataCache_1 stageB_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+1679,"sim VexRiscv dataCache_1 stageB_mmuRsp_isPaging", false,-1);
        tracep->declBit(c+1680,"sim VexRiscv dataCache_1 stageB_mmuRsp_allowRead", false,-1);
        tracep->declBit(c+1681,"sim VexRiscv dataCache_1 stageB_mmuRsp_allowWrite", false,-1);
        tracep->declBit(c+1682,"sim VexRiscv dataCache_1 stageB_mmuRsp_allowExecute", false,-1);
        tracep->declBit(c+1683,"sim VexRiscv dataCache_1 stageB_mmuRsp_exception", false,-1);
        tracep->declBit(c+1684,"sim VexRiscv dataCache_1 stageB_mmuRsp_refilling", false,-1);
        tracep->declBit(c+1685,"sim VexRiscv dataCache_1 stageB_mmuRsp_bypassTranslation", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l821", false,-1);
        tracep->declBit(c+1686,"sim VexRiscv dataCache_1 stageB_tagsReadRsp_0_valid", false,-1);
        tracep->declBit(c+1687,"sim VexRiscv dataCache_1 stageB_tagsReadRsp_0_error", false,-1);
        tracep->declBus(c+1688,"sim VexRiscv dataCache_1 stageB_tagsReadRsp_0_address", false,-1, 19,0);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l821_1", false,-1);
        tracep->declBus(c+1689,"sim VexRiscv dataCache_1 stageB_dataReadRsp_0", false,-1, 31,0);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l820", false,-1);
        tracep->declBus(c+1690,"sim VexRiscv dataCache_1 stageB_wayInvalidate", false,-1, 0,0);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stageB_consistancyHazard", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l820_1", false,-1);
        tracep->declBus(c+1691,"sim VexRiscv dataCache_1 stageB_dataColisions", false,-1, 0,0);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l820_2", false,-1);
        tracep->declBit(c+1692,"sim VexRiscv dataCache_1 stageB_unaligned", false,-1);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l820_3", false,-1);
        tracep->declBus(c+1693,"sim VexRiscv dataCache_1 stageB_waysHitsBeforeInvalidate", false,-1, 0,0);
        tracep->declBus(c+1694,"sim VexRiscv dataCache_1 stageB_waysHits", false,-1, 0,0);
        tracep->declBit(c+1695,"sim VexRiscv dataCache_1 stageB_waysHit", false,-1);
        tracep->declBus(c+1689,"sim VexRiscv dataCache_1 stageB_dataMux", false,-1, 31,0);
        tracep->declBit(c+1363,"sim VexRiscv dataCache_1 when_DataCache_l820_4", false,-1);
        tracep->declBus(c+1138,"sim VexRiscv dataCache_1 stageB_mask", false,-1, 3,0);
        tracep->declBit(c+1696,"sim VexRiscv dataCache_1 stageB_loaderValid", false,-1);
        tracep->declBus(c+1313,"sim VexRiscv dataCache_1 stageB_ioMemRspMuxed", false,-1, 31,0);
        tracep->declBit(c+1697,"sim VexRiscv dataCache_1 stageB_flusher_waitDone", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stageB_flusher_hold", false,-1);
        tracep->declBus(c+1698,"sim VexRiscv dataCache_1 stageB_flusher_counter", false,-1, 7,0);
        tracep->declBit(c+1699,"sim VexRiscv dataCache_1 when_DataCache_l850", false,-1);
        tracep->declBit(c+1790,"sim VexRiscv dataCache_1 when_DataCache_l856", false,-1);
        tracep->declBit(c+1700,"sim VexRiscv dataCache_1 stageB_flusher_start", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stageB_isAmo", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stageB_isAmoCached", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stageB_isExternalLsrc", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 stageB_isExternalAmo", false,-1);
        tracep->declBus(c+1107,"sim VexRiscv dataCache_1 stageB_requestDataBypass", false,-1, 31,0);
        tracep->declBit(c+1701,"sim VexRiscv dataCache_1 stageB_cpuWriteToCache", false,-1);
        tracep->declBit(c+1702,"sim VexRiscv dataCache_1 when_DataCache_l926", false,-1);
        tracep->declBit(c+1703,"sim VexRiscv dataCache_1 stageB_badPermissions", false,-1);
        tracep->declBit(c+1704,"sim VexRiscv dataCache_1 stageB_loadStoreFault", false,-1);
        tracep->declBit(c+1136,"sim VexRiscv dataCache_1 stageB_bypassCache", false,-1);
        tracep->declBit(c+1705,"sim VexRiscv dataCache_1 when_DataCache_l995", false,-1);
        tracep->declBit(c+1706,"sim VexRiscv dataCache_1 when_DataCache_l1004", false,-1);
        tracep->declBit(c+1707,"sim VexRiscv dataCache_1 when_DataCache_l1009", false,-1);
        tracep->declBit(c+1708,"sim VexRiscv dataCache_1 when_DataCache_l1020", false,-1);
        tracep->declBit(c+1709,"sim VexRiscv dataCache_1 when_DataCache_l1032", false,-1);
        tracep->declBit(c+1136,"sim VexRiscv dataCache_1 when_DataCache_l991", false,-1);
        tracep->declBit(c+1710,"sim VexRiscv dataCache_1 when_DataCache_l1066", false,-1);
        tracep->declBit(c+1711,"sim VexRiscv dataCache_1 when_DataCache_l1075", false,-1);
        tracep->declBit(c+1124,"sim VexRiscv dataCache_1 loader_valid", false,-1);
        tracep->declBit(c+1712,"sim VexRiscv dataCache_1 loader_counter_willIncrement", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 loader_counter_willClear", false,-1);
        tracep->declBus(c+1713,"sim VexRiscv dataCache_1 loader_counter_valueNext", false,-1, 2,0);
        tracep->declBus(c+1714,"sim VexRiscv dataCache_1 loader_counter_value", false,-1, 2,0);
        tracep->declBit(c+1715,"sim VexRiscv dataCache_1 loader_counter_willOverflowIfInc", false,-1);
        tracep->declBit(c+1716,"sim VexRiscv dataCache_1 loader_counter_willOverflow", false,-1);
        tracep->declBus(c+1717,"sim VexRiscv dataCache_1 loader_waysAllocator", false,-1, 0,0);
        tracep->declBit(c+1718,"sim VexRiscv dataCache_1 loader_error", false,-1);
        tracep->declBit(c+1788,"sim VexRiscv dataCache_1 loader_kill", false,-1);
        tracep->declBit(c+1719,"sim VexRiscv dataCache_1 loader_killReg", false,-1);
        tracep->declBit(c+1720,"sim VexRiscv dataCache_1 when_DataCache_l1090", false,-1);
        tracep->declBit(c+1716,"sim VexRiscv dataCache_1 loader_done", false,-1);
        tracep->declBit(c+1721,"sim VexRiscv dataCache_1 when_DataCache_l1118", false,-1);
        tracep->declBit(c+1722,"sim VexRiscv dataCache_1 loader_valid_regNext", false,-1);
        tracep->declBit(c+1723,"sim VexRiscv dataCache_1 when_DataCache_l1122", false,-1);
        tracep->declBit(c+1724,"sim VexRiscv dataCache_1 when_DataCache_l1125", false,-1);
    }
}

void Vsim::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsim::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
        vlTOPp->traceFullSub1(userp, tracep);
        vlTOPp->traceFullSub2(userp, tracep);
        vlTOPp->traceFullSub3(userp, tracep);
        vlTOPp->traceFullSub4(userp, tracep);
        vlTOPp->traceFullSub5(userp, tracep);
        vlTOPp->traceFullSub6(userp, tracep);
        vlTOPp->traceFullSub7(userp, tracep);
        vlTOPp->traceFullSub8(userp, tracep);
    }
}

void Vsim::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSymsp->TOP__sim.__PVT__array_muxed7),2);
        tracep->fullBit(oldp+2,(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_clear));
        tracep->fullBit(oldp+3,(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_clear));
        tracep->fullBit(oldp+4,(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_clear));
        tracep->fullBit(oldp+5,(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_clear));
        tracep->fullBit(oldp+6,(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_clear));
        tracep->fullBit(oldp+7,(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_clear));
        tracep->fullBit(oldp+8,(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_clear));
        tracep->fullBit(oldp+9,(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_clear));
        tracep->fullBit(oldp+10,(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_clear));
        tracep->fullBit(oldp+11,(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_clear));
        tracep->fullBit(oldp+12,(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_clear));
        tracep->fullBit(oldp+13,(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_clear));
        tracep->fullBit(oldp+14,(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_clear));
        tracep->fullBit(oldp+15,(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_clear));
        tracep->fullBit(oldp+16,(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_clear));
        tracep->fullBit(oldp+17,(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_clear));
        tracep->fullBit(oldp+18,(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_clear));
        tracep->fullBit(oldp+19,(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_clear));
        tracep->fullBit(oldp+20,(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_clear));
        tracep->fullBit(oldp+21,(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_clear));
        tracep->fullBit(oldp+22,(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_clear));
        tracep->fullBit(oldp+23,(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_clear));
        tracep->fullBit(oldp+24,(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_clear));
        tracep->fullBit(oldp+25,(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_clear));
        tracep->fullBit(oldp+26,(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_clear));
        tracep->fullBit(oldp+27,(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_clear));
        tracep->fullBit(oldp+28,(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_clear));
        tracep->fullBit(oldp+29,(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_clear));
        tracep->fullBit(oldp+30,(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_clear));
        tracep->fullBit(oldp+31,(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_clear));
        tracep->fullBit(oldp+32,(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_clear));
        tracep->fullBit(oldp+33,(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_clear));
        tracep->fullBit(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
        tracep->fullBit(oldp+35,(vlSymsp->TOP__sim.__PVT__sim_trace_storage));
        tracep->fullBit(oldp+36,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable));
        tracep->fullCData(oldp+37,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data),8);
        tracep->fullBit(oldp+38,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
        tracep->fullIData(oldp+39,(vlSymsp->TOP__sim.gpio_oe),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__sim.gpio_o),32);
        tracep->fullBit(oldp+41,(vlSymsp->TOP__sim.__PVT__int_rst));
        tracep->fullBit(oldp+42,(vlSymsp->TOP__sim.__PVT__soc_rst));
        tracep->fullBit(oldp+43,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                        >> 1U))));
        tracep->fullCData(oldp+44,(vlSymsp->TOP__sim.__PVT__reset_storage),2);
        tracep->fullBit(oldp+45,(vlSymsp->TOP__sim.__PVT__reset_re));
        tracep->fullIData(oldp+46,(vlSymsp->TOP__sim.__PVT__scratch_storage),32);
        tracep->fullBit(oldp+47,(vlSymsp->TOP__sim.__PVT__scratch_re));
        tracep->fullIData(oldp+48,(vlSymsp->TOP__sim.__PVT__bus_errors),32);
        tracep->fullBit(oldp+49,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_we));
        tracep->fullBit(oldp+50,(vlSymsp->TOP__sim.__PVT__bus_errors_re));
        tracep->fullBit(oldp+51,(vlSymsp->TOP__sim.__PVT__error));
        tracep->fullBit(oldp+52,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__soc_rst) 
                                        | ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                           >> 1U)))));
        tracep->fullIData(oldp+53,(vlSymsp->TOP__sim.__PVT__interrupt),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ADR),30);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__sim.__PVT__shared_dat_r),32);
        tracep->fullBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
        tracep->fullBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
        tracep->fullBit(oldp+58,(vlSymsp->TOP__sim.__PVT__ibus_ack));
        tracep->fullCData(oldp+59,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                     ? 7U : 2U)),3);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR),30);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
        tracep->fullCData(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL),4);
        tracep->fullBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
        tracep->fullBit(oldp+64,(vlSymsp->TOP__sim.__PVT__dbus_ack));
        tracep->fullBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
        tracep->fullCData(oldp+66,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                     ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                         ? 7U : 2U)
                                     : 0U)),3);
        tracep->fullIData(oldp+67,(vlSymsp->TOP__sim.__PVT__array_muxed0),30);
        tracep->fullIData(oldp+68,(vlSymsp->TOP__sim.__PVT__array_muxed1),32);
        tracep->fullIData(oldp+69,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
        tracep->fullCData(oldp+70,(vlSymsp->TOP__sim.__PVT__array_muxed2),4);
        tracep->fullBit(oldp+71,(((IData)(vlSymsp->TOP__sim.__PVT__array_muxed3) 
                                  & (IData)(vlSymsp->TOP__sim.__PVT__slave_sel))));
        tracep->fullBit(oldp+72,(vlSymsp->TOP__sim.__PVT__array_muxed4));
        tracep->fullBit(oldp+73,(vlSymsp->TOP__sim.__PVT__ram_bus_ack));
        tracep->fullBit(oldp+74,(vlSymsp->TOP__sim.__PVT__array_muxed5));
        tracep->fullCData(oldp+75,(vlSymsp->TOP__sim.__PVT__array_muxed6),3);
        tracep->fullSData(oldp+76,((0x7fffU & vlSymsp->TOP__sim.__PVT__array_muxed0)),15);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__sim.__PVT__sram
                                   [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
        tracep->fullBit(oldp+78,(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc));
        tracep->fullBit(oldp+79,(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack));
        tracep->fullSData(oldp+80,((0x7ffU & vlSymsp->TOP__sim.__PVT__array_muxed0)),11);
        tracep->fullCData(oldp+81,(vlSymsp->TOP__sim.__PVT__sram0_we),4);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__sim.__PVT__main_ram
                                   [vlSymsp->TOP__sim.__PVT__main_ram_adr0]),32);
        tracep->fullBit(oldp+83,(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc));
        tracep->fullBit(oldp+84,(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack));
        tracep->fullSData(oldp+85,((0x3fffU & vlSymsp->TOP__sim.__PVT__array_muxed0)),14);
        tracep->fullCData(oldp+86,(vlSymsp->TOP__sim.__PVT__sram1_we),4);
        tracep->fullBit(oldp+87,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_first));
        tracep->fullBit(oldp+88,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_last));
        tracep->fullBit(oldp+89,(vlSymsp->TOP__sim.__PVT__uart_rxtx_re));
        tracep->fullCData(oldp+90,((0xffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),8);
        tracep->fullBit(oldp+91,(vlSymsp->TOP__sim.__PVT__uart_rxtx_we));
        tracep->fullCData(oldp+92,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data),8);
        tracep->fullBit(oldp+93,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_we));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__sim.__PVT__uart_txfull_re));
        tracep->fullBit(oldp+96,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))));
        tracep->fullBit(oldp+97,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_we));
        tracep->fullBit(oldp+98,(vlSymsp->TOP__sim.__PVT__uart_rxempty_re));
        tracep->fullBit(oldp+99,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                         & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                        | (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                            & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                           >> 1U)))));
        tracep->fullBit(oldp+100,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
        tracep->fullBit(oldp+101,(vlSymsp->TOP__sim.__PVT__uart_tx_pending));
        tracep->fullBit(oldp+102,(vlSymsp->TOP__sim.__PVT__uart_tx_clear));
        tracep->fullBit(oldp+103,(vlSymsp->TOP__sim.__PVT__uart_tx_trigger_d));
        tracep->fullBit(oldp+104,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable));
        tracep->fullBit(oldp+105,(vlSymsp->TOP__sim.__PVT__uart_rx_pending));
        tracep->fullBit(oldp+106,(vlSymsp->TOP__sim.__PVT__uart_rx_clear));
        tracep->fullBit(oldp+107,(vlSymsp->TOP__sim.__PVT__uart_rx_trigger_d));
        tracep->fullCData(oldp+108,(vlSymsp->TOP__sim.__PVT__uart_status_status),2);
        tracep->fullBit(oldp+109,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_we));
        tracep->fullBit(oldp+110,(vlSymsp->TOP__sim.__PVT__uart_status_re));
        tracep->fullCData(oldp+111,(vlSymsp->TOP__sim.__PVT__uart_pending_status),2);
        tracep->fullBit(oldp+112,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_we));
        tracep->fullBit(oldp+113,(vlSymsp->TOP__sim.__PVT__uart_pending_re));
        tracep->fullCData(oldp+114,(vlSymsp->TOP__sim.__PVT__uart_pending_r),2);
        tracep->fullBit(oldp+115,((1U & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage))));
        tracep->fullBit(oldp+116,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage) 
                                         >> 1U))));
        tracep->fullCData(oldp+117,(vlSymsp->TOP__sim.__PVT__uart_enable_storage),2);
        tracep->fullBit(oldp+118,(vlSymsp->TOP__sim.__PVT__uart_enable_re));
        tracep->fullBit(oldp+119,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))));
        tracep->fullBit(oldp+120,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_we));
        tracep->fullBit(oldp+121,(vlSymsp->TOP__sim.__PVT__uart_txempty_re));
        tracep->fullBit(oldp+122,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
        tracep->fullBit(oldp+123,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_we));
        tracep->fullBit(oldp+124,(vlSymsp->TOP__sim.__PVT__uart_rxfull_re));
        tracep->fullBit(oldp+125,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
        tracep->fullSData(oldp+126,((0xffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),10);
        tracep->fullSData(oldp+127,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
        tracep->fullCData(oldp+128,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0),5);
        tracep->fullCData(oldp+129,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce),4);
        tracep->fullCData(oldp+130,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume),4);
        tracep->fullCData(oldp+131,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr),4);
        tracep->fullSData(oldp+132,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
        tracep->fullBit(oldp+133,(((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
                                   & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))));
        tracep->fullCData(oldp+134,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0) 
                                              + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))),5);
        tracep->fullBit(oldp+135,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_first));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_last));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re));
        tracep->fullBit(oldp+138,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
        tracep->fullSData(oldp+139,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
        tracep->fullCData(oldp+140,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0),5);
        tracep->fullCData(oldp+141,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce),4);
        tracep->fullCData(oldp+142,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume),4);
        tracep->fullCData(oldp+143,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr),4);
        tracep->fullSData(oldp+144,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
        tracep->fullBit(oldp+145,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read));
        tracep->fullCData(oldp+146,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0) 
                                              + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))),5);
        tracep->fullIData(oldp+147,(vlSymsp->TOP__sim.__PVT__timer_load_storage),32);
        tracep->fullBit(oldp+148,(vlSymsp->TOP__sim.__PVT__timer_load_re));
        tracep->fullIData(oldp+149,(vlSymsp->TOP__sim.__PVT__timer_reload_storage),32);
        tracep->fullBit(oldp+150,(vlSymsp->TOP__sim.__PVT__timer_reload_re));
        tracep->fullBit(oldp+151,(vlSymsp->TOP__sim.__PVT__timer_en_storage));
        tracep->fullBit(oldp+152,(vlSymsp->TOP__sim.__PVT__timer_en_re));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__sim.__PVT__timer_update_value_storage));
        tracep->fullBit(oldp+154,(vlSymsp->TOP__sim.__PVT__timer_update_value_re));
        tracep->fullIData(oldp+155,(vlSymsp->TOP__sim.__PVT__timer_value_status),32);
        tracep->fullBit(oldp+156,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_we));
        tracep->fullBit(oldp+157,(vlSymsp->TOP__sim.__PVT__timer_value_re));
        tracep->fullBit(oldp+158,(((IData)(vlSymsp->TOP__sim.__PVT__timer_zero_pending) 
                                   & (IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage))));
        tracep->fullBit(oldp+159,((0U == vlSymsp->TOP__sim.__PVT__timer_value)));
        tracep->fullBit(oldp+160,(vlSymsp->TOP__sim.__PVT__timer_zero_pending));
        tracep->fullBit(oldp+161,(vlSymsp->TOP__sim.__PVT__timer_zero_clear));
        tracep->fullBit(oldp+162,(vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d));
        tracep->fullBit(oldp+163,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_we));
        tracep->fullBit(oldp+164,(vlSymsp->TOP__sim.__PVT__timer_status_re));
        tracep->fullBit(oldp+165,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_we));
        tracep->fullBit(oldp+166,(vlSymsp->TOP__sim.__PVT__timer_pending_re));
        tracep->fullBit(oldp+167,(vlSymsp->TOP__sim.__PVT__timer_pending_r));
        tracep->fullBit(oldp+168,(vlSymsp->TOP__sim.__PVT__timer_enable_storage));
        tracep->fullBit(oldp+169,(vlSymsp->TOP__sim.__PVT__timer_enable_re));
        tracep->fullIData(oldp+170,(vlSymsp->TOP__sim.__PVT__timer_value),32);
        tracep->fullIData(oldp+171,(vlSymsp->TOP__sim.__PVT__oe_storage),32);
        tracep->fullBit(oldp+172,(vlSymsp->TOP__sim.__PVT__oe_re));
        tracep->fullIData(oldp+173,(vlSymsp->TOP__sim.__PVT__in_status),32);
        tracep->fullBit(oldp+174,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_we));
        tracep->fullBit(oldp+175,(vlSymsp->TOP__sim.__PVT__in_re));
        tracep->fullIData(oldp+176,(vlSymsp->TOP__sim.__PVT__out_storage),32);
        tracep->fullBit(oldp+177,(vlSymsp->TOP__sim.__PVT__out_re));
        tracep->fullIData(oldp+178,(vlSymsp->TOP__sim.__PVT__mode_storage),32);
        tracep->fullBit(oldp+179,(vlSymsp->TOP__sim.__PVT__mode_re));
        tracep->fullIData(oldp+180,(vlSymsp->TOP__sim.__PVT__edge_storage),32);
        tracep->fullBit(oldp+181,(vlSymsp->TOP__sim.__PVT__edge_re));
        tracep->fullBit(oldp+182,(vlSymsp->TOP__sim.__PVT__in_pads_n_d0));
        tracep->fullBit(oldp+183,(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger));
        tracep->fullBit(oldp+184,(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_pending));
        tracep->fullBit(oldp+185,(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger_d));
        tracep->fullBit(oldp+186,(vlSymsp->TOP__sim.__PVT__in_pads_n_d1));
        tracep->fullBit(oldp+187,(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger));
        tracep->fullBit(oldp+188,(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_pending));
        tracep->fullBit(oldp+189,(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger_d));
        tracep->fullBit(oldp+190,(vlSymsp->TOP__sim.__PVT__in_pads_n_d2));
        tracep->fullBit(oldp+191,(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger));
        tracep->fullBit(oldp+192,(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_pending));
        tracep->fullBit(oldp+193,(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger_d));
        tracep->fullBit(oldp+194,(vlSymsp->TOP__sim.__PVT__in_pads_n_d3));
        tracep->fullBit(oldp+195,(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_pending));
        tracep->fullBit(oldp+197,(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger_d));
        tracep->fullBit(oldp+198,(vlSymsp->TOP__sim.__PVT__in_pads_n_d4));
        tracep->fullBit(oldp+199,(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger));
        tracep->fullBit(oldp+200,(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_pending));
        tracep->fullBit(oldp+201,(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger_d));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__sim.__PVT__in_pads_n_d5));
    }
}

void Vsim::traceFullSub1(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*223:0*/ __Vtemp6[7];
    WData/*415:0*/ __Vtemp9[13];
    WData/*415:0*/ __Vtemp10[13];
    // Body
    {
        tracep->fullBit(oldp+203,(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger));
        tracep->fullBit(oldp+204,(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_pending));
        tracep->fullBit(oldp+205,(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger_d));
        tracep->fullBit(oldp+206,(vlSymsp->TOP__sim.__PVT__in_pads_n_d6));
        tracep->fullBit(oldp+207,(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger));
        tracep->fullBit(oldp+208,(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_pending));
        tracep->fullBit(oldp+209,(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger_d));
        tracep->fullBit(oldp+210,(vlSymsp->TOP__sim.__PVT__in_pads_n_d7));
        tracep->fullBit(oldp+211,(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger));
        tracep->fullBit(oldp+212,(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_pending));
        tracep->fullBit(oldp+213,(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger_d));
        tracep->fullBit(oldp+214,(vlSymsp->TOP__sim.__PVT__in_pads_n_d8));
        tracep->fullBit(oldp+215,(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_pending));
        tracep->fullBit(oldp+217,(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger_d));
        tracep->fullBit(oldp+218,(vlSymsp->TOP__sim.__PVT__in_pads_n_d9));
        tracep->fullBit(oldp+219,(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger));
        tracep->fullBit(oldp+220,(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_pending));
        tracep->fullBit(oldp+221,(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger_d));
        tracep->fullBit(oldp+222,(vlSymsp->TOP__sim.__PVT__in_pads_n_d10));
        tracep->fullBit(oldp+223,(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger));
        tracep->fullBit(oldp+224,(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_pending));
        tracep->fullBit(oldp+225,(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger_d));
        tracep->fullBit(oldp+226,(vlSymsp->TOP__sim.__PVT__in_pads_n_d11));
        tracep->fullBit(oldp+227,(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger));
        tracep->fullBit(oldp+228,(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_pending));
        tracep->fullBit(oldp+229,(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger_d));
        tracep->fullBit(oldp+230,(vlSymsp->TOP__sim.__PVT__in_pads_n_d12));
        tracep->fullBit(oldp+231,(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger));
        tracep->fullBit(oldp+232,(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_pending));
        tracep->fullBit(oldp+233,(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger_d));
        tracep->fullBit(oldp+234,(vlSymsp->TOP__sim.__PVT__in_pads_n_d13));
        tracep->fullBit(oldp+235,(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger));
        tracep->fullBit(oldp+236,(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_pending));
        tracep->fullBit(oldp+237,(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger_d));
        tracep->fullBit(oldp+238,(vlSymsp->TOP__sim.__PVT__in_pads_n_d14));
        tracep->fullBit(oldp+239,(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger));
        tracep->fullBit(oldp+240,(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_pending));
        tracep->fullBit(oldp+241,(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger_d));
        tracep->fullBit(oldp+242,(vlSymsp->TOP__sim.__PVT__in_pads_n_d15));
        tracep->fullBit(oldp+243,(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger));
        tracep->fullBit(oldp+244,(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_pending));
        tracep->fullBit(oldp+245,(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger_d));
        tracep->fullBit(oldp+246,(vlSymsp->TOP__sim.__PVT__in_pads_n_d16));
        tracep->fullBit(oldp+247,(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger));
        tracep->fullBit(oldp+248,(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_pending));
        tracep->fullBit(oldp+249,(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger_d));
        tracep->fullBit(oldp+250,(vlSymsp->TOP__sim.__PVT__in_pads_n_d17));
        tracep->fullBit(oldp+251,(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger));
        tracep->fullBit(oldp+252,(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_pending));
        tracep->fullBit(oldp+253,(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger_d));
        tracep->fullBit(oldp+254,(vlSymsp->TOP__sim.__PVT__in_pads_n_d18));
        tracep->fullBit(oldp+255,(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger));
        tracep->fullBit(oldp+256,(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_pending));
        tracep->fullBit(oldp+257,(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger_d));
        tracep->fullBit(oldp+258,(vlSymsp->TOP__sim.__PVT__in_pads_n_d19));
        tracep->fullBit(oldp+259,(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger));
        tracep->fullBit(oldp+260,(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_pending));
        tracep->fullBit(oldp+261,(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger_d));
        tracep->fullBit(oldp+262,(vlSymsp->TOP__sim.__PVT__in_pads_n_d20));
        tracep->fullBit(oldp+263,(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger));
        tracep->fullBit(oldp+264,(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_pending));
        tracep->fullBit(oldp+265,(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger_d));
        tracep->fullBit(oldp+266,(vlSymsp->TOP__sim.__PVT__in_pads_n_d21));
        tracep->fullBit(oldp+267,(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger));
        tracep->fullBit(oldp+268,(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_pending));
        tracep->fullBit(oldp+269,(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger_d));
        tracep->fullBit(oldp+270,(vlSymsp->TOP__sim.__PVT__in_pads_n_d22));
        tracep->fullBit(oldp+271,(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger));
        tracep->fullBit(oldp+272,(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_pending));
        tracep->fullBit(oldp+273,(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger_d));
        tracep->fullBit(oldp+274,(vlSymsp->TOP__sim.__PVT__in_pads_n_d23));
        tracep->fullBit(oldp+275,(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger));
        tracep->fullBit(oldp+276,(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_pending));
        tracep->fullBit(oldp+277,(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger_d));
        tracep->fullBit(oldp+278,(vlSymsp->TOP__sim.__PVT__in_pads_n_d24));
        tracep->fullBit(oldp+279,(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger));
        tracep->fullBit(oldp+280,(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_pending));
        tracep->fullBit(oldp+281,(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger_d));
        tracep->fullBit(oldp+282,(vlSymsp->TOP__sim.__PVT__in_pads_n_d25));
        tracep->fullBit(oldp+283,(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger));
        tracep->fullBit(oldp+284,(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_pending));
        tracep->fullBit(oldp+285,(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger_d));
        tracep->fullBit(oldp+286,(vlSymsp->TOP__sim.__PVT__in_pads_n_d26));
        tracep->fullBit(oldp+287,(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger));
        tracep->fullBit(oldp+288,(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_pending));
        tracep->fullBit(oldp+289,(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger_d));
        tracep->fullBit(oldp+290,(vlSymsp->TOP__sim.__PVT__in_pads_n_d27));
        tracep->fullBit(oldp+291,(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger));
        tracep->fullBit(oldp+292,(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_pending));
        tracep->fullBit(oldp+293,(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger_d));
        tracep->fullBit(oldp+294,(vlSymsp->TOP__sim.__PVT__in_pads_n_d28));
        tracep->fullBit(oldp+295,(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_trigger));
        tracep->fullBit(oldp+296,(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_pending));
        tracep->fullBit(oldp+297,(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_trigger_d));
        tracep->fullBit(oldp+298,(vlSymsp->TOP__sim.__PVT__in_pads_n_d29));
        tracep->fullBit(oldp+299,(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_trigger));
        tracep->fullBit(oldp+300,(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_pending));
        tracep->fullBit(oldp+301,(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_trigger_d));
        tracep->fullBit(oldp+302,(vlSymsp->TOP__sim.__PVT__in_pads_n_d30));
        tracep->fullBit(oldp+303,(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_trigger));
        tracep->fullBit(oldp+304,(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_pending));
        tracep->fullBit(oldp+305,(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_trigger_d));
        tracep->fullBit(oldp+306,(vlSymsp->TOP__sim.__PVT__in_pads_n_d31));
        tracep->fullBit(oldp+307,(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_trigger));
        tracep->fullBit(oldp+308,(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_pending));
        tracep->fullBit(oldp+309,(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_trigger_d));
        tracep->fullBit(oldp+310,(vlSymsp->TOP__sim.__PVT__sim_trace_re));
        tracep->fullCData(oldp+311,(vlSymsp->TOP__sim.__PVT__sim_marker_storage),8);
        tracep->fullBit(oldp+312,(vlSymsp->TOP__sim.__PVT__sim_marker_re));
        tracep->fullBit(oldp+313,(vlSymsp->TOP__sim.__PVT__finish_re));
        tracep->fullBit(oldp+314,((1U & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)));
        tracep->fullBit(oldp+315,(vlSymsp->TOP__sim.__PVT__finish_we));
        tracep->fullBit(oldp+316,(vlSymsp->TOP__sim.__PVT__mux_ready));
        __Vtemp6[0U] = (IData)((0x3c00000000ULL | (
                                                   ((QData)((IData)(
                                                                    (((IData)(vlSymsp->TOP__sim.__PVT__ibus_ack) 
                                                                      << 0x1fU) 
                                                                     | vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ADR))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB)))))));
        __Vtemp6[1U] = ((0xffffffc0U & ((IData)(((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                 << 0x20U)) 
                                        << 6U)) | (IData)(
                                                          ((0x3c00000000ULL 
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
        __Vtemp6[2U] = ((0x3fU & ((IData)(((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                           << 0x20U)) 
                                  >> 0x1aU)) | (0xffffffc0U 
                                                & ((IData)(
                                                           (((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                             << 0x20U) 
                                                            >> 0x20U)) 
                                                   << 6U)));
        __Vtemp6[3U] = ((0xffffff00U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR 
                                        << 8U)) | (
                                                   (0xffffff80U 
                                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                                       << 7U)) 
                                                   | ((0xffffffc0U 
                                                       & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & ((IData)(
                                                                    (((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                                      << 0x20U) 
                                                                     >> 0x20U)) 
                                                            >> 0x1aU)))));
        __Vtemp6[4U] = ((0xfffff000U & ((IData)((((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data)))) 
                                        << 0xcU)) | 
                        ((0xffffff00U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                         << 8U)) | 
                         (0xffU & ((0x80U & ((IData)(vlSymsp->TOP__sim.__PVT__dbus_ack) 
                                             << 7U)) 
                                   | ((0xc0U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                                << 6U)) 
                                      | (vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR 
                                         >> 0x18U))))));
        __Vtemp6[5U] = ((0xfffU & ((IData)((((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data)))) 
                                   >> 0x14U)) | (0xfffff000U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data))) 
                                                             >> 0x20U)) 
                                                    << 0xcU)));
        __Vtemp6[6U] = (0xfffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__sim.__PVT__shared_dat_r)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data))) 
                                           >> 0x20U)) 
                                  >> 0x14U));
        tracep->fullWData(oldp+317,(__Vtemp6),204);
        tracep->fullBit(oldp+324,(vlSymsp->TOP__sim.__PVT__mux_source_valid));
        tracep->fullBit(oldp+325,(vlSymsp->TOP__sim.__PVT__storage_sink_sink_ready));
        tracep->fullBit(oldp+326,(vlSymsp->TOP__sim.__PVT__mux_source_first));
        tracep->fullBit(oldp+327,(vlSymsp->TOP__sim.__PVT__mux_source_last));
        tracep->fullWData(oldp+328,(vlSymsp->TOP__sim.__PVT__mux_source_payload_data),204);
        tracep->fullBit(oldp+335,(vlSymsp->TOP__sim.__PVT__mux_source_payload_hit));
        tracep->fullBit(oldp+336,(vlSymsp->TOP__sim.__PVT__mux_value_storage));
        tracep->fullBit(oldp+337,(vlSymsp->TOP__sim.__PVT__mux_value_re));
        tracep->fullBit(oldp+338,(vlSymsp->TOP__sim.__PVT__multiregimpl32_regs1));
        tracep->fullBit(oldp+339,(vlSymsp->TOP__sim.__PVT__trigger_source_source_payload_hit));
        tracep->fullBit(oldp+340,(vlSymsp->TOP__sim.__PVT__trigger_enable_storage));
        tracep->fullBit(oldp+341,(vlSymsp->TOP__sim.__PVT__trigger_enable_re));
        tracep->fullBit(oldp+342,(vlSymsp->TOP__sim.__PVT__multiregimpl34_regs1));
        tracep->fullBit(oldp+343,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_we));
        tracep->fullBit(oldp+344,(vlSymsp->TOP__sim.__PVT__trigger_done_re));
        tracep->fullBit(oldp+345,(vlSymsp->TOP__sim.__PVT__trigger_mem_write_re));
        tracep->fullBit(oldp+346,(vlSymsp->TOP__sim.__PVT__trigger_mem_write_we));
        tracep->fullWData(oldp+347,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage),204);
        tracep->fullBit(oldp+354,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_re));
        tracep->fullWData(oldp+355,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage),204);
        tracep->fullBit(oldp+362,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_re));
        tracep->fullBit(oldp+363,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_writable)))));
        tracep->fullBit(oldp+364,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_we));
        tracep->fullBit(oldp+365,(vlSymsp->TOP__sim.__PVT__trigger_mem_full_re));
        tracep->fullBit(oldp+366,(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1));
        tracep->fullBit(oldp+367,(vlSymsp->TOP__sim.__PVT__trigger_enable_d));
        tracep->fullBit(oldp+368,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_readable)))));
        tracep->fullBit(oldp+369,(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_writable));
        tracep->fullBit(oldp+370,(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_readable));
        tracep->fullBit(oldp+371,((((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1) 
                                    & (0U == ((((((
                                                   ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[0U] 
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
        tracep->fullBit(oldp+372,(vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_first));
        tracep->fullBit(oldp+373,(vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_last));
        tracep->fullWData(oldp+374,(vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask),204);
        tracep->fullWData(oldp+381,(vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value),204);
        __Vtemp9[0U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[0U];
        __Vtemp9[1U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[1U];
        __Vtemp9[2U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[2U];
        __Vtemp9[3U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[3U];
        __Vtemp9[4U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[4U];
        __Vtemp9[5U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[5U];
        __Vtemp9[6U] = ((0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U] 
                                        << 0xcU)) | 
                        vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[6U]);
        __Vtemp9[7U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U] 
                                   >> 0x14U)) | (0xfffff000U 
                                                 & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U] 
                                                    << 0xcU)));
        __Vtemp9[8U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U] 
                                   >> 0x14U)) | (0xfffff000U 
                                                 & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U] 
                                                    << 0xcU)));
        __Vtemp9[9U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U] 
                                   >> 0x14U)) | (0xfffff000U 
                                                 & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U] 
                                                    << 0xcU)));
        __Vtemp9[0xaU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U] 
                                     >> 0x14U)) | (0xfffff000U 
                                                   & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U] 
                                                      << 0xcU)));
        __Vtemp9[0xbU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U] 
                                     >> 0x14U)) | (0xfffff000U 
                                                   & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U] 
                                                      << 0xcU)));
        __Vtemp9[0xcU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U] 
                                     >> 0x14U)) | (0xfffff000U 
                                                   & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[6U] 
                                                      << 0xcU)));
        VL_EXTEND_WW(410,408, __Vtemp10, __Vtemp9);
        tracep->fullWData(oldp+388,(__Vtemp10),410);
        tracep->fullWData(oldp+401,(vlSymsp->TOP__sim.__PVT__storage_2_dat1),410);
        tracep->fullBit(oldp+414,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_ce));
        tracep->fullCData(oldp+415,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q),5);
        tracep->fullCData(oldp+416,(((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_next_binary) 
                                     ^ (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_next_binary) 
                                                >> 1U)))),5);
        tracep->fullCData(oldp+417,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary),5);
        tracep->fullCData(oldp+418,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_next_binary),5);
        tracep->fullBit(oldp+419,(((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_readable) 
                                   & (((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1) 
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
                                      | (0U != (IData)(vlSymsp->TOP__sim.__PVT__trigger_count))))));
        tracep->fullCData(oldp+420,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q),5);
        tracep->fullCData(oldp+421,(((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary) 
                                     ^ (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary) 
                                                >> 1U)))),5);
        tracep->fullCData(oldp+422,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_binary),5);
        tracep->fullCData(oldp+423,(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary),5);
        tracep->fullCData(oldp+424,(vlSymsp->TOP__sim.__PVT__multiregimpl35_regs1),5);
        tracep->fullCData(oldp+425,(vlSymsp->TOP__sim.__PVT__multiregimpl36_regs1),5);
        tracep->fullCData(oldp+426,((0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))),4);
        tracep->fullWData(oldp+427,(vlSymsp->TOP__sim.__PVT__storage_2_dat0),410);
        tracep->fullCData(oldp+440,((0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))),4);
        tracep->fullBit(oldp+441,((0U == ((((((((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[0U] 
                                                 & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[0U]) 
                                                ^ (
                                                   vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[0U] 
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
                                                ^ (
                                                   vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[3U] 
                                                   & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[3U]))) 
                                            | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[4U] 
                                                & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U]) 
                                               ^ (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[4U] 
                                                  & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U]))) 
                                           | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[5U] 
                                               & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U]) 
                                              ^ (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[5U] 
                                                 & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U]))) 
                                          | ((vlSymsp->TOP__sim.__PVT__mux_source_payload_data[6U] 
                                              & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U]) 
                                             ^ (vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[6U] 
                                                & vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U]))))));
        tracep->fullBit(oldp+442,((1U & (~ ((~ (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1)) 
                                            & (IData)(vlSymsp->TOP__sim.__PVT__trigger_enable_d))))));
        tracep->fullBit(oldp+443,((0U == (IData)(vlSymsp->TOP__sim.__PVT__trigger_count))));
        tracep->fullCData(oldp+444,(vlSymsp->TOP__sim.__PVT__trigger_count),6);
        tracep->fullBit(oldp+445,(vlSymsp->TOP__sim.__PVT__subsampler_source_valid));
        tracep->fullSData(oldp+446,(vlSymsp->TOP__sim.__PVT__subsampler_value_storage),16);
        tracep->fullBit(oldp+447,(vlSymsp->TOP__sim.__PVT__subsampler_value_re));
        tracep->fullSData(oldp+448,(vlSymsp->TOP__sim.__PVT__multiregimpl37_regs1),16);
        tracep->fullSData(oldp+449,(vlSymsp->TOP__sim.__PVT__subsampler_counter),16);
        tracep->fullBit(oldp+450,(vlSymsp->TOP__sim.__PVT__subsampler_done));
        tracep->fullBit(oldp+451,(vlSymsp->TOP__sim.__PVT__storage_enable_storage));
        tracep->fullBit(oldp+452,(vlSymsp->TOP__sim.__PVT__storage_enable_re));
        tracep->fullBit(oldp+453,(vlSymsp->TOP__sim.__PVT__multiregimpl41_regs1));
        tracep->fullBit(oldp+454,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_we));
        tracep->fullBit(oldp+455,(vlSymsp->TOP__sim.__PVT__storage_done_re));
        tracep->fullSData(oldp+456,(vlSymsp->TOP__sim.__PVT__storage_length_storage),10);
        tracep->fullBit(oldp+457,(vlSymsp->TOP__sim.__PVT__storage_length_re));
        tracep->fullSData(oldp+458,(vlSymsp->TOP__sim.__PVT__storage_offset_storage),10);
        tracep->fullBit(oldp+459,(vlSymsp->TOP__sim.__PVT__storage_offset_re));
        tracep->fullSData(oldp+460,(vlSymsp->TOP__sim.__PVT__multiregimpl42_regs1),10);
        tracep->fullBit(oldp+461,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_we));
        tracep->fullBit(oldp+462,(vlSymsp->TOP__sim.__PVT__storage_mem_level_re));
        tracep->fullIData(oldp+463,(vlSymsp->TOP__sim.__PVT__storage_converter_source_payload_data),32);
        tracep->fullBit(oldp+464,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_we));
        tracep->fullBit(oldp+465,(vlSymsp->TOP__sim.__PVT__storage_mem_data_re));
        tracep->fullBit(oldp+466,(vlSymsp->TOP__sim.__PVT__multiregimpl38_regs1));
        tracep->fullBit(oldp+467,(vlSymsp->TOP__sim.__PVT__storage_enable_d));
        tracep->fullSData(oldp+468,(vlSymsp->TOP__sim.__PVT__multiregimpl39_regs1),10);
        tracep->fullSData(oldp+469,(vlSymsp->TOP__sim.__PVT__multiregimpl40_regs1),10);
        tracep->fullBit(oldp+470,(vlSymsp->TOP__sim.__PVT__storage_done0));
        tracep->fullSData(oldp+471,(vlSymsp->TOP__sim.__PVT__storage_mem_level1),10);
        tracep->fullBit(oldp+472,(vlSymsp->TOP__sim.__PVT__storage_mem_sink_valid));
        tracep->fullBit(oldp+473,((0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0))));
        tracep->fullBit(oldp+474,(vlSymsp->TOP__sim.__PVT__storage_mem_sink_first));
        tracep->fullBit(oldp+475,(vlSymsp->TOP__sim.__PVT__storage_mem_sink_last));
        tracep->fullWData(oldp+476,(vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data),204);
        tracep->fullBit(oldp+483,(vlSymsp->TOP__sim.__PVT__storage_mem_readable));
    }
}

void Vsim::traceFullSub2(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*223:0*/ __Vtemp16[7];
    WData/*223:0*/ __Vtemp18[7];
    WData/*223:0*/ __Vtemp19[7];
    WData/*223:0*/ __Vtemp20[7];
    // Body
    {
        tracep->fullBit(oldp+484,(vlSymsp->TOP__sim.__PVT__storage_mem_source_ready));
        tracep->fullBit(oldp+485,(vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_first));
        tracep->fullBit(oldp+486,(vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_last));
        tracep->fullWData(oldp+487,(vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data),204);
        tracep->fullBit(oldp+494,(vlSymsp->TOP__sim.__PVT__storage_mem_syncfifo_re));
        tracep->fullBit(oldp+495,((0U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0))));
        __Vtemp16[0U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[0U];
        __Vtemp16[1U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[1U];
        __Vtemp16[2U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[2U];
        __Vtemp16[3U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[3U];
        __Vtemp16[4U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[4U];
        __Vtemp16[5U] = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[5U];
        __Vtemp16[6U] = ((0xffffe000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_last) 
                                         << 0xdU)) 
                         | ((0xfffff000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_first) 
                                            << 0xcU)) 
                            | vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[6U]));
        tracep->fullWData(oldp+496,(__Vtemp16),206);
        tracep->fullWData(oldp+503,(vlSymsp->TOP__sim.__PVT__storage_3_dat1),206);
        tracep->fullSData(oldp+510,(vlSymsp->TOP__sim.__PVT__storage_mem_level0),10);
        tracep->fullSData(oldp+511,(vlSymsp->TOP__sim.__PVT__storage_mem_produce),9);
        tracep->fullSData(oldp+512,(vlSymsp->TOP__sim.__PVT__storage_mem_consume),9);
        tracep->fullSData(oldp+513,(vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr),9);
        tracep->fullWData(oldp+514,(vlSymsp->TOP__sim.__PVT__storage_3_dat0),206);
        tracep->fullBit(oldp+521,(((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_valid) 
                                   & (0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0)))));
        tracep->fullBit(oldp+522,(vlSymsp->TOP__sim.__PVT__storage_mem_do_read));
        tracep->fullBit(oldp+523,(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_valid));
        tracep->fullBit(oldp+524,(vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_writable));
        tracep->fullBit(oldp+525,(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_first));
        tracep->fullBit(oldp+526,(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_last));
        tracep->fullWData(oldp+527,(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data),204);
        tracep->fullBit(oldp+534,(vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_readable));
        tracep->fullBit(oldp+535,(((6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)) 
                                   & (IData)(vlSymsp->TOP__sim.__PVT__storage_read_source_ready))));
        tracep->fullBit(oldp+536,(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_first));
        tracep->fullBit(oldp+537,(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_last));
        tracep->fullWData(oldp+538,(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data),204);
        __Vtemp18[0U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[0U];
        __Vtemp18[1U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[1U];
        __Vtemp18[2U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[2U];
        __Vtemp18[3U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[3U];
        __Vtemp18[4U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[4U];
        __Vtemp18[5U] = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[5U];
        __Vtemp18[6U] = ((0xffffe000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_last) 
                                         << 0xdU)) 
                         | ((0xfffff000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_first) 
                                            << 0xcU)) 
                            | vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[6U]));
        tracep->fullWData(oldp+545,(__Vtemp18),206);
        tracep->fullWData(oldp+552,(vlSymsp->TOP__sim.__PVT__storage_4_dat1),206);
        tracep->fullBit(oldp+559,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_ce));
        tracep->fullCData(oldp+560,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q),3);
        tracep->fullCData(oldp+561,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_next_binary) 
                                     ^ (3U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_next_binary) 
                                              >> 1U)))),3);
        tracep->fullCData(oldp+562,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary),3);
        tracep->fullCData(oldp+563,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_next_binary),3);
        tracep->fullBit(oldp+564,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_readable) 
                                   & ((6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__storage_read_source_ready)))));
        tracep->fullCData(oldp+565,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q),3);
        tracep->fullCData(oldp+566,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary) 
                                     ^ (3U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary) 
                                              >> 1U)))),3);
        tracep->fullCData(oldp+567,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_binary),3);
        tracep->fullCData(oldp+568,(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary),3);
        tracep->fullCData(oldp+569,(vlSymsp->TOP__sim.__PVT__multiregimpl43_regs1),3);
        tracep->fullCData(oldp+570,(vlSymsp->TOP__sim.__PVT__multiregimpl44_regs1),3);
        tracep->fullCData(oldp+571,((3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))),2);
        tracep->fullWData(oldp+572,(vlSymsp->TOP__sim.__PVT__storage_4_dat0),206);
        tracep->fullCData(oldp+579,((3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))),2);
        tracep->fullBit(oldp+580,(vlSymsp->TOP__sim.__PVT__storage_wait));
        tracep->fullBit(oldp+581,((0U == (IData)(vlSymsp->TOP__sim.__PVT__storage_count))));
        tracep->fullSData(oldp+582,(vlSymsp->TOP__sim.__PVT__storage_count),10);
        tracep->fullBit(oldp+583,(vlSymsp->TOP__sim.__PVT__storage_read_source_ready));
        tracep->fullBit(oldp+584,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_first) 
                                   & (0U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)))));
        tracep->fullBit(oldp+585,(((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_last) 
                                   & (6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)))));
        VL_EXTEND_WI(204,32, __Vtemp19, vlSymsp->TOP__sim.__PVT__storage_converter_source_payload_data);
        tracep->fullWData(oldp+586,(__Vtemp19),204);
        VL_EXTEND_WW(224,204, __Vtemp20, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
        tracep->fullWData(oldp+593,(__Vtemp20),224);
        tracep->fullBit(oldp+600,((6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))));
        tracep->fullCData(oldp+601,(vlSymsp->TOP__sim.__PVT__storage_converter_mux),3);
        tracep->fullBit(oldp+602,((0U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))));
        tracep->fullSData(oldp+603,(vlSymsp->TOP__sim.__PVT__simsoc_adr),14);
        tracep->fullBit(oldp+604,(vlSymsp->TOP__sim.__PVT__simsoc_we));
        tracep->fullIData(oldp+605,(vlSymsp->TOP__sim.__PVT__simsoc_dat_w),32);
        tracep->fullIData(oldp+606,(((((((((vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                                            | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r) 
                                           | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r) 
                                          | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface3_bank_bus_dat_r) 
                                         | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface4_bank_bus_dat_r) 
                                        | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface5_bank_bus_dat_r) 
                                       | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface6_bank_bus_dat_r) 
                                      | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface7_bank_bus_dat_r) 
                                     | vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r)),32);
        tracep->fullIData(oldp+607,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone_dat_r),32);
        tracep->fullBit(oldp+608,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone_cyc));
        tracep->fullBit(oldp+609,(vlSymsp->TOP__sim.__PVT__simsoc_wishbone_ack));
        tracep->fullBit(oldp+610,(vlSymsp->TOP__sim.__PVT__array_muxed3));
        tracep->fullBit(oldp+611,(vlSymsp->TOP__sim.__PVT__shared_ack));
        tracep->fullCData(oldp+612,(vlSymsp->TOP__sim.__PVT__request),2);
        tracep->fullBit(oldp+613,(vlSymsp->TOP__sim.__PVT__grant));
        tracep->fullCData(oldp+614,(vlSymsp->TOP__sim.__PVT__slave_sel),4);
        tracep->fullCData(oldp+615,(vlSymsp->TOP__sim.__PVT__slave_sel_r),4);
        tracep->fullBit(oldp+616,((((IData)(vlSymsp->TOP__sim.__PVT__array_muxed4) 
                                    & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed3)) 
                                   & (~ (IData)(vlSymsp->TOP__sim.__PVT__shared_ack)))));
        tracep->fullBit(oldp+617,((0U == vlSymsp->TOP__sim.__PVT__count)));
        tracep->fullIData(oldp+618,(vlSymsp->TOP__sim.__PVT__count),20);
        tracep->fullIData(oldp+619,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r),32);
        tracep->fullBit(oldp+620,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_re));
        tracep->fullBit(oldp+621,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_we));
        tracep->fullBit(oldp+622,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_re));
        tracep->fullBit(oldp+623,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_we));
        tracep->fullBit(oldp+624,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_re));
        tracep->fullBit(oldp+625,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_re));
        tracep->fullSData(oldp+626,((0xfffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),12);
        tracep->fullBit(oldp+627,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_we));
        tracep->fullSData(oldp+628,((0xfffU & vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[6U])),12);
        tracep->fullBit(oldp+629,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_re));
        tracep->fullBit(oldp+630,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_we));
        tracep->fullIData(oldp+631,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[5U]),32);
        tracep->fullBit(oldp+632,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_re));
        tracep->fullBit(oldp+633,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_we));
        tracep->fullIData(oldp+634,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[4U]),32);
        tracep->fullBit(oldp+635,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_re));
        tracep->fullBit(oldp+636,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_we));
        tracep->fullIData(oldp+637,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[3U]),32);
        tracep->fullBit(oldp+638,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_re));
        tracep->fullBit(oldp+639,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_we));
        tracep->fullIData(oldp+640,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[2U]),32);
        tracep->fullBit(oldp+641,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_re));
        tracep->fullBit(oldp+642,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_we));
        tracep->fullIData(oldp+643,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[1U]),32);
        tracep->fullBit(oldp+644,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_re));
        tracep->fullBit(oldp+645,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_we));
        tracep->fullIData(oldp+646,(vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[0U]),32);
        tracep->fullBit(oldp+647,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_re));
        tracep->fullBit(oldp+648,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_we));
        tracep->fullSData(oldp+649,((0xfffU & vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[6U])),12);
        tracep->fullBit(oldp+650,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_re));
        tracep->fullBit(oldp+651,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_we));
        tracep->fullIData(oldp+652,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U]),32);
        tracep->fullBit(oldp+653,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_re));
        tracep->fullBit(oldp+654,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_we));
        tracep->fullIData(oldp+655,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U]),32);
        tracep->fullBit(oldp+656,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_re));
        tracep->fullBit(oldp+657,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_we));
        tracep->fullIData(oldp+658,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U]),32);
        tracep->fullBit(oldp+659,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_re));
        tracep->fullBit(oldp+660,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_we));
        tracep->fullIData(oldp+661,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U]),32);
        tracep->fullBit(oldp+662,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_re));
        tracep->fullBit(oldp+663,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_we));
        tracep->fullIData(oldp+664,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U]),32);
        tracep->fullBit(oldp+665,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_re));
        tracep->fullBit(oldp+666,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_we));
        tracep->fullIData(oldp+667,(vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U]),32);
        tracep->fullBit(oldp+668,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_re));
        tracep->fullBit(oldp+669,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_re));
        tracep->fullSData(oldp+670,((0xffffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),16);
        tracep->fullBit(oldp+671,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_we));
        tracep->fullBit(oldp+672,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_re));
        tracep->fullBit(oldp+673,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_we));
        tracep->fullBit(oldp+674,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_re));
        tracep->fullBit(oldp+675,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_re));
        tracep->fullSData(oldp+676,((0x3ffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),10);
        tracep->fullBit(oldp+677,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_we));
        tracep->fullBit(oldp+678,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_re));
        tracep->fullBit(oldp+679,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_we));
        tracep->fullBit(oldp+680,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_re));
        tracep->fullBit(oldp+681,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_re));
        tracep->fullBit(oldp+682,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
        tracep->fullIData(oldp+683,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r),32);
        tracep->fullBit(oldp+684,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_re));
        tracep->fullCData(oldp+685,((3U & vlSymsp->TOP__sim.__PVT__simsoc_dat_w)),2);
        tracep->fullBit(oldp+686,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_we));
        tracep->fullBit(oldp+687,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_re));
        tracep->fullBit(oldp+688,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_we));
        tracep->fullBit(oldp+689,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_re));
        tracep->fullBit(oldp+690,((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
        tracep->fullIData(oldp+691,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r),32);
        tracep->fullBit(oldp+692,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_re));
        tracep->fullBit(oldp+693,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_we));
        tracep->fullBit(oldp+694,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_re));
        tracep->fullBit(oldp+695,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_re));
        tracep->fullBit(oldp+696,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_we));
        tracep->fullBit(oldp+697,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_re));
        tracep->fullBit(oldp+698,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_we));
        tracep->fullBit(oldp+699,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_re));
        tracep->fullBit(oldp+700,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_we));
        tracep->fullBit(oldp+701,((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
        tracep->fullIData(oldp+702,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r),32);
        tracep->fullCData(oldp+703,((0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))),6);
        tracep->fullCData(oldp+704,(((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                      ? vlSymsp->TOP__sim.__PVT__mem
                                     [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                      : 0U)),8);
        tracep->fullBit(oldp+705,((6U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
        tracep->fullBit(oldp+706,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r));
        tracep->fullIData(oldp+707,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface3_bank_bus_dat_r),32);
        tracep->fullBit(oldp+708,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
        tracep->fullIData(oldp+709,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface4_bank_bus_dat_r),32);
        tracep->fullBit(oldp+710,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_re));
        tracep->fullBit(oldp+711,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_we));
        tracep->fullBit(oldp+712,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                                                   >> 9U)))));
    }
}
