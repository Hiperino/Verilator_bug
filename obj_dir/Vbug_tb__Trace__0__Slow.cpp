// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbug_tb__Syms.h"


VL_ATTR_COLD void Vbug_tb___024root__trace_init_sub__TOP__0(Vbug_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("bug_tb ");
    tracep->declBus(c+7,"CLOCK_HALF_PERIOD", false,-1, 31,0);
    tracep->declBus(c+8,"CLOCK_CYCLE", false,-1, 31,0);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+2,"varA", false,-1);
    tracep->declBit(c+3,"varB", false,-1);
    tracep->declBit(c+4,"varC", false,-1);
    tracep->declBit(c+5,"varD", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vbug_tb___024root__trace_init_top(Vbug_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root__trace_init_top\n"); );
    // Body
    Vbug_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbug_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbug_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbug_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbug_tb___024root__trace_register(Vbug_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbug_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbug_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbug_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbug_tb___024root__trace_full_sub_0(Vbug_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbug_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root__trace_full_top_0\n"); );
    // Init
    Vbug_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbug_tb___024root*>(voidSelf);
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbug_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbug_tb___024root__trace_full_sub_0(Vbug_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->bug_tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->bug_tb__DOT__varA));
    bufp->fullBit(oldp+3,(vlSelf->bug_tb__DOT__varB));
    bufp->fullBit(oldp+4,(vlSelf->bug_tb__DOT__varC));
    bufp->fullBit(oldp+5,(vlSelf->bug_tb__DOT__varD));
    bufp->fullBit(oldp+6,(vlSelf->bug_tb__DOT__clk));
    bufp->fullIData(oldp+7,(5U),32);
    bufp->fullIData(oldp+8,(0xaU),32);
}
