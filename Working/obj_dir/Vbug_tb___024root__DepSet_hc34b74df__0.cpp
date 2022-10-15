// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbug_tb.h for the primary calling header

#include "verilated.h"

#include "Vbug_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vbug_tb___024root___eval_initial__TOP__0(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    while (1U) {
        vlSelf->acq_ctrl_tb__DOT__rst = 1U;
        vlSelf->acq_ctrl_tb__DOT__clk = 0U;
        vlSelf->acq_ctrl_tb__DOT__varA = 0U;
        vlSelf->acq_ctrl_tb__DOT__varB = 0U;
        vlSelf->acq_ctrl_tb__DOT__varD = 0U;
        co_await vlSelf->__VdlySched.delay(0x3e8U, "bug_tb.sv", 35);
        vlSelf->acq_ctrl_tb__DOT__rst = 0U;
        vlSelf->acq_ctrl_tb__DOT__varB = 1U;
        VL_WRITEF("rst: %1#, varB: %1#\n",1,vlSelf->acq_ctrl_tb__DOT__rst,
                  1,(IData)(vlSelf->acq_ctrl_tb__DOT__varB));
        co_await vlSelf->__VdlySched.delay(0x3e8U, "bug_tb.sv", 41);
        VL_FINISH_MT("bug_tb.sv", 43, "");
    }
}

VL_INLINE_OPT VlCoroutine Vbug_tb___024root___eval_initial__TOP__1(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4U, "bug_tb.sv", 23);
        vlSelf->acq_ctrl_tb__DOT__clk = (1U & (~ (IData)(vlSelf->acq_ctrl_tb__DOT__clk)));
    }
}

void Vbug_tb___024root___eval_act(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_act\n"); );
}

void Vbug_tb___024root___eval_nba(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_nba\n"); );
}

void Vbug_tb___024root___eval_triggers__act(Vbug_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbug_tb___024root___dump_triggers__act(Vbug_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vbug_tb___024root___timing_resume(Vbug_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbug_tb___024root___dump_triggers__nba(Vbug_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbug_tb___024root___eval(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vbug_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    Vbug_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("bug_tb.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vbug_tb___024root___timing_resume(vlSelf);
                Vbug_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                Vbug_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("bug_tb.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vbug_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vbug_tb___024root___timing_resume(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vbug_tb___024root___eval_debug_assertions(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
