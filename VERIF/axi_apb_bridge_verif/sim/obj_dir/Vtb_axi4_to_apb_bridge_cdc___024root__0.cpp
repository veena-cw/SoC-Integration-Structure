// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_to_apb_bridge_cdc.h for the primary calling header

#include "Vtb_axi4_to_apb_bridge_cdc__pch.h"

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__1(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__2(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__3(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__4(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__5(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);

void Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__5(vlSelf);
}

void Vtb_axi4_to_apb_bridge_cdc___024root___eval_sample(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_sample\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_ico(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_ico\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_axi4_to_apb_bridge_cdc___024root___timing_ready(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
void Vtb_axi4_to_apb_bridge_cdc___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_axi4_to_apb_bridge_cdc___024root___timing_resume(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);

bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_act(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_act\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb61146a0__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb61146a0__0 = 0;
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb611562d__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb611562d__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb61146a0__0 
            = (1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state));
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb611562d__0 
            = (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state));
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 3U) 
                                                            | ((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb611562d__0 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr_hb611562d__1)) 
                                                               << 2U)) 
                                                           | (((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb61146a0__0 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr_hb61146a0__1)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r__0)))) 
                                                          << 8U) 
                                                         | (((((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PRESETn__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ARESETn__0)))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ARESETn__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ACLK__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PRESETn__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PCLK__0)))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PCLK__0 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PRESETn__0 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ACLK__0 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ARESETn__0 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY__0 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r__0 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r__0 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r;
        vlSelfRef.__Vtrigprevexpr_hb61146a0__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb61146a0__0;
        vlSelfRef.__Vtrigprevexpr_hb611562d__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_hb611562d__0;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root___timing_ready(vlSelf);
    Vtb_axi4_to_apb_bridge_cdc___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi4_to_apb_bridge_cdc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_axi4_to_apb_bridge_cdc___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_axi4_to_apb_bridge_cdc___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_inact(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_inact\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("../simulation/tb_axi4_to_apb_bridge_cdc.sv", 42, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_axi4_to_apb_bridge_cdc___024root___eval_body__nba(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);
void Vtb_axi4_to_apb_bridge_cdc___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_nba(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_nba\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_axi4_to_apb_bridge_cdc___024root___eval_body__nba(vlSelf);
        Vtb_axi4_to_apb_bridge_cdc___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_obs(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_obs\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_axi4_to_apb_bridge_cdc___024root___eval_react(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_react\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_axi4_to_apb_bridge_cdc___024root___eval_postponed(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_postponed\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000004e2ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             91);
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK 
            = (1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK)));
    }
    co_return;
}

VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__1(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             96);
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK 
            = (1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK)));
    }
    co_return;
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__2(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn = 0U;
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             101);
        tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn = 1U;
    co_return;
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_hd312c1ce__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__3(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn = 0U;
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_hd312c1ce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.PCLK)");
        co_await vlSelfRef.__VtrigSched_hd312c1ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.PCLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             107);
        tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn = 1U;
    co_return;
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3239ee00__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h96a50c21__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__4(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected);
    IData/*31:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__addr;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected;
    VL_ZERO_W(128, __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3239ee00__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.ARESETn)");
        co_await vlSelfRef.__VtrigSched_h3239ee00__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.ARESETn)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1144);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h96a50c21__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.PRESETn)");
        co_await vlSelfRef.__VtrigSched_h96a50c21__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.PRESETn)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1145);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1148);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=================================================\n TEST 1 : SPI BFM\n=================================================\n",0);
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data[0U] = 0xdead0001U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data[1U] = 0xcccc0001U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data[2U] = 0xbbbb0001U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data[3U] = 0xaaaa0001U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__addr = 0x30000000U;
    VL_WRITEF_NX("\n[%0t] -----------------------------------------\n[%0t] AXI WRITE START ADDR=%h DATA=%h\n",5, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',64,VL_TIME_UNITED_Q(1000)
                 , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v0 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v0 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v0 = 1U;
    while ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(vlSelf, 
                                                                         "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h32259481__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             988);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v1 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0[0U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data[0U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0[1U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data[1U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0[2U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data[2U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0[3U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__data[3U];
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v0 = 1U;
    while ((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(vlSelf, 
                                                                         "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h3225845e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1001);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v0 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
        co_await vlSelfRef.__VtrigSched_h631cf408__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1010);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r))) {
        VL_WRITEF_NX("[%0t] AXI WRITE RESPONSE ERROR BRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r));
    } else {
        VL_WRITEF_NX("[%0t] AXI WRITE COMPLETE ADDR=%h\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__0__addr);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v1 = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected[0U] = 0xdead0001U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected[1U] = 0xdead0001U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected[2U] = 0xbbbb0001U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected[3U] = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__addr = 0x30000000U;
    VL_WRITEF_NX("\n[%0t] AXI READ START ADDR=%h EXPECTED=%h\n",4, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v0 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v0 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v0 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
        co_await vlSelfRef.__VtrigSched_h0daa99c9__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1076);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v0 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
        co_await vlSelfRef.__VtrigSched_h6021f084__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1084);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r))))) {
        VL_WRITEF_NX("[%0t] AXI READ RESPONSE ERROR RRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r));
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    } else if ((0U == ((((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected[0U]) 
                         | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] 
                            ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected[1U])) 
                        | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] 
                           ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected[2U])) 
                       | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected[3U])))) {
        VL_WRITEF_NX("[%0t] AXI READ PASS ADDR=%h DATA=%h\n",4, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data());
    } else {
        VL_WRITEF_NX("[%0t] AXI READ FAIL ADDR=%h DATA=%h EXPECTED=%h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data()
                     , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__1__expected.data());
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v1 = 1U;
    VL_WRITEF_NX("\n=================================================\n TEST 2 : I2C BFM\n=================================================\n",0);
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data[0U] = 0xdead0002U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data[1U] = 0xcccc0002U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data[2U] = 0xbbbb0002U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data[3U] = 0xaaaa0002U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__addr = 0x30010000U;
    VL_WRITEF_NX("\n[%0t] -----------------------------------------\n[%0t] AXI WRITE START ADDR=%h DATA=%h\n",5, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',64,VL_TIME_UNITED_Q(1000)
                 , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v1 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v1 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v2 = 1U;
    while ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(vlSelf, 
                                                                         "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h32259481__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             988);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v3 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1[0U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data[0U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1[1U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data[1U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1[2U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data[2U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1[3U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__data[3U];
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v2 = 1U;
    while ((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(vlSelf, 
                                                                         "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h3225845e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1001);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v3 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v2 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
        co_await vlSelfRef.__VtrigSched_h631cf408__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1010);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r))) {
        VL_WRITEF_NX("[%0t] AXI WRITE RESPONSE ERROR BRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r));
    } else {
        VL_WRITEF_NX("[%0t] AXI WRITE COMPLETE ADDR=%h\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__2__addr);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v3 = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected[0U] = 0xdead0002U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected[1U] = 0xcccc0002U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected[2U] = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected[3U] = 0xaaaa0002U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__addr = 0x30010000U;
    VL_WRITEF_NX("\n[%0t] AXI READ START ADDR=%h EXPECTED=%h\n",4, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v1 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v1 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v2 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
        co_await vlSelfRef.__VtrigSched_h0daa99c9__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1076);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v3 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v2 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
        co_await vlSelfRef.__VtrigSched_h6021f084__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1084);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r))))) {
        VL_WRITEF_NX("[%0t] AXI READ RESPONSE ERROR RRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r));
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    } else if ((0U == ((((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected[0U]) 
                         | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] 
                            ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected[1U])) 
                        | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] 
                           ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected[2U])) 
                       | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected[3U])))) {
        VL_WRITEF_NX("[%0t] AXI READ PASS ADDR=%h DATA=%h\n",4, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data());
    } else {
        VL_WRITEF_NX("[%0t] AXI READ FAIL ADDR=%h DATA=%h EXPECTED=%h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data()
                     , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__3__expected.data());
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v3 = 1U;
    VL_WRITEF_NX("\n=================================================\n TEST 3 : UART BFM\n=================================================\n",0);
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data[0U] = 0xdead0003U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data[1U] = 0xcccc0003U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data[2U] = 0xbbbb0003U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data[3U] = 0xaaaa0003U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__addr = 0x30020000U;
    VL_WRITEF_NX("\n[%0t] -----------------------------------------\n[%0t] AXI WRITE START ADDR=%h DATA=%h\n",5, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',64,VL_TIME_UNITED_Q(1000)
                 , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v2 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v2 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v4 = 1U;
    while ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(vlSelf, 
                                                                         "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h32259481__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             988);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v5 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2[0U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data[0U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2[1U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data[1U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2[2U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data[2U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2[3U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__data[3U];
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v4 = 1U;
    while ((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(vlSelf, 
                                                                         "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h3225845e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1001);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v4 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
        co_await vlSelfRef.__VtrigSched_h631cf408__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1010);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r))) {
        VL_WRITEF_NX("[%0t] AXI WRITE RESPONSE ERROR BRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r));
    } else {
        VL_WRITEF_NX("[%0t] AXI WRITE COMPLETE ADDR=%h\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__4__addr);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v5 = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected[0U] = 0xdead0003U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected[1U] = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected[2U] = 0xbbbb0003U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected[3U] = 0xaaaa0003U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__addr = 0x30020000U;
    VL_WRITEF_NX("\n[%0t] AXI READ START ADDR=%h EXPECTED=%h\n",4, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v2 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v2 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v4 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
        co_await vlSelfRef.__VtrigSched_h0daa99c9__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1076);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v4 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
        co_await vlSelfRef.__VtrigSched_h6021f084__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1084);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r))))) {
        VL_WRITEF_NX("[%0t] AXI READ RESPONSE ERROR RRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r));
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    } else if ((0U == ((((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected[0U]) 
                         | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] 
                            ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected[1U])) 
                        | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] 
                           ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected[2U])) 
                       | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected[3U])))) {
        VL_WRITEF_NX("[%0t] AXI READ PASS ADDR=%h DATA=%h\n",4, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data());
    } else {
        VL_WRITEF_NX("[%0t] AXI READ FAIL ADDR=%h DATA=%h EXPECTED=%h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data()
                     , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__5__expected.data());
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v5 = 1U;
    VL_WRITEF_NX("\n=================================================\n TEST 4 : ALL APB DECODER WINDOWS\n=================================================\n",0);
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)) {
        __Vtemp_1[0U] = 0x44550000U;
        __Vtemp_1[1U] = 0x00112233U;
        __Vtemp_1[2U] = 0x9abcdef0U;
        __Vtemp_1[3U] = 0x12345678U;
        __Vtemp_2[0U] = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_ADD_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[(7U 
                                                             & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][0U] 
            = __Vtemp_3[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[(7U 
                                                             & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][1U] 
            = __Vtemp_3[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[(7U 
                                                             & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][2U] 
            = __Vtemp_3[2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[(7U 
                                                             & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][3U] 
            = __Vtemp_3[3U];
        VL_WRITEF_NX("[%0t] Testing peripheral %0d BASE=%h\n",4, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx
                     , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE
                     [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)]);
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data[0U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][0U];
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data[1U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][1U];
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data[2U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][2U];
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data[3U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][3U];
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__addr 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)];
        VL_WRITEF_NX("\n[%0t] -----------------------------------------\n[%0t] AXI WRITE START ADDR=%h DATA=%h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__addr
                     , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data.data());
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             976);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             976);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v3 = 1U;
        vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v3 
            = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__addr;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v6 = 1U;
        while ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
            Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(vlSelf, 
                                                                             "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
            co_await vlSelfRef.__VtrigSched_h32259481__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                                 "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                                 988);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             990);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             990);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v7 = 1U;
        vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3[0U] 
            = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data[0U];
        vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3[1U] 
            = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data[1U];
        vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3[2U] 
            = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data[2U];
        vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3[3U] 
            = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__data[3U];
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v6 = 1U;
        while ((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
            Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(vlSelf, 
                                                                             "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
            co_await vlSelfRef.__VtrigSched_h3225845e__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                                 "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                                 1001);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1003);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             1003);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v7 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v6 = 1U;
        while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r)))) {
            Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(vlSelf, 
                                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
            co_await vlSelfRef.__VtrigSched_h631cf408__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)", 
                                                                 "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                                 1010);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        if ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r))) {
            VL_WRITEF_NX("[%0t] AXI WRITE RESPONSE ERROR BRESP=%b\n",3, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r));
        } else {
            VL_WRITEF_NX("[%0t] AXI WRITE COMPLETE ADDR=%h\n",3, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__6__addr);
        }
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1031);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             1031);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v7 = 1U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx);
    }
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_4__DOT____Vrepeat3 = 5U;
    while (VL_LTS_III(32, 0U, tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1244);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[0U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[1U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[2U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[3U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][3U];
        if ((0U == vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)) {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[1U] 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data
                [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)][0U];
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[3U] = 1U;
        } else if ((1U == vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)) {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[2U] = 1U;
        } else if ((2U == vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)) {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[1U] = 1U;
        }
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected[0U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[0U];
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected[1U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[1U];
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected[2U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[2U];
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected[3U] 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data[3U];
        __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__addr 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE
            [(7U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx)];
        VL_WRITEF_NX("\n[%0t] AXI READ START ADDR=%h EXPECTED=%h\n",4, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__addr
                     , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected.data());
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1064);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             1064);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v3 = 1U;
        vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v3 
            = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__addr;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v3 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v6 = 1U;
        while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY)))) {
            Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(vlSelf, 
                                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
            co_await vlSelfRef.__VtrigSched_h0daa99c9__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)", 
                                                                 "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                                 1076);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1078);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             1078);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v7 = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v6 = 1U;
        while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r)))) {
            Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(vlSelf, 
                                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
            co_await vlSelfRef.__VtrigSched_h6021f084__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)", 
                                                                 "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                                 1084);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r))))) {
            VL_WRITEF_NX("[%0t] AXI READ RESPONSE ERROR RRESP=%b\n",3, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r));
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
        } else if ((0U == ((((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] 
                              ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected[0U]) 
                             | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] 
                                ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected[1U])) 
                            | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] 
                               ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected[2U])) 
                           | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] 
                              ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected[3U])))) {
            VL_WRITEF_NX("[%0t] AXI READ PASS ADDR=%h DATA=%h\n",4, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__addr
                         , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data());
        } else {
            VL_WRITEF_NX("[%0t] AXI READ FAIL ADDR=%h DATA=%h EXPECTED=%h\n",5, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__addr
                         , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data()
                         , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__7__expected.data());
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
        }
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1121);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                             nullptr, 
                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                             1121);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v7 = 1U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx);
    }
    VL_WRITEF_NX("\n=================================================\n TEST 5 : UART MULTIPLE REGISTERS\n=================================================\n",0);
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data[0U] = 0x44444444U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data[1U] = 0x33333333U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data[2U] = 0x22222222U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data[3U] = 0x11111111U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__addr = 0x30020000U;
    VL_WRITEF_NX("\n[%0t] -----------------------------------------\n[%0t] AXI WRITE START ADDR=%h DATA=%h\n",5, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',64,VL_TIME_UNITED_Q(1000)
                 , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v4 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v4 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v8 = 1U;
    while ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(vlSelf, 
                                                                         "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h32259481__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             988);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v9 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4[0U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data[0U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4[1U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data[1U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4[2U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data[2U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4[3U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__data[3U];
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v8 = 1U;
    while ((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(vlSelf, 
                                                                         "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h3225845e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1001);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v9 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v8 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
        co_await vlSelfRef.__VtrigSched_h631cf408__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1010);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r))) {
        VL_WRITEF_NX("[%0t] AXI WRITE RESPONSE ERROR BRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r));
    } else {
        VL_WRITEF_NX("[%0t] AXI WRITE COMPLETE ADDR=%h\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__8__addr);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v9 = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data[0U] = 0xddddddddU;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data[1U] = 0xccccccccU;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data[2U] = 0xbbbbbbbbU;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data[3U] = 0xaaaaaaaaU;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__addr = 0x30020010U;
    VL_WRITEF_NX("\n[%0t] -----------------------------------------\n[%0t] AXI WRITE START ADDR=%h DATA=%h\n",5, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',64,VL_TIME_UNITED_Q(1000)
                 , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v5 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v5 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v10 = 1U;
    while ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(vlSelf, 
                                                                         "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h32259481__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             988);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v11 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5[0U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data[0U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5[1U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data[1U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5[2U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data[2U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5[3U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__data[3U];
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v10 = 1U;
    while ((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(vlSelf, 
                                                                         "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h3225845e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1001);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v11 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v10 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
        co_await vlSelfRef.__VtrigSched_h631cf408__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1010);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r))) {
        VL_WRITEF_NX("[%0t] AXI WRITE RESPONSE ERROR BRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r));
    } else {
        VL_WRITEF_NX("[%0t] AXI WRITE COMPLETE ADDR=%h\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__9__addr);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v11 = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data[0U] = 0x76543210U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data[1U] = 0xfedcba98U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data[2U] = 0x89abcdefU;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data[3U] = 0x01234567U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__addr = 0x30020020U;
    VL_WRITEF_NX("\n[%0t] -----------------------------------------\n[%0t] AXI WRITE START ADDR=%h DATA=%h\n",5, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',64,VL_TIME_UNITED_Q(1000)
                 , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         976);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v6 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v6 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v12 = 1U;
    while ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(vlSelf, 
                                                                         "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h32259481__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             988);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         990);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v13 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6[0U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data[0U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6[1U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data[1U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6[2U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data[2U];
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6[3U] 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__data[3U];
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v12 = 1U;
    while ((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(vlSelf, 
                                                                         "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
        co_await vlSelfRef.__VtrigSched_h3225845e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1001);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1003);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v13 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v12 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
        co_await vlSelfRef.__VtrigSched_h631cf408__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1010);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r))) {
        VL_WRITEF_NX("[%0t] AXI WRITE RESPONSE ERROR BRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r));
    } else {
        VL_WRITEF_NX("[%0t] AXI WRITE COMPLETE ADDR=%h\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_write__10__addr);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1031);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v13 = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected[0U] = 0x44444444U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected[1U] = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected[2U] = 0x22222222U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected[3U] = 0x11111111U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__addr = 0x30020000U;
    VL_WRITEF_NX("\n[%0t] AXI READ START ADDR=%h EXPECTED=%h\n",4, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v4 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v4 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v4 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v8 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
        co_await vlSelfRef.__VtrigSched_h0daa99c9__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1076);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v9 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v8 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
        co_await vlSelfRef.__VtrigSched_h6021f084__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1084);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r))))) {
        VL_WRITEF_NX("[%0t] AXI READ RESPONSE ERROR RRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r));
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    } else if ((0U == ((((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected[0U]) 
                         | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] 
                            ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected[1U])) 
                        | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] 
                           ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected[2U])) 
                       | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected[3U])))) {
        VL_WRITEF_NX("[%0t] AXI READ PASS ADDR=%h DATA=%h\n",4, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data());
    } else {
        VL_WRITEF_NX("[%0t] AXI READ FAIL ADDR=%h DATA=%h EXPECTED=%h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data()
                     , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__11__expected.data());
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v9 = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected[0U] = 0U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected[1U] = 0U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected[2U] = 0U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected[3U] = 0U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__addr = 0x30020010U;
    VL_WRITEF_NX("\n[%0t] AXI READ START ADDR=%h EXPECTED=%h\n",4, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v5 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v5 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v10 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
        co_await vlSelfRef.__VtrigSched_h0daa99c9__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1076);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v11 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v10 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
        co_await vlSelfRef.__VtrigSched_h6021f084__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1084);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r))))) {
        VL_WRITEF_NX("[%0t] AXI READ RESPONSE ERROR RRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r));
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    } else if ((0U == ((((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected[0U]) 
                         | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] 
                            ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected[1U])) 
                        | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] 
                           ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected[2U])) 
                       | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected[3U])))) {
        VL_WRITEF_NX("[%0t] AXI READ PASS ADDR=%h DATA=%h\n",4, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data());
    } else {
        VL_WRITEF_NX("[%0t] AXI READ FAIL ADDR=%h DATA=%h EXPECTED=%h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data()
                     , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__12__expected.data());
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v11 = 1U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected[0U] = 0U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected[1U] = 0U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected[2U] = 0U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected[3U] = 0U;
    __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__addr = 0x30020020U;
    VL_WRITEF_NX("\n[%0t] AXI READ START ADDR=%h EXPECTED=%h\n",4, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__addr
                 , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected.data());
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1064);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v6 = 1U;
    vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v6 
        = __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__addr;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v6 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v12 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
        co_await vlSelfRef.__VtrigSched_h0daa99c9__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1076);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1078);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v13 = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v12 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r)))) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(vlSelf, 
                                                                         "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
        co_await vlSelfRef.__VtrigSched_h6021f084__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1084);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r))))) {
        VL_WRITEF_NX("[%0t] AXI READ RESPONSE ERROR RRESP=%b\n",3, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r));
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    } else if ((0U == ((((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected[0U]) 
                         | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] 
                            ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected[1U])) 
                        | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] 
                           ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected[2U])) 
                       | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] 
                          ^ __Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected[3U])))) {
        VL_WRITEF_NX("[%0t] AXI READ PASS ADDR=%h DATA=%h\n",4, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data());
    } else {
        VL_WRITEF_NX("[%0t] AXI READ FAIL ADDR=%h DATA=%h EXPECTED=%h\n",5, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__addr
                     , '#',128,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r.data()
                     , '#',128,__Vtask_tb_axi4_to_apb_bridge_cdc__DOT__axi_read__13__expected.data());
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count);
    }
    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                     "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                         "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v13 = 1U;
    tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(vlSelf, 
                                                                         "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
        co_await vlSelfRef.__VtrigSched_h0fe8bbce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)", 
                                                             "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                                             1316);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_axi4_to_apb_bridge_cdc__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n=================================================\n             FINAL TEST RESULT\n=================================================\nData errors   = %0d\nDecode errors = %0d\n",2
                 , '~',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count
                 , '~',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
    if (((0U == vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count) 
         & (0U == vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count))) {
        VL_WRITEF_NX("\n***********************************************\n*              TEST PASSED                   *\n* AXI -> APB -> Peripheral BFM working       *\n* Decoder one-hot check PASSED               *\n***********************************************\n\n",0);
    } else {
        VL_WRITEF_NX("\n***********************************************\n*              TEST FAILED                   *\n* Data errors   = %0d                       *\n* Decode errors = %0d                       *\n***********************************************\n\n",2
                     , '~',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count
                     , '~',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
    }
    VL_FINISH_MT("../simulation/tb_axi4_to_apb_bridge_cdc.sv", 1359, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__5(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000000bebc200ULL, 
                                         nullptr, "../simulation/tb_axi4_to_apb_bridge_cdc.sv", 
                                         1369);
    VL_WRITEF_NX("\n[%0t] WATCHDOG TIMEOUT\nPSEL=%b PENABLE=%b PREADY=%b PADDR=%h\n",6, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',8,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)
                 , '#',1,(2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state))
                 , '#',1,(((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                            ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY)
                            : ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY)
                                : ((4U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                    ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY)
                                    : ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                        ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready)
                                        : ((0x10U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                            ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready)
                                            : ((0x20U 
                                                == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready)
                                                : (
                                                   (0x40U 
                                                    == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                    ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready)
                                                    : (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready)))))))) 
                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                 , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
    VL_FINISH_MT("../simulation/tb_axi4_to_apb_bridge_cdc.sv", 1385, "");
    co_return;
}

bool Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2 = 0U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3 = 0U;
    vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4 = 0U;
    vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r;
    vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
    vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r;
    vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state;
    if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn) {
        if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY) {
            if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY)))) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__wait_count 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__wait_count);
            }
        } else {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__wait_count = 0U;
        }
        if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY) {
            if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY)))) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__wait_count 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__wait_count);
            }
        } else {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__wait_count = 0U;
        }
        if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY) {
            if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY)))) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__wait_count 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__wait_count);
            }
        } else {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__wait_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY) 
             & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r))) {
            if ((0U != (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                if ((4U != (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                    if ((0x0cU != (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                        if ((0x10U == (0x000000ffU 
                                       & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg 
                                = (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg 
                                   & (~ vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                        }
                    }
                    if ((0x0cU == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg 
                            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                    }
                }
                if ((4U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg 
                        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                }
            }
            if ((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg 
                        = ((0xffffff00U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg) 
                           | (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((2U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg 
                        = ((0xffff00ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg) 
                           | (0x0000ff00U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((4U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg 
                        = ((0xff00ffffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg) 
                           | (0x00ff0000U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((8U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg 
                        = ((0x00ffffffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg) 
                           | (0xff000000U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
            }
        }
        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY) 
             & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r))) {
            if ((0U != (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                if ((8U != (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                    if ((0x0cU != (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                        if ((0x10U == (0x000000ffU 
                                       & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg 
                                = (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg 
                                   & (~ vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                        }
                    }
                    if ((0x0cU == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg 
                            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                    }
                }
                if ((8U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg 
                        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                }
            }
            if ((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg 
                        = ((0xffffff00U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg) 
                           | (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((2U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg 
                        = ((0xffff00ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg) 
                           | (0x0000ff00U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((4U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg 
                        = ((0xff00ffffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg) 
                           | (0x00ff0000U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((8U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg 
                        = ((0x00ffffffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg) 
                           | (0xff000000U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
            }
        }
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next;
        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY) 
             & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r))) {
            if ((0U != (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                if ((8U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg 
                        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                }
                if ((8U != (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                    if ((0x10U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg 
                            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                    }
                }
            }
            if ((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))) {
                if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg 
                        = ((0xffffff00U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg) 
                           | (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((2U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg 
                        = ((0xffff00ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg) 
                           | (0x0000ff00U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((4U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg 
                        = ((0xff00ffffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg) 
                           | (0x00ff0000U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
                if ((8U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg 
                        = ((0x00ffffffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg) 
                           | (0xff000000U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r));
                }
            }
        }
    } else {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__wait_count = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__wait_count = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__wait_count = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg = 1U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg = 1U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg = 1U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn)))) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__status_reg = 0U;
    }
}

void Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__1(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__1\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*71:0*/ __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0;
    VL_ZERO_W(72, __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0);
    CData/*1:0*/ __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0;
    __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0;
    __VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if ((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn) 
                  & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID)) 
                 & (1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)))) {
                if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST) 
                                  != ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r) 
                                      == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi4_to_apb_bridge_cdc.sv:723: Assertion failed in %m: axi4_to_apb_bridge_cdc: WLAST mismatch with AWLEN-derived beat count\n",3, 'M',vlSymsp->name(),"tb_axi4_to_apb_bridge_cdc.dut", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../../../DSN/ip/axi4_to_apb_bridge/ip/bridge/axi4_to_apb_bridge_cdc.sv", 723, "");
                }
            }
        }
    }
    __VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0 = 0U;
    if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__w_en) 
         & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full)))) {
        if ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
            __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[0U] 
                = (IData)((((QData)((IData)((0x0000000fU 
                                             & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg) 
                                                >> 
                                                ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                                 << 2U))))) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg
                                                              [
                                                              (0x07ffffffU 
                                                               & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))]))));
            __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[1U] 
                = ((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                    << 4U) | (IData)(((((QData)((IData)(
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg) 
                                                            >> 
                                                            ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                                             << 2U))))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg
                                                         [
                                                         (0x07ffffffU 
                                                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))]))) 
                                      >> 0x00000020U)));
            __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[2U] 
                = (0x00000080U | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r) 
                                   << 4U) | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                                             >> 0x0000001cU)));
        } else {
            __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[0U] = 0U;
            __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[1U] 
                = (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                   << 4U);
            __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[2U] 
                = (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r) 
                    << 4U) | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                              >> 0x0000001cU));
        }
        __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0 
            = (3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_wptr));
        __VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0 = 1U;
    }
    if (__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0][0U] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0][1U] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0][2U] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo__v0[2U];
    }
}

void Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__2(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__2\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*32:0*/ __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0;
    __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0;
    __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0;
    __VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn) 
                 & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I(
                                                       ((((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel))) 
                                                         << 4U) 
                                                        | ((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel)))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi4_to_apb_bridge_cdc.sv:733: Assertion failed in %m: axi4_to_apb_bridge_cdc: more than one slave PSEL asserted simultaneously\n",3, 'M',vlSymsp->name(),"tb_axi4_to_apb_bridge_cdc.dut", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../../../DSN/ip/axi4_to_apb_bridge/ip/bridge/axi4_to_apb_bridge_cdc.sv", 733, "");
                }
            }
        }
    }
    __VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0 = 0U;
    if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn) 
         & (2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)))) {
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))))))) {
            VL_WRITEF_NX("[%0t] ERROR: Multiple PSEL asserted: %b\n",3, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',8,(IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus));
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
        }
        if (((((((((0U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                          >> 0x10U))) 
                   | (1U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                            >> 0x10U)))) 
                  | (2U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                           >> 0x10U)))) 
                 | (3U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                          >> 0x10U)))) 
                | (4U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                         >> 0x10U)))) 
               | (5U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                        >> 0x10U)))) 
              | (6U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                       >> 0x10U)))) 
             | (7U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                      >> 0x10U))))) {
            if ((0U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                       >> 0x10U)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel)))))) {
                    VL_WRITEF_NX("[%0t] ERROR: SPI address but SPI PSEL not asserted. PADDR=%h\n",3, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
                }
            } else if ((1U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 0x10U)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel)))))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
                    VL_WRITEF_NX("[%0t] ERROR: I2C address but I2C PSEL not asserted. PADDR=%h\n",3, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
                }
            } else if ((2U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 0x10U)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel)))))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
                    VL_WRITEF_NX("[%0t] ERROR: UART address but UART PSEL not asserted. PADDR=%h\n",3, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
                }
            } else if ((3U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 0x10U)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel)))))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
                    VL_WRITEF_NX("[%0t] ERROR: GPIO address but GPIO PSEL not asserted. PADDR=%h\n",3, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
                }
            } else if ((4U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 0x10U)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel)))))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
                    VL_WRITEF_NX("[%0t] ERROR: MIPI address but MIPI PSEL not asserted. PADDR=%h\n",3, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
                }
            } else if ((5U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 0x10U)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel)))))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
                    VL_WRITEF_NX("[%0t] ERROR: HDMI address but HDMI PSEL not asserted. PADDR=%h\n",3, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
                }
            } else if ((6U == (0x0000000fU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 0x10U)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel)))))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
                    VL_WRITEF_NX("[%0t] ERROR: TIMER address but TIMER PSEL not asserted. PADDR=%h\n",3, 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
                }
            } else if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel)))))) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count);
                VL_WRITEF_NX("[%0t] ERROR: DEBUG address but DEBUG PSEL not asserted. PADDR=%h\n",3, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r);
            }
        }
    }
    if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__w_en) 
         & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full)))) {
        __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0 
            = (((QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_err_r)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_rdata_r)));
        __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0 
            = (3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_wptr));
        __VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0 = 1U;
    }
    if (__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo__v0;
    }
}

void Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__3(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__3\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__Vfuncout;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr = 0;
    CData/*1:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__burst;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__burst = 0;
    CData/*2:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__size;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__size = 0;
    CData/*7:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__len;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__len = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__num_bytes;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__num_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr_mask;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr_mask = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_size;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_size = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_boundary;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_boundary = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_last;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_last = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__Vfuncout;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr = 0;
    CData/*1:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__burst;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__burst = 0;
    CData/*2:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__size;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__size = 0;
    CData/*7:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__len;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__len = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__num_bytes;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__num_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr_mask;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr_mask = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_size;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_size = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_boundary;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_boundary = 0;
    IData/*31:0*/ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_last;
    __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_last = 0;
    CData/*3:0*/ __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 0;
    CData/*7:0*/ __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r = 0;
    IData/*31:0*/ __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r = 0;
    CData/*1:0*/ __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r = 0;
    CData/*0:0*/ __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r = 0;
    // Body
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r;
    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state;
    if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_wptr 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next;
        if ((8U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 0U;
        } else if ((4U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
            if ((2U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
                if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
                    if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY) {
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r = 0U;
                        if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rlast_r) {
                            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 0U;
                        } else {
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__len 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__size 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__size_r;
                            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r 
                                = (0x000000ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r)));
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__burst 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__burst_r;
                            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r = 0U;
                            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 5U;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__Vfuncout = 0;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_size = 0;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_boundary = 0;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_last = 0;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__num_bytes 
                                = ((IData)(1U) << (IData)(__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__size));
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr_mask 
                                = (__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__num_bytes 
                                   - (IData)(1U));
                            if ((0U == (IData)(__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__burst))) {
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__Vfuncout 
                                    = __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr;
                            } else if ((2U == (IData)(__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__burst))) {
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_size 
                                    = (__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__num_bytes 
                                       * ((IData)(1U) 
                                          + (IData)(__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__len)));
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_boundary 
                                    = (__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr 
                                       & (~ (__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_size 
                                             - (IData)(1U))));
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_last 
                                    = ((__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_boundary 
                                        + __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_size) 
                                       - __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__num_bytes);
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__Vfuncout 
                                    = ((__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr 
                                        == __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_last)
                                        ? __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__wrap_boundary
                                        : ((__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr 
                                            & (~ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr_mask)) 
                                           + __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__num_bytes));
                            } else {
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__Vfuncout 
                                    = ((__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr 
                                        & (~ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__addr_mask)) 
                                       + __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__num_bytes);
                            }
                            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r 
                                = __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__14__Vfuncout;
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty)))) {
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[0U] 
                        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[0U];
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[1U] 
                        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[1U];
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[2U] 
                        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[2U];
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[3U] 
                        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[3U];
                    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r 
                        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_next;
                    if ((3U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))) {
                        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r = 0U;
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rid_r 
                            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__id_r;
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] 
                            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[0U];
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] 
                            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[1U];
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] 
                            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[2U];
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] 
                            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[3U];
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r 
                            = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_next)
                                ? 2U : 0U);
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rlast_r 
                            = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r) 
                               == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r));
                        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r = 1U;
                        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 7U;
                    } else {
                        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r)));
                        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 5U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full)))) {
                    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 6U;
                }
            } else if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r = 0U;
                __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
            if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty)))) {
                    __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r 
                        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r) 
                           | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out 
                              >> 0x00000020U));
                    if ((3U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))) {
                        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r = 0U;
                        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r) 
                             == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r))) {
                            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bid_r 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__id_r;
                            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r 
                                = (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r) 
                                    | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out 
                                       >> 0x00000020U))
                                    ? 2U : 0U);
                            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r = 1U;
                            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 4U;
                        } else {
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__len 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__size 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__size_r;
                            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r 
                                = (0x000000ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r)));
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__burst 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__burst_r;
                            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 1U;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr 
                                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__Vfuncout = 0;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_size = 0;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_boundary = 0;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_last = 0;
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__num_bytes 
                                = ((IData)(1U) << (IData)(__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__size));
                            __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr_mask 
                                = (__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__num_bytes 
                                   - (IData)(1U));
                            if ((0U == (IData)(__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__burst))) {
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__Vfuncout 
                                    = __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr;
                            } else if ((2U == (IData)(__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__burst))) {
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_size 
                                    = (__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__num_bytes 
                                       * ((IData)(1U) 
                                          + (IData)(__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__len)));
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_boundary 
                                    = (__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr 
                                       & (~ (__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_size 
                                             - (IData)(1U))));
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_last 
                                    = ((__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_boundary 
                                        + __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_size) 
                                       - __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__num_bytes);
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__Vfuncout 
                                    = ((__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr 
                                        == __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_last)
                                        ? __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__wrap_boundary
                                        : ((__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr 
                                            & (~ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr_mask)) 
                                           + __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__num_bytes));
                            } else {
                                __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__Vfuncout 
                                    = ((__Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr 
                                        & (~ __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__addr_mask)) 
                                       + __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__num_bytes);
                            }
                            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r 
                                = __Vfunc_tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_next_addr__15__Vfuncout;
                        }
                    } else {
                        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r)));
                        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 2U;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full)))) {
                __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
            if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg[0U] 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U];
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg[1U] 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U];
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg[2U] 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U];
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg[3U] 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U];
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB;
                __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 2U;
            }
        } else if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID) {
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r = 0U;
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r = 0U;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__id_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID;
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__size_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__burst_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT;
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r = 0U;
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 1U;
        } else if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID) {
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r = 0U;
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r = 0U;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__id_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID;
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__size_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__burst_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT;
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r = 0U;
            __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 5U;
        }
    } else {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_wptr = 0U;
        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r = 0U;
        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r = 0U;
        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__id_r = 0U;
        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__size_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__burst_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg[0U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg[1U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg[2U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg[3U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg = 0U;
        __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bid_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rid_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[0U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[1U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[2U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r[3U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rlast_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[0U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[1U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[2U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[3U] = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r = 0U;
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r 
        = __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r 
        = __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r 
        = __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r 
        = __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state 
        = __Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
        = ((0xfffffff0U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r) 
           + ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
              << 2U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn) 
           & (((6U & ((~ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync))) 
              == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next)));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty 
        = (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn)) 
                 | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr_sync) 
                    == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next))));
    if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_rptr__DOT__q1;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr_sync 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_wptr__DOT__q1;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_rptr__DOT__q1 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_wptr__DOT__q1 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr;
    } else {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr_sync = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_rptr__DOT__q1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_wptr__DOT__q1 = 0U;
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__w_en 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full)) 
           & ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)) 
              | (5U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty)) 
           & ((3U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)) 
              | (6U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next 
        = (7U & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_wptr) 
                 + (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full)) 
                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__w_en)))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next 
        = (7U & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr) 
                 + (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty)) 
                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en)))));
}

void Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__4(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__4\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WLAST__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = 0x000fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = 0x000fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = 0x000fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = 0x000fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = 0x000fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = 0x000fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WSTRB__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB = 0x000fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWID__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWLEN__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWBURST__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWPROT__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARID__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARLEN__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARBURST__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARPROT__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0[2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v0[3U];
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1[2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v1[3U];
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2[2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v2[3U];
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3[2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v3[3U];
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4[2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v4[3U];
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5[2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v5[3U];
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[0U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6[0U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[1U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6[1U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[2U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6[2U];
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA[3U] 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__WDATA__v6[3U];
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v0;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v1;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v2;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v3;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v4;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v5;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__AWADDR__v6;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v0;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v1;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v2;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v3;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v4;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v5;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR 
            = vlSelfRef.__VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__ARADDR__v6;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v7) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v7 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v8) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v8 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v9) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v9 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v10) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v10 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v11) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v11 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v12) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v12 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v13) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__RREADY__v13 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v7) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v7 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v8) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v8 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v9) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v9 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v10) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v10 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v11) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v11 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v12) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v12 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v13) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__BREADY__v13 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v7) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v7 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v8) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v8 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v9) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v9 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v10) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v10 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v11) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v11 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v12) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v12 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v13) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__ARVALID__v13 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v7) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v7 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v8) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v8 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v9) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v9 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v10) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v10 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v11) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v11 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v12) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v12 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v13) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__WVALID__v13 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v0) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v0 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v1) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v2) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v2 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v3) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v3 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v4) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v4 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v5) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v5 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v6) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v6 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v7) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v7 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v8) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v8 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v9) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v9 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v10) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v10 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v11) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v11 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v12) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v12 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v13) {
        vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__AWVALID__v13 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID = 0U;
    }
}

