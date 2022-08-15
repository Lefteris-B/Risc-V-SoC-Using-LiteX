// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSIM_H_
#define _VSIM_H_  // guard

#include "verilated_heavy.h"
#include "Vsim__Dpi.h"

//==========

class Vsim__Syms;
class Vsim_VerilatedVcd;
class Vsim_sim;


//----------

VL_MODULE(Vsim) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vsim_sim* sim;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(sys_clk,0,0);
    VL_OUT8(sim_trace,0,0);
    VL_OUT8(serial_source_valid,0,0);
    VL_IN8(serial_source_ready,0,0);
    VL_OUT8(serial_source_data,7,0);
    VL_IN8(serial_sink_valid,0,0);
    VL_OUT8(serial_sink_ready,0,0);
    VL_IN8(serial_sink_data,7,0);
    VL_OUT(gpio_oe,31,0);
    VL_OUT(gpio_o,31,0);
    VL_IN(gpio_i,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__sys_clk;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vsim__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsim);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vsim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vsim();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vsim__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vsim__Syms* symsp, bool first);
  private:
    static QData _change_request(Vsim__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vsim__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vsim__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vsim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vsim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vsim__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vsim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgSub1(void* userp, VerilatedVcd* tracep);
    static void traceChgSub2(void* userp, VerilatedVcd* tracep);
    static void traceChgSub3(void* userp, VerilatedVcd* tracep);
    static void traceChgSub4(void* userp, VerilatedVcd* tracep);
    static void traceChgSub5(void* userp, VerilatedVcd* tracep);
    static void traceChgSub6(void* userp, VerilatedVcd* tracep);
    static void traceChgSub7(void* userp, VerilatedVcd* tracep);
    static void traceChgSub8(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub4(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub5(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub6(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub7(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub8(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub4(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub5(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub6(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub7(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub8(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub9(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
