// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top___024root____VbeforeTrig_h1cc7e3ad__0(Vcsi2_tb_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_19> unnamedblk7__DOT____VDynScope_unnamedblk7_2;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_20> unnamedblk7__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    while (true) {
        while ((0U == this->__PVT__m_scheduled_list.size())) {
            Vcsi2_tb_top___024root____VbeforeTrig_h1cc7e3ad__0((&vlSymsp->TOP), 
                                                               "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
            co_await vlSymsp->TOP.__VtrigSched_h1cc7e3ad__0.trigger(1U, 
                                                                    vlProcess, 
                                                                    "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))", 
                                                                    "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                                    665);
        }
        if ((0U != this->__PVT__m_scheduled_list.size())) {
            unnamedblk7__DOT____VDynScope_unnamedblk7_2 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_19, vlSymsp);
            VL_NULL_CHECK(unnamedblk7__DOT____VDynScope_unnamedblk7_2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 670)->__PVT__c 
                = this->__PVT__m_scheduled_list.pop_front();
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk7__DOT____VDynScope_unnamedblk7_2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 672)
                                        ->__PVT__c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 672)
                          ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 672)->__PVT__m_scheduled_contexts.atWrite(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk7__DOT____VDynScope_unnamedblk7_2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 672)
                                                                                ->__PVT__c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 672)
                                                                                ->__PVT__obj) 
                = VL_NULL_CHECK(unnamedblk7__DOT____VDynScope_unnamedblk7_2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 672)
                ->__PVT__c;
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk7__DOT____VDynScope_unnamedblk7_2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 674)
                                        ->__PVT__c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 674)
                          ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 674)->__PVT__m_forked_list.push_back(VL_NULL_CHECK(unnamedblk7__DOT____VDynScope_unnamedblk7_2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 674)
                                                                                ->__PVT__c);
            unnamedblk7__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_20, vlSymsp);
            VL_NULL_CHECK(unnamedblk7__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 679)->__PVT__objection 
                = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk7__DOT____VDynScope_unnamedblk7_2, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 679)
                                ->__PVT__c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 679)
                ->__PVT__objection;
            this->__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), unnamedblk7__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3);
        }
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_20> unnamedblk7__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_20> __Vtask___VforkTask_0__2____VDynScope_guard_3;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __Vtask___VforkTask_0__2____VlefCall_0__self;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object> __Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __Vfunc_self__3__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask___VforkTask_0__2____VDynScope_guard_3 = unnamedblk7__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                            678);
    if (VL_LTS_III(32, 0U, VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__2____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 682)
                                         ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 682)
                   ->__PVT__m_forked_list.size())) {
        __Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt 
            = VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__2____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 684)
                            ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 684)
            ->__PVT__m_forked_list.pop_front();
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__2____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 686)
                      ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 686)->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 686)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__2____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 688)
                      ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 688)->__PVT__m_forked_contexts.atWrite(VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 688)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__3__Vfuncout);
        __Vtask___VforkTask_0__2____VlefCall_0__self 
            = __Vfunc_self__3__Vfuncout;
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__2____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 691)
                      ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 691)->__PVT__m_drain_proc.atWrite(VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 691)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0__2____VlefCall_0__self;
        co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__2____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 699)
                               ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 699)->__VnoInFunc_m_forked_drain(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 699)
                                                                                ->__PVT__obj, VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 699)
                                                                                ->__PVT__source_obj, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 699)
                                                                                ->__PVT__description), VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 699)
                                                                                ->__PVT__count, 1U);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__2____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 701)
                      ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 701)->__PVT__m_drain_proc.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 701)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__2____VDynScope_guard_3, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 702)
                      ->__PVT__objection, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 702)->__PVT__m_forked_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 702)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 704)->__VnoInFunc_clear(vlSymsp);
        this->__PVT__m_context_pool.push_back(__Vtask___VforkTask_0__2__unnamedblk8__DOT__ctxt);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_init_objections____Vfork_2__0(std::make_shared<VlProcess>(vlProcess));
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                            765);
    co_await this->__VnoInFunc_m_execute_scheduled_forks(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi1> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__get_objection_total;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk1__DOT__o;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk1__DOT__o__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__o__Vmore;
    unnamedblk1__DOT__o__Vmore = 0;
    std::string name;
    IData/*31:0*/ idx;
    name = ""s;
    idx = 0U;
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 141)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
    if ((""s == name)) {
        name = "uvm_top"s;
    } else {
        VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 145)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
    }
    __VlefLogAnd_1 = (1U & (~ (IData)(this->__PVT__m_top_all_dropped)));
    if (__VlefLogAnd_1) {
        this->__VnoInFunc_get_objection_total(vlProcess, vlSymsp, this->__PVT__m_top, __VlefCall_0__get_objection_total);
        __VlefLogAnd_1 = (0U != __VlefCall_0__get_objection_total);
    }
    if (__VlefLogAnd_1) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "OBJTN_CLEAR"s, 
                                             VL_CVT_PACK_STR_NN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object '"s, name), "' cleared objection counts for "s), __VlefCall_2__get_name)), 0x000000c8U, ""s, 0U);
    }
    this->__PVT__m_source_count.clear();
    this->__PVT__m_total_count.clear();
    idx = 0U;
    while (VL_LTS_III(32, idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size())) {
        if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 156)
             ->__PVT__objection == VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection>{this})) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 157)->__VnoInFunc_clear(vlSymsp);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx));
            vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.erase(idx);
        } else {
            idx = ((IData)(1U) + idx);
        }
    }
    this->__PVT__m_scheduled_contexts.clear();
    while ((0U != this->__PVT__m_forked_list.size())) {
        VL_NULL_CHECK(this->__PVT__m_forked_list.at(0U), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 170)->__VnoInFunc_clear(vlSymsp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(this->__PVT__m_forked_list.at(0U));
        std::ignore = this->__PVT__m_forked_list.pop_front();
    }
    unnamedblk1__DOT__o__Vmore = (0U != this->__PVT__m_forked_contexts.first(unnamedblk1__DOT__o__Vnext));
    while (unnamedblk1__DOT__o__Vmore) {
        unnamedblk1__DOT__o = unnamedblk1__DOT__o__Vnext;
        unnamedblk1__DOT__o__Vmore = (0U != this->__PVT__m_forked_contexts.next(unnamedblk1__DOT__o__Vnext));
        VL_NULL_CHECK(this->__PVT__m_drain_proc.at(unnamedblk1__DOT__o), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 178)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_drain_proc.erase(unnamedblk1__DOT__o);
        VL_NULL_CHECK(this->__PVT__m_forked_contexts
                      .at(unnamedblk1__DOT__o), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 185)->__VnoInFunc_clear(vlSymsp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(this->__PVT__m_forked_contexts
                                                                                .at(unnamedblk1__DOT__o));
        this->__PVT__m_forked_contexts.erase(unnamedblk1__DOT__o);
    }
    this->__PVT__m_top_all_dropped = 0U;
    this->__PVT__m_cleared = 1U;
    if (this->__PVT__m_events.exists(this->__PVT__m_top)) {
        vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                         .atWrite(this->__PVT__m_top), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 193)
                           ->__PVT__all_dropped);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::new\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__15__Vfuncout;
    __Vtask_get_arg_matches__15__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__m_top);
    this->__PVT__m_hier_mode = 1U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__top);
    IData/*31:0*/ __VlefCall_1__get_arg_matches;
    IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> trace_args;
    trace_args.clear();
    trace_args.atDefault().clear();
    /*super.new*/;
    VL_NULL_CHECK(this->__PVT__m_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 208)->__VnoInFunc_get_report_verbosity_level(vlSymsp, 0U, ""s, __VlefCall_0__get_report_verbosity_level);
    this->__VnoInFunc_set_report_verbosity_level(vlSymsp, __VlefCall_0__get_report_verbosity_level);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 212)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "+UVM_OBJECTION_TRACE"s, trace_args, __Vtask_get_arg_matches__15__Vfuncout);
    __VlefCall_1__get_arg_matches = __Vtask_get_arg_matches__15__Vfuncout;
    if ((0U != __VlefCall_1__get_arg_matches)) {
        this->__PVT__m_trace_mode = 1U;
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_objections.push_back(
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_trace_mode(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ mode, CData/*0:0*/ &trace_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_trace_mode\n"); );
    // Body
    trace_mode__Vfuncrtn = this->__PVT__m_trace_mode;
    if ((0U == mode)) {
        this->__PVT__m_trace_mode = 0U;
    } else if ((1U == mode)) {
        this->__PVT__m_trace_mode = 1U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report\n"); );
    // Locals
    std::string __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk2__DOT__cpath;
    IData/*31:0*/ unnamedblk2__DOT__last_dot;
    std::string unnamedblk2__DOT__sname;
    std::string unnamedblk2__DOT__nm;
    IData/*31:0*/ unnamedblk2__DOT__max;
    IData/*31:0*/ _count;
    IData/*31:0*/ _total;
    {
        _count = (this->__PVT__m_source_count.exists(obj)
                   ? this->__PVT__m_source_count.at(obj)
                   : 0U);
        _total = (this->__PVT__m_total_count.exists(obj)
                   ? this->__PVT__m_total_count.at(obj)
                   : 0U);
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, "OBJTN_TRC"s, __VlefCall_0__uvm_report_enabled);
        if (((1U & (~ (0U != __VlefCall_0__uvm_report_enabled))) 
             || (1U & (~ (IData)(this->__PVT__m_trace_mode))))) {
            goto __Vlabel0;
        }
        if ((source_obj == obj)) {
            VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 248)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            if ((""s == __VlefCall_1__get_full_name)) {
                __VlefCall_2__get_full_name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 248)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            }
            __Vtemp_1 = ((""s != description) ? VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(" ("s, description), ")"s)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0s %0s %0d objection(s)%s: count=%0d  total=%0d",6
                                                                                , 'S',&(__VlefCall_2__get_full_name)
                                                                                , 'S',&(action)
                                                                                , '~',32,count
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,_count
                                                                                , '~',32,_total) , 0U, ""s, 0U);
        } else {
            unnamedblk2__DOT__cpath = 0U;
            unnamedblk2__DOT__last_dot = 0U;
            VL_NULL_CHECK(source_obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 252)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk2__DOT__sname);
            VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 252)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk2__DOT__nm);
            unnamedblk2__DOT__max = (VL_GTS_III(32, 
                                                VL_LEN_IN(unnamedblk2__DOT__sname), 
                                                VL_LEN_IN(unnamedblk2__DOT__nm))
                                      ? VL_LEN_IN(unnamedblk2__DOT__nm)
                                      : VL_LEN_IN(unnamedblk2__DOT__sname));
            while (((VL_GETC_N(unnamedblk2__DOT__sname,unnamedblk2__DOT__cpath) 
                     == VL_GETC_N(unnamedblk2__DOT__nm,unnamedblk2__DOT__cpath)) 
                    & VL_LTS_III(32, unnamedblk2__DOT__cpath, unnamedblk2__DOT__max))) {
                if ((0x2eU == VL_GETC_N(unnamedblk2__DOT__sname,unnamedblk2__DOT__cpath))) {
                    unnamedblk2__DOT__last_dot = unnamedblk2__DOT__cpath;
                }
                unnamedblk2__DOT__cpath = ((IData)(1U) 
                                           + unnamedblk2__DOT__cpath);
            }
            if ((0U != unnamedblk2__DOT__last_dot)) {
                unnamedblk2__DOT__sname = VL_SUBSTR_N(unnamedblk2__DOT__sname,
                                                      ((IData)(1U) 
                                                       + unnamedblk2__DOT__last_dot),
                                                      VL_LEN_IN(unnamedblk2__DOT__sname));
            }
            VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 265)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            if ((""s == __VlefCall_3__get_full_name)) {
                __VlefCall_4__get_full_name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 265)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            }
            if (("raised"s == action)) {
                __Vtemp_2[0U] = 0x64646564U;
                __Vtemp_2[1U] = 0x00000061U;
                __Vtemp_2[2U] = 0U;
            } else {
                __Vtemp_2[0U] = 0x63746564U;
                __Vtemp_2[1U] = 0x62747261U;
                __Vtemp_2[2U] = 0x00007375U;
            }
            __Vtemp_3 = ((""s != description) ? VL_CONCATN_NNN(", "s, description)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0s %0s %0d objection(s) %0s its total (%s from source object %s%s): count=%0d  total=%0d",9
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , '#',80,__Vtemp_2.data()
                                                                                , '~',32,count
                                                                                , '#',32,
                                                                                (("raised"s 
                                                                                == action)
                                                                                 ? 0x0000746fU
                                                                                 : 0x66726f6dU)
                                                                                , 'S',&(action)
                                                                                , 'S',&(unnamedblk2__DOT__sname)
                                                                                , 'S',&(__Vtemp_3)
                                                                                , '~',32,_count
                                                                                , '~',32,_total) , 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__25__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__26__Vfuncout;
    // Body
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> seq;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if (__VlefExpr_0) {
        VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 281)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__25__Vfuncout);
        obj = __Vtask_get_parent__25__Vfuncout;
    } else {
        __VlefExpr_1 = VL_CAST_DYNAMIC(obj, seq);
        if (__VlefExpr_1) {
            VL_NULL_CHECK(seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 284)->__VnoInFunc_get_sequencer(vlSymsp, __Vtask_get_sequencer__26__Vfuncout);
            obj = __Vtask_get_sequencer__26__Vfuncout;
        } else {
            obj = this->__PVT__m_top;
        }
    }
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    m_get_parent__Vfuncrtn = obj;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, CData/*0:0*/ raise, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if (((VlNull{} != obj) & (obj != this->__PVT__m_top))) {
        this->__VnoInFunc_m_get_parent(vlSymsp, obj, obj);
        if (raise) {
            this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, source_obj, description, count);
        } else {
            this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, source_obj, description, count, in_top_thread);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_set_hier_mode(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_set_hier_mode\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_num_children;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk3__DOT__obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk3__DOT__obj__Vnext;
    CData/*0:0*/ unnamedblk3__DOT__obj__Vmore;
    unnamedblk3__DOT__obj__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk3__DOT__unnamedblk4__DOT__theobj;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__count;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> c;
    {
        if (((IData)(this->__PVT__m_hier_mode) | (obj 
                                                  == this->__PVT__m_top))) {
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(obj, c);
        if (__VlefExpr_0) {
            VL_NULL_CHECK(c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 339)->__VnoInFunc_get_num_children(vlSymsp, __VlefCall_1__get_num_children);
            if ((0U == __VlefCall_1__get_num_children)) {
                goto __Vlabel0;
            }
        } else {
            goto __Vlabel0;
        }
        this->__PVT__m_total_count.clear();
        unnamedblk3__DOT__obj__Vmore = (0U != this->__PVT__m_source_count.first(unnamedblk3__DOT__obj__Vnext));
        while (unnamedblk3__DOT__obj__Vmore) {
            unnamedblk3__DOT__obj = unnamedblk3__DOT__obj__Vnext;
            unnamedblk3__DOT__obj__Vmore = (0U != this->__PVT__m_source_count.next(unnamedblk3__DOT__obj__Vnext));
            unnamedblk3__DOT__unnamedblk4__DOT__theobj 
                = unnamedblk3__DOT__obj;
            unnamedblk3__DOT__unnamedblk4__DOT__count 
                = this->__PVT__m_source_count.at(unnamedblk3__DOT__obj);
            do {
                if (this->__PVT__m_total_count.exists(unnamedblk3__DOT__unnamedblk4__DOT__theobj)) {
                    this->__PVT__m_total_count.atWrite(unnamedblk3__DOT__unnamedblk4__DOT__theobj) 
                        = (this->__PVT__m_total_count
                           .at(unnamedblk3__DOT__unnamedblk4__DOT__theobj) 
                           + unnamedblk3__DOT__unnamedblk4__DOT__count);
                } else {
                    this->__PVT__m_total_count.atWrite(unnamedblk3__DOT__unnamedblk4__DOT__theobj) 
                        = unnamedblk3__DOT__unnamedblk4__DOT__count;
                }
                this->__VnoInFunc_m_get_parent(vlSymsp, unnamedblk3__DOT__unnamedblk4__DOT__theobj, unnamedblk3__DOT__unnamedblk4__DOT__theobj);
            } while ((VlNull{} != unnamedblk3__DOT__unnamedblk4__DOT__theobj));
        }
        this->__PVT__m_hier_mode = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__PVT__m_cleared = 0U;
    this->__PVT__m_top_all_dropped = 0U;
    this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, obj, description, count);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk5__DOT__diff_count;
    IData/*31:0*/ idx;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object> ctxt;
    idx = 0U;
    if (this->__PVT__m_total_count.exists(obj)) {
        this->__PVT__m_total_count.atWrite(obj) = (this->__PVT__m_total_count
                                                   .at(obj) 
                                                   + count);
    } else {
        this->__PVT__m_total_count.atWrite(obj) = count;
    }
    if ((source_obj == obj)) {
        if (this->__PVT__m_source_count.exists(obj)) {
            this->__PVT__m_source_count.atWrite(obj) 
                = (this->__PVT__m_source_count.at(obj) 
                   + count);
        } else {
            this->__PVT__m_source_count.atWrite(obj) 
                = count;
        }
    }
    if (this->__PVT__m_trace_mode) {
        this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "raised"s);
    }
    this->__VnoInFunc_raised(vlProcess, vlSymsp, obj, source_obj, description, count);
    idx = 0U;
    {
        while (VL_LTS_III(32, idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size())) {
            if (((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 427)
                  ->__PVT__obj == obj) && (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 428)
                                           ->__PVT__objection 
                                           == VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection>{this}))) {
                ctxt = vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.erase(idx);
                goto __Vlabel0;
            }
            idx = ((IData)(1U) + idx);
        }
        __Vlabel0: ;
    }
    if ((VlNull{} == ctxt)) {
        idx = 0U;
        {
            while (VL_LTS_III(32, idx, this->__PVT__m_forked_list.size())) {
                if ((VL_NULL_CHECK(this->__PVT__m_forked_list.at(idx), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 441)
                     ->__PVT__obj == obj)) {
                    ctxt = this->__PVT__m_forked_list.at(idx);
                    this->__PVT__m_forked_list.erase(idx);
                    this->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 446)
                                                            ->__PVT__obj);
                    goto __Vlabel1;
                }
                idx = ((IData)(1U) + idx);
            }
            __Vlabel1: ;
        }
    }
    if ((VlNull{} == ctxt)) {
        if (this->__PVT__m_forked_contexts.exists(obj)) {
            ctxt = this->__PVT__m_forked_contexts.at(obj);
            this->__PVT__m_forked_contexts.erase(obj);
            VL_NULL_CHECK(this->__PVT__m_drain_proc
                          .at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 461)->__VnoInFunc_kill(vlSymsp);
            this->__PVT__m_drain_proc.erase(obj);
        }
    }
    if ((VlNull{} == ctxt)) {
        if (((~ (IData)(this->__PVT__m_hier_mode)) 
             & (obj != this->__PVT__m_top))) {
            this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count);
        } else if ((obj != this->__PVT__m_top)) {
            this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 1U, 0U);
        }
    } else {
        unnamedblk5__DOT__diff_count = 0U;
        unnamedblk5__DOT__diff_count = (count - VL_NULL_CHECK(ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 487)
                                        ->__PVT__count);
        if ((0U != unnamedblk5__DOT__diff_count)) {
            if (VL_LTS_III(32, 0U, unnamedblk5__DOT__diff_count)) {
                if (((~ (IData)(this->__PVT__m_hier_mode)) 
                     & (obj != this->__PVT__m_top))) {
                    this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk5__DOT__diff_count);
                } else if ((obj != this->__PVT__m_top)) {
                    this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk5__DOT__diff_count, 1U, 0U);
                }
            } else {
                unnamedblk5__DOT__diff_count = (- unnamedblk5__DOT__diff_count);
                if (((~ (IData)(this->__PVT__m_hier_mode)) 
                     & (obj != this->__PVT__m_top))) {
                    this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk5__DOT__diff_count, 0U);
                } else if ((obj != this->__PVT__m_top)) {
                    this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk5__DOT__diff_count, 0U, 0U);
                }
            }
        }
        VL_NULL_CHECK(ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 510)->__VnoInFunc_clear(vlSymsp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(ctxt);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, obj, description, count, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object> unnamedblk6__DOT__ctxt;
    {
        if (((! this->__PVT__m_total_count.exists(obj)) 
             | VL_GTS_III(32, count, this->__PVT__m_total_count
                          .at(obj)))) {
            if (this->__PVT__m_cleared) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 596)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, __VlefCall_0__get_full_name), "\" attempted to drop objection '"s), __VlefCall_1__get_name), "' count below zero"s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((obj == source_obj)) {
            if (((! this->__PVT__m_source_count.exists(obj)) 
                 | VL_GTS_III(32, count, this->__PVT__m_source_count
                              .at(obj)))) {
                if (this->__PVT__m_cleared) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 605)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, __VlefCall_2__get_full_name), "\" attempted to drop objection '"s), __VlefCall_3__get_name), "' count below zero"s)), 0U, ""s, 0U);
                goto __Vlabel0;
            }
            this->__PVT__m_source_count.atWrite(obj) 
                = (this->__PVT__m_source_count.at(obj) 
                   - count);
        }
        this->__PVT__m_total_count.atWrite(obj) = (this->__PVT__m_total_count
                                                   .at(obj) 
                                                   - count);
        if (this->__PVT__m_trace_mode) {
            this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "dropped"s);
        }
        this->__VnoInFunc_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
        if ((0U != this->__PVT__m_total_count.at(obj))) {
            if (((~ (IData)(this->__PVT__m_hier_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, in_top_thread);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, in_top_thread);
            }
        } else {
            if ((0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.size())) {
                unnamedblk6__DOT__ctxt = vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.pop_front();
            } else {
                unnamedblk6__DOT__ctxt = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object, vlSymsp);
            }
            VL_NULL_CHECK(unnamedblk6__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 635)->__PVT__obj 
                = obj;
            VL_NULL_CHECK(unnamedblk6__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 636)->__PVT__source_obj 
                = source_obj;
            VL_NULL_CHECK(unnamedblk6__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 637)->__PVT__description 
                = description;
            VL_NULL_CHECK(unnamedblk6__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 638)->__PVT__count 
                = count;
            VL_NULL_CHECK(unnamedblk6__DOT__ctxt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 639)->__PVT__objection 
                = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection>{this};
            vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.push_back(unnamedblk6__DOT__ctxt);
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h933d58a4__0;
    __Vtrigprevexpr_h933d58a4__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if (this->__PVT__m_drain_time.exists(obj)) {
        co_await vlSymsp->TOP.__VdlySched.delay((0x00000000000003e8ULL 
                                                 * this->__PVT__m_drain_time
                                                 .at(obj)), 
                                                vlProcess, 
                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                727);
    }
    if (this->__PVT__m_trace_mode) {
        this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "all_dropped"s);
    }
    co_await this->__VnoInFunc_all_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
    if ((1U & (~ (IData)(vlProcess->completedFork())))) {
        CData/*0:0*/ __VdynTrigger_hb1418538__0;
        __VdynTrigger_hb1418538__0 = 0;
        __VdynTrigger_hb1418538__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hb1418538__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         735);
            __Vtrigprevexpr_h933d58a4__0 = vlProcess->completedFork();
            __VdynTrigger_hb1418538__0 = __Vtrigprevexpr_h933d58a4__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb1418538__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                     735);
    }
    if ((this->__PVT__m_source_count.exists(obj) && 
         (0U == this->__PVT__m_source_count.at(obj)))) {
        this->__PVT__m_source_count.erase(obj);
    }
    if ((this->__PVT__m_total_count.exists(obj) && 
         (0U == this->__PVT__m_total_count.at(obj)))) {
        this->__PVT__m_total_count.erase(obj);
    }
    if (((~ (IData)(this->__PVT__m_hier_mode)) & (obj 
                                                  != this->__PVT__m_top))) {
        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, 1U);
    } else if ((obj != this->__PVT__m_top)) {
        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, 1U);
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_drain_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ drain) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_drain_time\n"); );
    // Body
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__PVT__m_drain_time.atWrite(obj) = drain;
    this->__VnoInFunc_m_set_hier_mode(vlSymsp, obj);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if (__VlefExpr_0) {
        VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 806)->__VnoInFunc_raised(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
    }
    if (this->__PVT__m_events.exists(obj)) {
        vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                         .atWrite(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 808)
                           ->__PVT__raised);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if (__VlefExpr_0) {
        VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 823)->__VnoInFunc_dropped(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
    }
    if (this->__PVT__m_events.exists(obj)) {
        vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                         .atWrite(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 825)
                           ->__PVT__dropped);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if (__VlefExpr_0) {
        VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 842)->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
    }
    if (this->__PVT__m_events.exists(obj)) {
        vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                         .atWrite(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 844)
                           ->__PVT__all_dropped);
    }
    if ((obj == this->__PVT__m_top)) {
        this->__PVT__m_top_all_dropped = 1U;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk9__DOT__obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk9__DOT__obj__Vnext;
    CData/*0:0*/ unnamedblk9__DOT__obj__Vmore;
    unnamedblk9__DOT__obj__Vmore = 0;
    list.clear();
    unnamedblk9__DOT__obj__Vmore = (0U != this->__PVT__m_source_count.first(unnamedblk9__DOT__obj__Vnext));
    while (unnamedblk9__DOT__obj__Vmore) {
        unnamedblk9__DOT__obj = unnamedblk9__DOT__obj__Vnext;
        unnamedblk9__DOT__obj__Vmore = (0U != this->__PVT__m_source_count.next(unnamedblk9__DOT__obj__Vnext));
        list.push_back(unnamedblk9__DOT__obj);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ objt_event, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_events> __VlefCall_0__new;
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    if ((! this->__PVT__m_events.exists(obj))) {
        __VlefCall_0__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_events, vlSymsp);
        this->__PVT__m_events.atWrite(obj) = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__m_events.atWrite(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 880)->__PVT__waiters 
        = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_events
                                       .at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 880)
           ->__PVT__waiters);
    if ((1U == objt_event)) {
        CData/*0:0*/ __VdynTrigger_h3e1f9f0f__0;
        __VdynTrigger_h3e1f9f0f__0 = 0;
        __VdynTrigger_h3e1f9f0f__0 = 0U;
        if ((VlNull{} != this->__PVT__m_events.at(obj))) {
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 882)->__PVT__raised.clearFired();
        }
        while ((1U & (~ (IData)(__VdynTrigger_h3e1f9f0f__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         882);
            __VdynTrigger_h3e1f9f0f__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && ((VlNull{} 
                                               != this->__PVT__m_events
                                               .at(obj)) 
                                              && VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 882)
                                              ->__PVT__raised.isFired()));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3e1f9f0f__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         vlProcess, 
                                                         "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         882);
            if ((VlNull{} != this->__PVT__m_events.at(obj))) {
                VL_NULL_CHECK(this->__PVT__m_events
                              .at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 882)->__PVT__raised.clearFired();
            }
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                     882);
    } else if ((2U == objt_event)) {
        CData/*0:0*/ __VdynTrigger_h9df46967__0;
        __VdynTrigger_h9df46967__0 = 0;
        __VdynTrigger_h9df46967__0 = 0U;
        if ((VlNull{} != this->__PVT__m_events.at(obj))) {
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 883)->__PVT__dropped.clearFired();
        }
        while ((1U & (~ (IData)(__VdynTrigger_h9df46967__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         883);
            __VdynTrigger_h9df46967__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && ((VlNull{} 
                                               != this->__PVT__m_events
                                               .at(obj)) 
                                              && VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 883)
                                              ->__PVT__dropped.isFired()));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9df46967__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         vlProcess, 
                                                         "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         883);
            if ((VlNull{} != this->__PVT__m_events.at(obj))) {
                VL_NULL_CHECK(this->__PVT__m_events
                              .at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 883)->__PVT__dropped.clearFired();
            }
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                     883);
    } else if ((4U == objt_event)) {
        CData/*0:0*/ __VdynTrigger_h335ef487__0;
        __VdynTrigger_h335ef487__0 = 0;
        __VdynTrigger_h335ef487__0 = 0U;
        if ((VlNull{} != this->__PVT__m_events.at(obj))) {
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 884)->__PVT__all_dropped.clearFired();
        }
        while ((1U & (~ (IData)(__VdynTrigger_h335ef487__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         884);
            __VdynTrigger_h335ef487__0 = (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish() && !vlSymsp->_vm_contextp__->finishPending()) 
                                          && ((VlNull{} 
                                               != this->__PVT__m_events
                                               .at(obj)) 
                                              && VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 884)
                                              ->__PVT__all_dropped.isFired()));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h335ef487__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         vlProcess, 
                                                         "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         884);
            if ((VlNull{} != this->__PVT__m_events.at(obj))) {
                VL_NULL_CHECK(this->__PVT__m_events
                              .at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 884)->__PVT__all_dropped.clearFired();
            }
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                     884);
    }
    VL_NULL_CHECK(this->__PVT__m_events.atWrite(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 887)->__PVT__waiters 
        = (VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 887)
           ->__PVT__waiters - (IData)(1U));
    if ((0U == VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 889)
         ->__PVT__waiters)) {
        this->__PVT__m_events.erase(obj);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for_total_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for_total_count\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hc90bab32__0;
    __Vtrigprevexpr_hc90bab32__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h5d5b5a37__0;
    __Vtrigprevexpr_h5d5b5a37__0 = 0;
    // Body
    VL_KEEP_THIS;
    {
        if ((VlNull{} == obj)) {
            obj = this->__PVT__m_top;
        }
        if (((! this->__PVT__m_total_count.exists(obj)) 
             & (0U == count))) {
            goto __Vlabel0;
        }
        if ((0U == count)) {
            if ((1U & (~ ((! this->__PVT__m_total_count.exists(obj)) 
                          & (0U == count))))) {
                CData/*0:0*/ __VdynTrigger_h67a37ff9__0;
                __VdynTrigger_h67a37ff9__0 = 0;
                __VdynTrigger_h67a37ff9__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h67a37ff9__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 nullptr, 
                                                                 "@([true] ((! uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj)) & (32'sh0 == uvm_pkg::uvm_objection.count)))", 
                                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                                 902);
                    __Vtrigprevexpr_h5d5b5a37__0 = 
                        ((! this->__PVT__m_total_count.exists(obj)) 
                         & (0U == count));
                    __VdynTrigger_h67a37ff9__0 = __Vtrigprevexpr_h5d5b5a37__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h67a37ff9__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             nullptr, 
                                                             "@([true] ((! uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj)) & (32'sh0 == uvm_pkg::uvm_objection.count)))", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                             902);
            }
        } else if ((1U & (~ (this->__PVT__m_total_count.exists(obj) 
                             && (this->__PVT__m_total_count
                                 .at(obj) == count))))) {
            CData/*0:0*/ __VdynTrigger_hbaf3d0fa__0;
            __VdynTrigger_hbaf3d0fa__0 = 0;
            __VdynTrigger_hbaf3d0fa__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hbaf3d0fa__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj) && ((uvm_pkg::uvm_objection.m_total_count[uvm_pkg::uvm_objection.obj]) == uvm_pkg::uvm_objection.count)))", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                             904);
                __Vtrigprevexpr_hc90bab32__0 = (this->__PVT__m_total_count.exists(obj) 
                                                && (this->__PVT__m_total_count
                                                    .at(obj) 
                                                    == count));
                __VdynTrigger_hbaf3d0fa__0 = __Vtrigprevexpr_hc90bab32__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbaf3d0fa__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj) && ((uvm_pkg::uvm_objection.m_total_count[uvm_pkg::uvm_objection.obj]) == uvm_pkg::uvm_objection.count)))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 
                                                         904);
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_count\n"); );
    // Body
    {
        get_objection_count__Vfuncrtn = 0U;
        if ((VlNull{} == obj)) {
            obj = this->__PVT__m_top;
        }
        if ((! this->__PVT__m_source_count.exists(obj))) {
            get_objection_count__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_objection_count__Vfuncrtn = this->__PVT__m_source_count
            .at(obj);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_total__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_first_child__64__Vfuncout;
    __Vtask_get_first_child__64__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__67__Vfuncout;
    __Vtask_get_next_child__67__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_4__get_next_child;
    IData/*31:0*/ __VlefCall_3__get_objection_total;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __VlefCall_2__get_child;
    IData/*31:0*/ __VlefCall_1__get_first_child;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> c;
    std::string ch;
    {
        get_objection_total__Vfuncrtn = 0U;
        ch = ""s;
        if ((VlNull{} == obj)) {
            obj = this->__PVT__m_top;
        }
        if ((! this->__PVT__m_total_count.exists(obj))) {
            get_objection_total__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (this->__PVT__m_hier_mode) {
            get_objection_total__Vfuncrtn = this->__PVT__m_total_count
                .at(obj);
        } else {
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, c);
            if (__VlefExpr_0) {
                get_objection_total__Vfuncrtn = (this->__PVT__m_source_count.exists(obj)
                                                  ? this->__PVT__m_source_count
                                                 .at(obj)
                                                  : 0U);
                VL_NULL_CHECK(c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 944)->__VnoInFunc_get_first_child(vlSymsp, ch, __Vtask_get_first_child__64__Vfuncout);
                __VlefCall_1__get_first_child = __Vtask_get_first_child__64__Vfuncout;
                if ((0U != __VlefCall_1__get_first_child)) {
                    do {
                        VL_NULL_CHECK(c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 946)->__VnoInFunc_get_child(vlProcess, vlSymsp, ch, __VlefCall_2__get_child);
                        this->__VnoInFunc_get_objection_total(vlProcess, vlSymsp, __VlefCall_2__get_child, __VlefCall_3__get_objection_total);
                        get_objection_total__Vfuncrtn 
                            = (get_objection_total__Vfuncrtn 
                               + __VlefCall_3__get_objection_total);
                        VL_NULL_CHECK(c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 947)->__VnoInFunc_get_next_child(vlSymsp, ch, __Vtask_get_next_child__67__Vfuncout);
                        __VlefCall_4__get_next_child 
                            = __Vtask_get_next_child__67__Vfuncout;
                    } while ((0U != __VlefCall_4__get_next_child));
                }
            } else {
                get_objection_total__Vfuncrtn = this->__PVT__m_total_count
                    .at(obj);
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_drain_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ &get_drain_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_drain_time\n"); );
    // Body
    {
        get_drain_time__Vfuncrtn = 0;
        if ((VlNull{} == obj)) {
            obj = this->__PVT__m_top;
        }
        if ((! this->__PVT__m_drain_time.exists(obj))) {
            get_drain_time__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        get_drain_time__Vfuncrtn = this->__PVT__m_drain_time
            .at(obj);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header, std::string &m_display_objections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_1;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk10__DOT__o;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk10__DOT__o__Vnext;
    CData/*0:0*/ unnamedblk10__DOT__o__Vmore;
    unnamedblk10__DOT__o__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk10__DOT__unnamedblk11__DOT__theobj;
    IData/*31:0*/ unnamedblk12__DOT__i;
    unnamedblk12__DOT__i = 0;
    IData/*31:0*/ unnamedblk13__DOT__i;
    std::string s;
    IData/*31:0*/ total;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>> list;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> curr_obj;
    IData/*31:0*/ depth;
    std::string name;
    std::string this_obj_name;
    std::string curr_obj_name;
    {
        m_display_objections__Vfuncrtn = ""s;
        s = ""s;
        total = 0U;
        list.clear();
        depth = 0U;
        name = ""s;
        this_obj_name = ""s;
        curr_obj_name = ""s;
        unnamedblk10__DOT__o__Vmore = (0U != this->__PVT__m_total_count.first(unnamedblk10__DOT__o__Vnext));
        while (unnamedblk10__DOT__o__Vmore) {
            unnamedblk10__DOT__o = unnamedblk10__DOT__o__Vnext;
            unnamedblk10__DOT__o__Vmore = (0U != this->__PVT__m_total_count.next(unnamedblk10__DOT__o__Vnext));
            unnamedblk10__DOT__unnamedblk11__DOT__theobj 
                = unnamedblk10__DOT__o;
            if (VL_LTS_III(32, 0U, this->__PVT__m_total_count
                           .at(unnamedblk10__DOT__o))) {
                VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk11__DOT__theobj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 988)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                list.atWrite(__VlefCall_0__get_full_name) 
                    = unnamedblk10__DOT__unnamedblk11__DOT__theobj;
            }
        }
        if ((VlNull{} == obj)) {
            obj = this->__PVT__m_top;
        }
        this->__VnoInFunc_get_objection_total(vlProcess, vlSymsp, obj, total);
        VL_SFORMAT_NX(s,"The total objection count is %0d\n",1
                      , '~',32,total);
        if ((0U == total)) {
            m_display_objections__Vfuncrtn = s;
            goto __Vlabel0;
        }
        s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
        s = VL_CONCATN_NNN(s, "Source  Total   \n"s);
        s = VL_CONCATN_NNN(s, "Count   Count   Object\n"s);
        s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
        VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1007)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this_obj_name);
        curr_obj_name = this_obj_name;
        do {
            curr_obj = list.at(curr_obj_name);
            depth = 0U;
            unnamedblk12__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk12__DOT__i, 
                              VL_LEN_IN(curr_obj_name))) {
                if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk12__DOT__i))) {
                    depth = ((IData)(1U) + depth);
                }
                unnamedblk12__DOT__i = ((IData)(1U) 
                                        + unnamedblk12__DOT__i);
            }
            name = curr_obj_name;
            unnamedblk13__DOT__i = 0U;
            unnamedblk13__DOT__i = (VL_LEN_IN(curr_obj_name) 
                                    - (IData)(1U));
            {
                while (VL_LTES_III(32, 0U, unnamedblk13__DOT__i)) {
                    if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk13__DOT__i))) {
                        name = VL_SUBSTR_N(curr_obj_name,
                                           ((IData)(1U) 
                                            + unnamedblk13__DOT__i),
                                           (VL_LEN_IN(curr_obj_name) 
                                            - (IData)(1U)));
                        goto __Vlabel1;
                    }
                    unnamedblk13__DOT__i = (unnamedblk13__DOT__i 
                                            - (IData)(1U));
                }
                __Vlabel1: ;
            }
            if ((""s == curr_obj_name)) {
                name = "uvm_top"s;
            } else {
                depth = ((IData)(1U) + depth);
            }
            __Vtemp_1 = VL_SUBSTR_N("                                                                                   "s,0U,
                                    VL_MULS_III(32, (IData)(2U), depth));
            s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("%-6d  %-6d %s%s\n",4
                                                   , '~',32,
                                                   (this->__PVT__m_source_count.exists(curr_obj)
                                                     ? this->__PVT__m_source_count
                                                    .at(curr_obj)
                                                     : 0U)
                                                   , '~',32,
                                                   (this->__PVT__m_total_count.exists(curr_obj)
                                                     ? this->__PVT__m_total_count
                                                    .at(curr_obj)
                                                     : 0U)
                                                   , 'S',&(__Vtemp_1)
                                                   , 'S',&(name)) );
            __VlefExpr_1 = (0U != list.next(curr_obj_name));
        } while (((IData)(__VlefExpr_1) && (VL_SUBSTR_N(curr_obj_name,0U,
                                                        (VL_LEN_IN(this_obj_name) 
                                                         - (IData)(1U))) 
                                            == this_obj_name)));
        s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
        m_display_objections__Vfuncrtn = s;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, this->__PVT__m_top, 1U, convert2string__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_display_objections(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_display_objections\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__m_display_objections;
    this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, obj, show_header, __VlefCall_0__m_display_objections);
    VL_WRITEF_NX("%s\n",1, 'S',&(__VlefCall_0__m_display_objections));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, name);
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_objection"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> _rhs;
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, _rhs);
    if (VL_UNLIKELY(((! __VlefExpr_0)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_objection.svh:1084: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_objection.do_copy", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1084, "");
    }
    this->__PVT__m_source_count = VL_NULL_CHECK(_rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1085)
        ->__PVT__m_source_count;
    this->__PVT__m_total_count = VL_NULL_CHECK(_rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1086)
        ->__PVT__m_total_count;
    this->__PVT__m_drain_time = VL_NULL_CHECK(_rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1087)
        ->__PVT__m_drain_time;
    this->__PVT__m_hier_mode = VL_NULL_CHECK(_rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1088)
        ->__PVT__m_hier_mode;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_trace_mode = 0;
    __PVT__m_source_count.atDefault() = 0;
    __PVT__m_total_count.atDefault() = 0;
    __PVT__m_drain_time.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 17709275628653521742ULL, 4102563340287712520ull);
    __PVT__m_top_all_dropped = 0;
    __PVT__m_cleared = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::~\n"); );
}
