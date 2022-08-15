// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vsim_sim) {
    VL_CELL(VexRiscv, Vsim_VexRiscv);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vsim_sim::__Vconfigure(Vsim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vsim_sim::~Vsim_sim() {
}

void Vsim_sim::_initial__TOP__sim__1(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__1\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__scratch_re = 0U;
    vlSymsp->TOP__sim.__PVT__bus_errors_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_txfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rxempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_enable_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_txempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rxfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_load_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_reload_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_en_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_enable_re = 0U;
    vlSymsp->TOP__sim.__PVT__oe_re = 0U;
    vlSymsp->TOP__sim.__PVT__in_re = 0U;
    vlSymsp->TOP__sim.__PVT__out_re = 0U;
    vlSymsp->TOP__sim.__PVT__mode_re = 0U;
    vlSymsp->TOP__sim.__PVT__edge_re = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess0_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess1_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess2_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess3_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess4_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess5_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess6_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess7_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess8_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess9_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess10_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess11_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess12_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess13_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess14_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess15_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess16_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess17_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess18_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess19_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess20_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess21_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess22_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess23_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess24_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess25_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess26_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess27_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess28_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess29_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess30_pending = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess31_pending = 0U;
    vlSymsp->TOP__sim.__PVT__sim_trace_re = 0U;
    vlSymsp->TOP__sim.__PVT__sim_marker_re = 0U;
    vlSymsp->TOP__sim.__PVT__mux_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_enable_re = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_done_re = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_re = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_full_re = 0U;
    vlSymsp->TOP__sim.__PVT__subsampler_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__storage_enable_re = 0U;
    vlSymsp->TOP__sim.__PVT__storage_done_re = 0U;
    vlSymsp->TOP__sim.__PVT__storage_length_re = 0U;
    vlSymsp->TOP__sim.__PVT__storage_offset_re = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_level_re = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_data_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rxtx_we = 0U;
    vlSymsp->TOP__sim.__PVT__finish_we = 0U;
    vlSymsp->TOP__sim.__PVT__mux_ready = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_write_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_we = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_we = 0U;
    vlSymsp->TOP__sim.__PVT__array_muxed6 = 0U;
    vlSymsp->TOP__sim.__PVT__array_muxed7 = 0U;
    vlSymsp->TOP__sim.__PVT__timer_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_pending_r = 0U;
    vlSymsp->TOP__sim.__PVT__soc_rst = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_first = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_last = 0U;
}

void Vsim_sim::_initial__TOP__sim__2(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__2\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*159:0*/ __Vtemp2[5];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    // Body
    vlSymsp->TOP__sim.__PVT__in_pads_n_d0 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d1 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d2 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d3 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d4 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d5 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d6 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d7 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d8 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d9 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d10 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d11 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d12 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d13 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d14 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d15 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d16 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d17 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d18 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d19 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d20 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d21 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d22 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d23 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d24 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d25 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d26 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d27 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d28 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d29 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d30 = 0U;
    vlSymsp->TOP__sim.__PVT__in_pads_n_d31 = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_binary = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_binary = 0U;
    vlSymsp->TOP__sim.__PVT__storage_enable_d = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl39_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_source_source_payload_hit = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_payload_data[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_payload_data[5U] = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_payload_data[6U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_write_re = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_valid = 0U;
    vlSymsp->TOP__sim.__PVT__reset_re = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl43_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_we = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_pending = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_pending = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_payload_hit = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl36_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl40_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_r = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl35_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl37_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__slave_sel_r = 0U;
    __Vtemp1[0U] = 0x696e6974U;
    __Vtemp1[1U] = 0x72616d2eU;
    __Vtemp1[2U] = 0x696d5f73U;
    __Vtemp1[3U] = 0x73U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlSymsp->TOP__sim.__PVT__sram, 0
                 , ~0ULL);
    __Vtemp2[0U] = 0x696e6974U;
    __Vtemp2[1U] = 0x72616d2eU;
    __Vtemp2[2U] = 0x61696e5fU;
    __Vtemp2[3U] = 0x696d5f6dU;
    __Vtemp2[4U] = 0x73U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(5, __Vtemp2)
                 , vlSymsp->TOP__sim.__PVT__main_ram
                 , 0, ~0ULL);
    vlSymsp->TOP__sim.__PVT__simsoc_wishbone_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl44_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_readable = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface3_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface4_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface5_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface6_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface7_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl32_regs1 = 0U;
    __Vtemp3[0U] = 0x696e6974U;
    __Vtemp3[1U] = 0x6d656d2eU;
    __Vtemp3[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 8, 37, 0, VL_CVT_PACK_STR_NW(3, __Vtemp3)
                 , vlSymsp->TOP__sim.__PVT__mem, 0, ~0ULL);
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r = 0U;
    vlSymsp->TOP__sim.__PVT__simsoc_wishbone_ack = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl0_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl1_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl2_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl3_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl4_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl5_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl6_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl7_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl8_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl9_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl10_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl11_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl12_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl13_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl14_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl15_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl16_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl17_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl18_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl19_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl20_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl21_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl22_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl23_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl24_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl25_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl26_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl27_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl28_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl29_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl30_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl31_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__simsoc_we = 0U;
    vlSymsp->TOP__sim.__PVT__array_muxed2 = 0U;
    vlSymsp->TOP__sim.__PVT__array_muxed5 = 0U;
    vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state = 0U;
    vlSymsp->TOP__sim.__PVT__finish_re = 0U;
    __Vtemp4[0U] = 0x696e6974U;
    __Vtemp4[1U] = 0x726f6d2eU;
    __Vtemp4[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 32, 6061, 0, VL_CVT_PACK_STR_NW(3, __Vtemp4)
                 , vlSymsp->TOP__sim.__PVT__rom, 0, ~0ULL);
    vlSymsp->TOP__sim.__PVT__scratch_storage = 0x12345678U;
    vlSymsp->TOP__sim.__PVT__bus_errors = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume = 0U;
    vlSymsp->TOP__sim.__PVT__timer_update_value_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_value_status = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger_d = 0U;
}

void Vsim_sim::_initial__TOP__sim__3(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__3\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess28_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess29_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess30_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess31_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__sim_marker_storage = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[5U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[6U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[6U] = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_enable_d = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_consume = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl0_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl1_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl2_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl3_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl4_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl5_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl6_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl7_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl8_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl9_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl10_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl11_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl12_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl13_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl14_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl15_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl16_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl17_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl18_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl19_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl20_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl21_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl22_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl23_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl24_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl25_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl26_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl27_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl28_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl29_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl30_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl31_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl32_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl34_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl35_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl36_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl37_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl39_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl40_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl41_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl42_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl43_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl44_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__interrupt = 0U;
    vlSymsp->TOP__sim.__PVT__sram0_we = 0U;
    vlSymsp->TOP__sim.__PVT__sram1_we = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rxtx_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_clear = 0U;
    vlSymsp->TOP__sim.__PVT__uart_status_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess0_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess1_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess2_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess3_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess4_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess5_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess6_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess7_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess8_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess9_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess10_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess11_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess12_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess13_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess14_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess15_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess16_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess17_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess18_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess19_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess20_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess21_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess22_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess23_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess24_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess25_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess26_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess27_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess28_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess29_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess30_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess31_clear = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_valid = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_first = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_last = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[5U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[6U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_first = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_last = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[5U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[6U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_wait = 0U;
    vlSymsp->TOP__sim.__PVT__storage_converter_source_payload_data = 0U;
    vlSymsp->TOP__sim.__PVT__error = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_re = 0U;
}

void Vsim_sim::_initial__TOP__sim__4(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__4\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__sim_trace_storage = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_produce = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary = 0U;
    vlSymsp->TOP__sim.__PVT__storage_sink_sink_ready = 0U;
    vlSymsp->TOP__sim.__PVT__array_muxed1 = 0U;
    vlSymsp->TOP__sim.__PVT__uart_enable_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_zero_pending = 0U;
    vlSymsp->TOP__sim.__PVT__timer_enable_storage = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 0U;
    vlSymsp->TOP__sim.__PVT__oe_storage = 0U;
    vlSymsp->TOP__sim.__PVT__out_storage = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl38_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_count = 0x20U;
    vlSymsp->TOP__sim.__PVT__storage_count = 0x200U;
    vlSymsp->TOP__sim.__PVT__storage_mem_source_ready = 0U;
    vlSymsp->TOP__sim.__PVT__storage_converter_mux = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable = 0U;
    vlSymsp->TOP__sim.__PVT__reset_storage = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0 = 0U;
    vlSymsp->TOP__sim.__PVT__mux_source_valid = 0U;
    vlSymsp->TOP__sim.__PVT__subsampler_counter = 0U;
    vlSymsp->TOP__sim.__PVT__storage_mem_level0 = 0U;
    vlSymsp->TOP__sim.__PVT__shared_ack = 0U;
    vlSymsp->TOP__sim.__PVT__mode_storage = 0U;
    vlSymsp->TOP__sim.__PVT__edge_storage = 0U;
    vlSymsp->TOP__sim.__PVT__in_status = 0U;
    vlSymsp->TOP__sim.__PVT__ram_bus_ack = 0U;
    vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack = 0U;
    vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack = 0U;
    vlSymsp->TOP__sim.__PVT__count = 0xf4240U;
    vlSymsp->TOP__sim.__PVT__simsoc_adr = 0U;
    vlSymsp->TOP__sim.__PVT__array_muxed4 = 0U;
    vlSymsp->TOP__sim.__PVT__slave_sel = 0U;
    vlSymsp->TOP__sim.__PVT__array_muxed3 = 0U;
    vlSymsp->TOP__sim.__PVT__array_muxed0 = 0U;
    vlSymsp->TOP__sim.__PVT__grant = 0U;
    vlSymsp->TOP__sim.__PVT__timer_load_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_reload_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_en_storage = 0U;
    vlSymsp->TOP__sim.__PVT__timer_update_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__mux_value_storage = 0U;
    vlSymsp->TOP__sim.__PVT__subsampler_value_storage = 0U;
    vlSymsp->TOP__sim.__PVT__storage_length_storage = 0U;
    vlSymsp->TOP__sim.__PVT__storage_offset_storage = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl34_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl38_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl41_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl42_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__timer_zero_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess28_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess29_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess30_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess31_trigger = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1 = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q = 0U;
}

void Vsim_sim::_initial__TOP__sim__5(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__5\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0 = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q = 0U;
    vlSymsp->TOP__sim.__PVT__shared_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q = 0U;
    vlSymsp->TOP__sim.__PVT__timer_value = 0U;
    vlSymsp->TOP__sim.__PVT__multiregimpl33_regs0 = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_next_binary = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary = 0U;
    vlSymsp->TOP__sim.__PVT__storage_done0 = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_next_binary = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_re = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_re = 0U;
    vlSymsp->TOP__sim.__PVT__uart_rx_clear = 0U;
    vlSymsp->TOP__sim.__PVT__storage_enable_storage = 0U;
    vlSymsp->TOP__sim.__PVT__trigger_enable_storage = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__simsoc_dat_w = 0U;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__int_rst = 1U;
}

void Vsim_sim::_settle__TOP__sim__6(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__6\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__array_muxed7 = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess0_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess1_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess2_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess3_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess4_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess5_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess6_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess7_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess8_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess9_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess10_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess11_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess12_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess13_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess14_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess15_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess16_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess17_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess18_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess19_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess20_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess21_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess22_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess23_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess24_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess25_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess26_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess27_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess28_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess29_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess30_clear = 0U;
    vlSymsp->TOP__sim.__PVT__eventsourceprocess31_clear = 0U;
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1));
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__storage_4_dat1[6U] 
                 >> 0xdU));
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__storage_4_dat1[6U] 
                 >> 0xcU));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xcU] 
                 >> 0x19U));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xcU] 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_dat1));
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__storage_3_dat1[6U] 
                 >> 0xdU));
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__storage_3_dat1[6U] 
                 >> 0xcU));
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[0U] 
        = vlSymsp->TOP__sim.__PVT__storage_3_dat1[0U];
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[1U] 
        = vlSymsp->TOP__sim.__PVT__storage_3_dat1[1U];
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[2U] 
        = vlSymsp->TOP__sim.__PVT__storage_3_dat1[2U];
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[3U] 
        = vlSymsp->TOP__sim.__PVT__storage_3_dat1[3U];
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[4U] 
        = vlSymsp->TOP__sim.__PVT__storage_3_dat1[4U];
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[5U] 
        = vlSymsp->TOP__sim.__PVT__storage_3_dat1[5U];
    vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[6U] 
        = (0xfffU & vlSymsp->TOP__sim.__PVT__storage_3_dat1[6U]);
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data[0U] 
        = vlSymsp->TOP__sim.__PVT__storage_4_dat1[0U];
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data[1U] 
        = vlSymsp->TOP__sim.__PVT__storage_4_dat1[1U];
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data[2U] 
        = vlSymsp->TOP__sim.__PVT__storage_4_dat1[2U];
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data[3U] 
        = vlSymsp->TOP__sim.__PVT__storage_4_dat1[3U];
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data[4U] 
        = vlSymsp->TOP__sim.__PVT__storage_4_dat1[4U];
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data[5U] 
        = vlSymsp->TOP__sim.__PVT__storage_4_dat1[5U];
    vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data[6U] 
        = (0xfffU & vlSymsp->TOP__sim.__PVT__storage_4_dat1[6U]);
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[0U] 
        = ((vlSymsp->TOP__sim.__PVT__storage_2_dat1[7U] 
            << 0x14U) | (vlSymsp->TOP__sim.__PVT__storage_2_dat1[6U] 
                         >> 0xcU));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[1U] 
        = ((vlSymsp->TOP__sim.__PVT__storage_2_dat1[8U] 
            << 0x14U) | (vlSymsp->TOP__sim.__PVT__storage_2_dat1[7U] 
                         >> 0xcU));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[2U] 
        = ((vlSymsp->TOP__sim.__PVT__storage_2_dat1[9U] 
            << 0x14U) | (vlSymsp->TOP__sim.__PVT__storage_2_dat1[8U] 
                         >> 0xcU));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[3U] 
        = ((vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xaU] 
            << 0x14U) | (vlSymsp->TOP__sim.__PVT__storage_2_dat1[9U] 
                         >> 0xcU));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[4U] 
        = ((vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xbU] 
            << 0x14U) | (vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xaU] 
                         >> 0xcU));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[5U] 
        = ((vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xcU] 
            << 0x14U) | (vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xbU] 
                         >> 0xcU));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_value[6U] 
        = (0xfffU & (vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xcU] 
                     >> 0xcU));
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[0U] 
        = vlSymsp->TOP__sim.__PVT__storage_2_dat1[0U];
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[1U] 
        = vlSymsp->TOP__sim.__PVT__storage_2_dat1[1U];
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[2U] 
        = vlSymsp->TOP__sim.__PVT__storage_2_dat1[2U];
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[3U] 
        = vlSymsp->TOP__sim.__PVT__storage_2_dat1[3U];
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[4U] 
        = vlSymsp->TOP__sim.__PVT__storage_2_dat1[4U];
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[5U] 
        = vlSymsp->TOP__sim.__PVT__storage_2_dat1[5U];
    vlSymsp->TOP__sim.__PVT__trigger_mem_fifo_out_payload_mask[6U] 
        = (0xfffU & vlSymsp->TOP__sim.__PVT__storage_2_dat1[6U]);
    vlSymsp->TOP__sim.__PVT__timer_zero_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__timer_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__timer_pending_r))) {
        vlSymsp->TOP__sim.__PVT__timer_zero_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 
        ((2U & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status)) 
         | (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_pending));
    vlSymsp->TOP__sim.__PVT__uart_pending_status = 
        ((1U & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status)) 
         | ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_pending) 
            << 1U));
    vlSymsp->TOP__sim.__PVT__uart_tx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_r))) {
        vlSymsp->TOP__sim.__PVT__uart_tx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_re) 
         & ((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_r) 
            >> 1U))) {
        vlSymsp->TOP__sim.__PVT__uart_rx_clear = 1U;
    }
}

