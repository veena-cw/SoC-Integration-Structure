// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcsi2_rx_bfm_smoke_tb::Vcsi2_rx_bfm_smoke_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcsi2_rx_bfm_smoke_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT__csi2_rx_bfm_smoke_tb__DOT__phy_bfm{vlSymsp->TOP.__PVT__csi2_rx_bfm_smoke_tb__DOT__phy_bfm}
    , c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg{vlSymsp->TOP.c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcsi2_rx_bfm_smoke_tb::Vcsi2_rx_bfm_smoke_tb(const char* _vcname__)
    : Vcsi2_rx_bfm_smoke_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcsi2_rx_bfm_smoke_tb::~Vcsi2_rx_bfm_smoke_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcsi2_rx_bfm_smoke_tb___024root___eval_debug_assertions(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcsi2_rx_bfm_smoke_tb___024root___eval_static(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
void Vcsi2_rx_bfm_smoke_tb___024root___eval_initial(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
void Vcsi2_rx_bfm_smoke_tb___024root___eval_settle(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);
void Vcsi2_rx_bfm_smoke_tb___024root___eval(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);

void Vcsi2_rx_bfm_smoke_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcsi2_rx_bfm_smoke_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcsi2_rx_bfm_smoke_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcsi2_rx_bfm_smoke_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcsi2_rx_bfm_smoke_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcsi2_rx_bfm_smoke_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcsi2_rx_bfm_smoke_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vcsi2_rx_bfm_smoke_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vcsi2_rx_bfm_smoke_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vcsi2_rx_bfm_smoke_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vcsi2_rx_bfm_smoke_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcsi2_rx_bfm_smoke_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcsi2_rx_bfm_smoke_tb___024root___eval_final(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb::final() {
    contextp()->executingFinal(true);
    Vcsi2_rx_bfm_smoke_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcsi2_rx_bfm_smoke_tb::hierName() const { return vlSymsp->name(); }
const char* Vcsi2_rx_bfm_smoke_tb::modelName() const { return "Vcsi2_rx_bfm_smoke_tb"; }
unsigned Vcsi2_rx_bfm_smoke_tb::threads() const { return 1; }
void Vcsi2_rx_bfm_smoke_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcsi2_rx_bfm_smoke_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcsi2_rx_bfm_smoke_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vcsi2_rx_bfm_smoke_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcsi2_rx_bfm_smoke_tb___024root__trace_init_top(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcsi2_rx_bfm_smoke_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcsi2_rx_bfm_smoke_tb___024root*>(voidSelf);
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcsi2_rx_bfm_smoke_tb___024root__trace_decl_types(tracep);
    Vcsi2_rx_bfm_smoke_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024root__trace_register(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcsi2_rx_bfm_smoke_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 588);
    Vcsi2_rx_bfm_smoke_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
