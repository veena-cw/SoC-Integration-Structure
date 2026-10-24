// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase::init(vlProcess, vlSymsp, name, 0U, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc_traverse\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__5__Vfuncout;
    __Vtask_uvm_report_enabled__5__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__10__verbosity;
    __Vtask_uvm_report_info__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__10__line;
    __Vtask_uvm_report_info__10__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__11__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__verbosity;
    __Vfunc_uvm_report_enabled__20__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__20__severity;
    __Vfunc_uvm_report_enabled__20__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__22__Vfuncout;
    __Vtask_uvm_report_enabled__22__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__23__verbosity;
    __Vtask_uvm_report_fatal__23__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__23__line;
    __Vtask_uvm_report_fatal__23__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__24__Vfuncout;
    IData/*31:0*/ __Vtask_get_first_child__26__Vfuncout;
    __Vtask_get_first_child__26__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__29__Vfuncout;
    __Vtask_get_next_child__29__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_10__get_next_child;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __VlefCall_9__get_child;
    IData/*31:0*/ __VlefCall_8__get_first_child;
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_5__get_common_domain;
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph;
    std::string name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> phase_domain;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> comp_domain;
    name = ""s;
    VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 56)->__VnoInFunc_get_domain(vlProcess, vlSymsp, phase_domain);
    VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 57)->__VnoInFunc_get_domain(vlSymsp, comp_domain);
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        this->__Vfunc_uvm_report_enabled__3__id = "PH_TRACE"s;
        __Vfunc_uvm_report_enabled__3__severity = 0U;
        __Vfunc_uvm_report_enabled__3__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__4__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __Vtask_uvm_report_enabled__5__Vfuncout);
        __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__5__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 62)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 62)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(comp_domain, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 62)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            VL_NULL_CHECK(phase_domain, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 62)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            __Vtask_uvm_report_info__10__line = 0x0000003eU;
            this->__Vtask_uvm_report_info__10__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh"s;
            __Vtask_uvm_report_info__10__verbosity = 0x000001f4U;
            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name37
                .at(state);
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__10__message
                          ,"topdown-phase phase=%s state=%s comp=%s comp.domain=%s phase.domain=%s",5
                          , 'S',&(__VlefCall_1__get_name)
                          , 'S',&(__Vtemp_1), 'S',&(__VlefCall_2__get_full_name)
                          , 'S',&(__VlefCall_3__get_name)
                          , 'S',&(__VlefCall_4__get_name));
            this->__Vtask_uvm_report_info__10__id = "PH_TRACE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__10__id, this->__Vtask_uvm_report_info__10__message, __Vtask_uvm_report_info__10__verbosity, this->__Vtask_uvm_report_info__10__filename, __Vtask_uvm_report_info__10__line);
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __VlefCall_5__get_common_domain);
    if (((phase_domain == __VlefCall_5__get_common_domain) 
         || (phase_domain == comp_domain))) {
        if ((8U == state)) {
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 68)->__PVT__m_current_phase 
                = phase;
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 69)->__VnoInFunc_m_apply_verbosity_settings(vlProcess, vlSymsp, phase);
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 70)->__VnoInFunc_phase_started(vlProcess, vlSymsp, phase);
        } else if ((0x00000010U == state)) {
            VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 73)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
            if ((1U & (~ (("build"s == __VlefCall_6__get_name) 
                          && VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 73)
                          ->__PVT__m_build_done)))) {
                unnamedblk1__DOT__ph = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase>{this};
                VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 75)->__PVT__m_phasing_active 
                    = ((IData)(1U) + VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 75)
                       ->__PVT__m_phasing_active);
                if (VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 76)
                    ->__PVT__m_phase_imps.exists(VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase>{this})) {
                    unnamedblk1__DOT__ph = VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 77)
                        ->__PVT__m_phase_imps.at(VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase>{this});
                }
                VL_NULL_CHECK(unnamedblk1__DOT__ph, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 78)->__VnoInFunc_execute(vlProcess, vlSymsp, comp, phase);
                VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 79)->__PVT__m_phasing_active 
                    = (VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 79)
                       ->__PVT__m_phasing_active - (IData)(1U));
            }
        } else if ((0x00000020U == state)) {
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 83)->__VnoInFunc_phase_ready_to_end(vlSymsp, phase);
        } else if ((0x00000040U == state)) {
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 86)->__VnoInFunc_phase_ended(vlSymsp, phase);
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 87)->__PVT__m_current_phase = VlNull{};
        } else {
            this->__Vfunc_uvm_report_enabled__20__id = "PH_BADEXEC"s;
            __Vfunc_uvm_report_enabled__20__severity = 3U;
            __Vfunc_uvm_report_enabled__20__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__20__verbosity, (IData)(__Vfunc_uvm_report_enabled__20__severity), this->__Vfunc_uvm_report_enabled__20__id, __Vtask_uvm_report_enabled__22__Vfuncout);
            __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__22__Vfuncout;
            __VlefCall_7__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_7__uvm_report_enabled) {
                __Vtask_uvm_report_fatal__23__line = 0x0000005aU;
                this->__Vtask_uvm_report_fatal__23__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh"s;
                __Vtask_uvm_report_fatal__23__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__23__message = "topdown phase traverse internal error"s;
                this->__Vtask_uvm_report_fatal__23__id = "PH_BADEXEC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__24__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__23__id, this->__Vtask_uvm_report_fatal__23__message, __Vtask_uvm_report_fatal__23__verbosity, this->__Vtask_uvm_report_fatal__23__filename, __Vtask_uvm_report_fatal__23__line);
            }
        }
    }
    VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 93)->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__26__Vfuncout);
    __VlefCall_8__get_first_child = __Vtask_get_first_child__26__Vfuncout;
    if ((0U != __VlefCall_8__get_first_child)) {
        do {
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 95)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_9__get_child);
            this->__VnoInFunc_traverse(vlProcess, vlSymsp, __VlefCall_9__get_child, phase, state);
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 96)->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__29__Vfuncout);
            __VlefCall_10__get_next_child = __Vtask_get_next_child__29__Vfuncout;
        } while ((0U != __VlefCall_10__get_next_child));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc_execute(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc_execute\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__33____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__33____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__33____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__36__Vfuncout;
    __Vfunc_uvm_oneway_hash__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__36__seed;
    __Vfunc_uvm_oneway_hash__36__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__36__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__36__unnamedblk1__DOT___byte = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_create_random_seed;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_type_name;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> proc;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, proc);
    VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 108)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 108)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__33__inst_id 
        = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__33__type_id 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__33__inst_id)) {
        this->__Vfunc_uvm_create_random_seed__33__inst_id = "__global__"s;
    }
    if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__33__inst_id))) {
        __Vfunc_uvm_create_random_seed__33____VlefCall_0__new 
            = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.atWrite(this->__Vfunc_uvm_create_random_seed__33__inst_id) 
            = __Vfunc_uvm_create_random_seed__33____VlefCall_0__new;
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__33__inst_id);
    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_instance_scope_TOP__uvm_pkg(vlProcess, vlSymsp, this->__Vfunc_uvm_instance_scope__35__Vfuncout);
    this->__Vfunc_uvm_create_random_seed__33____VlefCall_1__uvm_instance_scope 
        = this->__Vfunc_uvm_instance_scope__35__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__33__type_id 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__33____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__33__type_id);
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 434)
         ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__33__type_id))) {
        __Vfunc_uvm_oneway_hash__36__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__36__string_in 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__33__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__33__inst_id));
        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__36__seed)))) {
            __Vfunc_uvm_oneway_hash__36__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        }
        __Vfunc_uvm_oneway_hash__36__Vfuncout = __Vfunc_uvm_oneway_hash__36__seed;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__36__unnamedblk1__DOT___byte = 0U;
        __Vfunc_uvm_oneway_hash__36__unnamedblk1__DOT___byte = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__36__unnamedblk1__DOT___byte, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__36__string_in))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__36__string_in,__Vfunc_uvm_oneway_hash__36__unnamedblk1__DOT___byte);
                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel0;
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                __Vfunc_uvm_oneway_hash__36__unnamedblk1__DOT___byte 
                    = ((IData)(1U) + __Vfunc_uvm_oneway_hash__36__unnamedblk1__DOT___byte);
            }
            __Vlabel0: ;
        }
        __Vfunc_uvm_oneway_hash__36__Vfuncout = (__Vfunc_uvm_oneway_hash__36__Vfuncout 
                                                 + 
                                                 (~ 
                                                  ((((0x0000ff00U 
                                                      & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 8U)) 
                                                      | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                         >> 0x18U)))));
        __Vfunc_uvm_create_random_seed__33____VlefCall_2__uvm_oneway_hash 
            = __Vfunc_uvm_oneway_hash__36__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 435)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__33__type_id) 
            = __Vfunc_uvm_create_random_seed__33____VlefCall_2__uvm_oneway_hash;
    }
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 437)
         ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__33__type_id))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 438)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__33__type_id) = 0U;
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__33__type_id) 
        = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__33__type_id) 
           + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__33__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 445)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__33__type_id) 
        = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 445)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__33__type_id));
    __VlefCall_2__uvm_create_random_seed = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 447)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__33__type_id);
    VL_NULL_CHECK(proc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 108)->__VnoInFunc_srandom(vlSymsp, __VlefCall_2__uvm_create_random_seed);
    VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_topdown_phase.svh", 110)->__PVT__m_current_phase 
        = phase;
    this->__VnoInFunc_exec_func(vlProcess, vlSymsp, comp, phase);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_topdown_phase::~\n"); );
}
