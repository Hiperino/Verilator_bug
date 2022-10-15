// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbug_tb.h for the primary calling header

#include "verilated.h"

#include "Vbug_tb__Syms.h"
#include "Vbug_tb___024root.h"

VL_ATTR_COLD void Vbug_tb___024root___eval_initial__TOP(Vbug_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbug_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf2e86ee0__0;
    // Body
    __Vtemp_hf2e86ee0__0[0U] = 0x2e766364U;
    __Vtemp_hf2e86ee0__0[1U] = 0x6d4c6f67U;
    __Vtemp_hf2e86ee0__0[2U] = 0x5369U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_hf2e86ee0__0));
    vlSymsp->_traceDumpOpen();
}