void Vsim_sim::_settle__TOP__sim__7(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__7\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__storage_wait = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
        vlSymsp->TOP__sim.__PVT__storage_wait = 1U;
    }
    vlSymsp->TOP__sim.__PVT__storage_done0 = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
            if ((3U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
                vlSymsp->TOP__sim.__PVT__storage_done0 = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_valid = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
            if ((3U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_valid 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_readable;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__mux_source_last = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl32_regs1)))) {
        vlSymsp->TOP__sim.__PVT__mux_source_last = 0U;
    }
    vlSymsp->TOP__sim.__PVT__mux_source_first = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl32_regs1)))) {
        vlSymsp->TOP__sim.__PVT__mux_source_first = 0U;
    }
    vlSymsp->TOP__sim.__PVT__mux_source_payload_hit = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl32_regs1)))) {
        vlSymsp->TOP__sim.__PVT__mux_source_payload_hit = 0U;
    }
    vlSymsp->TOP__sim.__PVT__mux_source_valid = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl32_regs1)))) {
        vlSymsp->TOP__sim.__PVT__mux_source_valid = 1U;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                ? vlSymsp->TOP__sim.__PVT__mem[vlSymsp->TOP__sim.__PVT__mem_adr0]
                : 0U);
    }
    vlSymsp->TOP__sim.__PVT__in_status = 0U;
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffffffeU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl0_regs1));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffffffdU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl1_regs1) 
                                             << 1U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffffffbU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl2_regs1) 
                                             << 2U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffffff7U 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl3_regs1) 
                                             << 3U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffffffefU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl4_regs1) 
                                             << 4U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffffffdfU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl5_regs1) 
                                             << 5U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffffffbfU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl6_regs1) 
                                             << 6U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffffff7fU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl7_regs1) 
                                             << 7U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffffeffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl8_regs1) 
                                             << 8U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffffdffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl9_regs1) 
                                             << 9U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffffbffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl10_regs1) 
                                             << 0xaU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffff7ffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl11_regs1) 
                                             << 0xbU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffffefffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl12_regs1) 
                                             << 0xcU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffffdfffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl13_regs1) 
                                             << 0xdU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffffbfffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl14_regs1) 
                                             << 0xeU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffff7fffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl15_regs1) 
                                             << 0xfU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffeffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl16_regs1) 
                                             << 0x10U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffdffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl17_regs1) 
                                             << 0x11U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfffbffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl18_regs1) 
                                             << 0x12U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfff7ffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl19_regs1) 
                                             << 0x13U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffefffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl20_regs1) 
                                             << 0x14U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffdfffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl21_regs1) 
                                             << 0x15U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xffbfffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl22_regs1) 
                                             << 0x16U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xff7fffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl23_regs1) 
                                             << 0x17U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfeffffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl24_regs1) 
                                             << 0x18U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfdffffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl25_regs1) 
                                             << 0x19U));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xfbffffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl26_regs1) 
                                             << 0x1aU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xf7ffffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl27_regs1) 
                                             << 0x1bU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xefffffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl28_regs1) 
                                             << 0x1cU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xdfffffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl29_regs1) 
                                             << 0x1dU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0xbfffffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl30_regs1) 
                                             << 0x1eU));
    vlSymsp->TOP__sim.__PVT__in_status = ((0x7fffffffU 
                                           & vlSymsp->TOP__sim.__PVT__in_status) 
                                          | ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl31_regs1) 
                                             << 0x1fU));
    vlSymsp->TOP__sim.__PVT__simsoc_wishbone_ack = 0U;
    if (vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state) {
        vlSymsp->TOP__sim.__PVT__simsoc_wishbone_ack = 1U;
    }
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__storage_mem_produce;
    vlSymsp->TOP__sim.gpio_oe = 0U;
    vlSymsp->TOP__sim.gpio_oe = ((0xfffffffeU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (1U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffffffdU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (2U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffffffbU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (4U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffffff7U & vlSymsp->TOP__sim.gpio_oe) 
                                 | (8U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffffffefU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x10U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffffffdfU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x20U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffffffbfU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x40U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffffff7fU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x80U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffffeffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x100U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffffdffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x200U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffffbffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x400U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffff7ffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x800U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffffefffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x1000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffffdfffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x2000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffffbfffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x4000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffff7fffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x8000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffeffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x10000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffdffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x20000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfffbffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x40000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfff7ffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x80000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffefffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x100000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffdfffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x200000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xffbfffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x400000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xff7fffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x800000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfeffffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x1000000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfdffffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x2000000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xfbffffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x4000000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xf7ffffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x8000000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xefffffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x10000000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xdfffffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x20000000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0xbfffffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x40000000U & vlSymsp->TOP__sim.__PVT__oe_storage));
    vlSymsp->TOP__sim.gpio_oe = ((0x7fffffffU & vlSymsp->TOP__sim.gpio_oe) 
                                 | (0x80000000U & vlSymsp->TOP__sim.__PVT__oe_storage));
}

void Vsim_sim::_settle__TOP__sim__8(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__8\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.gpio_o = 0U;
    vlSymsp->TOP__sim.gpio_o = ((0xfffffffeU & vlSymsp->TOP__sim.gpio_o) 
                                | (1U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffffffdU & vlSymsp->TOP__sim.gpio_o) 
                                | (2U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffffffbU & vlSymsp->TOP__sim.gpio_o) 
                                | (4U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffffff7U & vlSymsp->TOP__sim.gpio_o) 
                                | (8U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffffffefU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x10U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffffffdfU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x20U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffffffbfU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x40U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffffff7fU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x80U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffffeffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x100U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffffdffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x200U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffffbffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x400U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffff7ffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x800U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffffefffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x1000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffffdfffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x2000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffffbfffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x4000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffff7fffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x8000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffeffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x10000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffdffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x20000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfffbffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x40000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfff7ffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x80000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffefffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x100000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffdfffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x200000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xffbfffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x400000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xff7fffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x800000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfeffffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x1000000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfdffffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x2000000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xfbffffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x4000000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xf7ffffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x8000000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xefffffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x10000000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xdfffffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x20000000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0xbfffffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x40000000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.gpio_o = ((0x7fffffffU & vlSymsp->TOP__sim.gpio_o) 
                                | (0x80000000U & vlSymsp->TOP__sim.__PVT__out_storage));
    vlSymsp->TOP__sim.__PVT__trigger_done1 = (0U == (IData)(vlSymsp->TOP__sim.__PVT__trigger_count));
    vlSymsp->TOP__sim.__PVT__storage_done1 = (0U == (IData)(vlSymsp->TOP__sim.__PVT__storage_count));
    vlSymsp->TOP__sim.__PVT__storage_converter_last 
        = (6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux));
    vlSymsp->TOP__sim.__PVT__soc_rst = 0U;
    if (vlSymsp->TOP__sim.__PVT__reset_re) {
        vlSymsp->TOP__sim.__PVT__soc_rst = (1U & (IData)(vlSymsp->TOP__sim.__PVT__reset_storage));
    }
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0));
    vlSymsp->TOP__sim.__PVT__subsampler_done = ((IData)(vlSymsp->TOP__sim.__PVT__subsampler_counter) 
                                                == (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl37_regs1));
    vlSymsp->TOP__sim.__PVT__storage_mem_syncfifo_writable 
        = (0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0));
    vlSymsp->TOP__sim.__PVT__storage_sink_sink_ready 
        = ((1U == (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state)) 
           | ((2U == (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))
               ? (0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0))
               : ((3U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state)) 
                  | (0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0)))));
    vlSymsp->TOP__sim.__PVT__storage_mem_level1 = (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0) 
                                                      + (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_readable)));
    vlSymsp->TOP__sim.__PVT__done = (0U == vlSymsp->TOP__sim.__PVT__count);
    vlSymsp->TOP__sim.__PVT__error = 0U;
    if ((0U == vlSymsp->TOP__sim.__PVT__count)) {
        vlSymsp->TOP__sim.__PVT__error = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__grant) {
        vlSymsp->TOP__sim.__PVT__array_muxed1 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data;
        vlSymsp->TOP__sim.__PVT__array_muxed5 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                                 & 1U);
    } else {
        vlSymsp->TOP__sim.__PVT__array_muxed1 = 0U;
        vlSymsp->TOP__sim.__PVT__array_muxed5 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_readable 
        = ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q) 
           != (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl43_regs1));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)) 
              | (IData)(vlTOPp->serial_source_ready)));
    vlSymsp->TOP__sim.__PVT__uart_status_status = 0U;
    vlSymsp->TOP__sim.__PVT__uart_status_status = (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__uart_status_status)) 
                                                   | (0x10U 
                                                      != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)));
    vlSymsp->TOP__sim.__PVT__uart_status_status = (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__uart_status_status)) 
                                                   | ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable) 
                                                      << 1U));
    vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_writable 
        = ((((1U & ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q) 
                    >> 4U)) == (1U & ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl36_regs1) 
                                      >> 4U))) | ((1U 
                                                   & ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q) 
                                                      >> 3U)) 
                                                  == 
                                                  (1U 
                                                   & ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl36_regs1) 
                                                      >> 3U)))) 
           | ((7U & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q)) 
              != (7U & (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl36_regs1))));
    vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_readable 
        = ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q) 
           != (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl35_regs1));
    vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_writable 
        = ((((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q) 
                    >> 2U)) == (1U & ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl44_regs1) 
                                      >> 2U))) | ((1U 
                                                   & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q) 
                                                      >> 1U)) 
                                                  == 
                                                  (1U 
                                                   & ((IData)(vlSymsp->TOP__sim.__PVT__multiregimpl44_regs1) 
                                                      >> 1U)))) 
           | ((1U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q)) 
              != (1U & (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl44_regs1))));
}

