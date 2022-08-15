// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsim__Syms.h"
#include "Vsim.h"
#include "Vsim_sim.h"
#include "Vsim_VexRiscv.h"



// FUNCTIONS
Vsim__Syms::Vsim__Syms(Vsim* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__sim(Verilated::catName(topp->name(), "sim"))
    , TOP__sim__VexRiscv(Verilated::catName(topp->name(), "sim.VexRiscv"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->sim = &TOP__sim;
    TOPp->sim->VexRiscv = &TOP__sim__VexRiscv;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__sim.__Vconfigure(this, true);
    TOP__sim__VexRiscv.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_sim__VexRiscv.configure(this, name(), "sim.VexRiscv", "VexRiscv", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"CsrPlugin_hadException", &(TOP__sim__VexRiscv.CsrPlugin_hadException), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"CsrPlugin_inWfi", &(TOP__sim__VexRiscv.CsrPlugin_inWfi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"CsrPlugin_interruptJump", &(TOP__sim__VexRiscv.CsrPlugin_interruptJump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"CsrPlugin_interrupt_code", &(TOP__sim__VexRiscv.CsrPlugin_interrupt_code), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"IBusCachedPlugin_fetchPc_pcReg", &(TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"RegFilePlugin_regFile", &(TOP__sim__VexRiscv.RegFilePlugin_regFile), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"lastStageInstruction", &(TOP__sim__VexRiscv.lastStageInstruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"lastStageIsFiring", &(TOP__sim__VexRiscv.lastStageIsFiring), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"lastStageIsValid", &(TOP__sim__VexRiscv.lastStageIsValid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"lastStagePc", &(TOP__sim__VexRiscv.lastStagePc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_payload_address", &(TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_payload_data", &(TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sim__VexRiscv.varInsert(__Vfinal,"lastStageRegFileWrite_valid", &(TOP__sim__VexRiscv.lastStageRegFileWrite_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
