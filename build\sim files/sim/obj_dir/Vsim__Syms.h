// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSIM__SYMS_H_
#define _VSIM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vsim.h"
#include "Vsim_sim.h"
#include "Vsim_VexRiscv.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vsim__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vsim*                          TOPp;
    Vsim_sim                       TOP__sim;
    Vsim_VexRiscv                  TOP__sim__VexRiscv;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_sim__VexRiscv;
    
    // CREATORS
    Vsim__Syms(Vsim* topp, const char* namep);
    ~Vsim__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
