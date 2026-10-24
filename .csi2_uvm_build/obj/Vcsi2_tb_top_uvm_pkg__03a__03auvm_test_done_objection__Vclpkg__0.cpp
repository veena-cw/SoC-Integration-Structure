// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi4> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection> __Vfunc_create__1__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "run"s, VlNull{}, ""s, __Vfunc_create__1__Vfuncout);
        this->__PVT__m_inst = __Vfunc_create__1__Vfuncout;
    }
    get__Vfuncrtn = this->__PVT__m_inst;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__stop_timeout = 0ULL;
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_qualify(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ is_raise, std::string description) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_qualify\n"); );
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> c;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> s;
    std::string nm;
    std::string desc;
    if (is_raise) {
        __Vtemp_1[0U] = 0x74696f6eU;
        __Vtemp_1[1U] = 0x626a6563U;
        __Vtemp_1[2U] = 0x73655f6fU;
        __Vtemp_1[3U] = 0x00726169U;
    } else {
        __Vtemp_1[0U] = 0x74696f6eU;
        __Vtemp_1[1U] = 0x626a6563U;
        __Vtemp_1[2U] = 0x6f705f6fU;
        __Vtemp_1[3U] = 0x00006472U;
    }
    nm = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
    desc = ((""s == description) ? ""s : VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(" (\""s, description), "\")"s));
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, c);
    if ((! __VlefExpr_0)) {
        __VlefExpr_0 = VL_CAST_DYNAMIC(obj, s);
    }
    if ((1U & (~ __VlefExpr_0))) {
        VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1149)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1149)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "TEST_DONE_NOHIER"s, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("A non-hierarchical object, '"s, __VlefCall_1__get_full_name), "' ("s), __VlefCall_2__get_type_name), ") was used in a call "s), "to uvm_test_done."s), nm), "(). For this objection, a sequence "s), "or component is required."s), desc)), 0x00000064U, ""s, 0U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_do_stop_all(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_do_stop_all\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_first_child__4__Vfuncout;
    __Vtask_get_first_child__4__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__7__Vfuncout;
    __Vtask_get_next_child__7__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__get_next_child;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __VlefCall_1__get_child;
    IData/*31:0*/ __VlefCall_0__get_first_child;
    std::string name;
    name = ""s;
    VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1166)->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__4__Vfuncout);
    __VlefCall_0__get_first_child = __Vtask_get_first_child__4__Vfuncout;
    if ((0U != __VlefCall_0__get_first_child)) {
        do {
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1168)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_1__get_child);
            this->__VnoInFunc_m_do_stop_all(vlProcess, vlSymsp, __VlefCall_1__get_child);
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1170)->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__7__Vfuncout);
            __VlefCall_2__get_next_child = __Vtask_get_next_child__7__Vfuncout;
        } while ((0U != __VlefCall_2__get_next_child));
    }
    if ((0U != VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1172)
         ->__PVT__enable_stop_interrupt)) {
        this->__PVT__m_n_stop_threads = ((IData)(1U) 
                                         + this->__PVT__m_n_stop_threads);
        this->__VnoInFunc_m_do_stop_all____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, comp);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_do_stop_all____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_do_stop_all____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __Vtask___VforkTask_0__8__comp;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__8__comp = comp;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                            1174);
    VL_NULL_CHECK(__Vtask___VforkTask_0__8__comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1175)->__VnoInFunc_stop_phase(vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__run_ph);
    this->__PVT__m_n_stop_threads = (this->__PVT__m_n_stop_threads 
                                     - (IData)(1U));
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_stop_request(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_stop_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1196)->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "STOP_REQ"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1196)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STOP_REQ"s, "Stop-request called. Waiting for all-dropped on uvm_test_done"s, 0x00000190U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh"s, 0x000004acU);
    }
    this->__VnoInFunc_stop_request____Vfork_2__0(std::make_shared<VlProcess>(), vlSymsp);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_stop_request____Vfork_2__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_stop_request____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                            1197);
    co_await this->__VnoInFunc_m_stop_request(vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_stop_request(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_stop_request\n"); );
    // Locals
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_raise_objection(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "stop_request called; raising test_done objection"s, 1U);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
    this->__VnoInFunc_m_stop_request____Vfork_3__0(vlSymsp);
    CData/*0:0*/ __VdynTrigger_h0a8a05aa__3;
    __VdynTrigger_h0a8a05aa__3 = 0;
    __VdynTrigger_h0a8a05aa__3 = 0U;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    while ((1U & (~ (IData)(__VdynTrigger_h0a8a05aa__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                     373);
        __VdynTrigger_h0a8a05aa__3 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                      != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0a8a05aa__3);
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                 373);
    this->__VnoInFunc_drop_objection(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "stop_request called; dropping test_done objection"s, 1U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_stop_request____Vfork_3__0(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_stop_request____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                            372);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    IData/*31:0*/ __Vintraval_h62971b97__3;
    __Vintraval_h62971b97__3 = 0;
    __Vintraval_h62971b97__3 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_m_stop_request____Vfork_3__0____Vfork_4__0(vlSymsp, __Vintraval_h62971b97__3);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_stop_request____Vfork_3__0____Vfork_4__0(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h62971b97__3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_m_stop_request____Vfork_3__0____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h4e6e5c7f__3;
    __VdynTrigger_h4e6e5c7f__3 = 0;
    __VdynTrigger_h4e6e5c7f__3 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h4e6e5c7f__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                     372);
        __VdynTrigger_h4e6e5c7f__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h4e6e5c7f__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                     372);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                 372);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h62971b97__3;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_all_dropped(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_all_dropped\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((obj != Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top)) {
            co_await Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1237)->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection>{this}, source_obj, description, count);
        if ((1U & (~ (IData)(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_cleared)))) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1245)->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "TEST_DONE"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1245)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST_DONE"s, "All end-of-test objections have been dropped. Calling stop tasks"s, 0x00000190U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh"s, 0x000004ddU);
            }
            {
                VlForkSync __Vfork_5__sync;
                __Vfork_5__sync.init(1U, vlProcess);
                this->__VnoInFunc_all_dropped____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_5__sync, __VlefCall_1__uvm_report_enabled);
                co_await __Vfork_5__sync.join(vlProcess, 
                                              "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                              1246);
            }
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1268)->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, "TEST_DONE"s, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1268)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST_DONE"s, "'run' phase is ready to proceed to the 'extract' phase"s, 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh"s, 0x000004f4U);
            }
        }
        if (Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_events.exists(obj)) {
            vlSymsp->fireEvent(VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_events
                                             .atWrite(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1273)
                               ->__PVT__all_dropped);
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top_all_dropped = 1U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_all_dropped____Vfork_5__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, IData/*31:0*/ &__VlefCall_1__uvm_report_enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_all_dropped____Vfork_5__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_5__sync.onKill(vlProcess);
    {
        VlForkSync __Vfork_6__sync;
        __Vfork_6__sync.init(1U, vlProcess);
        this->__VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_6__sync);
        this->__VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_6__sync, __VlefCall_1__uvm_report_enabled);
        co_await __Vfork_6__sync.join(vlProcess, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                      1247);
    }
    vlProcess->disableFork();
    __Vfork_5__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                         1246);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__1(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_6__sync, IData/*31:0*/ __VlefCall_1__uvm_report_enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_6__sync.onKill(vlProcess);
    CData/*0:0*/ __Vtrigprevexpr_hce91b8a5__0;
    __Vtrigprevexpr_hce91b8a5__0 = 0;
    if ((0ULL == this->__PVT__stop_timeout)) {
        if ((0ULL == this->__PVT__stop_timeout)) {
            CData/*0:0*/ __VdynTrigger_hf4dde57b__0;
            __VdynTrigger_hf4dde57b__0 = 0;
            __VdynTrigger_hf4dde57b__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hf4dde57b__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (64'h0 != uvm_pkg::uvm_test_done_objection.stop_timeout))", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                             1256);
                __Vtrigprevexpr_hce91b8a5__0 = (0ULL 
                                                != this->__PVT__stop_timeout);
                __VdynTrigger_hf4dde57b__0 = __Vtrigprevexpr_hce91b8a5__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf4dde57b__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (64'h0 != uvm_pkg::uvm_test_done_objection.stop_timeout))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         1256);
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay((0x00000000000003e8ULL 
                                             * this->__PVT__stop_timeout), 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                            1257);
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "STOP_TIMEOUT"s, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "STOP_TIMEOUT"s, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(VL_SFORMATF_N_NX("Stop-task timeout of %0t expired. ",2, 'T',-9
                                                                                , '#',64,this->__PVT__stop_timeout) , "'run' phase ready to proceed to extract phase"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh"s, 0x000004ecU);
    }
    __Vfork_6__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                         1254);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_6__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_6__sync.onKill(vlProcess);
    CData/*0:0*/ __Vtrigprevexpr_ha5533ab6__0;
    __Vtrigprevexpr_ha5533ab6__0 = 0;
    this->__PVT__m_executing_stop_processes = 1U;
    this->__VnoInFunc_m_do_stop_all(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top);
    if ((0U != this->__PVT__m_n_stop_threads)) {
        CData/*0:0*/ __VdynTrigger_h9f9c638e__0;
        __VdynTrigger_h9f9c638e__0 = 0;
        __VdynTrigger_h9f9c638e__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h9f9c638e__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 == uvm_pkg::uvm_test_done_objection.m_n_stop_threads))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         1251);
            __Vtrigprevexpr_ha5533ab6__0 = (0U == this->__PVT__m_n_stop_threads);
            __VdynTrigger_h9f9c638e__0 = __Vtrigprevexpr_ha5533ab6__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9f9c638e__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'sh0 == uvm_pkg::uvm_test_done_objection.m_n_stop_threads))", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                     1251);
    }
    this->__PVT__m_executing_stop_processes = 0U;
    __Vfork_6__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                         1248);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_raise_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string unnamedblk1__DOT__desc;
    {
        if ((VlNull{} == obj)) {
            obj = Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top;
        } else {
            this->__VnoInFunc_qualify(vlProcess, vlSymsp, obj, 1U, description);
        }
        if (this->__PVT__m_executing_stop_processes) {
            unnamedblk1__DOT__desc = ((""s == description)
                                       ? ""s : VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN("(\""s, description), "\") "s));
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "ILLRAISE"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "ILLRAISE"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The uvm_test_done objection was raised "s, unnamedblk1__DOT__desc), "during processing of a stop_request, i.e. stop "s), "task execution. The objection is ignored by the stop process"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh"s, 0x00000511U);
            }
            goto __Vlabel0;
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection(vlProcess, vlSymsp, obj, description, count);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_drop_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == obj)) {
        obj = Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top;
    } else {
        this->__VnoInFunc_qualify(vlProcess, vlSymsp, obj, 0U, description);
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection(vlProcess, vlSymsp, obj, description, count);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_force_stop(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_force_stop\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_name;
    if ((VlNull{} != obj)) {
        VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1331)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    } else {
        __VlefCall_0__get_name = "<unknown>"s;
    }
    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "FORCE_STOP"s, 
                                         VL_CVT_PACK_STR_NN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN("Object '"s, __VlefCall_0__get_name), "' called force_stop"s)), 0x000000c8U, ""s, 0U);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_cleared = 1U;
    co_await this->__VnoInFunc_all_dropped(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__PVT__m_top, obj, "force_stop() called"s, 1U);
    this->__VnoInFunc_clear(vlProcess, vlSymsp, obj);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection, vlProcess, vlSymsp, name);
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_test_done"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_forced = 0;
    __PVT__m_executing_stop_processes = 0;
    __PVT__m_n_stop_threads = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection::~\n"); );
}
