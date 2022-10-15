// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbug_tb.h for the primary calling header

#ifndef VERILATED_VBUG_TB___024ROOT_H_
#define VERILATED_VBUG_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vbug_tb__Syms;

class Vbug_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bug_tb__DOT__rst;
    CData/*0:0*/ bug_tb__DOT__clk;
    CData/*0:0*/ bug_tb__DOT__varA;
    CData/*0:0*/ bug_tb__DOT__varB;
    CData/*0:0*/ bug_tb__DOT__varC;
    CData/*0:0*/ bug_tb__DOT__varD;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbug_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbug_tb___024root(Vbug_tb__Syms* symsp, const char* name);
    ~Vbug_tb___024root();
    VL_UNCOPYABLE(Vbug_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
