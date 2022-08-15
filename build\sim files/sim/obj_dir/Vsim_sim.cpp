// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__23(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__23\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__Vdly__storage_mem_consume = vlSymsp->TOP__sim.__PVT__storage_mem_consume;
    vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__storage_4__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__storage__v0 = 0U;
    vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_consume 
        = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume;
    vlSymsp->TOP__sim.__Vdly__bus_errors = vlSymsp->TOP__sim.__PVT__bus_errors;
    vlSymsp->TOP__sim.__Vdlyvset__storage_3__v0 = 0U;
    vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0 = vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0;
    vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0 = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0;
    vlSymsp->TOP__sim.__Vdly__subsampler_counter = vlSymsp->TOP__sim.__PVT__subsampler_counter;
    vlSymsp->TOP__sim.__Vdly__storage_mem_level0 = vlSymsp->TOP__sim.__PVT__storage_mem_level0;
    vlSymsp->TOP__sim.__Vdly__trigger_count = vlSymsp->TOP__sim.__PVT__trigger_count;
    vlSymsp->TOP__sim.__Vdlyvset__storage_2__v0 = 0U;
    vlSymsp->TOP__sim.__Vdly__timer_value = vlSymsp->TOP__sim.__PVT__timer_value;
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__24(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__24\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack 
        = vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack;
    vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack 
        = vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack;
    vlSymsp->TOP__sim.__Vdly__ram_bus_ack = vlSymsp->TOP__sim.__PVT__ram_bus_ack;
    vlSymsp->TOP__sim.__Vdlyvset__main_ram__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__main_ram__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__main_ram__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__main_ram__v3 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v3 = 0U;
    if (VL_UNLIKELY(vlSymsp->TOP__sim.__PVT__finish_re)) {
        VL_FINISH_MT("/home/iamme/build/sim/gateware/sim.v", 4010, "");
    }
    vlSymsp->TOP__sim.__PVT__storage_3_dat0[0U] = vlSymsp->TOP__sim.__PVT__storage_3
        [vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr][0U];
    vlSymsp->TOP__sim.__PVT__storage_3_dat0[1U] = vlSymsp->TOP__sim.__PVT__storage_3
        [vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr][1U];
    vlSymsp->TOP__sim.__PVT__storage_3_dat0[2U] = vlSymsp->TOP__sim.__PVT__storage_3
        [vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr][2U];
    vlSymsp->TOP__sim.__PVT__storage_3_dat0[3U] = vlSymsp->TOP__sim.__PVT__storage_3
        [vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr][3U];
    vlSymsp->TOP__sim.__PVT__storage_3_dat0[4U] = vlSymsp->TOP__sim.__PVT__storage_3
        [vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr][4U];
    vlSymsp->TOP__sim.__PVT__storage_3_dat0[5U] = vlSymsp->TOP__sim.__PVT__storage_3
        [vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr][5U];
    vlSymsp->TOP__sim.__PVT__storage_3_dat0[6U] = vlSymsp->TOP__sim.__PVT__storage_3
        [vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr][6U];
    vlSymsp->TOP__sim.__PVT__storage_1_dat0 = vlSymsp->TOP__sim.__PVT__storage_1
        [vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr];
    vlSymsp->TOP__sim.__PVT__storage_dat0 = vlSymsp->TOP__sim.__PVT__storage
        [vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr];
    if (vlSymsp->TOP__sim.__PVT__storage_mem_do_read) {
        vlSymsp->TOP__sim.__Vdly__storage_mem_consume 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_consume)));
    }
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_binary 
        = vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary;
    vlSymsp->TOP__sim.__PVT__storage_4_dat0[0U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))][0U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat0[1U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))][1U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat0[2U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))][2U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat0[3U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))][3U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat0[4U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))][4U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat0[5U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))][5U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat0[6U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary))][6U];
    if (((IData)(vlTOPp->serial_sink_valid) & (0x10U 
                                               != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_1__v0 
            = vlTOPp->serial_sink_data;
        vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_1__v0 
            = vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr;
    }
    if (vlSymsp->TOP__sim.__PVT__storage_wait) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__storage_done1)))) {
            vlSymsp->TOP__sim.__PVT__storage_count 
                = (0x3ffU & ((IData)(vlSymsp->TOP__sim.__PVT__storage_count) 
                             - (IData)(1U)));
        }
    } else {
        vlSymsp->TOP__sim.__PVT__storage_count = 0x200U;
    }
    if (vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_ce) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[0U] 
            = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[0U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[1U] 
            = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[1U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[2U] 
            = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[2U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[3U] 
            = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[3U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[4U] 
            = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[4U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[5U] 
            = vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[5U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[6U] 
            = ((0xffffe000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_last) 
                               << 0xdU)) | ((0xfffff000U 
                                             & ((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_sink_first) 
                                                << 0xcU)) 
                                            | vlSymsp->TOP__sim.__PVT__storage_cdc_sink_payload_data[6U]));
        vlSymsp->TOP__sim.__Vdlyvset__storage_4__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0 
            = (3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter0_q_binary));
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
         & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage__v0 = 
            (0xffU & vlSymsp->TOP__sim.__PVT__simsoc_dat_w);
        vlSymsp->TOP__sim.__Vdlyvset__storage__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage__v0 
            = vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read) {
        vlSymsp->TOP__sim.__PVT__storage_1_dat1 = vlSymsp->TOP__sim.__PVT__storage_1
            [vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume];
    }
    vlSymsp->TOP__sim.__PVT__uart_txempty_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_txempty_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_status_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_status_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_txfull_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_txfull_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_status_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_status_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_mem_level_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__storage_mem_level_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_done_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__storage_done_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__trigger_mem_full_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__trigger_mem_full_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_value_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_value_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__trigger_done_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__trigger_done_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_rxfull_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rxfull_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_rxempty_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rxempty_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__bus_errors_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__bus_errors_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_mem_data_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__storage_mem_data_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__uart_enable_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_enable_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_enable_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_enable_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_reload_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_reload_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_load_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_load_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__sim_trace_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__sim_trace_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__sim_marker_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__sim_marker_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__edge_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__edge_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__mode_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__mode_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__scratch_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__scratch_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__subsampler_value_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__subsampler_value_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_length_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__storage_length_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__out_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__out_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__oe_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__oe_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__mux_value_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__mux_value_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__trigger_enable_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__trigger_enable_re = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__25(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__25\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__timer_en_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_en_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__trigger_mem_mask_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__trigger_mem_mask_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__trigger_mem_value_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__trigger_mem_value_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_enable_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__storage_enable_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_offset_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__storage_offset_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read) {
        vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_consume = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read) {
        vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume = 0U;
    }
    if ((0xffffffffU != vlSymsp->TOP__sim.__PVT__bus_errors)) {
        if (vlSymsp->TOP__sim.__PVT__error) {
            vlSymsp->TOP__sim.__Vdly__bus_errors = 
                ((IData)(1U) + vlSymsp->TOP__sim.__PVT__bus_errors);
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__bus_errors = 0U;
    }
    vlSymsp->TOP__sim.__PVT__timer_pending_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_pending_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_binary 
        = vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_binary = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[0U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][0U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[1U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][1U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[2U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][2U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[3U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][3U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[4U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][4U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[5U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][5U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[6U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][6U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[7U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][7U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[8U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][8U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[9U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][9U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[0xaU] = 
        vlSymsp->TOP__sim.__PVT__storage_2[(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][0xaU];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[0xbU] = 
        vlSymsp->TOP__sim.__PVT__storage_2[(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][0xbU];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0[0xcU] = 
        vlSymsp->TOP__sim.__PVT__storage_2[(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))][0xcU];
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_re) {
        vlSymsp->TOP__sim.__PVT__timer_pending_r = 
            (1U & vlSymsp->TOP__sim.__PVT__simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__timer_pending_r = 0U;
    }
    vlSymsp->TOP__sim.__PVT__reset_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__reset_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read) {
        vlSymsp->TOP__sim.__PVT__storage_dat1 = vlSymsp->TOP__sim.__PVT__storage
            [vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume];
    }
    if (((IData)(vlTOPp->serial_sink_valid) & (0x10U 
                                               != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))) {
        vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce = 0U;
    }
    vlSymsp->TOP__sim.__PVT__multiregimpl39_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl39_regs0;
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
         & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))) {
        vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_4_dat1[0U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))][0U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat1[1U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))][1U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat1[2U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))][2U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat1[3U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))][3U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat1[4U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))][4U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat1[5U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))][5U];
    vlSymsp->TOP__sim.__PVT__storage_4_dat1[6U] = vlSymsp->TOP__sim.__PVT__storage_4
        [(3U & (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary))][6U];
    if (((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_valid) 
         & (0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0)))) {
        vlSymsp->TOP__sim.__PVT__storage_mem_produce 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_produce)));
    }
    vlSymsp->TOP__sim.__PVT__uart_pending_re = vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_re;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_pending_re = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_valid) 
         & (0x200U != (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[0U] 
            = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[0U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[1U] 
            = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[1U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[2U] 
            = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[2U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[3U] 
            = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[3U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[4U] 
            = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[4U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[5U] 
            = vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[5U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[6U] 
            = ((0xffffe000U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_last) 
                               << 0xdU)) | ((0xfffff000U 
                                             & ((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_first) 
                                                << 0xcU)) 
                                            | vlSymsp->TOP__sim.__PVT__storage_mem_sink_payload_data[6U]));
        vlSymsp->TOP__sim.__Vdlyvset__storage_3__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0 
            = vlSymsp->TOP__sim.__PVT__storage_mem_wrport_adr;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_readable) 
         & (IData)(vlSymsp->TOP__sim.__PVT__storage_read_source_ready))) {
        vlSymsp->TOP__sim.__PVT__storage_converter_mux 
            = ((IData)(vlSymsp->TOP__sim.__PVT__storage_converter_last)
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux))));
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__storage_converter_mux = 0U;
    }
    if (((IData)(vlTOPp->serial_sink_valid) & (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read) {
            vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0 
                = (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0) 
                            - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0 = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_re) {
        vlSymsp->TOP__sim.__PVT__uart_pending_r = (3U 
                                                   & vlSymsp->TOP__sim.__PVT__simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_pending_r = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read) {
            vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0 
                = (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0) 
                            - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_level0 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__multiregimpl40_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl40_regs0;
    vlSymsp->TOP__sim.__PVT__storage_enable_d = vlSymsp->TOP__sim.__PVT__multiregimpl38_regs1;
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess17_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess17_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess17_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess17_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess17_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess13_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess13_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess13_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess13_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess13_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess12_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess12_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess12_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess12_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess12_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess8_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess8_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess8_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess8_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess8_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess5_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess5_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess5_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess5_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess5_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess1_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess1_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess1_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess1_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess1_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess10_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess10_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess10_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess10_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess10_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess11_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess11_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess11_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess11_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess11_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess15_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess15_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess15_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess15_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess15_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess21_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess21_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess21_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess21_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess21_pending = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__26(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__26\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess9_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess9_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess9_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess9_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess9_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess14_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess14_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess14_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess14_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess14_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess7_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess7_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess7_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess7_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess7_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess16_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess16_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess16_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess16_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess16_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess0_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess0_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess0_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess0_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess0_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess29_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess29_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess29_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess29_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess29_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess31_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess31_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess31_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess31_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess31_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess3_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess3_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess3_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess3_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess3_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess30_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess30_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess30_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess30_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess30_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess2_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess2_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess2_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess2_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess2_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess4_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess4_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess4_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess4_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess4_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess18_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess18_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess18_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess18_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess18_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess19_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess19_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess19_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess19_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess19_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess20_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess20_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess20_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess20_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess20_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess22_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess22_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess22_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess22_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess22_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess23_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess23_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess23_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess23_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess23_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess24_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess24_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess24_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess24_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess24_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess25_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess25_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess25_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess25_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess25_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess26_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess26_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess26_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess26_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess26_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess27_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess27_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess27_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess27_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess27_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess28_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess28_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess28_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess28_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess28_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__eventsourceprocess6_clear) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess6_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__eventsourceprocess6_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess6_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__eventsourceprocess6_pending = 0U;
    }
    vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_state 
        = vlSymsp->TOP__sim.__PVT__simsoc_litescopeanalyzer_next_state;
    vlSymsp->TOP__sim.__PVT__multiregimpl36_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl36_regs0;
    if (vlSymsp->TOP__sim.__PVT__storage_mem_do_read) {
        vlSymsp->TOP__sim.__PVT__storage_3_dat1[0U] 
            = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__storage_mem_consume][0U];
        vlSymsp->TOP__sim.__PVT__storage_3_dat1[1U] 
            = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__storage_mem_consume][1U];
        vlSymsp->TOP__sim.__PVT__storage_3_dat1[2U] 
            = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__storage_mem_consume][2U];
        vlSymsp->TOP__sim.__PVT__storage_3_dat1[3U] 
            = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__storage_mem_consume][3U];
        vlSymsp->TOP__sim.__PVT__storage_3_dat1[4U] 
            = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__storage_mem_consume][4U];
        vlSymsp->TOP__sim.__PVT__storage_3_dat1[5U] 
            = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__storage_mem_consume][5U];
        vlSymsp->TOP__sim.__PVT__storage_3_dat1[6U] 
            = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__storage_mem_consume][6U];
    }
    vlSymsp->TOP__sim.__PVT__multiregimpl37_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl37_regs0;
    if (vlSymsp->TOP__sim.__PVT__storage_mem_syncfifo_re) {
        vlSymsp->TOP__sim.__PVT__storage_mem_readable = 1U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__storage_mem_source_ready) {
            vlSymsp->TOP__sim.__PVT__storage_mem_readable = 0U;
        }
    }
    vlSymsp->TOP__sim.__PVT__multiregimpl43_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl43_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl35_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl35_regs0;
    if (vlSymsp->TOP__sim.__PVT__uart_tx_clear) {
        vlSymsp->TOP__sim.__PVT__uart_tx_pending = 0U;
    }
    if (((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__uart_tx_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_tx_pending = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__storage_sink_sink_ready) {
        if (vlSymsp->TOP__sim.__PVT__subsampler_done) {
            vlSymsp->TOP__sim.__Vdly__subsampler_counter = 0U;
        } else {
            if (vlSymsp->TOP__sim.__PVT__mux_source_valid) {
                vlSymsp->TOP__sim.__Vdly__subsampler_counter 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__subsampler_counter)));
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__multiregimpl44_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl44_regs0;
    if (((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_sink_valid) 
         & (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__storage_mem_level0 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__storage_mem_do_read) {
            vlSymsp->TOP__sim.__Vdly__storage_mem_level0 
                = (0x3ffU & ((IData)(vlSymsp->TOP__sim.__PVT__storage_mem_level0) 
                             - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__27(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__27\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*415:0*/ __Vtemp47[13];
    WData/*415:0*/ __Vtemp48[13];
    // Body
    if (((~ (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl33_regs1)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__trigger_enable_d))) {
        vlSymsp->TOP__sim.__Vdly__trigger_count = 0x20U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__trigger_done1)))) {
            vlSymsp->TOP__sim.__Vdly__trigger_count 
                = (0x3fU & ((IData)(vlSymsp->TOP__sim.__PVT__trigger_count) 
                            - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_ce) {
        __Vtemp47[0U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[0U];
        __Vtemp47[1U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[1U];
        __Vtemp47[2U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[2U];
        __Vtemp47[3U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[3U];
        __Vtemp47[4U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[4U];
        __Vtemp47[5U] = vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[5U];
        __Vtemp47[6U] = ((0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U] 
                                         << 0xcU)) 
                         | vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[6U]);
        __Vtemp47[7U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U] 
                                    >> 0x14U)) | (0xfffff000U 
                                                  & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U] 
                                                     << 0xcU)));
        __Vtemp47[8U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U] 
                                    >> 0x14U)) | (0xfffff000U 
                                                  & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U] 
                                                     << 0xcU)));
        __Vtemp47[9U] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U] 
                                    >> 0x14U)) | (0xfffff000U 
                                                  & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U] 
                                                     << 0xcU)));
        __Vtemp47[0xaU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U] 
                                      >> 0x14U)) | 
                           (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U] 
                                           << 0xcU)));
        __Vtemp47[0xbU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U] 
                                      >> 0x14U)) | 
                           (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U] 
                                           << 0xcU)));
        __Vtemp47[0xcU] = ((0xfffU & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U] 
                                      >> 0x14U)) | 
                           (0xfffff000U & (vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[6U] 
                                           << 0xcU)));
        VL_EXTEND_WW(410,408, __Vtemp48, __Vtemp47);
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[0U] 
            = __Vtemp48[0U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[1U] 
            = __Vtemp48[1U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[2U] 
            = __Vtemp48[2U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[3U] 
            = __Vtemp48[3U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[4U] 
            = __Vtemp48[4U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[5U] 
            = __Vtemp48[5U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[6U] 
            = __Vtemp48[6U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[7U] 
            = __Vtemp48[7U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[8U] 
            = __Vtemp48[8U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[9U] 
            = __Vtemp48[9U];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[0xaU] 
            = __Vtemp48[0xaU];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[0xbU] 
            = __Vtemp48[0xbU];
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[0xcU] 
            = __Vtemp48[0xcU];
        vlSymsp->TOP__sim.__Vdlyvset__storage_2__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0 
            = (0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary));
    }
    vlSymsp->TOP__sim.__PVT__multiregimpl32_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl32_regs0;
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[0U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][0U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[1U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][1U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[2U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][2U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[3U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][3U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[4U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][4U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[5U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][5U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[6U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][6U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[7U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][7U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[8U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][8U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[9U] = vlSymsp->TOP__sim.__PVT__storage_2
        [(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][9U];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xaU] = 
        vlSymsp->TOP__sim.__PVT__storage_2[(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][0xaU];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xbU] = 
        vlSymsp->TOP__sim.__PVT__storage_2[(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][0xbU];
    vlSymsp->TOP__sim.__PVT__storage_2_dat1[0xcU] = 
        vlSymsp->TOP__sim.__PVT__storage_2[(0xfU & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter1_q_next_binary))][0xcU];
    vlSymsp->TOP__sim.__PVT__in_pads_n_d31 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x1fU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d31 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d30 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x1eU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d30 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d29 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x1dU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d29 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d27 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x1bU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d27 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d26 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x1aU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d26 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d23 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x17U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d23 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d22 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x16U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d22 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d8 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 8U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d8 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d2 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 2U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d2 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d25 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x19U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d25 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d21 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x15U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d21 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d0 = (1U & vlSymsp->TOP__sim.__PVT__in_status);
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d0 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d16 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x10U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d16 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d7 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 7U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d7 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d10 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0xaU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d10 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d1 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 1U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d1 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d18 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x12U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d18 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d12 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0xcU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d12 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d3 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 3U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d3 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d5 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 5U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d5 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d9 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 9U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d9 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d11 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0xbU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d11 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d13 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0xdU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d13 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d4 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 4U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d4 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d14 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0xeU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d14 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d15 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0xfU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d15 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d6 = (1U & (vlSymsp->TOP__sim.__PVT__in_status 
                                                   >> 6U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d6 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d17 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x11U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d17 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d19 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x13U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d19 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d20 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x14U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d20 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d24 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x18U));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d24 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__in_pads_n_d28 = (1U & 
                                              (vlSymsp->TOP__sim.__PVT__in_status 
                                               >> 0x1cU));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__in_pads_n_d28 = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__uart_rx_clear) {
        vlSymsp->TOP__sim.__PVT__uart_rx_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__uart_rx_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__uart_rx_pending = 0U;
    }
    vlSymsp->TOP__sim.__PVT__multiregimpl30_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl30_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl29_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl29_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl28_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl28_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl27_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl27_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl24_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl24_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl18_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl18_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl17_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl17_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl16_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl16_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl15_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl15_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl13_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl13_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl12_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl12_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl7_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl7_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl6_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl6_regs0;
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__28(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__28\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__multiregimpl5_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl5_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl26_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl26_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl31_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl31_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl21_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl21_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl11_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl11_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl14_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl14_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl10_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl10_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl22_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl22_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl4_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl4_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl3_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl3_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl2_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl2_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl0_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl0_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl25_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl25_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl1_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl1_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl9_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl9_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl23_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl23_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl8_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl8_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl19_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl19_regs0;
    vlSymsp->TOP__sim.__PVT__multiregimpl20_regs1 = vlSymsp->TOP__sim.__PVT__multiregimpl20_regs0;
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface3_bank_bus_dat_r = 0U;
    if ((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface3_bank_bus_dat_r = 0U;
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface4_bank_bus_dat_r = 0U;
    if ((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface4_bank_bus_dat_r 
                = vlSymsp->TOP__sim.__PVT__sim_marker_storage;
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface5_bank_bus_dat_r = 0U;
    if ((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface5_bank_bus_dat_r 
                = vlSymsp->TOP__sim.__PVT__sim_trace_storage;
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r = 0U;
    if ((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r 
                = vlSymsp->TOP__sim.__PVT__reset_storage;
        } else {
            if ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
                vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r 
                    = vlSymsp->TOP__sim.__PVT__scratch_storage;
            } else {
                if ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
                    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r 
                        = vlSymsp->TOP__sim.__PVT__bus_errors;
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__mem_adr0 = (0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr));
    vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r = 
        (6U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)));
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r = 0U;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface7_bank_bus_dat_r = 0U;
    if ((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface7_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data)
                    : ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                        ? (0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))
                        : ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                            ? (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))
                            : ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                ? (IData)(vlSymsp->TOP__sim.__PVT__uart_status_status)
                                : ((4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                    ? (IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status)
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                        ? (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                            ? (1U & 
                                               (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))
                                            : (0x10U 
                                               == (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))))))));
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r = 0U;
    if ((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__mux_value_storage)
                    : ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                        ? (IData)(vlSymsp->TOP__sim.__PVT__trigger_enable_storage)
                        : ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                            ? (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl34_regs1)
                            : ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                ? 0U : ((4U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                         ? (0xfffU 
                                            & vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[6U])
                                         : ((5U == 
                                             (0x1ffU 
                                              & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                             ? vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[5U]
                                             : ((6U 
                                                 == 
                                                 (0x1ffU 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                                 ? 
                                                vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[4U]
                                                 : 
                                                vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[3U])))))));
        } else {
            if (((((((((8U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))) 
                       | (9U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                      | (0xaU == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                     | (0xbU == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                    | (0xcU == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                   | (0xdU == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                  | (0xeU == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                 | (0xfU == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
                vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                    = ((8U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                        ? vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[2U]
                        : ((9U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                            ? vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[1U]
                            : ((0xaU == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                ? vlSymsp->TOP__sim.__PVT__trigger_mem_mask_storage[0U]
                                : ((0xbU == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                    ? (0xfffU & vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[6U])
                                    : ((0xcU == (0x1ffU 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                        ? vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[5U]
                                        : ((0xdU == 
                                            (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                            ? vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[4U]
                                            : ((0xeU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                                ? vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[3U]
                                                : vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[2U])))))));
            } else {
                if (((((((((0x10U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))) 
                           | (0x11U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                          | (0x12U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                         | (0x13U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                        | (0x14U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                       | (0x15U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                      | (0x16U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                     | (0x17U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
                    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                        = ((0x10U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                            ? vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[1U]
                            : ((0x11U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                ? vlSymsp->TOP__sim.__PVT__trigger_mem_value_storage[0U]
                                : ((0x12U == (0x1ffU 
                                              & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                    ? (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_writable)))
                                    : ((0x13U == (0x1ffU 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                        ? (IData)(vlSymsp->TOP__sim.__PVT__subsampler_value_storage)
                                        : ((0x14U == 
                                            (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                            ? (IData)(vlSymsp->TOP__sim.__PVT__storage_enable_storage)
                                            : ((0x15U 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                                ? (IData)(vlSymsp->TOP__sim.__PVT__multiregimpl41_regs1)
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1ffU 
                                                     & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                                    ? (IData)(vlSymsp->TOP__sim.__PVT__storage_length_storage)
                                                    : (IData)(vlSymsp->TOP__sim.__PVT__storage_offset_storage))))))));
                } else {
                    if ((0x18U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
                        vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                            = vlSymsp->TOP__sim.__PVT__multiregimpl42_regs1;
                    } else {
                        if ((0x19U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
                            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                                = vlSymsp->TOP__sim.__PVT__storage_converter_source_payload_data;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__29(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__29\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface6_bank_bus_dat_r = 0U;
    if ((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface6_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                    ? vlSymsp->TOP__sim.__PVT__timer_load_storage
                    : ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                        ? vlSymsp->TOP__sim.__PVT__timer_reload_storage
                        : ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                            ? (IData)(vlSymsp->TOP__sim.__PVT__timer_en_storage)
                            : ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                ? (IData)(vlSymsp->TOP__sim.__PVT__timer_update_value_storage)
                                : ((4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                    ? vlSymsp->TOP__sim.__PVT__timer_value_status
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                        ? (0U == vlSymsp->TOP__sim.__PVT__timer_value)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))
                                            ? (IData)(vlSymsp->TOP__sim.__PVT__timer_zero_pending)
                                            : (IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage))))))));
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r = 0U;
    if ((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                = vlSymsp->TOP__sim.__PVT__oe_storage;
        } else {
            if ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
                vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                    = vlSymsp->TOP__sim.__PVT__in_status;
            } else {
                if ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
                    vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                        = vlSymsp->TOP__sim.__PVT__out_storage;
                } else {
                    if ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
                        vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                            = vlSymsp->TOP__sim.__PVT__mode_storage;
                    } else {
                        if ((4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr)))) {
                            vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r 
                                = vlSymsp->TOP__sim.__PVT__edge_storage;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack = 0U;
    if ((((IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_cyc) 
          & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed4)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack)))) {
        vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack = 0U;
    }
    vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack = 0U;
    if ((((IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_cyc) 
          & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed4)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack)))) {
        vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack = 0U;
    }
    vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state 
        = vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_next_state;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state = 0U;
    }
    vlSymsp->TOP__sim.__PVT__slave_sel_r = vlSymsp->TOP__sim.__PVT__slave_sel;
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__slave_sel_r = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__array_muxed4) 
          & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed3)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__shared_ack)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__done)))) {
            vlSymsp->TOP__sim.__PVT__count = (0xfffffU 
                                              & (vlSymsp->TOP__sim.__PVT__count 
                                                 - (IData)(1U)));
        }
    } else {
        vlSymsp->TOP__sim.__PVT__count = 0xf4240U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__count = 0xf4240U;
    }
    vlSymsp->TOP__sim.__PVT__main_ram_adr0 = (0x3fffU 
                                              & vlSymsp->TOP__sim.__PVT__array_muxed0);
    vlSymsp->TOP__sim.__PVT__sram_adr0 = (0x7ffU & vlSymsp->TOP__sim.__PVT__array_muxed0);
    vlSymsp->TOP__sim.__PVT__rom_dat0 = ((0x17acU >= 
                                          (0x1fffU 
                                           & vlSymsp->TOP__sim.__PVT__array_muxed0))
                                          ? vlSymsp->TOP__sim.__PVT__rom
                                         [(0x1fffU 
                                           & vlSymsp->TOP__sim.__PVT__array_muxed0)]
                                          : 0U);
    vlSymsp->TOP__sim.__Vdly__ram_bus_ack = 0U;
    if (((((IData)(vlSymsp->TOP__sim.__PVT__array_muxed3) 
           & (IData)(vlSymsp->TOP__sim.__PVT__slave_sel)) 
          & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed4)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__ram_bus_ack)))) {
        vlSymsp->TOP__sim.__Vdly__ram_bus_ack = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__Vdly__ram_bus_ack = 0U;
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__main_ram__v0 
            = (0xffU & vlSymsp->TOP__sim.__PVT__array_muxed1);
        vlSymsp->TOP__sim.__Vdlyvset__main_ram__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v0 = 0U;
        vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v0 
            = (0x3fffU & vlSymsp->TOP__sim.__PVT__array_muxed0);
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__main_ram__v1 
            = (0xffU & (vlSymsp->TOP__sim.__PVT__array_muxed1 
                        >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__main_ram__v1 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v1 = 8U;
        vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v1 
            = (0x3fffU & vlSymsp->TOP__sim.__PVT__array_muxed0);
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__main_ram__v2 
            = (0xffU & (vlSymsp->TOP__sim.__PVT__array_muxed1 
                        >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__main_ram__v2 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v2 = 0x10U;
        vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v2 
            = (0x3fffU & vlSymsp->TOP__sim.__PVT__array_muxed0);
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__sram1_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__main_ram__v3 
            = (0xffU & (vlSymsp->TOP__sim.__PVT__array_muxed1 
                        >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__main_ram__v3 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v3 = 0x18U;
        vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v3 
            = (0x3fffU & vlSymsp->TOP__sim.__PVT__array_muxed0);
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__sram__v0 = (0xffU 
                                                  & vlSymsp->TOP__sim.__PVT__array_muxed1);
        vlSymsp->TOP__sim.__Vdlyvset__sram__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__sram__v0 = 0U;
        vlSymsp->TOP__sim.__Vdlyvdim0__sram__v0 = (0x7ffU 
                                                   & vlSymsp->TOP__sim.__PVT__array_muxed0);
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__sram__v1 = (0xffU 
                                                  & (vlSymsp->TOP__sim.__PVT__array_muxed1 
                                                     >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v1 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__sram__v1 = 8U;
        vlSymsp->TOP__sim.__Vdlyvdim0__sram__v1 = (0x7ffU 
                                                   & vlSymsp->TOP__sim.__PVT__array_muxed0);
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__sram__v2 = (0xffU 
                                                  & (vlSymsp->TOP__sim.__PVT__array_muxed1 
                                                     >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v2 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__sram__v2 = 0x10U;
        vlSymsp->TOP__sim.__Vdlyvdim0__sram__v2 = (0x7ffU 
                                                   & vlSymsp->TOP__sim.__PVT__array_muxed0);
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__sram0_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__sram__v3 = (0xffU 
                                                  & (vlSymsp->TOP__sim.__PVT__array_muxed1 
                                                     >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v3 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__sram__v3 = 0x18U;
        vlSymsp->TOP__sim.__Vdlyvdim0__sram__v3 = (0x7ffU 
                                                   & vlSymsp->TOP__sim.__PVT__array_muxed0);
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__30(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__30\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__sim.__PVT__grant) {
        if (vlSymsp->TOP__sim.__PVT__grant) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__request) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__request))) {
                    vlSymsp->TOP__sim.__PVT__grant = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__request)))) {
            if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__request))) {
                vlSymsp->TOP__sim.__PVT__grant = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__int_rst) {
        vlSymsp->TOP__sim.__PVT__grant = 0U;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0) {
        vlSymsp->TOP__sim.__PVT__storage_1[vlSymsp->TOP__sim.__Vdlyvdim0__storage_1__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_1__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage__v0) {
        vlSymsp->TOP__sim.__PVT__storage[vlSymsp->TOP__sim.__Vdlyvdim0__storage__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage__v0;
    }
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume = vlSymsp->TOP__sim.__Vdly__uart_tx_fifo_consume;
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_4__v0) {
        vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0][0U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[0U];
        vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0][1U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[1U];
        vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0][2U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[2U];
        vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0][3U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[3U];
        vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0][4U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[4U];
        vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0][5U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[5U];
        vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0][6U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0[6U];
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_3__v0) {
        vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0][0U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[0U];
        vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0][1U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[1U];
        vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0][2U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[2U];
        vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0][3U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[3U];
        vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0][4U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[4U];
        vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0][5U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[5U];
        vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0][6U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0[6U];
    }
    vlSymsp->TOP__sim.__PVT__storage_mem_consume = vlSymsp->TOP__sim.__Vdly__storage_mem_consume;
    vlSymsp->TOP__sim.__PVT__subsampler_counter = vlSymsp->TOP__sim.__Vdly__subsampler_counter;
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__31(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__31\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__storage_mem_level0 = vlSymsp->TOP__sim.__Vdly__storage_mem_level0;
    vlSymsp->TOP__sim.__PVT__trigger_count = vlSymsp->TOP__sim.__Vdly__trigger_count;
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_2__v0) {
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][0U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[0U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][1U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[1U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][2U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[2U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][3U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[3U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][4U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[4U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][5U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[5U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][6U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[6U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][7U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[7U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][8U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[8U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][9U] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[9U];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][0xaU] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[0xaU];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][0xbU] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[0xbU];
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0][0xcU] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0[0xcU];
    }
    vlSymsp->TOP__sim.__PVT__bus_errors = vlSymsp->TOP__sim.__Vdly__bus_errors;
    vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0 = vlSymsp->TOP__sim.__Vdly__uart_rx_fifo_level0;
    vlSymsp->TOP__sim.__PVT__interface1_ram_bus_ack 
        = vlSymsp->TOP__sim.__Vdly__interface1_ram_bus_ack;
    vlSymsp->TOP__sim.__PVT__interface0_ram_bus_ack 
        = vlSymsp->TOP__sim.__Vdly__interface0_ram_bus_ack;
    vlSymsp->TOP__sim.__PVT__ram_bus_ack = vlSymsp->TOP__sim.__Vdly__ram_bus_ack;
    if (vlSymsp->TOP__sim.__Vdlyvset__main_ram__v0) {
        vlSymsp->TOP__sim.__PVT__main_ram[vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v0))) 
                & vlSymsp->TOP__sim.__PVT__main_ram
                [vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v0]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__main_ram__v0) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__main_ram__v1) {
        vlSymsp->TOP__sim.__PVT__main_ram[vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v1))) 
                & vlSymsp->TOP__sim.__PVT__main_ram
                [vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v1]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__main_ram__v1) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__main_ram__v2) {
        vlSymsp->TOP__sim.__PVT__main_ram[vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v2))) 
                & vlSymsp->TOP__sim.__PVT__main_ram
                [vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v2]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__main_ram__v2) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__main_ram__v3) {
        vlSymsp->TOP__sim.__PVT__main_ram[vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v3))) 
                & vlSymsp->TOP__sim.__PVT__main_ram
                [vlSymsp->TOP__sim.__Vdlyvdim0__main_ram__v3]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__main_ram__v3) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__main_ram__v3)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v0) {
        vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v0))) 
                & vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v0]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__sram__v0) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v1) {
        vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v1))) 
                & vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v1]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__sram__v1) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v2) {
        vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v2))) 
                & vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v2]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__sram__v2) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v3) {
        vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v3))) 
                & vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v3]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__sram__v3) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v3)));
    }
}
