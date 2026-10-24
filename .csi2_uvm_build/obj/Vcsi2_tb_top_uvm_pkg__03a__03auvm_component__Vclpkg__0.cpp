// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2076)->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, original_type_name, override_type_name, (IData)(replace));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override_by_type\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2087)->__VnoInFunc_set_type_override_by_type(vlSymsp, original_type, override_type, replace);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_abort(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_abort\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_component"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::new\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_get__28__value;
    VL_ZERO_W(4096, __Vfunc_get__28__value);
    CData/*0:0*/ __Vtask_get__29__Vfuncout;
    __Vtask_get__29__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__29__value;
    __Vtask_get__29__value = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__print_enabled = 1U;
    this->__PVT__recording_detail = 0U;
    IData/*31:0*/ __VlefCall_15__get_report_verbosity_level;
    CData/*0:0*/ __VlefCall_14__get;
    CData/*0:0*/ __VlefCall_13__m_add_child;
    std::string __VlefCall_12__get_full_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_9;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __VlefCall_8__get_child;
    IData/*31:0*/ __VlefCall_7__has_child;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__get_state;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_build_phase> __VlefCall_0__get;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> unnamedblk140__DOT__bld;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> unnamedblk140__DOT__common;
    std::string error_str;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    {
        error_str = ""s;
        /*super.new*/;
        if (((VlNull{} == parent) & ("__top__"s == name))) {
            this->__VnoInFunc_set_name(vlProcess, vlSymsp, ""s);
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, unnamedblk140__DOT__common);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
        VL_NULL_CHECK(unnamedblk140__DOT__common, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1710)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_0__get, 1U, unnamedblk140__DOT__bld);
        if ((VlNull{} == unnamedblk140__DOT__bld)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "COMP/INTERNAL"s, "attempt to find build phase object failed"s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(unnamedblk140__DOT__bld, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1714)->__VnoInFunc_get_state(vlSymsp, __VlefCall_1__get_state);
        if ((0x00000100U == __VlefCall_1__get_state)) {
            if ((VlNull{} == parent)) {
                VL_NULL_CHECK(top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1717)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            } else {
                VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1717)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ILLCRT"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("It is illegal to create a component ('"s, name), "' under '"s), __VlefCall_2__get_full_name), "') after the build phase has ended."s)), 0U, ""s, 0U);
        }
        if ((""s == name)) {
            VL_SFORMAT_NX(name,"%0d",1, '~',32,vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count);
            name = VL_CONCATN_NNN("COMP_"s, name);
        }
        if ((parent == VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this})) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "THISPARENT"s, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "THISPARENT"s, "cannot set the parent of a component to itself"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x000006c1U);
            }
        }
        if ((VlNull{} == parent)) {
            parent = top;
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __VlefCall_4__uvm_report_enabled);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                if ((parent == top)) {
                    __VlefCall_6__get_full_name = "uvm_top"s;
                } else {
                    VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1737)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NEWCOMP"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Creating "s, __VlefCall_6__get_full_name), "."s), name)), 0x000000c9U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x000006c9U);
            }
        }
        VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1739)->__VnoInFunc_has_child(vlSymsp, name, __VlefCall_7__has_child);
        __VlefLogAnd_9 = (0U != __VlefCall_7__has_child);
        if (__VlefLogAnd_9) {
            VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1739)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_8__get_child);
            __VlefLogAnd_9 = (VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this} 
                              != __VlefCall_8__get_child);
        }
        if (__VlefLogAnd_9) {
            if ((parent == top)) {
                error_str = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(
                                                                         VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Name '"s, name), "' is not unique to other top-level "s), "instances. If parent is a module, build a unique name by combining the "s), "the module name and component name: $sformatf(\"%m.%s\",\""s), name), "\")."s);
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "CLDEXT"s, __VlefCall_10__uvm_report_enabled);
                if ((0U != __VlefCall_10__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, error_str, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x000006d0U);
                }
            } else {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "CLDEXT"s, __VlefCall_11__uvm_report_enabled);
                if ((0U != __VlefCall_11__uvm_report_enabled)) {
                    VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1750)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                    this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, VL_SFORMATF_N_NX("Cannot set '%s' as a child of '%s', which already has a child by that name.",2
                                                                                , 'S',&(name)
                                                                                , 'S',&(__VlefCall_12__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x000006d6U);
                }
            }
            goto __Vlabel0;
        }
        this->__PVT__m_parent = parent;
        this->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1758)->__VnoInFunc_m_add_child(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_13__m_add_child);
        if ((1U & (~ (IData)(__VlefCall_13__m_add_child)))) {
            this->__PVT__m_parent = VlNull{};
        }
        this->__PVT__event_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz12, vlProcess, vlSymsp, "event_pool"s);
        this->__PVT__m_domain = VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1763)
            ->__PVT__m_domain;
        this->__VnoInFunc_reseed(vlProcess, vlSymsp);
        __Vfunc_get__28__value[0U] = this->__PVT__recording_detail;
        __Vilp1 = 1U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vfunc_get__28__value[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz13__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, ""s, "recording_detail"s, __Vfunc_get__28__value, __VlefCall_14__get);
        this->__PVT__recording_detail = __Vfunc_get__28__value[0U];
        if ((1U & (~ (IData)(__VlefCall_14__get)))) {
            __Vtask_get__29__value = this->__PVT__recording_detail;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db___Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, ""s, "recording_detail"s, __Vtask_get__29__value, __Vtask_get__29__Vfuncout);
            this->__PVT__recording_detail = __Vtask_get__29__value;
        }
        VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1772)->__VnoInFunc_get_report_verbosity_level(vlSymsp, 0U, ""s, __VlefCall_15__get_report_verbosity_level);
        this->__VnoInFunc_set_report_verbosity_level(vlSymsp, __VlefCall_15__get_report_verbosity_level);
        {
            // Inlined CFunc: __VnoInFunc_m_set_cl_msg_args
            this->__VnoInFunc_m_set_cl_verb(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_action(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_sev(vlProcess, vlSymsp);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_10__get_name;
    std::string __VlefCall_9__get_name;
    std::string __VlefCall_8__get_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_2;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    {
        m_add_child__Vfuncrtn = 0U;
        VL_NULL_CHECK(child, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1784)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __VlefLogAnd_2 = this->__PVT__m_children.exists(__VlefCall_0__get_name);
        if (__VlefLogAnd_2) {
            VL_NULL_CHECK(child, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1785)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __VlefLogAnd_2 = (this->__PVT__m_children
                              .at(__VlefCall_1__get_name) 
                              != child);
        }
        if (__VlefLogAnd_2) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "BDCLD"s, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                VL_NULL_CHECK(child, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1788)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                VL_NULL_CHECK(child, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1788)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(__VlefCall_5__get_name), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1788)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCLD"s, VL_SFORMATF_N_NX("A child with the name '%0s' (type=%0s) already exists.",2
                                                                                , 'S',&(__VlefCall_4__get_name)
                                                                                , 'S',&(__VlefCall_6__get_type_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x000006fcU);
            }
            m_add_child__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (this->__PVT__m_children_by_handle.exists(child)) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "BDCHLD"s, __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                VL_NULL_CHECK(child, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1797)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                VL_NULL_CHECK(this->__PVT__m_children_by_handle
                              .at(child), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1797)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCHLD"s, VL_SFORMATF_N_NX("A child with the name '%0s' already exists in parent under name ' %0s'",2
                                                                                , 'S',&(__VlefCall_8__get_name)
                                                                                , 'S',&(__VlefCall_9__get_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000705U);
            }
            m_add_child__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1801)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
        this->__PVT__m_children.atWrite(__VlefCall_10__get_name) 
            = child;
        this->__PVT__m_children_by_handle.atWrite(child) 
            = child;
        m_add_child__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> &children) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children\n"); );
    // Body
    std::string unnamedblk141__DOT__i;
    std::string unnamedblk141__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk141__DOT__i__Vmore;
    unnamedblk141__DOT__i__Vmore = 0;
    unnamedblk141__DOT__i__Vmore = (0U != this->__PVT__m_children.first(unnamedblk141__DOT__i__Vnext));
    while (unnamedblk141__DOT__i__Vmore) {
        unnamedblk141__DOT__i = unnamedblk141__DOT__i__Vnext;
        unnamedblk141__DOT__i__Vmore = (0U != this->__PVT__m_children.next(unnamedblk141__DOT__i__Vnext));
        children.push_back(this->__PVT__m_children.at(unnamedblk141__DOT__i));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child\n"); );
    // Body
    get_first_child__Vfuncrtn = 0U;
    get_first_child__Vfuncrtn = this->__PVT__m_children.first(name);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child\n"); );
    // Body
    get_next_child__Vfuncrtn = 0U;
    get_next_child__Vfuncrtn = this->__PVT__m_children.next(name);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if (this->__PVT__m_children.exists(name)) {
            get_child__Vfuncrtn = this->__PVT__m_children
                .at(name);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "NOCHILD"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOCHILD"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component with name '"s, name), "' is not a child of component '"s), __VlefCall_1__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000737U);
        }
        get_child__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child\n"); );
    // Body
    has_child__Vfuncrtn = this->__PVT__m_children.exists(name);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_num_children(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_num_children\n"); );
    // Body
    get_num_children__Vfuncrtn = this->__PVT__m_children.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_full_name__Vfuncrtn = ""s;
    if ((""s == this->__PVT__m_name)) {
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
    } else {
        get_full_name__Vfuncrtn = this->__PVT__m_name;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((""s != this->__PVT__m_name)) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "INVSTNM"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "INVSTNM"s, VL_SFORMATF_N_NX("It is illegal to change the name of a component. The component name will not be changed to \"%s\"",1
                                                                                , 'S',&(name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000766U);
            }
            goto __Vlabel0;
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(vlProcess, vlSymsp, name);
        this->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    std::string unnamedblk142__DOT__c;
    std::string unnamedblk142__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk142__DOT__c__Vmore;
    unnamedblk142__DOT__c__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> unnamedblk142__DOT__unnamedblk143__DOT__tmp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    top = vlSymsp->TOP__uvm_pkg.__PVT__uvm_top;
    if (((this->__PVT__m_parent == top) | (VlNull{} 
                                           == this->__PVT__m_parent))) {
        this->__VnoInFunc_get_name(vlSymsp, this->__PVT__m_name);
    } else {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1912)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__PVT__m_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
    }
    unnamedblk142__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk142__DOT__c__Vnext));
    while (unnamedblk142__DOT__c__Vmore) {
        unnamedblk142__DOT__c = unnamedblk142__DOT__c__Vnext;
        unnamedblk142__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk142__DOT__c__Vnext));
        unnamedblk142__DOT__unnamedblk143__DOT__tmp 
            = this->__PVT__m_children.at(unnamedblk142__DOT__c);
        VL_NULL_CHECK(unnamedblk142__DOT__unnamedblk143__DOT__tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1917)->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_lookup(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_lookup\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__has_child;
    std::string leaf;
    std::string remainder;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    {
        leaf = ""s;
        remainder = ""s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
        comp = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this};
        this->__VnoInFunc_m_extract_name(vlSymsp, name, this->__Vtask_m_extract_name__58__leaf, this->__Vtask_m_extract_name__58__remainder);
        leaf = this->__Vtask_m_extract_name__58__leaf;
        remainder = this->__Vtask_m_extract_name__58__remainder;
        if ((""s == leaf)) {
            comp = top;
            this->__VnoInFunc_m_extract_name(vlSymsp, remainder, this->__Vtask_m_extract_name__59__leaf, this->__Vtask_m_extract_name__59__remainder);
            leaf = this->__Vtask_m_extract_name__59__leaf;
            remainder = this->__Vtask_m_extract_name__59__remainder;
        }
        VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1942)->__VnoInFunc_has_child(vlSymsp, leaf, __VlefCall_0__has_child);
        if ((1U & (~ (0U != __VlefCall_0__has_child)))) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "Lookup Error"s, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Lookup Error"s, VL_SFORMATF_N_NX("Cannot find child %0s",1
                                                                                , 'S',&(leaf)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000798U);
            }
            lookup__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((""s != remainder)) {
            VL_NULL_CHECK(VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1949)
                          ->__PVT__m_children.at(leaf), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1949)->__VnoInFunc_lookup(vlSymsp, remainder, lookup__Vfuncrtn);
            goto __Vlabel0;
        }
        lookup__Vfuncrtn = VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 1951)
            ->__PVT__m_children.at(leaf);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth\n"); );
    // Body
    IData/*31:0*/ unnamedblk144__DOT__i;
    unnamedblk144__DOT__i = 0;
    {
        get_depth__Vfuncrtn = 0U;
        if ((""s == this->__PVT__m_name)) {
            get_depth__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_depth__Vfuncrtn = 1U;
        unnamedblk144__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk144__DOT__i, 
                          VL_LEN_IN(this->__PVT__m_name))) {
            if ((0x2eU == VL_GETC_N(this->__PVT__m_name,unnamedblk144__DOT__i))) {
                get_depth__Vfuncrtn = ((IData)(1U) 
                                       + get_depth__Vfuncrtn);
            }
            unnamedblk144__DOT__i = ((IData)(1U) + unnamedblk144__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_extract_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_extract_name\n"); );
    // Body
    IData/*31:0*/ i;
    IData/*31:0*/ len;
    {
        leaf = ""s;
        remainder = ""s;
        i = 0U;
        len = 0U;
        len = VL_LEN_IN(name);
        i = 0U;
        {
            while (VL_LTS_III(32, i, VL_LEN_IN(name))) {
                if ((0x2eU == VL_GETC_N(name,i))) {
                    goto __Vlabel1;
                }
                i = ((IData)(1U) + i);
            }
            __Vlabel1: ;
        }
        if ((i == len)) {
            leaf = name;
            remainder = ""s;
            goto __Vlabel0;
        }
        leaf = VL_SUBSTR_N(name,0U,(i - (IData)(1U)));
        remainder = VL_SUBSTR_N(name,((IData)(1U) + i),
                                (len - (IData)(1U)));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_flush(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_flush\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_flush(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_flush\n"); );
    // Body
    std::string unnamedblk145__DOT__s;
    std::string unnamedblk145__DOT__s__Vnext;
    CData/*0:0*/ unnamedblk145__DOT__s__Vmore;
    unnamedblk145__DOT__s__Vmore = 0;
    unnamedblk145__DOT__s__Vmore = (0U != this->__PVT__m_children.first(unnamedblk145__DOT__s__Vnext));
    while (unnamedblk145__DOT__s__Vmore) {
        unnamedblk145__DOT__s = unnamedblk145__DOT__s__Vnext;
        unnamedblk145__DOT__s__Vmore = (0U != this->__PVT__m_children.next(unnamedblk145__DOT__s__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk145__DOT__s), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2009)->__VnoInFunc_do_flush(vlSymsp);
    }
    this->__VnoInFunc_flush(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "ILLCRT"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCRT"s, "create cannot be called on a uvm_component. Use create_component instead."s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x000007ebU);
    }
    create__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "ILLCLN"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCLN"s, VL_SFORMATF_N_NX("Attempting to clone '%s'.  Clone cannot be called on a uvm_component.  The clone target variable will be set to null.",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x000007f4U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_override_info(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_override_info\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2046)->__VnoInFunc_debug_create_by_name(vlSymsp, requested_type_name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_component(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_component\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2055)->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, requested_type_name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, create_component__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_object\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2065)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, requested_type_name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, create_object__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    std::string full_inst_path;
    full_inst_path = ""s;
    if ((""s == relative_inst_path)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, full_inst_path);
    } else {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), relative_inst_path);
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2104)->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, original_type_name, override_type_name, full_inst_path);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    std::string full_inst_path;
    full_inst_path = ""s;
    if ((""s == relative_inst_path)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, full_inst_path);
    } else {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), relative_inst_path);
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2124)->__VnoInFunc_set_inst_override_by_type(vlSymsp, original_type, override_type, full_inst_path);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_verbosity_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_verbosity_hier\n"); );
    // Body
    std::string unnamedblk146__DOT__c;
    std::string unnamedblk146__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk146__DOT__c__Vmore;
    unnamedblk146__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_id_verbosity(vlSymsp, id, verbosity);
    unnamedblk146__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk146__DOT__c__Vnext));
    while (unnamedblk146__DOT__c__Vmore) {
        unnamedblk146__DOT__c = unnamedblk146__DOT__c__Vnext;
        unnamedblk146__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk146__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk146__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2142)->__VnoInFunc_set_report_id_verbosity_hier(vlSymsp, id, verbosity);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_verbosity_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_verbosity_hier\n"); );
    // Body
    std::string unnamedblk147__DOT__c;
    std::string unnamedblk147__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk147__DOT__c__Vmore;
    unnamedblk147__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_severity_id_verbosity(vlSymsp, severity, id, verbosity);
    unnamedblk147__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk147__DOT__c__Vnext));
    while (unnamedblk147__DOT__c__Vmore) {
        unnamedblk147__DOT__c = unnamedblk147__DOT__c__Vnext;
        unnamedblk147__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk147__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk147__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2154)->__VnoInFunc_set_report_severity_id_verbosity_hier(vlSymsp, severity, id, verbosity);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_action_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_action_hier\n"); );
    // Body
    std::string unnamedblk148__DOT__c;
    std::string unnamedblk148__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk148__DOT__c__Vmore;
    unnamedblk148__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_severity_action(vlSymsp, severity, action);
    unnamedblk148__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk148__DOT__c__Vnext));
    while (unnamedblk148__DOT__c__Vmore) {
        unnamedblk148__DOT__c = unnamedblk148__DOT__c__Vnext;
        unnamedblk148__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk148__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk148__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2165)->__VnoInFunc_set_report_severity_action_hier(vlSymsp, severity, action);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_action_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_action_hier\n"); );
    // Body
    std::string unnamedblk149__DOT__c;
    std::string unnamedblk149__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk149__DOT__c__Vmore;
    unnamedblk149__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_id_action(vlSymsp, id, action);
    unnamedblk149__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk149__DOT__c__Vnext));
    while (unnamedblk149__DOT__c__Vmore) {
        unnamedblk149__DOT__c = unnamedblk149__DOT__c__Vnext;
        unnamedblk149__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk149__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk149__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2175)->__VnoInFunc_set_report_id_action_hier(vlSymsp, id, action);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_action_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_action_hier\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string unnamedblk150__DOT__c;
    std::string unnamedblk150__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk150__DOT__c__Vmore;
    unnamedblk150__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, severity, id, action);
    unnamedblk150__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk150__DOT__c__Vnext));
    while (unnamedblk150__DOT__c__Vmore) {
        unnamedblk150__DOT__c = unnamedblk150__DOT__c__Vnext;
        unnamedblk150__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk150__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk150__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2187)->__VnoInFunc_set_report_severity_id_action_hier(vlSymsp, severity, id, action);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_file_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_file_hier\n"); );
    // Body
    std::string unnamedblk151__DOT__c;
    std::string unnamedblk151__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk151__DOT__c__Vmore;
    unnamedblk151__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_severity_file(vlSymsp, severity, file);
    unnamedblk151__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk151__DOT__c__Vnext));
    while (unnamedblk151__DOT__c__Vmore) {
        unnamedblk151__DOT__c = unnamedblk151__DOT__c__Vnext;
        unnamedblk151__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk151__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk151__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2198)->__VnoInFunc_set_report_severity_file_hier(vlSymsp, severity, file);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_default_file_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_default_file_hier\n"); );
    // Body
    std::string unnamedblk152__DOT__c;
    std::string unnamedblk152__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk152__DOT__c__Vmore;
    unnamedblk152__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_default_file(vlSymsp, file);
    unnamedblk152__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk152__DOT__c__Vnext));
    while (unnamedblk152__DOT__c__Vmore) {
        unnamedblk152__DOT__c = unnamedblk152__DOT__c__Vnext;
        unnamedblk152__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk152__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk152__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2208)->__VnoInFunc_set_report_default_file_hier(vlSymsp, file);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_file_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_file_hier\n"); );
    // Body
    std::string unnamedblk153__DOT__c;
    std::string unnamedblk153__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk153__DOT__c__Vmore;
    unnamedblk153__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_id_file(vlSymsp, id, file);
    unnamedblk153__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk153__DOT__c__Vnext));
    while (unnamedblk153__DOT__c__Vmore) {
        unnamedblk153__DOT__c = unnamedblk153__DOT__c__Vnext;
        unnamedblk153__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk153__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk153__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2218)->__VnoInFunc_set_report_id_file_hier(vlSymsp, id, file);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_file_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_file_hier\n"); );
    // Body
    std::string unnamedblk154__DOT__c;
    std::string unnamedblk154__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk154__DOT__c__Vmore;
    unnamedblk154__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_severity_id_file(vlSymsp, severity, id, file);
    unnamedblk154__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk154__DOT__c__Vnext));
    while (unnamedblk154__DOT__c__Vmore) {
        unnamedblk154__DOT__c = unnamedblk154__DOT__c__Vnext;
        unnamedblk154__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk154__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk154__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2230)->__VnoInFunc_set_report_severity_id_file_hier(vlSymsp, severity, id, file);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier\n"); );
    // Body
    std::string unnamedblk155__DOT__c;
    std::string unnamedblk155__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk155__DOT__c__Vmore;
    unnamedblk155__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_verbosity_level(vlSymsp, verbosity);
    unnamedblk155__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk155__DOT__c__Vnext));
    while (unnamedblk155__DOT__c__Vmore) {
        unnamedblk155__DOT__c = unnamedblk155__DOT__c__Vnext;
        unnamedblk155__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk155__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk155__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2240)->__VnoInFunc_set_report_verbosity_level_hier(vlSymsp, verbosity);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_build_done = 1U;
    this->__VnoInFunc_build(vlProcess, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_build_done = 1U;
    this->__VnoInFunc_apply_config_settings(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__print_config_matches);
    if ((0U == this->__PVT__m_phasing_active)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "build()/build_phase() has been called explicitly, outside of the phasing system. This usage of build is deprecated and may lead to unexpected behavior."s, 0x000000c8U, ""s, 0U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_connect(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase\n"); );
    // Body
    this->__VnoInFunc_start_of_simulation(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Body
    this->__VnoInFunc_end_of_elaboration(vlSymsp);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_run(vlSymsp);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase\n"); );
    // Body
    this->__VnoInFunc_extract(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_check(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_report(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_run(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_run\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_define_domain(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> domain) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_define_domain\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_run_phase> __VlefCall_1__get;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_0__find;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> unnamedblk156__DOT__common;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> schedule;
    VL_NULL_CHECK(domain, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2375)->__VnoInFunc_find_by_name(vlSymsp, "uvm_sched"s, 1U, schedule);
    if ((VlNull{} == schedule)) {
        schedule = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, "uvm_sched"s, 3U, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_add_uvm_phases(vlProcess, vlSymsp, schedule);
        VL_NULL_CHECK(domain, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2380)->__VnoInFunc_add(vlProcess, vlSymsp, schedule, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, unnamedblk156__DOT__common);
        VL_NULL_CHECK(unnamedblk156__DOT__common, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2382)->__VnoInFunc_find(vlProcess, vlSymsp, domain, 0U, __VlefCall_0__find);
        if ((VlNull{} == __VlefCall_0__find)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
            VL_NULL_CHECK(unnamedblk156__DOT__common, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2383)->__VnoInFunc_add(vlProcess, vlSymsp, domain, __VlefCall_1__get, VlNull{}, VlNull{});
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_domain(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_domain\n"); );
    // Body
    std::string unnamedblk157__DOT__c;
    std::string unnamedblk157__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk157__DOT__c__Vmore;
    unnamedblk157__DOT__c__Vmore = 0;
    this->__PVT__m_domain = domain;
    this->__VnoInFunc_define_domain(vlSymsp, domain);
    if ((0U != hier)) {
        unnamedblk157__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk157__DOT__c__Vnext));
        while (unnamedblk157__DOT__c__Vmore) {
            unnamedblk157__DOT__c = unnamedblk157__DOT__c__Vnext;
            unnamedblk157__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk157__DOT__c__Vnext));
            VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk157__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2403)->__VnoInFunc_set_domain(vlSymsp, domain, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain\n"); );
    // Body
    get_domain__Vfuncrtn = this->__PVT__m_domain;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_phase_imp(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> imp, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_phase_imp\n"); );
    // Body
    std::string unnamedblk158__DOT__c;
    std::string unnamedblk158__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk158__DOT__c__Vmore;
    unnamedblk158__DOT__c__Vmore = 0;
    this->__PVT__m_phase_imps.atWrite(phase) = imp;
    if ((0U != hier)) {
        unnamedblk158__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk158__DOT__c__Vnext));
        while (unnamedblk158__DOT__c__Vmore) {
            unnamedblk158__DOT__c = unnamedblk158__DOT__c__Vnext;
            unnamedblk158__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk158__DOT__c__Vnext));
            VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk158__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2421)->__VnoInFunc_set_phase_imp(vlSymsp, phase, imp, hier);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_kill_all(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_kill_all\n"); );
    // Body
    std::string unnamedblk159__DOT__c;
    std::string unnamedblk159__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk159__DOT__c__Vmore;
    unnamedblk159__DOT__c__Vmore = 0;
    unnamedblk159__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk159__DOT__c__Vnext));
    while (unnamedblk159__DOT__c__Vmore) {
        unnamedblk159__DOT__c = unnamedblk159__DOT__c__Vnext;
        unnamedblk159__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk159__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk159__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2435)->__VnoInFunc_do_kill_all(vlSymsp);
    }
    this->__VnoInFunc_kill(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_kill\n"); );
    // Body
    if ((VlNull{} != this->__PVT__m_phase_process)) {
        VL_NULL_CHECK(this->__PVT__m_phase_process, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2445)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_phase_process = VlNull{};
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_suspend(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_suspend\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "COMP/SPND/UNIMP"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "COMP/SPND/UNIMP"s, "suspend() not implemented"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000997U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_resume(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_resume\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "COMP/RSUM/UNIMP"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "COMP/RSUM/UNIMP"s, "resume() not implemented"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x0000099fU);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = "<unknown>"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_stop(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string ph_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_stop\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_stop_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_stop_phase\n"); );
    // Body
    std::string __VlefCall_0__get_name;
    VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2514)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_stop(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__get_name));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_resolve_bindings\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string unnamedblk160__DOT__s;
    std::string unnamedblk160__DOT__s__Vnext;
    CData/*0:0*/ unnamedblk160__DOT__s__Vmore;
    unnamedblk160__DOT__s__Vmore = 0;
    unnamedblk160__DOT__s__Vmore = (0U != this->__PVT__m_children.first(unnamedblk160__DOT__s__Vnext));
    while (unnamedblk160__DOT__s__Vmore) {
        unnamedblk160__DOT__s = unnamedblk160__DOT__s__Vnext;
        unnamedblk160__DOT__s__Vmore = (0U != this->__PVT__m_children.next(unnamedblk160__DOT__s__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk160__DOT__s), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2533)->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
    }
    this->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_accept_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_accept_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> e;
    VL_NULL_CHECK(tr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2551)->__VnoInFunc_accept_tr(vlSymsp, accept_time);
    this->__VnoInFunc_do_accept_tr(vlSymsp, tr);
    VL_NULL_CHECK(this->__PVT__event_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2553)->__VnoInFunc_get(vlProcess, vlSymsp, "accept_tr"s, e);
    if ((VlNull{} != e)) {
        VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2555)->__VnoInFunc_trigger(vlSymsp, VlNull{});
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    begin_tr__Vfuncrtn = 0;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, tr, parent_handle, 
                                 (0U != parent_handle), stream_name, label, desc, begin_time, begin_tr__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_child_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_child_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    begin_child_tr__Vfuncrtn = 0;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, tr, parent_handle, 1U, stream_name, label, desc, begin_time, begin_child_tr__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, CData/*0:0*/ has_parent, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr\n"); );
    // Locals
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_4__check_handle_kind;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__check_handle_kind;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk161__DOT__seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk161__DOT__unnamedblk162__DOT__parent_seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> e;
    IData/*31:0*/ stream_h;
    IData/*31:0*/ tr_h;
    IData/*31:0*/ link_tr_h;
    std::string name;
    std::string kind;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recordr;
    {
        m_begin_tr__Vfuncrtn = 0;
        stream_h = 0U;
        tr_h = 0;
        link_tr_h = 0;
        name = ""s;
        kind = ""s;
        if ((VlNull{} == tr)) {
            m_begin_tr__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        recordr = ((VlNull{} == this->__PVT__recorder)
                    ? vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_recorder
                    : this->__PVT__recorder);
        if ((1U & (~ (IData)(has_parent)))) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(tr, unnamedblk161__DOT__seq);
            if (__VlefExpr_0) {
                VL_NULL_CHECK(unnamedblk161__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2608)->__VnoInFunc_get_parent_sequence(vlSymsp, unnamedblk161__DOT__unnamedblk162__DOT__parent_seq);
                if ((VlNull{} != unnamedblk161__DOT__unnamedblk162__DOT__parent_seq)) {
                    parent_handle = VL_NULL_CHECK(unnamedblk161__DOT__unnamedblk162__DOT__parent_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2610)
                        ->__PVT__m_tr_handle;
                    if ((0U != parent_handle)) {
                        has_parent = 1U;
                    }
                }
            }
        }
        tr_h = 0U;
        if (has_parent) {
            VL_NULL_CHECK(tr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2619)->__VnoInFunc_begin_child_tr(vlProcess, vlSymsp, begin_time, parent_handle, link_tr_h);
        } else {
            VL_NULL_CHECK(tr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2621)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, begin_time, link_tr_h);
        }
        VL_NULL_CHECK(tr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2623)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        if ((""s != __VlefCall_1__get_name)) {
            VL_NULL_CHECK(tr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2624)->__VnoInFunc_get_name(vlSymsp, name);
        } else {
            VL_NULL_CHECK(tr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2626)->__VnoInFunc_get_type_name(vlSymsp, name);
        }
        if ((""s == stream_name)) {
            stream_name = "main"s;
        }
        if ((0U != this->__PVT__recording_detail)) {
            if (this->__PVT__m_stream_handle.exists(stream_name)) {
                stream_h = this->__PVT__m_stream_handle
                    .at(stream_name);
            }
            VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2635)->__VnoInFunc_check_handle_kind(vlSymsp, "Fiber"s, stream_h, __VlefCall_2__check_handle_kind);
            if ((1U != __VlefCall_2__check_handle_kind)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2636)->__VnoInFunc_create_stream(vlSymsp, stream_name, "TVM"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), stream_h);
                this->__PVT__m_stream_handle.atWrite(stream_name) 
                    = stream_h;
            }
            if (has_parent) {
                __Vtemp_1[0U] = 0x4c696e6bU;
                __Vtemp_1[1U] = 0x6e642c20U;
                __Vtemp_1[2U] = 0x696e5f45U;
                __Vtemp_1[3U] = 0x00426567U;
                __Vtemp_1[4U] = 0U;
                __Vtemp_1[5U] = 0U;
            } else {
                __Vtemp_1[0U] = 0x4c696e6bU;
                __Vtemp_1[1U] = 0x6e742c20U;
                __Vtemp_1[2U] = 0x50617265U;
                __Vtemp_1[3U] = 0x5f4e6f5fU;
                __Vtemp_1[4U] = 0x6567696eU;
                __Vtemp_1[5U] = 0x00000042U;
            }
            kind = VL_CVT_PACK_STR_NW(6, __Vtemp_1);
            VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2642)->__VnoInFunc_begin_tr(vlSymsp, kind, stream_h, name, label, desc, begin_time, tr_h);
            if (((IData)(has_parent) & (0U != parent_handle))) {
                VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2645)->__VnoInFunc_link_tr(vlSymsp, parent_handle, tr_h, "child"s);
            }
            this->__PVT__m_tr_h.atWrite(tr) = tr_h;
            VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2649)->__VnoInFunc_check_handle_kind(vlSymsp, "Transaction"s, link_tr_h, __VlefCall_4__check_handle_kind);
            if ((1U == __VlefCall_4__check_handle_kind)) {
                VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2650)->__VnoInFunc_link_tr(vlSymsp, tr_h, link_tr_h, ""s);
            }
            this->__VnoInFunc_do_begin_tr(vlSymsp, tr, stream_name, tr_h);
        }
        VL_NULL_CHECK(this->__PVT__event_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2656)->__VnoInFunc_get(vlProcess, vlSymsp, "begin_tr"s, e);
        if ((VlNull{} != e)) {
            VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2658)->__VnoInFunc_trigger(vlSymsp, tr);
        }
        m_begin_tr__Vfuncrtn = tr_h;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__check_handle_kind;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> e;
    IData/*31:0*/ tr_h;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recordr;
    {
        tr_h = 0;
        if ((VlNull{} == tr)) {
            goto __Vlabel0;
        }
        recordr = ((VlNull{} == this->__PVT__recorder)
                    ? vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_recorder
                    : this->__PVT__recorder);
        tr_h = 0U;
        VL_NULL_CHECK(tr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2681)->__VnoInFunc_end_tr(vlProcess, vlSymsp, end_time, (IData)(free_handle));
        if ((0U != this->__PVT__recording_detail)) {
            if (this->__PVT__m_tr_h.exists(tr)) {
                tr_h = this->__PVT__m_tr_h.at(tr);
                this->__VnoInFunc_do_end_tr(vlSymsp, tr, tr_h);
                this->__PVT__m_tr_h.erase(tr);
                VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2693)->__VnoInFunc_check_handle_kind(vlSymsp, "Transaction"s, tr_h, __VlefCall_0__check_handle_kind);
                if ((1U == __VlefCall_0__check_handle_kind)) {
                    VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2695)->__PVT__tr_handle 
                        = tr_h;
                    VL_NULL_CHECK(tr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2696)->__VnoInFunc_record(vlProcess, vlSymsp, recordr);
                    VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2698)->__VnoInFunc_end_tr(vlSymsp, tr_h, end_time);
                    if (free_handle) {
                        VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2701)->__VnoInFunc_free_tr(vlSymsp, tr_h);
                    }
                }
            } else {
                this->__VnoInFunc_do_end_tr(vlSymsp, tr, tr_h);
            }
        }
        VL_NULL_CHECK(this->__PVT__event_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2711)->__VnoInFunc_get(vlProcess, vlSymsp, "end_tr"s, e);
        if ((VlNull{} != e)) {
            VL_NULL_CHECK(e, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2713)->__VnoInFunc_trigger(vlSymsp, VlNull{});
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_error_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_error_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__check_handle_kind;
    record_error_tr__Vfuncrtn = 0;
    std::string etype;
    IData/*31:0*/ stream_h;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recordr;
    recordr = ((VlNull{} == this->__PVT__recorder) ? vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_recorder
                : this->__PVT__recorder);
    etype = ((IData)(keep_active) ? "Error, Link"s : "Error"s);
    if ((0ULL == error_time)) {
        error_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    }
    stream_h = this->__PVT__m_stream_handle.at(stream_name);
    VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2738)->__VnoInFunc_check_handle_kind(vlSymsp, "Fiber"s, stream_h, __VlefCall_0__check_handle_kind);
    if ((1U != __VlefCall_0__check_handle_kind)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2739)->__VnoInFunc_create_stream(vlSymsp, stream_name, "TVM"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), stream_h);
        this->__PVT__m_stream_handle.atWrite(stream_name) 
            = stream_h;
    }
    VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2743)->__VnoInFunc_begin_tr(vlSymsp, etype, stream_h, label, label, desc, error_time, record_error_tr__Vfuncrtn);
    if ((VlNull{} != info)) {
        VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2746)->__PVT__tr_handle 
            = record_error_tr__Vfuncrtn;
        VL_NULL_CHECK(info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2747)->__VnoInFunc_record(vlProcess, vlSymsp, recordr);
    }
    VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2750)->__VnoInFunc_end_tr(vlSymsp, record_error_tr__Vfuncrtn, error_time);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_event_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_event_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__check_handle_kind;
    record_event_tr__Vfuncrtn = 0;
    std::string etype;
    IData/*31:0*/ stream_h;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recordr;
    recordr = ((VlNull{} == this->__PVT__recorder) ? vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_recorder
                : this->__PVT__recorder);
    etype = ((IData)(keep_active) ? "Event, Link"s : "Event"s);
    if ((0ULL == event_time)) {
        event_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    }
    stream_h = this->__PVT__m_stream_handle.at(stream_name);
    VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2774)->__VnoInFunc_check_handle_kind(vlSymsp, "Fiber"s, stream_h, __VlefCall_0__check_handle_kind);
    if ((1U != __VlefCall_0__check_handle_kind)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2775)->__VnoInFunc_create_stream(vlSymsp, stream_name, "TVM"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), stream_h);
        this->__PVT__m_stream_handle.atWrite(stream_name) 
            = stream_h;
    }
    VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2779)->__VnoInFunc_begin_tr(vlSymsp, etype, stream_h, label, label, desc, event_time, record_event_tr__Vfuncrtn);
    if ((VlNull{} != info)) {
        VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2782)->__PVT__tr_handle 
            = record_event_tr__Vfuncrtn;
        VL_NULL_CHECK(info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2783)->__VnoInFunc_record(vlProcess, vlSymsp, recordr);
    }
    VL_NULL_CHECK(recordr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2786)->__VnoInFunc_end_tr(vlSymsp, record_event_tr__Vfuncrtn, event_time);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_accept_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_accept_tr\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_massage_scope(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_massage_scope\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    {
        massage_scope__Vfuncrtn = ""s;
        if ((""s == scope)) {
            massage_scope__Vfuncrtn = "^$"s;
            goto __Vlabel0;
        }
        if (("*"s == scope)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            massage_scope__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_0__get_full_name, ".*"s);
            goto __Vlabel0;
        }
        if (("uvm_test_top"s == scope)) {
            massage_scope__Vfuncrtn = "uvm_test_top"s;
            goto __Vlabel0;
        }
        if ((0x2eU == VL_GETC_N(scope,0U))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            massage_scope__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_1__get_full_name, scope);
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        massage_scope__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_2__get_full_name, "."s), scope);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_int(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz13__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, inst_name, field_name, value);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz5__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, inst_name, field_name, value);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_config_object\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> unnamedblk163__DOT__comp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> wrapper;
    {
        if ((VlNull{} == value)) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "NULLCFG"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NULLCFG"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("A null object was provided as a "s, VL_SFORMATF_N_NX("configuration object for set_config_object(\"%s\",\"%s\")",2
                                                                                , 'S',&(inst_name)
                                                                                , 'S',&(field_name)) ), ". Verify that this is intended."s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000b48U);
            }
        }
        if (((IData)(clone) & (VlNull{} != value))) {
            VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2891)->__VnoInFunc_clone(vlProcess, vlSymsp, tmp);
            if ((VlNull{} == tmp)) {
                __VlefExpr_1 = VL_CAST_DYNAMIC(value, unnamedblk163__DOT__comp);
                if (__VlefExpr_1) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "INVCLNC"s, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "INVCLNC"s, "Clone failed during set_config_object with an object that is an uvm_component. Components cannot be cloned."s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000b50U);
                    }
                    goto __Vlabel0;
                } else {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVCLN"s, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVCLN"s, "Clone failed during set_config_object, the original reference will be used for configuration. Check that the create method for the object type is defined properly."s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000b56U);
                    }
                }
            } else {
                value = tmp;
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz16__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, inst_name, field_name, value);
        wrapper = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper, vlSymsp);
        VL_NULL_CHECK(wrapper, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2913)->__PVT__obj 
            = value;
        VL_NULL_CHECK(wrapper, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2914)->__PVT__clone 
            = clone;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz14__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, inst_name, field_name, wrapper);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_int(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ &value, CData/*0:0*/ &get_config_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_int\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_get__193__value;
    VL_ZERO_W(4096, __Vfunc_get__193__value);
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    VlProcess::currentp(vlProcess.get());
    get_config_int__Vfuncrtn = 0U;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vfunc_get__193__value[__Vilp1] = value[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz13__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, ""s, field_name, __Vfunc_get__193__value, get_config_int__Vfuncrtn);
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000007fU)) {
        value[__Vilp2] = __Vfunc_get__193__value[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, std::string &value, CData/*0:0*/ &get_config_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_config_string__Vfuncrtn = 0U;
    this->__Vfunc_get__194__value = value;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz5__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, ""s, field_name, this->__Vfunc_get__194__value, get_config_string__Vfuncrtn);
    value = this->__Vfunc_get__194__value;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &value, CData/*0:0*/ clone, CData/*0:0*/ &get_config_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_config_object\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __Vfunc_get__195__value;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__get;
    {
        get_config_object__Vfuncrtn = 0U;
        __Vfunc_get__195__value = value;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz16__Vclpkg.__VnoInFunc_get(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, ""s, field_name, __Vfunc_get__195__value, __VlefCall_0__get);
        value = __Vfunc_get__195__value;
        if ((1U & (~ (IData)(__VlefCall_0__get)))) {
            get_config_object__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (((IData)(clone) & (VlNull{} != value))) {
            VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2950)->__VnoInFunc_clone(vlProcess, vlSymsp, value);
        }
        get_config_object__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_config_usage(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_config_usage\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
        VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2963)->__VnoInFunc_find_unused_resources(vlSymsp, rq);
        VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2965)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGNRD"s, " ::: The following resources have at least one write and no reads :::"s, 0U, ""s, 0U);
        VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 2969)->__VnoInFunc_print_resources(vlSymsp, rq, 1U);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ verbose) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_12__read;
    IData/*31:0*/ __VlefExpr_11;
    IData/*31:0*/ __VlefExpr_10;
    std::string __VlefCall_9__read;
    IData/*31:0*/ __VlefExpr_8;
    IData/*31:0*/ __VlefCall_7__read;
    IData/*31:0*/ __VlefExpr_6;
    IData/*31:0*/ __VlefCall_5__read;
    IData/*31:0*/ __VlefExpr_4;
    VlWide<128>/*4095:0*/ __VlefCall_3__read;
    IData/*31:0*/ __VlefExpr_2;
    IData/*31:0*/ __VlefCall_1__size;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk164__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> unnamedblk164__DOT__unnamedblk165__DOT__rbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_> unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__ri;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz15> unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__riu;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz5> unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__rs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14> unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__rcow;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper> unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__unnamedblk170__DOT__cow;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz16> unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__unnamedblk171__DOT__ro;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    std::string name;
    std::string search_name;
    IData/*31:0*/ j;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
        name = ""s;
        search_name = ""s;
        j = 0U;
        this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020003U, ""s);
        if ((0U == vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__field_array.size())) {
            goto __Vlabel0;
        }
        if (verbose) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, "applying configuration settings"s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3004)->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rq);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
        unnamedblk164__DOT__i = 0U;
        VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3009)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
        unnamedblk164__DOT__i = (__VlefCall_1__size 
                                 - (IData)(1U));
        while (VL_LTES_III(32, 0U, unnamedblk164__DOT__i)) {
            {
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3011)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk164__DOT__i, r);
                VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3012)->__VnoInFunc_get_name(vlSymsp, name);
                j = 0U;
                {
                    while ((j < VL_LEN_IN(name))) {
                        if (((0x5bU == VL_GETC_N(name,j)) 
                             | (0x2eU == VL_GETC_N(name,j)))) {
                            goto __Vlabel2;
                        }
                        j = ((IData)(1U) + j);
                    }
                    __Vlabel2: ;
                }
                search_name = ((j < VL_LEN_IN(name))
                                ? VL_SUBSTR_N(name,0U,
                                              (j - (IData)(1U)))
                                : name);
                if ((((~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__m_has_wildcard_names)) 
                      & (! vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__field_array.exists(search_name))) 
                     & ("recording_detail"s != search_name))) {
                    goto __Vlabel1;
                }
                if (verbose) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("applying configuration to field %s",1
                                                                                , 'S',&(name)) , 0U, ""s, 0U);
                }
                __VlefExpr_2 = VL_CAST_DYNAMIC(r, unnamedblk164__DOT__unnamedblk165__DOT__rbs);
                if (__VlefExpr_2) {
                    VL_NULL_CHECK(unnamedblk164__DOT__unnamedblk165__DOT__rbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3037)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_3__read);
                    this->__VnoInFunc_set_int_local(vlProcess, vlSymsp, name, __VlefCall_3__read, 1U);
                } else {
                    __VlefExpr_4 = VL_CAST_DYNAMIC(r, unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__ri);
                    if (__VlefExpr_4) {
                        VL_NULL_CHECK(unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__ri, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3041)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_5__read);
                        VL_EXTENDS_WI(4096,32, __Vtemp_1, __VlefCall_5__read);
                        this->__VnoInFunc_set_int_local(vlProcess, vlSymsp, name, __Vtemp_1, 1U);
                    } else {
                        __VlefExpr_6 = VL_CAST_DYNAMIC(r, unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__riu);
                        if (__VlefExpr_6) {
                            VL_NULL_CHECK(unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__riu, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3045)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_7__read);
                            __Vtemp_2[0U] = __VlefCall_7__read;
                            __Vilp1 = 1U;
                            while ((__Vilp1 <= 0x0000007fU)) {
                                __Vtemp_2[__Vilp1] = 0U;
                                __Vilp1 = ((IData)(1U) 
                                           + __Vilp1);
                            }
                            this->__VnoInFunc_set_int_local(vlProcess, vlSymsp, name, __Vtemp_2, 1U);
                        } else {
                            __VlefExpr_8 = VL_CAST_DYNAMIC(r, unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__rs);
                            if (__VlefExpr_8) {
                                VL_NULL_CHECK(unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__rs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3049)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_9__read);
                                this->__VnoInFunc_set_string_local(vlProcess, vlSymsp, name, 
                                                                   VL_CVT_PACK_STR_NN(__VlefCall_9__read), 1U);
                            } else {
                                __VlefExpr_10 = VL_CAST_DYNAMIC(r, unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__rcow);
                                if (__VlefExpr_10) {
                                    VL_NULL_CHECK(unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__rcow, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3053)->__VnoInFunc_read(vlProcess, vlSymsp, VlNull{}, unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__unnamedblk170__DOT__cow);
                                    this->__VnoInFunc_set_object_local(vlProcess, vlSymsp, name, VL_NULL_CHECK(unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__unnamedblk170__DOT__cow, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3054)
                                                                       ->__PVT__obj, VL_NULL_CHECK(unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__unnamedblk170__DOT__cow, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3054)
                                                                       ->__PVT__clone, 1U);
                                } else {
                                    __VlefExpr_11 = 
                                        VL_CAST_DYNAMIC(r, unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__unnamedblk171__DOT__ro);
                                    if (__VlefExpr_11) {
                                        VL_NULL_CHECK(unnamedblk164__DOT__unnamedblk165__DOT__unnamedblk166__DOT__unnamedblk167__DOT__unnamedblk168__DOT__unnamedblk169__DOT__unnamedblk171__DOT__ro, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3059)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_12__read);
                                        this->__VnoInFunc_set_object_local(vlProcess, vlSymsp, name, __VlefCall_12__read, 0U, 1U);
                                    } else if (verbose) {
                                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("field %s has an unsupported type",1
                                                                                , 'S',&(name)) , 0U, ""s, 0U);
                                    }
                                }
                            }
                        }
                    }
                }
                __Vlabel1: ;
            }
            unnamedblk164__DOT__i = (unnamedblk164__DOT__i 
                                     - (IData)(1U));
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__field_array.clear();
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> __VlefCall_1__lookup_scope;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> unnamedblk172__DOT__c;
    std::string unnamedblk172__DOT__unnamedblk173__DOT__name;
    std::string unnamedblk172__DOT__unnamedblk173__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk172__DOT__unnamedblk173__DOT__name__Vmore;
    unnamedblk172__DOT__unnamedblk173__DOT__name__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGPRT"s, "visible resources:"s, 0U, ""s, 0U);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3086)->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), __VlefCall_1__lookup_scope);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3086)->__VnoInFunc_print_resources(vlSymsp, __VlefCall_1__lookup_scope, audit);
    if (recurse) {
        unnamedblk172__DOT__unnamedblk173__DOT__name__Vmore 
            = (0U != this->__PVT__m_children.first(unnamedblk172__DOT__unnamedblk173__DOT__name__Vnext));
        while (unnamedblk172__DOT__unnamedblk173__DOT__name__Vmore) {
            unnamedblk172__DOT__unnamedblk173__DOT__name 
                = unnamedblk172__DOT__unnamedblk173__DOT__name__Vnext;
            unnamedblk172__DOT__unnamedblk173__DOT__name__Vmore 
                = (0U != this->__PVT__m_children.next(unnamedblk172__DOT__unnamedblk173__DOT__name__Vnext));
            unnamedblk172__DOT__c = this->__PVT__m_children
                .at(unnamedblk172__DOT__unnamedblk173__DOT__name);
            VL_NULL_CHECK(unnamedblk172__DOT__c, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3092)->__VnoInFunc_print_config(vlSymsp, recurse, (IData)(audit));
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_settings(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_settings\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__print_config_settings__Vstatic__have_been_warned)))) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "deprecated"s, "uvm_component::print_config_settings has been deprecated.  Use print_config() instead"s, 0x000000c8U, ""s, 0U);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__print_config_settings__Vstatic__have_been_warned = 1U;
    }
    this->__VnoInFunc_print_config(vlSymsp, recurse, 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_with_audit(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_with_audit\n"); );
    // Body
    this->__VnoInFunc_print_config(vlSymsp, recurse, 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if ((0U != this->__PVT__recording_detail)) {
        if ((0x00000064U == this->__PVT__recording_detail)) {
            VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3133)->__VnoInFunc_print_generic(vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_LOW"s, 0x2eU);
        } else if ((0x000000c8U == this->__PVT__recording_detail)) {
            VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3135)->__VnoInFunc_print_generic(vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_MEDIUM"s, 0x2eU);
        } else if ((0x0000012cU == this->__PVT__recording_detail)) {
            VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3137)->__VnoInFunc_print_generic(vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_HIGH"s, 0x2eU);
        } else if ((0x00000190U == this->__PVT__recording_detail)) {
            VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3139)->__VnoInFunc_print_generic(vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_FULL"s, 0x2eU);
        } else {
            __Vtemp_1[0U] = this->__PVT__recording_detail;
            __Vilp1 = 1U;
            while ((__Vilp1 <= 0x0000007fU)) {
                __Vtemp_1[__Vilp1] = 0U;
                __Vilp1 = ((IData)(1U) + __Vilp1);
            }
            VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3141)->__VnoInFunc_print_int(vlSymsp, "recording_detail"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "integral"s);
        }
    }
    if ((0U != this->__PVT__enable_stop_interrupt)) {
        VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT__enable_stop_interrupt);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3147)->__VnoInFunc_print_int(vlSymsp, "enable_stop_interrupt"s, __Vtemp_2, 0x00000020U, 0x01000000U, 0x2eU, "bit"s);
    }
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(const std::string &glob, std::string &uvm_glob_to_re__Vfuncrtn);
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(const std::string &re, const std::string &str, IData/*31:0*/ &uvm_re_match__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_int_local(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_int_local\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__242____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__242____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__244__Vfuncout;
    __Vfunc_uvm_re_match__244__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_is_match;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_int_local(vlProcess, vlSymsp, field_name, value, (IData)(recurse));
    this->__Vfunc_uvm_is_match__242__str = "recording_detail"s;
    this->__Vfunc_uvm_is_match__242__expr = field_name;
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(this->__Vfunc_uvm_is_match__242__expr, this->__Vfunc_uvm_glob_to_re__243__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
        = this->__Vfunc_uvm_glob_to_re__243__Vfuncout;
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s, this->__Vfunc_uvm_is_match__242__str, __Vfunc_uvm_re_match__244__Vfuncout);
    __Vfunc_uvm_is_match__242____VlefCall_0__uvm_re_match 
        = __Vfunc_uvm_re_match__244__Vfuncout;
    __VlefCall_0__uvm_is_match = (0U == __Vfunc_uvm_is_match__242____VlefCall_0__uvm_re_match);
    if (__VlefCall_0__uvm_is_match) {
        this->__PVT__recording_detail = value[0U];
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_set_cl_verb(vlProcess, vlSymsp);
    this->__VnoInFunc_m_set_cl_action(vlProcess, vlSymsp);
    this->__VnoInFunc_m_set_cl_sev(vlProcess, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_values__250__Vfuncout;
    __Vtask_get_arg_values__250__Vfuncout = 0;
    CData/*7:0*/ __Vtask_uvm_split_string__251__sep;
    __Vtask_uvm_split_string__251__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__251__s;
    __Vtask_uvm_split_string__251__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__251__e;
    __Vtask_uvm_split_string__251__e = 0;
    IData/*31:0*/ __Vtask_m_convert_verb__252__verb_enum;
    __Vtask_m_convert_verb__252__verb_enum = 0;
    CData/*0:0*/ __Vtask_m_convert_verb__253__Vfuncout;
    __Vtask_m_convert_verb__253__Vfuncout = 0;
    IData/*31:0*/ __Vtask_m_convert_verb__253__verb_enum;
    __Vtask_m_convert_verb__253__verb_enum = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__255____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__255____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__257__Vfuncout;
    __Vfunc_uvm_re_match__257__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_3__uvm_is_match;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefLogOr_1;
    CData/*0:0*/ __VlefCall_0__m_convert_verb;
    IData/*31:0*/ unnamedblk174__DOT__i;
    unnamedblk174__DOT__i = 0;
    IData/*31:0*/ unnamedblk174__DOT__i__Vloopsize;
    unnamedblk174__DOT__i__Vloopsize = 0;
    Vcsi2_tb_top_m_verbosity_setting__struct__0 unnamedblk174__DOT__unnamedblk175__DOT__setting;
    VlQueue<std::string> args;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    args.clear();
    args.atDefault().clear();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
    if ((1U & (~ (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_cmdline_proc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3200)->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values, __Vtask_get_arg_values__250__Vfuncout);
    }
    unnamedblk174__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk174__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())) {
        unnamedblk174__DOT__i__Vloopsize = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size();
        unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__comp.clear();
        unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__phase.clear();
        unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__offset = 0;
        unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__verbosity = 0;
        unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__id.clear();
        args.clear();
        __Vtask_uvm_split_string__251__sep = 0x2cU;
        this->__Vtask_uvm_split_string__251__str = 
            VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk174__DOT__i));
        __Vtask_uvm_split_string__251__s = 0U;
        __Vtask_uvm_split_string__251__e = 0U;
        args.clear();
        while (VL_LTS_III(32, __Vtask_uvm_split_string__251__e, 
                          VL_LEN_IN(this->__Vtask_uvm_split_string__251__str))) {
            __Vtask_uvm_split_string__251__s = __Vtask_uvm_split_string__251__e;
            {
                while (VL_LTS_III(32, __Vtask_uvm_split_string__251__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__251__str))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__251__str,__Vtask_uvm_split_string__251__e) 
                         == (IData)(__Vtask_uvm_split_string__251__sep))) {
                        goto __Vlabel0;
                    }
                    __Vtask_uvm_split_string__251__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__251__e);
                }
                __Vlabel0: ;
            }
            if ((__Vtask_uvm_split_string__251__s != __Vtask_uvm_split_string__251__e)) {
                args.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__251__str,__Vtask_uvm_split_string__251__s,
                                           (__Vtask_uvm_split_string__251__e 
                                            - (IData)(1U))));
            }
            __Vtask_uvm_split_string__251__e = ((IData)(1U) 
                                                + __Vtask_uvm_split_string__251__e);
        }
        __VlefLogOr_1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first;
        if (__VlefLogOr_1) {
            __VlefLogOr_1 = ((4U != args.size()) & 
                             (5U != args.size()));
            if ((1U & (~ (IData)(__VlefLogOr_1)))) {
                VL_NULL_CHECK(clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3209)->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(args.at(2U)), __Vtask_m_convert_verb__252__verb_enum, __VlefCall_0__m_convert_verb);
                unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__verbosity 
                    = __Vtask_m_convert_verb__252__verb_enum;
                __VlefLogOr_1 = (1U & (~ (IData)(__VlefCall_0__m_convert_verb)));
            }
        }
        if (__VlefLogOr_1) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.erase(unnamedblk174__DOT__i);
        } else {
            unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__comp 
                = args.at(0U);
            unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__id 
                = args.at(1U);
            VL_NULL_CHECK(clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3216)->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(args.at(2U)), __Vtask_m_convert_verb__253__verb_enum, __Vtask_m_convert_verb__253__Vfuncout);
            unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__verbosity 
                = __Vtask_m_convert_verb__253__verb_enum;
            unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__phase 
                = args.at(3U);
            unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__offset = 0ULL;
            if ((5U == args.size())) {
                unnamedblk174__DOT__unnamedblk175__DOT__setting.__PVT__offset 
                    = VL_EXTENDS_QI(64,32, VL_ATOI_N(args.at(4U), 10));
            }
            if ((("time"s == unnamedblk174__DOT__unnamedblk175__DOT__setting
                  .__PVT__phase) & (VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this} 
                                    == top))) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.push_back(unnamedblk174__DOT__unnamedblk175__DOT__setting);
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__Vfunc_uvm_is_match__255__str = 
                VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
            this->__Vfunc_uvm_is_match__255__expr = 
                VL_CVT_PACK_STR_NN(unnamedblk174__DOT__unnamedblk175__DOT__setting
                                   .__PVT__comp);
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(this->__Vfunc_uvm_is_match__255__expr, this->__Vfunc_uvm_glob_to_re__256__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                = this->__Vfunc_uvm_glob_to_re__256__Vfuncout;
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s, this->__Vfunc_uvm_is_match__255__str, __Vfunc_uvm_re_match__257__Vfuncout);
            __Vfunc_uvm_is_match__255____VlefCall_0__uvm_re_match 
                = __Vfunc_uvm_re_match__257__Vfuncout;
            __VlefCall_3__uvm_is_match = (0U == __Vfunc_uvm_is_match__255____VlefCall_0__uvm_re_match);
            if (__VlefCall_3__uvm_is_match) {
                if (((((""s == unnamedblk174__DOT__unnamedblk175__DOT__setting
                        .__PVT__phase) | ("build"s 
                                          == unnamedblk174__DOT__unnamedblk175__DOT__setting
                                          .__PVT__phase)) 
                      | ("time"s == unnamedblk174__DOT__unnamedblk175__DOT__setting
                         .__PVT__phase)) & (0ULL == unnamedblk174__DOT__unnamedblk175__DOT__setting
                                            .__PVT__offset))) {
                    if (("_ALL_"s == unnamedblk174__DOT__unnamedblk175__DOT__setting
                         .__PVT__id)) {
                        this->__VnoInFunc_set_report_verbosity_level(vlSymsp, unnamedblk174__DOT__unnamedblk175__DOT__setting
                                                                     .__PVT__verbosity);
                    } else {
                        this->__VnoInFunc_set_report_id_verbosity(vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(unnamedblk174__DOT__unnamedblk175__DOT__setting
                                                                                .__PVT__id), unnamedblk174__DOT__unnamedblk175__DOT__setting
                                                                  .__PVT__verbosity);
                    }
                } else if (("time"s != unnamedblk174__DOT__unnamedblk175__DOT__setting
                            .__PVT__phase)) {
                    this->__PVT__m_verbosity_settings.push_back(unnamedblk174__DOT__unnamedblk175__DOT__setting);
                }
            }
        }
        if ((unnamedblk174__DOT__i__Vloopsize <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())) {
            unnamedblk174__DOT__i = ((IData)(1U) + unnamedblk174__DOT__i);
        }
    }
    if ((VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>{this} 
         == top)) {
        this->__VnoInFunc_m_set_cl_verb____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, top);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first = 0U;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vtask___VforkTask_0__260__top;
    IData/*31:0*/ __Vtask___VforkTask_0__260__unnamedblk177__DOT__i;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__i = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__260__unnamedblk177__DOT__i__Vloopsize;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps;
    IData/*31:0*/ __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j__Vloopsize;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j__Vloopsize = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j__Vloopsize;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j__Vloopsize = 0;
    QData/*63:0*/ __Vtask___VforkTask_0__260__last_time;
    __Vtask___VforkTask_0__260__last_time = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__260__top = top;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__i = 0U;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__i__Vloopsize = 0;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j = 0U;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j__Vloopsize = 0;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j = 0U;
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j__Vloopsize = 0;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 
                                            3243);
    __Vtask___VforkTask_0__260__last_time = 0ULL;
    if (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.sort(
                                                                                [&](
                                                                                IData/*31:0*/ item__DOT__index, 
                                                                                Vcsi2_tb_top_m_verbosity_setting__struct__0 item) -> 
                                                                                QData/*63:0*/ {
                return (item.__PVT__offset);
            }
        );
    }
    __Vtask___VforkTask_0__260__unnamedblk177__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask___VforkTask_0__260__unnamedblk177__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
        __Vtask___VforkTask_0__260__unnamedblk177__DOT__i__Vloopsize 
            = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size();
        __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.clear();
        VL_NULL_CHECK(__Vtask___VforkTask_0__260__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3249)->__VnoInFunc_find_all(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__i)
                                                                                .__PVT__comp), __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps, VlNull{});
        co_await vlSymsp->TOP.__VdlySched.delay((0x00000000000003e8ULL 
                                                 * 
                                                 (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__i)
                                                  .__PVT__offset 
                                                  - __Vtask___VforkTask_0__260__last_time)), 
                                                vlProcess, 
                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 
                                                3250);
        __Vtask___VforkTask_0__260__last_time = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__i)
            .__PVT__offset;
        if (("_ALL_"s == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__i)
             .__PVT__id)) {
            __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j = 0U;
            while (VL_LTS_III(32, __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j, __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.size())) {
                __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j__Vloopsize 
                    = __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.size();
                VL_NULL_CHECK(__Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3254)->__VnoInFunc_set_report_verbosity_level(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__i)
                                                                                .__PVT__verbosity);
                if ((__Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j__Vloopsize 
                     <= __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.size())) {
                    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j 
                        = ((IData)(1U) + __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk179__DOT__j);
                }
            }
        } else {
            __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j = 0U;
            while (VL_LTS_III(32, __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j, __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.size())) {
                __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j__Vloopsize 
                    = __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.size();
                VL_NULL_CHECK(__Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3259)->__VnoInFunc_set_report_id_verbosity(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__i)
                                                                                .__PVT__id), vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__260__unnamedblk177__DOT__i)
                                                                                .__PVT__verbosity);
                if ((__Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j__Vloopsize 
                     <= __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__comps.size())) {
                    __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j 
                        = ((IData)(1U) + __Vtask___VforkTask_0__260__unnamedblk177__DOT__unnamedblk178__DOT__unnamedblk180__DOT__j);
                }
            }
        }
        if ((__Vtask___VforkTask_0__260__unnamedblk177__DOT__i__Vloopsize 
             <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
            __Vtask___VforkTask_0__260__unnamedblk177__DOT__i 
                = ((IData)(1U) + __Vtask___VforkTask_0__260__unnamedblk177__DOT__i);
        }
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_values__264__Vfuncout;
    __Vtask_get_arg_values__264__Vfuncout = 0;
    CData/*7:0*/ __Vtask_uvm_split_string__265__sep;
    __Vtask_uvm_split_string__265__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__265__s;
    __Vtask_uvm_split_string__265__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__265__e;
    __Vtask_uvm_split_string__265__e = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__269____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__269____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__271__Vfuncout;
    __Vfunc_uvm_re_match__271__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_uvm_string_to_severity__272__sev;
    __Vfunc_uvm_string_to_severity__272__sev = 0;
    IData/*31:0*/ __Vfunc_uvm_string_to_action__275__action;
    __Vfunc_uvm_string_to_action__275__action = 0;
    IData/*31:0*/ __Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i;
    __Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i = 0;
    VlQueue<std::string> __Vfunc_uvm_string_to_action__275__actions;
    CData/*7:0*/ __Vtask_uvm_split_string__276__sep;
    __Vtask_uvm_split_string__276__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__276__s;
    __Vtask_uvm_split_string__276__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__276__e;
    __Vtask_uvm_split_string__276__e = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_5__uvm_string_to_action;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_3__uvm_string_to_severity;
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk181__DOT__i;
    unnamedblk181__DOT__i = 0;
    IData/*31:0*/ unnamedblk181__DOT__i__Vloopsize;
    unnamedblk181__DOT__i__Vloopsize = 0;
    VlQueue<std::string> args;
    CData/*1:0*/ sev;
    IData/*31:0*/ action;
    args.clear();
    args.atDefault().clear();
    sev = 0U;
    action = 0U;
    if ((1U & (~ (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.size())))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_cmdline_proc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3284)->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_action="s, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values, __Vtask_get_arg_values__264__Vfuncout);
    }
    {
        unnamedblk181__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk181__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.size())) {
            unnamedblk181__DOT__i__Vloopsize = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.size();
            __Vtask_uvm_split_string__265__sep = 0x2cU;
            this->__Vtask_uvm_split_string__265__str 
                = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.at(unnamedblk181__DOT__i));
            __Vtask_uvm_split_string__265__s = 0U;
            __Vtask_uvm_split_string__265__e = 0U;
            args.clear();
            while (VL_LTS_III(32, __Vtask_uvm_split_string__265__e, 
                              VL_LEN_IN(this->__Vtask_uvm_split_string__265__str))) {
                __Vtask_uvm_split_string__265__s = __Vtask_uvm_split_string__265__e;
                {
                    while (VL_LTS_III(32, __Vtask_uvm_split_string__265__e, 
                                      VL_LEN_IN(this->__Vtask_uvm_split_string__265__str))) {
                        if ((VL_GETC_N(this->__Vtask_uvm_split_string__265__str,__Vtask_uvm_split_string__265__e) 
                             == (IData)(__Vtask_uvm_split_string__265__sep))) {
                            goto __Vlabel1;
                        }
                        __Vtask_uvm_split_string__265__e 
                            = ((IData)(1U) + __Vtask_uvm_split_string__265__e);
                    }
                    __Vlabel1: ;
                }
                if ((__Vtask_uvm_split_string__265__s 
                     != __Vtask_uvm_split_string__265__e)) {
                    args.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__265__str,__Vtask_uvm_split_string__265__s,
                                               (__Vtask_uvm_split_string__265__e 
                                                - (IData)(1U))));
                }
                __Vtask_uvm_split_string__265__e = 
                    ((IData)(1U) + __Vtask_uvm_split_string__265__e);
            }
            if ((4U != args.size())) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtemp_1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.at(unnamedblk181__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("+uvm_set_action requires 4 arguments, only %0d given for command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",2
                                                                                , '~',32,args.size()
                                                                                , 'S',&(__Vtemp_1)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000cd9U);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.erase(unnamedblk181__DOT__i);
                goto __Vlabel0;
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__Vfunc_uvm_is_match__269__str = 
                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
            this->__Vfunc_uvm_is_match__269__expr = 
                VL_CVT_PACK_STR_NN(args.at(0U));
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(this->__Vfunc_uvm_is_match__269__expr, this->__Vfunc_uvm_glob_to_re__270__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                = this->__Vfunc_uvm_glob_to_re__270__Vfuncout;
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s, this->__Vfunc_uvm_is_match__269__str, __Vfunc_uvm_re_match__271__Vfuncout);
            __Vfunc_uvm_is_match__269____VlefCall_0__uvm_re_match 
                = __Vfunc_uvm_re_match__271__Vfuncout;
            __VlefCall_2__uvm_is_match = (0U == __Vfunc_uvm_is_match__269____VlefCall_0__uvm_re_match);
            if ((1U & (~ (IData)(__VlefCall_2__uvm_is_match)))) {
                goto __Vlabel0;
            }
            this->__Vfunc_uvm_string_to_severity__272__sev_str 
                = VL_CVT_PACK_STR_NN(args.at(2U));
            {
                __Vfunc_uvm_string_to_severity__272__sev = 0U;
                if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__272__sev_str)) {
                    __Vfunc_uvm_string_to_severity__272__sev = 0U;
                } else if (("UVM_WARNING"s == this->__Vfunc_uvm_string_to_severity__272__sev_str)) {
                    __Vfunc_uvm_string_to_severity__272__sev = 1U;
                } else if (("UVM_ERROR"s == this->__Vfunc_uvm_string_to_severity__272__sev_str)) {
                    __Vfunc_uvm_string_to_severity__272__sev = 2U;
                } else if (("UVM_FATAL"s == this->__Vfunc_uvm_string_to_severity__272__sev_str)) {
                    __Vfunc_uvm_string_to_severity__272__sev = 3U;
                } else {
                    __VlefCall_3__uvm_string_to_severity = 0U;
                    goto __Vlabel2;
                }
                __VlefCall_3__uvm_string_to_severity = 1U;
                __Vlabel2: ;
            }
            sev = __Vfunc_uvm_string_to_severity__272__sev;
            if ((("_ALL_"s != args.at(2U)) & (~ (IData)(__VlefCall_3__uvm_string_to_severity)))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_4__uvm_report_enabled);
                if ((0U != __VlefCall_4__uvm_report_enabled)) {
                    __Vtemp_2 = args.at(2U);
                    __Vtemp_3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.at(unnamedblk181__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%s\" given to command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__Vtemp_3)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000cdfU);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.erase(unnamedblk181__DOT__i);
                goto __Vlabel0;
            }
            this->__Vfunc_uvm_string_to_action__275__action_str 
                = VL_CVT_PACK_STR_NN(args.at(3U));
            __Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i = 0U;
            __VlefCall_5__uvm_string_to_action = 0U;
            __Vfunc_uvm_string_to_action__275__action = 0U;
            __Vfunc_uvm_string_to_action__275__actions.clear();
            __Vfunc_uvm_string_to_action__275__actions.atDefault().clear();
            __Vtask_uvm_split_string__276__sep = 0x7cU;
            this->__Vtask_uvm_split_string__276__str 
                = this->__Vfunc_uvm_string_to_action__275__action_str;
            __Vtask_uvm_split_string__276__s = 0U;
            __Vtask_uvm_split_string__276__e = 0U;
            __Vfunc_uvm_string_to_action__275__actions.clear();
            while (VL_LTS_III(32, __Vtask_uvm_split_string__276__e, 
                              VL_LEN_IN(this->__Vtask_uvm_split_string__276__str))) {
                __Vtask_uvm_split_string__276__s = __Vtask_uvm_split_string__276__e;
                {
                    while (VL_LTS_III(32, __Vtask_uvm_split_string__276__e, 
                                      VL_LEN_IN(this->__Vtask_uvm_split_string__276__str))) {
                        if ((VL_GETC_N(this->__Vtask_uvm_split_string__276__str,__Vtask_uvm_split_string__276__e) 
                             == (IData)(__Vtask_uvm_split_string__276__sep))) {
                            goto __Vlabel3;
                        }
                        __Vtask_uvm_split_string__276__e 
                            = ((IData)(1U) + __Vtask_uvm_split_string__276__e);
                    }
                    __Vlabel3: ;
                }
                if ((__Vtask_uvm_split_string__276__s 
                     != __Vtask_uvm_split_string__276__e)) {
                    __Vfunc_uvm_string_to_action__275__actions.push_back(
                                                                         VL_SUBSTR_N(this->__Vtask_uvm_split_string__276__str,__Vtask_uvm_split_string__276__s,
                                                                                (__Vtask_uvm_split_string__276__e 
                                                                                - (IData)(1U))));
                }
                __Vtask_uvm_split_string__276__e = 
                    ((IData)(1U) + __Vtask_uvm_split_string__276__e);
            }
            __VlefCall_5__uvm_string_to_action = 1U;
            __Vfunc_uvm_string_to_action__275__action = 0U;
            __Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i = 0U;
            while (VL_LTS_III(32, __Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i, __Vfunc_uvm_string_to_action__275__actions.size())) {
                if ((1U & (~ ("UVM_NO_ACTION"s == __Vfunc_uvm_string_to_action__275__actions.at(__Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i))))) {
                    if (("UVM_DISPLAY"s == __Vfunc_uvm_string_to_action__275__actions.at(__Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i))) {
                        __Vfunc_uvm_string_to_action__275__action 
                            = (1U | __Vfunc_uvm_string_to_action__275__action);
                    } else if (("UVM_LOG"s == __Vfunc_uvm_string_to_action__275__actions.at(__Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i))) {
                        __Vfunc_uvm_string_to_action__275__action 
                            = (2U | __Vfunc_uvm_string_to_action__275__action);
                    } else if (("UVM_COUNT"s == __Vfunc_uvm_string_to_action__275__actions.at(__Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i))) {
                        __Vfunc_uvm_string_to_action__275__action 
                            = (4U | __Vfunc_uvm_string_to_action__275__action);
                    } else if (("UVM_EXIT"s == __Vfunc_uvm_string_to_action__275__actions.at(__Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i))) {
                        __Vfunc_uvm_string_to_action__275__action 
                            = (8U | __Vfunc_uvm_string_to_action__275__action);
                    } else if (("UVM_CALL_HOOK"s == __Vfunc_uvm_string_to_action__275__actions.at(__Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i))) {
                        __Vfunc_uvm_string_to_action__275__action 
                            = (0x00000010U | __Vfunc_uvm_string_to_action__275__action);
                    } else if (("UVM_STOP"s == __Vfunc_uvm_string_to_action__275__actions.at(__Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i))) {
                        __Vfunc_uvm_string_to_action__275__action 
                            = (0x00000020U | __Vfunc_uvm_string_to_action__275__action);
                    } else {
                        __VlefCall_5__uvm_string_to_action = 0U;
                    }
                }
                __Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i 
                    = ((IData)(1U) + __Vfunc_uvm_string_to_action__275__unnamedblk187__DOT__i);
            }
            action = __Vfunc_uvm_string_to_action__275__action;
            if ((1U & (~ (IData)(__VlefCall_5__uvm_string_to_action)))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_6__uvm_report_enabled);
                if ((0U != __VlefCall_6__uvm_report_enabled)) {
                    __Vtemp_4 = args.at(3U);
                    __Vtemp_5 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.at(unnamedblk181__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad action argument \"%s\" given to command +uvm_set_action=%s, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",2
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__Vtemp_5)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000ce4U);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.erase(unnamedblk181__DOT__i);
                goto __Vlabel0;
            }
            if (("_ALL_"s == args.at(1U))) {
                if (("_ALL_"s == args.at(2U))) {
                    this->__VnoInFunc_set_report_severity_action(vlSymsp, 0U, action);
                    this->__VnoInFunc_set_report_severity_action(vlSymsp, 1U, action);
                    this->__VnoInFunc_set_report_severity_action(vlSymsp, 2U, action);
                    this->__VnoInFunc_set_report_severity_action(vlSymsp, 3U, action);
                } else {
                    this->__VnoInFunc_set_report_severity_action(vlSymsp, sev, action);
                }
            } else if (("_ALL_"s == args.at(2U))) {
                this->__VnoInFunc_set_report_id_action(vlSymsp, 
                                                       VL_CVT_PACK_STR_NN(args.at(1U)), action);
            } else {
                this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, sev, 
                                                                VL_CVT_PACK_STR_NN(args.at(1U)), action);
            }
            if ((unnamedblk181__DOT__i__Vloopsize <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__values.size())) {
                unnamedblk181__DOT__i = ((IData)(1U) 
                                         + unnamedblk181__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_values__286__Vfuncout;
    __Vtask_get_arg_values__286__Vfuncout = 0;
    CData/*7:0*/ __Vtask_uvm_split_string__287__sep;
    __Vtask_uvm_split_string__287__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__287__s;
    __Vtask_uvm_split_string__287__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__287__e;
    __Vtask_uvm_split_string__287__e = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__291____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__291____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__293__Vfuncout;
    __Vfunc_uvm_re_match__293__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_uvm_string_to_severity__294__sev;
    __Vfunc_uvm_string_to_severity__294__sev = 0;
    CData/*1:0*/ __Vfunc_uvm_string_to_severity__297__sev;
    __Vfunc_uvm_string_to_severity__297__sev = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_5__uvm_string_to_severity;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_3__uvm_string_to_severity;
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk182__DOT__i;
    unnamedblk182__DOT__i = 0;
    IData/*31:0*/ unnamedblk182__DOT__i__Vloopsize;
    unnamedblk182__DOT__i__Vloopsize = 0;
    VlQueue<std::string> args;
    CData/*1:0*/ orig_sev;
    CData/*1:0*/ sev;
    args.clear();
    args.atDefault().clear();
    orig_sev = 0U;
    sev = 0U;
    if ((1U & (~ (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.size())))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_cmdline_proc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3342)->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_severity="s, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values, __Vtask_get_arg_values__286__Vfuncout);
    }
    {
        unnamedblk182__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk182__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.size())) {
            unnamedblk182__DOT__i__Vloopsize = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.size();
            __Vtask_uvm_split_string__287__sep = 0x2cU;
            this->__Vtask_uvm_split_string__287__str 
                = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.at(unnamedblk182__DOT__i));
            __Vtask_uvm_split_string__287__s = 0U;
            __Vtask_uvm_split_string__287__e = 0U;
            args.clear();
            while (VL_LTS_III(32, __Vtask_uvm_split_string__287__e, 
                              VL_LEN_IN(this->__Vtask_uvm_split_string__287__str))) {
                __Vtask_uvm_split_string__287__s = __Vtask_uvm_split_string__287__e;
                {
                    while (VL_LTS_III(32, __Vtask_uvm_split_string__287__e, 
                                      VL_LEN_IN(this->__Vtask_uvm_split_string__287__str))) {
                        if ((VL_GETC_N(this->__Vtask_uvm_split_string__287__str,__Vtask_uvm_split_string__287__e) 
                             == (IData)(__Vtask_uvm_split_string__287__sep))) {
                            goto __Vlabel1;
                        }
                        __Vtask_uvm_split_string__287__e 
                            = ((IData)(1U) + __Vtask_uvm_split_string__287__e);
                    }
                    __Vlabel1: ;
                }
                if ((__Vtask_uvm_split_string__287__s 
                     != __Vtask_uvm_split_string__287__e)) {
                    args.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__287__str,__Vtask_uvm_split_string__287__s,
                                               (__Vtask_uvm_split_string__287__e 
                                                - (IData)(1U))));
                }
                __Vtask_uvm_split_string__287__e = 
                    ((IData)(1U) + __Vtask_uvm_split_string__287__e);
            }
            if ((4U != args.size())) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtemp_1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.at(unnamedblk182__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("+uvm_set_severity requires 4 arguments, only %0d given for command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",2
                                                                                , '~',32,args.size()
                                                                                , 'S',&(__Vtemp_1)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000d13U);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.erase(unnamedblk182__DOT__i);
                goto __Vlabel0;
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__Vfunc_uvm_is_match__291__str = 
                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
            this->__Vfunc_uvm_is_match__291__expr = 
                VL_CVT_PACK_STR_NN(args.at(0U));
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(this->__Vfunc_uvm_is_match__291__expr, this->__Vfunc_uvm_glob_to_re__292__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                = this->__Vfunc_uvm_glob_to_re__292__Vfuncout;
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s, this->__Vfunc_uvm_is_match__291__str, __Vfunc_uvm_re_match__293__Vfuncout);
            __Vfunc_uvm_is_match__291____VlefCall_0__uvm_re_match 
                = __Vfunc_uvm_re_match__293__Vfuncout;
            __VlefCall_2__uvm_is_match = (0U == __Vfunc_uvm_is_match__291____VlefCall_0__uvm_re_match);
            if ((1U & (~ (IData)(__VlefCall_2__uvm_is_match)))) {
                goto __Vlabel0;
            }
            this->__Vfunc_uvm_string_to_severity__294__sev_str 
                = VL_CVT_PACK_STR_NN(args.at(2U));
            {
                __Vfunc_uvm_string_to_severity__294__sev = 0U;
                if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__294__sev_str)) {
                    __Vfunc_uvm_string_to_severity__294__sev = 0U;
                } else if (("UVM_WARNING"s == this->__Vfunc_uvm_string_to_severity__294__sev_str)) {
                    __Vfunc_uvm_string_to_severity__294__sev = 1U;
                } else if (("UVM_ERROR"s == this->__Vfunc_uvm_string_to_severity__294__sev_str)) {
                    __Vfunc_uvm_string_to_severity__294__sev = 2U;
                } else if (("UVM_FATAL"s == this->__Vfunc_uvm_string_to_severity__294__sev_str)) {
                    __Vfunc_uvm_string_to_severity__294__sev = 3U;
                } else {
                    __VlefCall_3__uvm_string_to_severity = 0U;
                    goto __Vlabel2;
                }
                __VlefCall_3__uvm_string_to_severity = 1U;
                __Vlabel2: ;
            }
            orig_sev = __Vfunc_uvm_string_to_severity__294__sev;
            if ((("_ALL_"s != args.at(2U)) & (~ (IData)(__VlefCall_3__uvm_string_to_severity)))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_4__uvm_report_enabled);
                if ((0U != __VlefCall_4__uvm_report_enabled)) {
                    __Vtemp_2 = args.at(2U);
                    __Vtemp_3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.at(unnamedblk182__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%s\" given to command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__Vtemp_3)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000d19U);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.erase(unnamedblk182__DOT__i);
                goto __Vlabel0;
            }
            this->__Vfunc_uvm_string_to_severity__297__sev_str 
                = VL_CVT_PACK_STR_NN(args.at(3U));
            {
                __Vfunc_uvm_string_to_severity__297__sev = 0U;
                if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__297__sev_str)) {
                    __Vfunc_uvm_string_to_severity__297__sev = 0U;
                } else if (("UVM_WARNING"s == this->__Vfunc_uvm_string_to_severity__297__sev_str)) {
                    __Vfunc_uvm_string_to_severity__297__sev = 1U;
                } else if (("UVM_ERROR"s == this->__Vfunc_uvm_string_to_severity__297__sev_str)) {
                    __Vfunc_uvm_string_to_severity__297__sev = 2U;
                } else if (("UVM_FATAL"s == this->__Vfunc_uvm_string_to_severity__297__sev_str)) {
                    __Vfunc_uvm_string_to_severity__297__sev = 3U;
                } else {
                    __VlefCall_5__uvm_string_to_severity = 0U;
                    goto __Vlabel3;
                }
                __VlefCall_5__uvm_string_to_severity = 1U;
                __Vlabel3: ;
            }
            sev = __Vfunc_uvm_string_to_severity__297__sev;
            if ((1U & (~ (IData)(__VlefCall_5__uvm_string_to_severity)))) {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_6__uvm_report_enabled);
                if ((0U != __VlefCall_6__uvm_report_enabled)) {
                    __Vtemp_4 = args.at(3U);
                    __Vtemp_5 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.at(unnamedblk182__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%s\" given to command +uvm_set_severity=%s, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",2
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__Vtemp_5)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh"s, 0x00000d1eU);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.erase(unnamedblk182__DOT__i);
                goto __Vlabel0;
            }
            if ((("_ALL_"s == args.at(1U)) & ("_ALL_"s 
                                              == args.at(2U)))) {
                this->__VnoInFunc_set_report_severity_override(vlSymsp, 0U, (IData)(sev));
                this->__VnoInFunc_set_report_severity_override(vlSymsp, 1U, (IData)(sev));
                this->__VnoInFunc_set_report_severity_override(vlSymsp, 2U, (IData)(sev));
                this->__VnoInFunc_set_report_severity_override(vlSymsp, 3U, (IData)(sev));
            } else if (("_ALL_"s == args.at(1U))) {
                this->__VnoInFunc_set_report_severity_override(vlSymsp, orig_sev, (IData)(sev));
            } else if (("_ALL_"s == args.at(2U))) {
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 0U, 
                                                                  VL_CVT_PACK_STR_NN(args.at(1U)), (IData)(sev));
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 1U, 
                                                                  VL_CVT_PACK_STR_NN(args.at(1U)), (IData)(sev));
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 2U, 
                                                                  VL_CVT_PACK_STR_NN(args.at(1U)), (IData)(sev));
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 3U, 
                                                                  VL_CVT_PACK_STR_NN(args.at(1U)), (IData)(sev));
            } else {
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, orig_sev, 
                                                                  VL_CVT_PACK_STR_NN(args.at(1U)), (IData)(sev));
            }
            if ((unnamedblk182__DOT__i__Vloopsize <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__values.size())) {
                unnamedblk182__DOT__i = ((IData)(1U) 
                                         + unnamedblk182__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk183__DOT__i;
    unnamedblk183__DOT__i = 0;
    IData/*31:0*/ unnamedblk183__DOT__i__Vloopsize;
    unnamedblk183__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> unnamedblk183__DOT__unnamedblk184__DOT__p;
    std::string unnamedblk183__DOT__unnamedblk184__DOT__p_rand;
    unnamedblk183__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk183__DOT__i, this->__PVT__m_verbosity_settings.size())) {
        unnamedblk183__DOT__i__Vloopsize = this->__PVT__m_verbosity_settings.size();
        VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3389)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == this->__PVT__m_verbosity_settings.at(unnamedblk183__DOT__i)
             .__PVT__phase)) {
            if ((0ULL == this->__PVT__m_verbosity_settings.at(unnamedblk183__DOT__i)
                 .__PVT__offset)) {
                if (("_ALL_"s == this->__PVT__m_verbosity_settings.at(unnamedblk183__DOT__i)
                     .__PVT__id)) {
                    this->__VnoInFunc_set_report_verbosity_level(vlSymsp, this->__PVT__m_verbosity_settings.at(unnamedblk183__DOT__i)
                                                                 .__PVT__verbosity);
                } else {
                    this->__VnoInFunc_set_report_id_verbosity(vlSymsp, 
                                                              VL_CVT_PACK_STR_NN(this->__PVT__m_verbosity_settings.at(unnamedblk183__DOT__i)
                                                                                .__PVT__id), this->__PVT__m_verbosity_settings.at(unnamedblk183__DOT__i)
                                                              .__PVT__verbosity);
                }
            } else {
                vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk183__DOT__unnamedblk184__DOT__p);
                VL_NULL_CHECK(unnamedblk183__DOT__unnamedblk184__DOT__p, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3398)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk183__DOT__unnamedblk184__DOT__p_rand);
                this->__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, unnamedblk183__DOT__i);
                VL_NULL_CHECK(unnamedblk183__DOT__unnamedblk184__DOT__p, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3407)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk183__DOT__unnamedblk184__DOT__p_rand);
            }
            this->__PVT__m_verbosity_settings.erase(unnamedblk183__DOT__i);
        }
        if ((unnamedblk183__DOT__i__Vloopsize <= this->__PVT__m_verbosity_settings.size())) {
            unnamedblk183__DOT__i = ((IData)(1U) + unnamedblk183__DOT__i);
        }
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ unnamedblk183__DOT__i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0\n"); );
    // Locals
    IData/*31:0*/ __Vtask___VforkTask_1__315__i;
    __Vtask___VforkTask_1__315__i = 0;
    Vcsi2_tb_top_m_verbosity_setting__struct__0 __Vtask___VforkTask_1__315__setting;
    __Vtask___VforkTask_1__315__setting.__PVT__offset = 0;
    __Vtask___VforkTask_1__315__setting.__PVT__verbosity = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_1__315__i = unnamedblk183__DOT__i;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 
                                            3399);
    __Vtask___VforkTask_1__315__setting = this->__PVT__m_verbosity_settings.at(__Vtask___VforkTask_1__315__i);
    co_await vlSymsp->TOP.__VdlySched.delay((0x00000000000003e8ULL 
                                             * __Vtask___VforkTask_1__315__setting
                                             .__PVT__offset), 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 
                                            3401);
    if (("_ALL_"s == __Vtask___VforkTask_1__315__setting
         .__PVT__id)) {
        this->__VnoInFunc_set_report_verbosity_level(vlSymsp, __Vtask___VforkTask_1__315__setting
                                                     .__PVT__verbosity);
    } else {
        this->__VnoInFunc_set_report_id_verbosity(vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(__Vtask___VforkTask_1__315__setting
                                                                     .__PVT__id), __Vtask___VforkTask_1__315__setting
                                                  .__PVT__verbosity);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort\n"); );
    // Body
    std::string unnamedblk186__DOT__i;
    std::string unnamedblk186__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk186__DOT__i__Vmore;
    unnamedblk186__DOT__i__Vmore = 0;
    unnamedblk186__DOT__i__Vmore = (0U != this->__PVT__m_children.first(unnamedblk186__DOT__i__Vnext));
    while (unnamedblk186__DOT__i__Vmore) {
        unnamedblk186__DOT__i = unnamedblk186__DOT__i__Vnext;
        unnamedblk186__DOT__i__Vmore = (0U != this->__PVT__m_children.next(unnamedblk186__DOT__i__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk186__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_component.svh", 3421)->__VnoInFunc_m_do_pre_abort(vlSymsp);
    }
    this->__VnoInFunc_pre_abort(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__enable_stop_interrupt = 0;
    __PVT__m_build_done = 0;
    __PVT__m_phasing_active = 0;
    __PVT__m_stream_handle.atDefault() = VL_SCOPED_RAND_RESET_I(32, 11392884900788368740ULL, 16575070401097166582ull);
    __PVT__m_tr_h.atDefault() = VL_SCOPED_RAND_RESET_I(32, 11392884900788368740ULL, 10870772974477130315ull);
    __PVT__m_verbosity_settings.atDefault().__PVT__offset = VL_SCOPED_RAND_RESET_Q(64, 11392884900788368740ULL, 1112267310700633147ull);
    __PVT__m_verbosity_settings.atDefault().__PVT__verbosity = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_component() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::~\n"); );
}
