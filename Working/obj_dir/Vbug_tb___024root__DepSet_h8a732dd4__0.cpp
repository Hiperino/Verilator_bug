// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbug_tb.h for the primary calling header

#include "verilated.h"

#include "Vbug_tb__Syms.h"
#include "Vbug_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbug_tb___024root___dump_triggers__act(Vbug_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbug_tb___024root___eval_triggers__act(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = vlSelf->__VdlySched.awaitingCurrentTime();
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbug_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
