// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> p;
    p = VL_NEW(Vcsi2_tb_top_std__03a__03aprocess, vlSymsp);

// $c statement at /opt/verilator-5.052/share/verilator/include/verilated_std.sv:159:7
    VL_NULL_CHECK(p, "/opt/verilator-5.052/share/verilator/include/verilated_std.sv", 159)->m_process = vlProcess;
    self__Vfuncrtn = p;
}

void Vcsi2_tb_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
    // Body
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> unnamedblk1_1__DOT__unnamedblk1__DOT__p;
    unnamedblk1_1__DOT____Vrepeat0 = processQueue.size();
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        unnamedblk1_1__DOT__unnamedblk1__DOT__p = processQueue.pop_front();
        if ((VlNull{} != unnamedblk1_1__DOT__unnamedblk1__DOT__p)) {
            VL_NULL_CHECK(unnamedblk1_1__DOT__unnamedblk1__DOT__p, "/opt/verilator-5.052/share/verilator/include/verilated_std.sv", 200)->__VnoInFunc_kill(vlSymsp);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
}

void Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_set_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body

// $c statement at /opt/verilator-5.052/share/verilator/include/verilated_std.sv:166:7
    this->m_process->state(s);
}

void Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 0U;
    status__Vfuncrtn = 
// $cpure expression at /opt/verilator-5.052/share/verilator/include/verilated_std.sv:172:21
this->m_process->state()
    ;
}

void Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_suspend(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:183: Assertion failed in %m: std::process::suspend() not supported\n",3, 'M',vlSymsp->name(),"std.process.suspend", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("/opt/verilator-5.052/share/verilator/include/verilated_std.sv", 183, "");
}

void Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_resume(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

VlCoroutine Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_await(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hc185b2c7__0;
    __Vtrigprevexpr_hc185b2c7__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    this->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
    this->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
    if ((1U & (~ ((0U == __VlefCall_0__status) | (4U 
                                                  == __VlefCall_1__status))))) {
        CData/*0:0*/ __VdynTrigger_hc369db89__0;
        __VdynTrigger_hc369db89__0 = 0;
        __VdynTrigger_hc369db89__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hc369db89__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] ((32'h0 == std::process.__VlefCall_0__status) | (32'h4 == std::process.__VlefCall_1__status)))", 
                                                         "/opt/verilator-5.052/share/verilator/include/verilated_std.sv", 
                                                         192);
            __Vtrigprevexpr_hc185b2c7__0 = ((0U == __VlefCall_0__status) 
                                            | (4U == __VlefCall_1__status));
            __VdynTrigger_hc369db89__0 = __Vtrigprevexpr_hc185b2c7__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc369db89__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] ((32'h0 == std::process.__VlefCall_0__status) | (32'h4 == std::process.__VlefCall_1__status)))", 
                                                     "/opt/verilator-5.052/share/verilator/include/verilated_std.sv", 
                                                     192);
    }
    co_return;
}

void Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_get_randstate(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /opt/verilator-5.052/share/verilator/include/verilated_std.sv:235:26
0
    );

// $c statement at /opt/verilator-5.052/share/verilator/include/verilated_std.sv:237:7
    s = this->m_process->randstate();
    get_randstate__Vfuncrtn = s;
}

void Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_set_randstate(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /opt/verilator-5.052/share/verilator/include/verilated_std.sv:242:7
    this->m_process->randstate(s);
}

void Vcsi2_tb_top_std__03a__03aprocess::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_srandom(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ seed) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::__VnoInFunc_srandom\n"); );
    // Body
    m_process->srandom(seed);
}

void Vcsi2_tb_top_std__03a__03aprocess::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