extern const VlWide<18>/*575:0*/ Vtb_axi4_to_apb_bridge_cdc__ConstPool__CONST_h634389fd_0;
extern const VlUnpacked<CData/*7:0*/, 9> Vtb_axi4_to_apb_bridge_cdc__ConstPool__TABLE_h7881ea31_0;

void Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__5(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__5\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0;
    __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0;
    __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1;
    __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1;
    __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2;
    __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2;
    __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3;
    __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3;
    __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4;
    __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4 = 0;
    CData/*7:0*/ __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4;
    __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_wptr 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next;
        if ((2U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state))) {
            if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full)))) {
                    vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state = 0U;
                }
            } else if ((((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                          ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY)
                          : ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                              ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY)
                              : ((4U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                  ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY)
                                  : ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                      ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready)
                                      : ((0x10U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                          ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready)
                                          : ((0x20U 
                                              == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                              ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready)
                                              : ((0x40U 
                                                  == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                  ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready)
                                                  : (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready)))))))) 
                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_err_r 
                    = (((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                        && ((2U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                            && ((4U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                && ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                     ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr)
                                     : ((0x10U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                         ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr)
                                         : ((0x20U 
                                             == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                             ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr)
                                             : ((0x40U 
                                                 == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                 ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr)
                                                 : (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr)))))))) 
                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_rdata_r 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__PRDATA;
                vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state))) {
            vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state = 2U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty)))) {
            vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r 
                = (1U & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[2U] 
                         >> 7U));
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_prot_r 
                = (7U & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[2U] 
                         >> 4U));
            vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                = ((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[2U] 
                    << 0x0000001cU) | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[1U] 
                                       >> 4U));
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r 
                = (0x0000000fU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[1U]);
            vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[0U];
            vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state = 1U;
        }
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full 
            = (((6U & ((~ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync) 
                           >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync))) 
               == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next));
    } else {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_wptr = 0U;
        vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state = 0U;
        vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_prot_r = 0U;
        vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r = 0U;
        vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_err_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_rdata_r = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full = 0U;
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty 
        = (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn)) 
                 | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr_sync) 
                    == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next))));
    if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr = 0U;
        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel) 
             & (2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)))) {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready = 1U;
            if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r) {
                VL_WRITEF_NX("[%0t] GPIO WRITE ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r);
                __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0 
                    = (0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0 = 1U;
            } else {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_prdata 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[0U]
                    [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                     >> 2U))];
                VL_WRITEF_NX("[%0t] GPIO READ ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[0U]
                             [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 2U))]);
            }
        }
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr = 0U;
        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel) 
             & (2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)))) {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready = 1U;
            if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r) {
                VL_WRITEF_NX("[%0t] MIPI WRITE ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r);
                __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1 
                    = (0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1 = 1U;
            } else {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_prdata 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[1U]
                    [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                     >> 2U))];
                VL_WRITEF_NX("[%0t] MIPI READ ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[1U]
                             [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 2U))]);
            }
        }
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr = 0U;
        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel) 
             & (2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)))) {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready = 1U;
            if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r) {
                VL_WRITEF_NX("[%0t] HDMI WRITE ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r);
                __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2 
                    = (0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2 = 1U;
            } else {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_prdata 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[2U]
                    [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                     >> 2U))];
                VL_WRITEF_NX("[%0t] HDMI READ ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[2U]
                             [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 2U))]);
            }
        }
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr = 0U;
        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel) 
             & (2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)))) {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready = 1U;
            if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r) {
                VL_WRITEF_NX("[%0t] TIMER WRITE ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r);
                __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3 
                    = (0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3 = 1U;
            } else {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_prdata 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[3U]
                    [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                     >> 2U))];
                VL_WRITEF_NX("[%0t] TIMER READ ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[3U]
                             [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 2U))]);
            }
        }
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr = 0U;
        if (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel) 
             & (2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)))) {
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready = 1U;
            if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r) {
                VL_WRITEF_NX("[%0t] DEBUG WRITE ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r);
                __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
                __VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4 
                    = (0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4 = 1U;
            } else {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_prdata 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[4U]
                    [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                     >> 2U))];
                VL_WRITEF_NX("[%0t] DEBUG READ ADDR=%h DATA=%h\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r
                             , '#',32,vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[4U]
                             [(0x000000ffU & (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                              >> 2U))]);
            }
        }
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_rptr__DOT__q1;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr_sync 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_wptr__DOT__q1;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_rptr__DOT__q1 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_wptr__DOT__q1 
            = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr;
    } else {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_prdata = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_prdata = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_prdata = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_prdata = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_prdata = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr_sync = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_rptr__DOT__q1 = 0U;
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_wptr__DOT__q1 = 0U;
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r 
        = vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r 
        = vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r;
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[0U][__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[1U][__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v1;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[2U][__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v2;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[3U][__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v3;
    }
    if (vlSelfRef.__VdlySet__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4) {
        vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem[4U][__VdlyDim0__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4] 
            = __VdlyVal__tb_axi4_to_apb_bridge_cdc__DOT__dummy_mem__v4;
    }
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
        = vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r;
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state 
        = vlSelfRef.__Vdly__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state;
    __Vtemp_1 = VL_MATCHMASKED_I(16, (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r 
                                      >> 0x00000010U), Vtb_axi4_to_apb_bridge_cdc__ConstPool__CONST_h634389fd_0);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = Vtb_axi4_to_apb_bridge_cdc__ConstPool__TABLE_h7881ea31_0
        [__Vtemp_1];
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__w_en 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full)) 
           & (3U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en 
        = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty)) 
           & (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active 
        = ((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)) 
           | (2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next 
        = (7U & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_wptr) 
                 + (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full)) 
                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__w_en)))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next 
        = (7U & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr) 
                 + (1U & ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty)) 
                          & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en)))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 4U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 3U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 2U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 1U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 7U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 6U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
              >> 5U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next) 
           ^ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next) 
              >> 1U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next 
        = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next) 
           ^ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next) 
              >> 1U));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY 
        = ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)) 
           & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY 
        = ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)) 
           & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY 
        = ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state)) 
           & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus 
        = ((((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel) 
               << 3U) | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel) 
                         << 2U)) | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel) 
                                     << 1U) | (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel))) 
            << 4U) | ((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel) 
                        << 3U) | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel) 
                                  << 2U)) | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((1U 
                                                 == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                | ((2U 
                                                    == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                   | ((4U 
                                                       == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                      | ((8U 
                                                          == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                         | ((0x10U 
                                                             == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                            | ((0x20U 
                                                                == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                               | ((0x40U 
                                                                   == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                                                  | (0x80U 
                                                                     == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)))))))));
    vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__PRDATA 
        = (((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
             ? (((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                  ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg
                  : ((4U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                      ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg
                      : ((8U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                          ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg
                          : ((0x0cU == (0x000000ffU 
                                        & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                              ? 1U : (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg 
                                      & (- (IData)(
                                                   (0x10U 
                                                    == 
                                                    (0x000000ffU 
                                                     & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel))))
             : ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                 ? (((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                      ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg
                      : ((4U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                          ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg
                          : ((8U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                              ? 1U : ((0x0cU == (0x000000ffU 
                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                       ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg
                                       : (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg 
                                          & (- (IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                    & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel))))
                 : ((4U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                     ? (((0U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                          ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg
                          : ((4U == (0x000000ffU & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                              ? 1U : ((8U == (0x000000ffU 
                                              & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                       ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg
                                       : ((0x0cU == 
                                           (0x000000ffU 
                                            & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                           ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg
                                           : (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg 
                                              & (- (IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                        & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel))))
                     : ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                         ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_prdata
                         : ((0x10U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                             ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_prdata
                             : ((0x20U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                 ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_prdata
                                 : ((0x40U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                     ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_prdata
                                     : vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_prdata))))))) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
}

void Vtb_axi4_to_apb_bridge_cdc___024root___eval_body__nba(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_body__nba\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x0000000000000ff4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_axi4_to_apb_bridge_cdc___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out 
                = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en)
                    ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo
                   [(3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr))]
                    : 0ULL);
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_next 
                = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r) 
                   | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out 
                      >> 0x00000020U));
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[0U] 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[0U];
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[1U] 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[1U];
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[2U] 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[2U];
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next[3U] 
                = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r[3U];
            VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & 
                                      ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                       << 5U)), vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next, (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out));
        }
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x0000000000000ffcULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY 
                = ((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID)) 
                   & (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)));
        }
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[0U] 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo
                    [(3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr))][0U];
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[1U] 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo
                    [(3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr))][1U];
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[2U] 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo
                    [(3U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr))][2U];
            } else {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[0U] = 0U;
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[1U] = 0U;
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out[2U] = 0U;
            }
        }
        vlSelfRef.__Vm_traceActivity[10U] = 1U;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            if (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn) {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next;
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr 
                    = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next;
            } else {
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr = 0U;
                vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr = 0U;
            }
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next 
                = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next) 
                   ^ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next) 
                      >> 1U));
            vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next 
                = ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next) 
                   ^ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next) 
                      >> 1U));
        }
        vlSelfRef.__Vm_traceActivity[11U] = 1U;
    }
}

void Vtb_axi4_to_apb_bridge_cdc___024root___timing_ready(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___timing_ready\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready("@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd312c1ce__0.ready("@(posedge tb_axi4_to_apb_bridge_cdc.PCLK)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3239ee00__0.ready("@( tb_axi4_to_apb_bridge_cdc.ARESETn)");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h96a50c21__0.ready("@( tb_axi4_to_apb_bridge_cdc.PRESETn)");
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h32259481__0.ready("@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3225845e__0.ready("@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h631cf408__0.ready("@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0daa99c9__0.ready("@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6021f084__0.ready("@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
    }
}

void Vtb_axi4_to_apb_bridge_cdc___024root___timing_resume(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___timing_resume\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h0fe8bbce__0.moveToResumeQueue(
                                                          "@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    vlSelfRef.__VtrigSched_hd312c1ce__0.moveToResumeQueue(
                                                          "@(posedge tb_axi4_to_apb_bridge_cdc.PCLK)");
    vlSelfRef.__VtrigSched_h3239ee00__0.moveToResumeQueue(
                                                          "@( tb_axi4_to_apb_bridge_cdc.ARESETn)");
    vlSelfRef.__VtrigSched_h96a50c21__0.moveToResumeQueue(
                                                          "@( tb_axi4_to_apb_bridge_cdc.PRESETn)");
    vlSelfRef.__VtrigSched_h32259481__0.moveToResumeQueue(
                                                          "@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
    vlSelfRef.__VtrigSched_h3225845e__0.moveToResumeQueue(
                                                          "@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
    vlSelfRef.__VtrigSched_h631cf408__0.moveToResumeQueue(
                                                          "@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
    vlSelfRef.__VtrigSched_h0daa99c9__0.moveToResumeQueue(
                                                          "@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
    vlSelfRef.__VtrigSched_h6021f084__0.moveToResumeQueue(
                                                          "@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
    vlSelfRef.__VtrigSched_h0fe8bbce__0.resume("@(posedge tb_axi4_to_apb_bridge_cdc.ACLK)");
    vlSelfRef.__VtrigSched_hd312c1ce__0.resume("@(posedge tb_axi4_to_apb_bridge_cdc.PCLK)");
    vlSelfRef.__VtrigSched_h3239ee00__0.resume("@( tb_axi4_to_apb_bridge_cdc.ARESETn)");
    vlSelfRef.__VtrigSched_h96a50c21__0.resume("@( tb_axi4_to_apb_bridge_cdc.PRESETn)");
    vlSelfRef.__VtrigSched_h32259481__0.resume("@( (4'h0 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
    vlSelfRef.__VtrigSched_h3225845e__0.resume("@( (4'h1 == tb_axi4_to_apb_bridge_cdc.dut.axi_state))");
    vlSelfRef.__VtrigSched_h631cf408__0.resume("@( tb_axi4_to_apb_bridge_cdc.dut.bvalid_r)");
    vlSelfRef.__VtrigSched_h0daa99c9__0.resume("@( tb_axi4_to_apb_bridge_cdc.dut.ARREADY)");
    vlSelfRef.__VtrigSched_h6021f084__0.resume("@( tb_axi4_to_apb_bridge_cdc.dut.rvalid_r)");
    if ((0x0000000000000800ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_axi4_to_apb_bridge_cdc___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_axi4_to_apb_bridge_cdc___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0fe8bbce__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ACLK__0))) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ACLK__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0fe8bbce__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_hd312c1ce__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_hd312c1ce__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PCLK__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PCLK__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd312c1ce__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3239ee00__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3239ee00__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ARESETn__0)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__ARESETn__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3239ee00__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h96a50c21__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h96a50c21__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PRESETn__0)) 
                                  << 5U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__PRESETn__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn;
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h96a50c21__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h32259481__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_hb611562d__0;
    __Vtrigprevexpr_hb611562d__0 = 0;
    // Body
    __Vtrigprevexpr_hb611562d__0 = (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state));
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_hb611562d__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_hb611562d__1)) 
                                  << 0x0000000aU)));
    vlSelfRef.__Vtrigprevexpr_hb611562d__1 = __Vtrigprevexpr_hb611562d__0;
    if ((0x0000000000000400ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h32259481__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h32259481__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h32259481__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h32259481__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h32259481__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h32259481__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h32259481__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h3225845e__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_hb61146a0__0;
    __Vtrigprevexpr_hb61146a0__0 = 0;
    // Body
    __Vtrigprevexpr_hb61146a0__0 = (1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state));
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_hb61146a0__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_hb61146a0__1)) 
                                  << 9U)));
    vlSelfRef.__Vtrigprevexpr_hb61146a0__1 = __Vtrigprevexpr_hb61146a0__0;
    if ((0x0000000000000200ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3225845e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3225845e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3225845e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3225845e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3225845e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3225845e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3225845e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h631cf408__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r__0)) 
                                  << 7U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r;
    if ((0x0000000000000080ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h631cf408__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h631cf408__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h631cf408__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h631cf408__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h631cf408__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h631cf408__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h631cf408__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h0daa99c9__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY__0)) 
                                  << 6U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__ARREADY;
    if ((0x0000000000000040ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0daa99c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0daa99c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0daa99c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0daa99c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0daa99c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0daa99c9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0daa99c9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root____VbeforeTrig_h6021f084__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r__0)) 
                                  << 8U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r__0 
        = vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r;
    if ((0x0000000000000100ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6021f084__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6021f084__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6021f084__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6021f084__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6021f084__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6021f084__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6021f084__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_axi4_to_apb_bridge_cdc___024root___eval_debug_assertions(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root___eval_debug_assertions\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