void Vsim_sim::_settle__TOP__sim__9(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__9\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp17[7];
    WData/*223:0*/ __Vtemp18[7];
    WData/*223:0*/ __Vtemp19[7];
    WData/*223:0*/ __Vtemp20[7];
    WData/*223:0*/ __Vtemp21[7];
    WData/*223:0*/ __Vtemp22[7];
    WData/*223:0*/ __Vtemp23[7];
    // Body
    if (vlSymsp->TOP__sim.__PVT__grant) {
        vlSymsp->TOP__sim.__PVT__array_muxed6 = ((5U 
                                                  == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                                   ? 7U
                                                   : 2U)
                                                  : 0U);
        vlSymsp->TOP__sim.__PVT__array_muxed0 = vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ADR;
        vlSymsp->TOP__sim.__PVT__array_muxed2 = vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL;
        vlSymsp->TOP__sim.__PVT__array_muxed4 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
    } else {
        vlSymsp->TOP__sim.__PVT__array_muxed6 = ((7U 
                                                  == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                                  ? 7U
                                                  : 2U);
        vlSymsp->TOP__sim.__PVT__array_muxed0 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ADR;
        vlSymsp->TOP__sim.__PVT__array_muxed2 = 0xfU;
        vlSymsp->TOP__sim.__PVT__array_muxed4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
    }
    vlSymsp->TOP__sim.__PVT__request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                         << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSymsp->TOP__sim.__PVT__array_muxed3 = ((IData)(vlSymsp->TOP__sim.__PVT__grant)
                                              ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)
                                              : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_last = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
            if ((3U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_last 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_last;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_first = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
            if ((3U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_first 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_first;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[5U] = 0U;
    vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[6U] = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
            if ((3U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[0U] 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[0U];
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[1U] 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[1U];
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[2U] 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[2U];
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[3U] 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[3U];
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[4U] 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[4U];
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[5U] 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[5U];
                vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[6U] 
                    = vlSymsp->TOP__sim.__PVT__storage_mem_fifo_out_payload_data[6U];
            }
        }
    }
    VL_EXTEND_WW(224,204, __Vtemp17, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
    VL_EXTEND_WW(224,204, __Vtemp18, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
    VL_EXTEND_WW(224,204, __Vtemp19, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
    VL_EXTEND_WW(224,204, __Vtemp20, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
    VL_EXTEND_WW(224,204, __Vtemp21, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
    VL_EXTEND_WW(224,204, __Vtemp22, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
    VL_EXTEND_WW(224,204, __Vtemp23, vlSymsp->TOP__sim.__PVT__storage_cdc_fifo_out_payload_data);
    vlSymsp->TOP__sim.__PVT__storage_converter_source_payload_data 
        = ((4U & (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))
            ? ((2U & (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))
                ? __Vtemp17[6U] : ((1U & (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))
                                    ? __Vtemp18[5U]
                                    : __Vtemp19[4U]))
            : ((2U & (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))
                ? ((1U & (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))
                    ? __Vtemp20[3U] : __Vtemp21[2U])
                : ((1U & (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))
                    ? __Vtemp22[1U] : __Vtemp23[0U])));
    vlSymsp->TOP__sim.__PVT__interrupt = 0U;
    vlSymsp->TOP__sim.__PVT__interrupt = (0xfffffffbU 
                                          & vlSymsp->TOP__sim.__PVT__interrupt);
    vlSymsp->TOP__sim.__PVT__interrupt = ((0xfffffffdU 
                                           & vlSymsp->TOP__sim.__PVT__interrupt) 
                                          | (((IData)(vlSymsp->TOP__sim.__PVT__timer_zero_pending) 
                                              & (IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage)) 
                                             << 1U));
    vlSymsp->TOP__sim.__PVT__interrupt = ((0xfffffffeU 
                                           & vlSymsp->TOP__sim.__PVT__interrupt) 
                                          | (1U & (
                                                   ((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                                   | (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                                       & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                                      >> 1U))));
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)) 
              | (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_clear)));
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_last = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
            vlSymsp->TOP__sim.__PVT__storage_mem_sink_last 
                = vlSymsp->TOP__sim.__PVT__mux_source_last;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
                vlSymsp->TOP__sim.__PVT__storage_mem_sink_last 
                    = vlSymsp->TOP__sim.__PVT__mux_source_last;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__storage_mem_sink_first = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
            vlSymsp->TOP__sim.__PVT__storage_mem_sink_first 
                = vlSymsp->TOP__sim.__PVT__mux_source_first;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state))) {
                vlSymsp->TOP__sim.__PVT__storage_mem_sink_first 
                    = vlSymsp->TOP__sim.__PVT__mux_source_first;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__simsoc_wishbone_dat_r = 0U;
    if (vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state) {
        vlSymsp->TOP__sim.__PVT__simsoc_wishbone_dat_r 
            = ((((((((vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                      | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r) 
                     | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r) 
                    | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface3_bank_bus_dat_r) 
                   | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface4_bank_bus_dat_r) 
                  | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface5_bank_bus_dat_r) 
                 | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface6_bank_bus_dat_r) 
                | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface7_bank_bus_dat_r) 
               | vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r);
    }
    vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger 
        = (1U & ((1U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? (vlSymsp->TOP__sim.__PVT__in_status 
                     ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d0))
                  : (vlSymsp->TOP__sim.__PVT__in_status 
                     ^ vlSymsp->TOP__sim.__PVT__edge_storage)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger 
        = (1U & ((2U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 1U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d1))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 1U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger 
        = (1U & ((4U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 2U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d2))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 2U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger 
        = (1U & ((8U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 3U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d3))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 3U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger 
        = (1U & ((0x10U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 4U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d4))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 4U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger 
        = (1U & ((0x20U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 5U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d5))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 5U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger 
        = (1U & ((0x40U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 6U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d6))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 6U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger 
        = (1U & ((0x80U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 7U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d7))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 7U)));
}

void Vsim_sim::_settle__TOP__sim__10(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__10\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger 
        = (1U & ((0x100U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 8U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d8))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 8U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger 
        = (1U & ((0x200U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 9U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d9))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 9U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger 
        = (1U & ((0x400U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0xaU) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d10))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0xaU)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger 
        = (1U & ((0x800U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0xbU) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d11))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0xbU)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger 
        = (1U & ((0x1000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0xcU) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d12))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0xcU)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger 
        = (1U & ((0x2000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0xdU) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d13))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0xdU)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger 
        = (1U & ((0x4000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0xeU) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d14))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0xeU)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger 
        = (1U & ((0x8000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0xfU) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d15))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0xfU)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger 
        = (1U & ((0x10000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x10U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d16))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x10U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger 
        = (1U & ((0x20000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x11U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d17))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x11U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger 
        = (1U & ((0x40000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x12U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d18))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x12U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger 
        = (1U & ((0x80000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x13U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d19))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x13U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger 
        = (1U & ((0x100000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x14U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d20))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x14U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger 
        = (1U & ((0x200000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x15U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d21))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x15U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger 
        = (1U & ((0x400000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x16U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d22))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x16U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger 
        = (1U & ((0x800000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x17U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d23))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x17U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger 
        = (1U & ((0x1000000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x18U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d24))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x18U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger 
        = (1U & ((0x2000000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x19U) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d25))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x19U)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger 
        = (1U & ((0x4000000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x1aU) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d26))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x1aU)));
    vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger 
        = (1U & ((0x8000000U & vlSymsp->TOP__sim.__PVT__mode_storage)
                  ? ((vlSymsp->TOP__sim.__PVT__in_status 
                      >> 0x1bU) ^ (IData)(vlSymsp->TOP__sim.__PVT__in_pads_n_d27))
                  : ((vlSymsp->TOP__sim.__PVT__in_status 
                      ^ vlSymsp->TOP__sim.__PVT__edge_storage) 
                     >> 0x1bU)));
}
