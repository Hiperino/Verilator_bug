// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbug_tb.h for the primary calling header

#include "verilated.h"

#include "Vbug_tb___024root.h"

VL_ATTR_COLD void Vbug_tb___024root___eval_static(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vbug_tb___024root___eval_initial__TOP(Vbug_tb___024root* vlSelf);
VlCoroutine Vbug_tb___024root___eval_initial__TOP__0(Vbug_tb___024root* vlSelf);
VlCoroutine Vbug_tb___024root___eval_initial__TOP__1(Vbug_tb___024root* vlSelf);

VL_ATTR_COLD void Vbug_tb___024root___eval_initial(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_initial\n"); );
    // Body
    Vbug_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vbug_tb___024root___eval_initial__TOP__0(vlSelf);
    Vbug_tb___024root___eval_initial__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vbug_tb___024root___eval_final(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbug_tb___024root___eval_settle(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbug_tb___024root___dump_triggers__act(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbug_tb___024root___dump_triggers__nba(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbug_tb___024root___ctor_var_reset(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->bug_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->bug_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->bug_tb__DOT__varA = VL_RAND_RESET_I(1);
    vlSelf->bug_tb__DOT__varB = VL_RAND_RESET_I(1);
    vlSelf->bug_tb__DOT__varC = VL_RAND_RESET_I(1);
    vlSelf->bug_tb__DOT__varD = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
