// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbug_tb.h"
#include "Vbug_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbug_tb::Vbug_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbug_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbug_tb::Vbug_tb(const char* _vcname__)
    : Vbug_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbug_tb::~Vbug_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbug_tb___024root___eval_debug_assertions(Vbug_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vbug_tb___024root___eval_static(Vbug_tb___024root* vlSelf);
void Vbug_tb___024root___eval_initial(Vbug_tb___024root* vlSelf);
void Vbug_tb___024root___eval_settle(Vbug_tb___024root* vlSelf);
void Vbug_tb___024root___eval(Vbug_tb___024root* vlSelf);

void Vbug_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbug_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbug_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbug_tb___024root___eval_static(&(vlSymsp->TOP));
        Vbug_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vbug_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbug_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

void Vbug_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vbug_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vbug_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vbug_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vbug_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbug_tb___024root___eval_final(Vbug_tb___024root* vlSelf);

VL_ATTR_COLD void Vbug_tb::final() {
    Vbug_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbug_tb::hierName() const { return vlSymsp->name(); }
const char* Vbug_tb::modelName() const { return "Vbug_tb"; }
unsigned Vbug_tb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vbug_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbug_tb___024root__trace_init_top(Vbug_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbug_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbug_tb___024root*>(voidSelf);
    Vbug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vbug_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vbug_tb___024root__trace_register(Vbug_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbug_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbug_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbug_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
