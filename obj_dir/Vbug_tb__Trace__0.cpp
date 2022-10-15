// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbug_tb__Syms.h"


void Vbug_tb___024root__trace_chg_sub_0(Vbug_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbug_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vbug_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbug_tb___024root*>(voidSelf);
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbug_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vbug_tb___024root__trace_chg_sub_0(Vbug_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->bug_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->bug_tb__DOT__varA));
        bufp->chgBit(oldp+2,(vlSelf->bug_tb__DOT__varB));
        bufp->chgBit(oldp+3,(vlSelf->bug_tb__DOT__varC));
        bufp->chgBit(oldp+4,(vlSelf->bug_tb__DOT__varD));
    }
    bufp->chgBit(oldp+5,(vlSelf->bug_tb__DOT__clk));
}

void Vbug_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root__trace_cleanup\n"); );
    // Init
    Vbug_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbug_tb___024root*>(voidSelf);
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
