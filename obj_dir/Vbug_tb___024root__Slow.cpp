// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbug_tb.h for the primary calling header

#include "verilated.h"

#include "Vbug_tb__Syms.h"
#include "Vbug_tb___024root.h"

void Vbug_tb___024root___ctor_var_reset(Vbug_tb___024root* vlSelf);

Vbug_tb___024root::Vbug_tb___024root(Vbug_tb__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbug_tb___024root___ctor_var_reset(this);
}

void Vbug_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbug_tb___024root::~Vbug_tb___024root() {
}
