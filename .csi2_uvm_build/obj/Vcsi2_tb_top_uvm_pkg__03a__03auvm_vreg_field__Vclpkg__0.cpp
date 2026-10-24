// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi47> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi47__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi47> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi47__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, "uvm_vreg_field"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 51)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_vreg_field"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 51)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ &path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__6____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__8__Vfuncout;
    __Vtask_uvm_report_enabled__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__13__Vfuncout;
    __Vtask_uvm_report_enabled__13__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__PVT__parent = parent;
    if ((0U == size)) {
        this->__Vfunc_uvm_report_enabled__6__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__6__severity = 2U;
        __Vfunc_uvm_report_enabled__6__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), this->__Vfunc_uvm_report_enabled__6__id, __Vtask_uvm_report_enabled__8__Vfuncout);
        __Vfunc_uvm_report_enabled__6____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__8__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__6____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual field \"%s\" cannot have 0 bits",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x000001f1U);
        }
        size = 1U;
    }
    if ((0x00000040U < size)) {
        this->__Vfunc_uvm_report_enabled__11__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__11__severity = 2U;
        __Vfunc_uvm_report_enabled__11__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), this->__Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__13__Vfuncout);
        __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__13__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual field \"%s\" cannot have more than 64 bits",1
                                                                                , 'S',&(__VlefCall_3__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x000001f7U);
        }
        size = 0x00000040U;
    }
    this->__PVT__size = size;
    this->__PVT__lsb = lsb_pos;
    VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 510)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 516)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register\n"); );
    // Body
    get_lsb_pos_in_register__Vfuncrtn = this->__PVT__lsb;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__verbosity;
    __Vfunc_uvm_report_enabled__20__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__20__severity;
    __Vfunc_uvm_report_enabled__20__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__22__Vfuncout;
    __Vtask_uvm_report_enabled__22__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> __VlefCall_0__get_memory;
    {
        get_access__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 542)->__VnoInFunc_get_memory(vlSymsp, __VlefCall_0__get_memory);
        if ((VlNull{} == __VlefCall_0__get_memory)) {
            this->__Vfunc_uvm_report_enabled__20__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__20__severity = 2U;
            __Vfunc_uvm_report_enabled__20__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__20__verbosity, (IData)(__Vfunc_uvm_report_enabled__20__severity), this->__Vfunc_uvm_report_enabled__20__id, __Vtask_uvm_report_enabled__22__Vfuncout);
            __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__22__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::get_rights() on unimplemented virtual field \"%s\"",1
                                                                                , 'S',&(__VlefCall_2__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x00000220U);
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 548)->__VnoInFunc_get_access(vlSymsp, map, get_access__Vfuncrtn);
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__verbosity;
    __Vfunc_uvm_report_enabled__28__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__28__severity;
    __Vfunc_uvm_report_enabled__28__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__28____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__29__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__30__Vfuncout;
    __Vtask_uvm_report_enabled__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__verbosity;
    __Vfunc_uvm_report_enabled__36__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__36__severity;
    __Vfunc_uvm_report_enabled__36__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__37__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__38__Vfuncout;
    __Vtask_uvm_report_enabled__38__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__41__verbosity;
    __Vtask_uvm_report_warning__41__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__41__line;
    __Vtask_uvm_report_warning__41__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__42__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__49__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__49__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__53__status;
    __Vtask_read__53__status = 0;
    QData/*63:0*/ __Vtask_read__53__value;
    __Vtask_read__53__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__54__verbosity;
    __Vfunc_uvm_report_enabled__54__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__54__severity;
    __Vfunc_uvm_report_enabled__54__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__54____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__54____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__55__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__56__Vfuncout;
    __Vtask_uvm_report_enabled__56__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__62__status;
    __Vtask_read__62__status = 0;
    QData/*63:0*/ __Vtask_read__62__value;
    __Vtask_read__62__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__63__verbosity;
    __Vfunc_uvm_report_enabled__63__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__63__severity;
    __Vfunc_uvm_report_enabled__63__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__63____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__63____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__64__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__65__Vfuncout;
    __Vtask_uvm_report_enabled__65__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__70__status;
    __Vtask_write__70__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__76__verbosity;
    __Vfunc_uvm_report_enabled__76__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__76__severity;
    __Vfunc_uvm_report_enabled__76__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__76____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__76____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__77__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__78__Vfuncout;
    __Vtask_uvm_report_enabled__78__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__80__verbosity;
    __Vtask_uvm_report_info__80__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__80__line;
    __Vtask_uvm_report_info__80__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__81__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_17__get_full_name;
    CData/*0:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    CData/*0:0*/ __VlefCall_13__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_12__get_n_bits;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    CData/*0:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__get_n_bits;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_7__get_backdoor;
    QData/*63:0*/ __VlefCall_6__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk244__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk245__DOT__cb;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk247__DOT__cb;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ fmsb;
    IData/*31:0*/ rmwbits;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    IData/*31:0*/ rm_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39> cbs;
    {
        status = 0U;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        fmsb = 0U;
        rmwbits = 0U;
        segsiz = 0U;
        segn = 0U;
        rm_path = 0U;
        cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39, vlSymsp, 
                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__write_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 577)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__28__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__28__severity = 2U;
            __Vfunc_uvm_report_enabled__28__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__29__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__28__verbosity, (IData)(__Vfunc_uvm_report_enabled__28__severity), this->__Vfunc_uvm_report_enabled__28__id, __Vtask_uvm_report_enabled__30__Vfuncout);
            __Vfunc_uvm_report_enabled__28____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__30__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__28____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::write() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x00000244U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 586)->__VnoInFunc_get_block(vlSymsp, unnamedblk244__DOT__blk);
            VL_NULL_CHECK(unnamedblk244__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 587)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 592)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            this->__Vfunc_uvm_report_enabled__36__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__36__severity = 1U;
            __Vfunc_uvm_report_enabled__36__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__37__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__36__verbosity, (IData)(__Vfunc_uvm_report_enabled__36__severity), this->__Vfunc_uvm_report_enabled__36__id, __Vtask_uvm_report_enabled__38__Vfuncout);
            __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__38__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
                __Vtask_uvm_report_warning__41__line = 0x00000253U;
                this->__Vtask_uvm_report_warning__41__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__41__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__41__message
                              ,"Writing value 'h%h that is greater than field \"%s\" size (%0d bits)",3
                              , '#',64,value, 'S',&(__VlefCall_3__get_full_name)
                              , '#',32,__VlefCall_4__get_n_bits);
                this->__Vtask_uvm_report_warning__41__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__42__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__41__id, this->__Vtask_uvm_report_warning__41__message, __Vtask_uvm_report_warning__41__verbosity, this->__Vtask_uvm_report_warning__41__filename, __Vtask_uvm_report_warning__41__line);
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
        }
        tmp = 0ULL;
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 601)->__VnoInFunc_first(vlSymsp, unnamedblk245__DOT__cb);
        while ((VlNull{} != unnamedblk245__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk245__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 603)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk245__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 604)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk245__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 605)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 602)->__VnoInFunc_next(vlSymsp, unnamedblk245__DOT__cb);
        }
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 608)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        segsiz = (__VlefCall_5__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__49__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__49__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 610)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_6__get_offset_in_memory);
        segoff = (__VlefCall_6__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        rm_path = 3U;
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 614)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_7__get_backdoor);
        if ((VlNull{} != __VlefCall_7__get_backdoor)) {
            rm_path = 1U;
        }
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_8__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                               + __VlefCall_8__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 625)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__53__status, segoff, __Vtask_read__53__value, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__53__status;
            tmp = __Vtask_read__53__value;
            if (((0U != st) & (2U != st))) {
                this->__Vfunc_uvm_report_enabled__54__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__54__severity = 2U;
                __Vfunc_uvm_report_enabled__54__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__55__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__54__verbosity, (IData)(__Vfunc_uvm_report_enabled__54__severity), this->__Vfunc_uvm_report_enabled__54__id, __Vtask_uvm_report_enabled__56__Vfuncout);
                __Vfunc_uvm_report_enabled__54____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__56__Vfuncout;
                __VlefCall_9__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__54____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_9__uvm_report_enabled) {
                    VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 629)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Unable to read LSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                                                                , 'S',&(__VlefCall_10__get_full_name)
                                                                                , '#',64,segoff
                                                                                , 'S',&(__VlefCall_11__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x00000275U);
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 631)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
        }
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
        fmsb = ((rmwbits + __VlefCall_12__get_n_bits) 
                - (IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((IData)(1U) + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 643)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__62__status, 
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL), __Vtask_read__62__value, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
                st = __Vtask_read__62__status;
                tmp = __Vtask_read__62__value;
                if (((0U != st) & (2U != st))) {
                    this->__Vfunc_uvm_report_enabled__63__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__63__severity = 2U;
                    __Vfunc_uvm_report_enabled__63__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__64__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__63__verbosity, (IData)(__Vfunc_uvm_report_enabled__63__severity), this->__Vfunc_uvm_report_enabled__63__id, __Vtask_uvm_report_enabled__65__Vfuncout);
                    __Vfunc_uvm_report_enabled__63____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__65__Vfuncout;
                    __VlefCall_13__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__63____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_13__uvm_report_enabled) {
                        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 648)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Unable to read MSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                                                                , 'S',&(__VlefCall_14__get_full_name)
                                                                                , '#',64,
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL)
                                                                                , 'S',&(__VlefCall_15__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x00000288U);
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 650)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                }
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (IData)(1U)), segsiz)));
        }
        tmp = value;
        unnamedblk1_1__DOT____Vrepeat0 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
            co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 660)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__70__status, segoff, tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_write__70__status;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 668)->__VnoInFunc_first(vlSymsp, unnamedblk247__DOT__cb);
        while ((VlNull{} != unnamedblk247__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk247__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 670)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk247__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 671)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk247__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 672)->__VnoInFunc_post_write(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 669)->__VnoInFunc_next(vlSymsp, unnamedblk247__DOT__cb);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 675)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__76__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__76__severity = 0U;
        __Vfunc_uvm_report_enabled__76__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__77__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__76__verbosity, (IData)(__Vfunc_uvm_report_enabled__76__severity), this->__Vfunc_uvm_report_enabled__76__id, __Vtask_uvm_report_enabled__78__Vfuncout);
        __Vfunc_uvm_report_enabled__76____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__78__Vfuncout;
        __VlefCall_16__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__76____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_16__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
            __Vtask_uvm_report_info__80__line = 0x000002a9U;
            this->__Vtask_uvm_report_info__80__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__80__verbosity = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__80__message
                          ,"Wrote virtual field \"%s\"[%0d] via %s with: 'h%h",4
                          , 'S',&(__VlefCall_17__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__80__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__81__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__81__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__80__id, this->__Vtask_uvm_report_info__80__message, __Vtask_uvm_report_info__80__verbosity, this->__Vtask_uvm_report_info__80__filename, __Vtask_uvm_report_info__80__line);
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
    __Vfunc_uvm_report_enabled__85__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
    __Vfunc_uvm_report_enabled__85__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__85____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__86__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__87__Vfuncout;
    __Vtask_uvm_report_enabled__87__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__98__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__98__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__101__status;
    __Vtask_read__101__status = 0;
    QData/*63:0*/ __Vtask_read__101__value;
    __Vtask_read__101__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__108__verbosity;
    __Vfunc_uvm_report_enabled__108__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__108__severity;
    __Vfunc_uvm_report_enabled__108__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__109__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__110__Vfuncout;
    __Vtask_uvm_report_enabled__110__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__112__verbosity;
    __Vtask_uvm_report_info__112__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__112__line;
    __Vtask_uvm_report_info__112__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__113__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    QData/*63:0*/ __VlefCall_3__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk248__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk249__DOT__cb;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk250__DOT__cb;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ lsb;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39> cbs;
    {
        status = 0U;
        value = 0ULL;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        lsb = 0U;
        segsiz = 0U;
        segn = 0U;
        cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39, vlSymsp, 
                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__read_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 713)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__85__severity = 2U;
            __Vfunc_uvm_report_enabled__85__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__86__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __Vtask_uvm_report_enabled__87__Vfuncout);
            __Vfunc_uvm_report_enabled__85____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__87__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__85____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::read() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x000002ccU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 722)->__VnoInFunc_get_block(vlSymsp, unnamedblk248__DOT__blk);
            VL_NULL_CHECK(unnamedblk248__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 723)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 728)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 733)->__VnoInFunc_first(vlSymsp, unnamedblk249__DOT__cb);
        while ((VlNull{} != unnamedblk249__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk249__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 735)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk249__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 736)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk249__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 737)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 734)->__VnoInFunc_next(vlSymsp, unnamedblk249__DOT__cb);
        }
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 740)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        segsiz = (__VlefCall_2__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__98__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__98__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 742)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_3__get_offset_in_memory);
        segoff = (__VlefCall_3__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((lsb 
                                               + __VlefCall_4__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        segoff = (segoff + ((QData)((IData)(segn)) 
                            - 1ULL));
        unnamedblk1_2__DOT____Vrepeat1 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 753)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__101__status, segoff, __Vtask_read__101__value, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__101__status;
            tmp = __Vtask_read__101__value;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                              - (IData)(1U));
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                          - 1ULL));
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 767)->__VnoInFunc_first(vlSymsp, unnamedblk250__DOT__cb);
        while ((VlNull{} != unnamedblk250__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk250__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 769)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk250__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 770)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk250__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 771)->__VnoInFunc_post_read(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 768)->__VnoInFunc_next(vlSymsp, unnamedblk250__DOT__cb);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 774)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__108__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__108__severity = 0U;
        __Vfunc_uvm_report_enabled__108__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__109__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__109__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__108__verbosity, (IData)(__Vfunc_uvm_report_enabled__108__severity), this->__Vfunc_uvm_report_enabled__108__id, __Vtask_uvm_report_enabled__110__Vfuncout);
        __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__110__Vfuncout;
        __VlefCall_6__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_6__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            __Vtask_uvm_report_info__112__line = 0x0000030bU;
            this->__Vtask_uvm_report_info__112__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__112__verbosity = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__112__message
                          ,"Read virtual field \"%s\"[%0d] via %s: 'h%h",4
                          , 'S',&(__VlefCall_7__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__112__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__113__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__113__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__112__id, this->__Vtask_uvm_report_info__112__message, __Vtask_uvm_report_info__112__verbosity, this->__Vtask_uvm_report_info__112__filename, __Vtask_uvm_report_info__112__line);
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__116__verbosity;
    __Vfunc_uvm_report_enabled__116__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__116__severity;
    __Vfunc_uvm_report_enabled__116__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__116____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__116____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__117__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__118__Vfuncout;
    __Vtask_uvm_report_enabled__118__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__122__verbosity;
    __Vfunc_uvm_report_enabled__122__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__122__severity;
    __Vfunc_uvm_report_enabled__122__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__122____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__122____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__123__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__124__Vfuncout;
    __Vtask_uvm_report_enabled__124__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__127__verbosity;
    __Vtask_uvm_report_warning__127__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__127__line;
    __Vtask_uvm_report_warning__127__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__128__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__131__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__131__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__134__status;
    __Vtask_peek__134__status = 0;
    QData/*63:0*/ __Vtask_peek__134__value;
    __Vtask_peek__134__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__135__verbosity;
    __Vfunc_uvm_report_enabled__135__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__135__severity;
    __Vfunc_uvm_report_enabled__135__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__135____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__135____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__136__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__137__Vfuncout;
    __Vtask_uvm_report_enabled__137__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__143__status;
    __Vtask_peek__143__status = 0;
    QData/*63:0*/ __Vtask_peek__143__value;
    __Vtask_peek__143__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__144__verbosity;
    __Vfunc_uvm_report_enabled__144__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__144__severity;
    __Vfunc_uvm_report_enabled__144__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__144____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__144____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__145__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__146__Vfuncout;
    __Vtask_uvm_report_enabled__146__Vfuncout = 0;
    IData/*31:0*/ __Vtask_poke__151__status;
    __Vtask_poke__151__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__153__verbosity;
    __Vfunc_uvm_report_enabled__153__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__153__severity;
    __Vfunc_uvm_report_enabled__153__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__153____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__153____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__154__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__155__Vfuncout;
    __Vtask_uvm_report_enabled__155__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__157__verbosity;
    __Vtask_uvm_report_info__157__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__157__line;
    __Vtask_uvm_report_info__157__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__158__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_16__get_full_name;
    CData/*0:0*/ __VlefCall_15__uvm_report_enabled;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    CData/*0:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bits;
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_full_name;
    CData/*0:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    QData/*63:0*/ __VlefCall_6__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ fmsb;
    IData/*31:0*/ rmwbits;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        fmsb = 0U;
        rmwbits = 0U;
        segsiz = 0U;
        segn = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 807)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__116__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__116__severity = 2U;
            __Vfunc_uvm_report_enabled__116__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__117__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__116__verbosity, (IData)(__Vfunc_uvm_report_enabled__116__severity), this->__Vfunc_uvm_report_enabled__116__id, __Vtask_uvm_report_enabled__118__Vfuncout);
            __Vfunc_uvm_report_enabled__116____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__118__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__116____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::poke() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x0000032aU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 817)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            this->__Vfunc_uvm_report_enabled__122__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__122__severity = 1U;
            __Vfunc_uvm_report_enabled__122__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__123__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__123__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__122__verbosity, (IData)(__Vfunc_uvm_report_enabled__122__severity), this->__Vfunc_uvm_report_enabled__122__id, __Vtask_uvm_report_enabled__124__Vfuncout);
            __Vfunc_uvm_report_enabled__122____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__124__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__122____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
                __Vtask_uvm_report_warning__127__line = 0x00000334U;
                this->__Vtask_uvm_report_warning__127__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__127__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__127__message
                              ,"Writing value 'h%h that is greater than field \"%s\" size (%0d bits)",3
                              , '#',64,value, 'S',&(__VlefCall_3__get_full_name)
                              , '#',32,__VlefCall_4__get_n_bits);
                this->__Vtask_uvm_report_warning__127__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__128__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__128__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__127__id, this->__Vtask_uvm_report_warning__127__message, __Vtask_uvm_report_warning__127__verbosity, this->__Vtask_uvm_report_warning__127__filename, __Vtask_uvm_report_warning__127__line);
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
        }
        tmp = 0ULL;
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 825)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        segsiz = (__VlefCall_5__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__131__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__131__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 827)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_6__get_offset_in_memory);
        segoff = (__VlefCall_6__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                               + __VlefCall_7__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 838)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__134__status, segoff, __Vtask_peek__134__value, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__134__status;
            tmp = __Vtask_peek__134__value;
            if (((0U != st) & (2U != st))) {
                this->__Vfunc_uvm_report_enabled__135__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__135__severity = 2U;
                __Vfunc_uvm_report_enabled__135__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__136__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__136__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__135__verbosity, (IData)(__Vfunc_uvm_report_enabled__135__severity), this->__Vfunc_uvm_report_enabled__135__id, __Vtask_uvm_report_enabled__137__Vfuncout);
                __Vfunc_uvm_report_enabled__135____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__137__Vfuncout;
                __VlefCall_8__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__135____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_8__uvm_report_enabled) {
                    VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 842)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Unable to read LSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                                                                , 'S',&(__VlefCall_9__get_full_name)
                                                                                , '#',64,segoff
                                                                                , 'S',&(__VlefCall_10__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x0000034aU);
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 844)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
        }
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_11__get_n_bits);
        fmsb = ((rmwbits + __VlefCall_11__get_n_bits) 
                - (IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((IData)(1U) + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 856)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__143__status, 
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL), __Vtask_peek__143__value, ""s, parent, extension, fname, lineno);
                st = __Vtask_peek__143__status;
                tmp = __Vtask_peek__143__value;
                if (((0U != st) & (2U != st))) {
                    this->__Vfunc_uvm_report_enabled__144__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__144__severity = 2U;
                    __Vfunc_uvm_report_enabled__144__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__145__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__145__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__144__verbosity, (IData)(__Vfunc_uvm_report_enabled__144__severity), this->__Vfunc_uvm_report_enabled__144__id, __Vtask_uvm_report_enabled__146__Vfuncout);
                    __Vfunc_uvm_report_enabled__144____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__146__Vfuncout;
                    __VlefCall_12__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__144____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_12__uvm_report_enabled) {
                        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 861)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Unable to read MSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                                                                , 'S',&(__VlefCall_13__get_full_name)
                                                                                , '#',64,
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL)
                                                                                , 'S',&(__VlefCall_14__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x0000035dU);
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 863)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                }
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (IData)(1U)), segsiz)));
        }
        tmp = value;
        unnamedblk1_3__DOT____Vrepeat2 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
            VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 873)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__151__status, segoff, tmp, ""s, parent, extension, fname, lineno);
            st = __Vtask_poke__151__status;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                              - (IData)(1U));
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 880)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__153__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__153__severity = 0U;
        __Vfunc_uvm_report_enabled__153__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__154__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__154__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__153__verbosity, (IData)(__Vfunc_uvm_report_enabled__153__severity), this->__Vfunc_uvm_report_enabled__153__id, __Vtask_uvm_report_enabled__155__Vfuncout);
        __Vfunc_uvm_report_enabled__153____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__155__Vfuncout;
        __VlefCall_15__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__153____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_15__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
            __Vtask_uvm_report_info__157__line = 0x00000373U;
            this->__Vtask_uvm_report_info__157__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__157__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__157__message
                          ,"Wrote virtual field \"%s\"[%0d] with: 'h%h",3
                          , 'S',&(__VlefCall_16__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__157__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__158__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__158__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__157__id, this->__Vtask_uvm_report_info__157__message, __Vtask_uvm_report_info__157__verbosity, this->__Vtask_uvm_report_info__157__filename, __Vtask_uvm_report_info__157__line);
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__161__verbosity;
    __Vfunc_uvm_report_enabled__161__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__161__severity;
    __Vfunc_uvm_report_enabled__161__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__161____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__161____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__162__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__163__Vfuncout;
    __Vtask_uvm_report_enabled__163__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__168__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__168__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__171__status;
    __Vtask_peek__171__status = 0;
    QData/*63:0*/ __Vtask_peek__171__value;
    __Vtask_peek__171__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__174__verbosity;
    __Vfunc_uvm_report_enabled__174__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__174__severity;
    __Vfunc_uvm_report_enabled__174__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__174____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__174____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__175__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__176__Vfuncout;
    __Vtask_uvm_report_enabled__176__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__178__verbosity;
    __Vtask_uvm_report_info__178__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__178__line;
    __Vtask_uvm_report_info__178__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__179__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    QData/*63:0*/ __VlefCall_3__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk1_4__DOT____Vrepeat3 = 0;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ lsb;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value = 0ULL;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        lsb = 0U;
        segsiz = 0U;
        segn = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 908)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__161__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__161__severity = 2U;
            __Vfunc_uvm_report_enabled__161__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__162__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__162__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__161__verbosity, (IData)(__Vfunc_uvm_report_enabled__161__severity), this->__Vfunc_uvm_report_enabled__161__id, __Vtask_uvm_report_enabled__163__Vfuncout);
            __Vfunc_uvm_report_enabled__161____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__163__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__161____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::peek() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s, 0x0000038fU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 918)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 922)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        segsiz = (__VlefCall_2__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__168__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__168__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 924)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_3__get_offset_in_memory);
        segoff = (__VlefCall_3__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((lsb 
                                               + __VlefCall_4__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        segoff = (segoff + ((QData)((IData)(segn)) 
                            - 1ULL));
        unnamedblk1_4__DOT____Vrepeat3 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_4__DOT____Vrepeat3)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 935)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__171__status, segoff, __Vtask_peek__171__value, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__171__status;
            tmp = __Vtask_peek__171__value;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_4__DOT____Vrepeat3 = (unnamedblk1_4__DOT____Vrepeat3 
                                              - (IData)(1U));
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                          - 1ULL));
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 949)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__174__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__174__severity = 0U;
        __Vfunc_uvm_report_enabled__174__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__175__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__175__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__174__verbosity, (IData)(__Vfunc_uvm_report_enabled__174__severity), this->__Vfunc_uvm_report_enabled__174__id, __Vtask_uvm_report_enabled__176__Vfuncout);
        __Vfunc_uvm_report_enabled__174____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__176__Vfuncout;
        __VlefCall_6__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__174____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_6__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            __Vtask_uvm_report_info__178__line = 0x000003b7U;
            this->__Vtask_uvm_report_info__178__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__178__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__178__message
                          ,"Peeked virtual field \"%s\"[%0d]: 'h%h",3
                          , 'S',&(__VlefCall_7__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__178__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__179__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__179__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__178__id, this->__Vtask_uvm_report_info__178__message, __Vtask_uvm_report_info__178__verbosity, this->__Vtask_uvm_report_info__178__filename, __Vtask_uvm_report_info__178__line);
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__convert2string;
    std::string __VlefCall_0__get_type_name;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 960)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg_field.svh", 960)->__VnoInFunc_print_generic(vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__convert2string), 0x2eU);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__get_lsb_pos_in_register;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    IData/*31:0*/ __VlefCall_1__get_lsb_pos_in_register;
    std::string __VlefCall_0__get_name;
    convert2string__Vfuncrtn = ""s;
    std::string res_str;
    res_str = ""s;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_1__get_lsb_pos_in_register);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_3__get_lsb_pos_in_register);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s[%0d-%0d]"s,5, 'M',vlSymsp->name(),"uvm_pkg.uvm_vreg_field.convert2string", 'T',-9
                  , 'S',&(__VlefCall_0__get_name), '#',32,
                  ((__VlefCall_1__get_lsb_pos_in_register 
                    + __VlefCall_2__get_n_bits) - (IData)(1U))
                  , '#',32,__VlefCall_3__get_lsb_pos_in_register);
    if (this->__PVT__read_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__fname)
                          , '~',32,this->__PVT__lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__write_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__fname)
                          , '~',32,this->__PVT__lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lsb = 0;
    __PVT__size = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field::~\n"); );
}
