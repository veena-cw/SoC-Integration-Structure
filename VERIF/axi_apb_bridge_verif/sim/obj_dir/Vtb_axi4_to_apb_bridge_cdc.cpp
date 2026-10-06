// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_axi4_to_apb_bridge_cdc__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_axi4_to_apb_bridge_cdc::Vtb_axi4_to_apb_bridge_cdc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_axi4_to_apb_bridge_cdc__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_axi4_to_apb_bridge_cdc::Vtb_axi4_to_apb_bridge_cdc(const char* _vcname__)
    : Vtb_axi4_to_apb_bridge_cdc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_axi4_to_apb_bridge_cdc::~Vtb_axi4_to_apb_bridge_cdc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_axi4_to_apb_bridge_cdc___024root___eval_debug_assertions(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_static(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
void Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VL_ATTR_COLD bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_stl(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb_axi4_to_apb_bridge_cdc___024root___eval_sample(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_ico(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_act(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_inact(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_nba(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_obs(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_react(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
void Vtb_axi4_to_apb_bridge_cdc___024root___eval_postponed(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_final(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__stl(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__ico(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__act(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__nba(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__obs(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__react(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);

void Vtb_axi4_to_apb_bridge_cdc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_axi4_to_apb_bridge_cdc::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_axi4_to_apb_bridge_cdc::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_axi4_to_apb_bridge_cdc::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb_axi4_to_apb_bridge_cdc::evalStatic() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb_axi4_to_apb_bridge_cdc::evalInitial() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb_axi4_to_apb_bridge_cdc::evalStl(bool firstIteration) {
    return Vtb_axi4_to_apb_bridge_cdc___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb_axi4_to_apb_bridge_cdc::evalSample() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb_axi4_to_apb_bridge_cdc::evalIco(bool firstIteration) {
    return Vtb_axi4_to_apb_bridge_cdc___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb_axi4_to_apb_bridge_cdc::evalAct() {
    return Vtb_axi4_to_apb_bridge_cdc___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb_axi4_to_apb_bridge_cdc::evalInact() {
    return Vtb_axi4_to_apb_bridge_cdc___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb_axi4_to_apb_bridge_cdc::evalNba() {
    return Vtb_axi4_to_apb_bridge_cdc___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb_axi4_to_apb_bridge_cdc::evalObs() {
    return Vtb_axi4_to_apb_bridge_cdc___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb_axi4_to_apb_bridge_cdc::evalReact() {
    return Vtb_axi4_to_apb_bridge_cdc___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb_axi4_to_apb_bridge_cdc::evalPostponed() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb_axi4_to_apb_bridge_cdc::evalFinal() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc::dumpTriggersStl() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc::dumpTriggersIco() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc::dumpTriggersAct() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc::dumpTriggersNba() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc::dumpTriggersObs() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc::dumpTriggersReact() {
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void Vtb_axi4_to_apb_bridge_cdc::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_axi4_to_apb_bridge_cdc::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_axi4_to_apb_bridge_cdc::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_axi4_to_apb_bridge_cdc::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_axi4_to_apb_bridge_cdc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_axi4_to_apb_bridge_cdc::hierName() const { return vlSymsp->name(); }
const char* Vtb_axi4_to_apb_bridge_cdc::modelName() const { return "Vtb_axi4_to_apb_bridge_cdc"; }
unsigned Vtb_axi4_to_apb_bridge_cdc::threads() const { return 1; }
void Vtb_axi4_to_apb_bridge_cdc::prepareClone() const { contextp()->prepareClone(); }
void Vtb_axi4_to_apb_bridge_cdc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_axi4_to_apb_bridge_cdc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_axi4_to_apb_bridge_cdc___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_top(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_axi4_to_apb_bridge_cdc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_to_apb_bridge_cdc___024root*>(voidSelf);
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_decl_types(tracep);
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_register(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_axi4_to_apb_bridge_cdc::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 290);
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
