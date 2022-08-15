// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__41(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__41\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__simsoc_adr = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state)))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__simsoc_wishbone_cyc) 
             & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed4))) {
            vlSymsp->TOP__sim.__PVT__simsoc_adr = (0x3fffU 
                                                   & vlSymsp->TOP__sim.__PVT__array_muxed0);
        }
    }
    vlSymsp->TOP__sim.__PVT__simsoc_we = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_wishbone2csr_state)))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__simsoc_wishbone_cyc) 
             & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed4))) {
            vlSymsp->TOP__sim.__PVT__simsoc_we = ((IData)(vlSymsp->TOP__sim.__PVT__array_muxed5) 
                                                  & (0U 
                                                     != (IData)(vlSymsp->TOP__sim.__PVT__array_muxed2)));
        }
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_mux_value0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_enable0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_done_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__trigger_mem_write_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__trigger_mem_write_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask6_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask5_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask4_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask3_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (8U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (8U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask2_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (9U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (9U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask1_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xaU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xaU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_mask0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xbU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__42(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__42\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xbU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value6_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xcU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xcU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value5_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xdU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xdU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value4_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xeU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xeU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value3_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xfU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0xfU == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value2_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x10U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x10U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value1_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x11U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x11U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_value0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x12U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x12U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_trigger_mem_full_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x13U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x13U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_subsampler_value0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x14U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x14U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x15U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x15U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_done_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x16U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x16U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_length0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x17U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__43(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__43\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x17U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_offset0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x18U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x18U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_level_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x19U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reset0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_scratch0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_bus_errors_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_re = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_we = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_oe0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_re = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_we = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_in_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_we = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_re = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_out0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_re = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_we = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_mode0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_re = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_we = 0U;
    if (((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_edge0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__finish_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__finish_re = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__finish_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__finish_we = (1U & 
                                              (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_we = 0U;
    if (((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_re = 0U;
    if (((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank4_marker0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__44(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__44\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank5_enable0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_load0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_reload0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_en0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_update_value0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_value_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_status_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_pending_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_re = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_we = 0U;
    if (((7U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank6_ev_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__uart_rxtx_re = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__uart_rxtx_re = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__uart_rxtx_we = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__uart_rxtx_we = (1U 
                                                 & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_re = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_we = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txfull_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_we = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_re = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxempty_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__45(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__45\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_we = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_re = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_status_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_re = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_we = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_pending_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_we = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_re = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_ev_enable0_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_we = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_re = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_txempty_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_re = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_we = 0U;
    if (((8U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank7_rxfull_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__trigger_mem_write_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__trigger_mem_write_re 
            = vlSymsp->TOP__sim.__PVT__simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr) 
                          >> 9U))) & (0x19U == (0x1ffU 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_ce 
        = ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_asyncfifo_writable) 
           & (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_write_re));
    vlSymsp->TOP__sim.__PVT__storage_read_source_ready 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_storage_mem_data_we) 
                 | (~ (IData)(vlSymsp->TOP__sim.__PVT__storage_enable_storage))));
    vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_next_binary 
        = (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_ce)
                     ? ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary))
                     : (IData)(vlSymsp->TOP__sim.__PVT__trigger_mem_graycounter0_q_binary)));
    vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_next_binary 
        = (7U & (((IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_asyncfifo_readable) 
                  & ((6U == (IData)(vlSymsp->TOP__sim.__PVT__storage_converter_mux)) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__storage_read_source_ready)))
                  ? ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_binary))
                  : (IData)(vlSymsp->TOP__sim.__PVT__storage_cdc_graycounter1_q_binary)));
}

VL_INLINE_OPT void Vsim_sim::_combo__TOP__sim__46(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_combo__TOP__sim__46\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)) 
              | (IData)(vlTOPp->serial_source_ready)));
    vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
}
