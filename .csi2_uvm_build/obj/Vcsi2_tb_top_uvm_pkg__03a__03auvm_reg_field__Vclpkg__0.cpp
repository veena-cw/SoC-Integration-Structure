// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi46> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi46__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_max_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_predefine_policies__3__Vfuncout;
    __Vfunc_m_predefine_policies__3__Vfuncout = 0;
    // Body
    {
        define_access__Vfuncrtn = 0U;
        if ((1U & (~ (IData)(this->__PVT__m_predefined)))) {
            this->__VnoInFunc_m_predefine_policies(vlSymsp, __Vfunc_m_predefine_policies__3__Vfuncout);
            this->__PVT__m_predefined = __Vfunc_m_predefine_policies__3__Vfuncout;
        }
        name = VL_TOUPPER_NN(name);
        if (this->__PVT__m_policy_names.exists(name)) {
            define_access__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__PVT__m_policy_names.atWrite(name) = 1U;
        define_access__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies\n"); );
    // Locals
    CData/*0:0*/ __Vtask_define_access__4__Vfuncout;
    __Vtask_define_access__4__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__5__Vfuncout;
    __Vtask_define_access__5__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__6__Vfuncout;
    __Vtask_define_access__6__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__7__Vfuncout;
    __Vtask_define_access__7__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__8__Vfuncout;
    __Vtask_define_access__8__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__9__Vfuncout;
    __Vtask_define_access__9__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__10__Vfuncout;
    __Vtask_define_access__10__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__11__Vfuncout;
    __Vtask_define_access__11__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__12__Vfuncout;
    __Vtask_define_access__12__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__13__Vfuncout;
    __Vtask_define_access__13__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__14__Vfuncout;
    __Vtask_define_access__14__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__15__Vfuncout;
    __Vtask_define_access__15__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__16__Vfuncout;
    __Vtask_define_access__16__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__17__Vfuncout;
    __Vtask_define_access__17__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__18__Vfuncout;
    __Vtask_define_access__18__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__19__Vfuncout;
    __Vtask_define_access__19__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__20__Vfuncout;
    __Vtask_define_access__20__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__21__Vfuncout;
    __Vtask_define_access__21__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__22__Vfuncout;
    __Vtask_define_access__22__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__23__Vfuncout;
    __Vtask_define_access__23__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__24__Vfuncout;
    __Vtask_define_access__24__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__25__Vfuncout;
    __Vtask_define_access__25__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__26__Vfuncout;
    __Vtask_define_access__26__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__27__Vfuncout;
    __Vtask_define_access__27__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__28__Vfuncout;
    __Vtask_define_access__28__Vfuncout = 0;
    // Body
    {
        m_predefine_policies__Vfuncrtn = 0U;
        if (this->__PVT__m_predefined) {
            m_predefine_policies__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__PVT__m_predefined = 1U;
        this->__VnoInFunc_define_access(vlSymsp, "RO"s, __Vtask_define_access__4__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RW"s, __Vtask_define_access__5__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RC"s, __Vtask_define_access__6__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RS"s, __Vtask_define_access__7__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WRC"s, __Vtask_define_access__8__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WRS"s, __Vtask_define_access__9__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WC"s, __Vtask_define_access__10__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WS"s, __Vtask_define_access__11__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WSRC"s, __Vtask_define_access__12__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WCRS"s, __Vtask_define_access__13__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1C"s, __Vtask_define_access__14__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1S"s, __Vtask_define_access__15__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1T"s, __Vtask_define_access__16__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0C"s, __Vtask_define_access__17__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0S"s, __Vtask_define_access__18__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0T"s, __Vtask_define_access__19__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1SRC"s, __Vtask_define_access__20__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1CRS"s, __Vtask_define_access__21__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0SRC"s, __Vtask_define_access__22__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0CRS"s, __Vtask_define_access__23__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WO"s, __Vtask_define_access__24__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WOC"s, __Vtask_define_access__25__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WOS"s, __Vtask_define_access__26__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1"s, __Vtask_define_access__27__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WO1"s, __Vtask_define_access__28__Vfuncout);
        m_predefine_policies__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi46> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi46__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, "uvm_reg_field"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 72)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_field"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 72)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    /*super.new*/;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__value, 0x0000000000000040ULL, 
                                                                        "value", 0ULL, 0ULL);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__PVT__m_parent = parent;
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
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Field \"%s\" cannot have 0 bits",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x00000323U);
        }
        size = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_volatile = __SYM__volatile;
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_lsb = lsb_pos;
    this->__PVT__m_cover_on = 0U;
    this->__PVT__m_written = 0U;
    this->__PVT__m_check = ((IData)(__SYM__volatile)
                             ? 0U : 1U);
    this->__PVT__m_individually_accessible = individually_accessible;
    if (has_reset) {
        this->__VnoInFunc_set_reset(vlSymsp, reset, "HARD"s);
    } else {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_HW_RESET_TEST"s, 1U, VlNull{});
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 822)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this});
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        this->__Vfunc_uvm_report_enabled__15__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__15__severity = 2U;
        __Vfunc_uvm_report_enabled__15__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__16__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), this->__Vfunc_uvm_report_enabled__15__id, __Vtask_uvm_report_enabled__17__Vfuncout);
        __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__17__Vfuncout;
        __VlefCall_3__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_3__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Access policy '"s, access), "' for field '"s), __VlefCall_4__get_full_name), "' is not defined. Setting to RW"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x0000033aU);
        }
        this->__PVT__m_access = "RW"s;
    }
    if ((size > vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size 
            = size;
    }
    if (((((((((((((((((((("RO"s == access) || ("RC"s 
                                                == access)) 
                         || ("RS"s == access)) || ("WC"s 
                                                   == access)) 
                       || ("WS"s == access)) || ("W1C"s 
                                                 == access)) 
                     || ("W1S"s == access)) || ("W1T"s 
                                                == access)) 
                   || ("W0C"s == access)) || ("W0S"s 
                                              == access)) 
                 || ("W0T"s == access)) || ("W1SRC"s 
                                            == access)) 
               || ("W1CRS"s == access)) || ("W0SRC"s 
                                            == access)) 
             || ("W0CRS"s == access)) || ("WSRC"s == access)) 
           || ("WCRS"s == access)) || ("WOC"s == access)) 
         || ("WOS"s == access))) {
        is_rand = 0U;
    }
    if ((1U & (~ (IData)(is_rand)))) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(0U) = 0U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 858)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__m_parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos\n"); );
    // Body
    get_lsb_pos__Vfuncrtn = this->__PVT__m_lsb;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string acc;
    {
        is_known_access__Vfuncrtn = 0U;
        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, acc);
        if (((((((((((((((((((((((((("RO"s == acc) 
                                    || ("RW"s == acc)) 
                                   || ("RC"s == acc)) 
                                  || ("RS"s == acc)) 
                                 || ("WC"s == acc)) 
                                || ("WS"s == acc)) 
                               || ("W1C"s == acc)) 
                              || ("W1S"s == acc)) || 
                             ("W1T"s == acc)) || ("W0C"s 
                                                  == acc)) 
                           || ("W0S"s == acc)) || ("W0T"s 
                                                   == acc)) 
                         || ("WRC"s == acc)) || ("WRS"s 
                                                 == acc)) 
                       || ("W1SRC"s == acc)) || ("W1CRS"s 
                                                 == acc)) 
                     || ("W0SRC"s == acc)) || ("W0CRS"s 
                                               == acc)) 
                   || ("WSRC"s == acc)) || ("WCRS"s 
                                            == acc)) 
                 || ("WO"s == acc)) || ("WOC"s == acc)) 
               || ("WOS"s == acc)) || ("W1"s == acc)) 
             || ("WO1"s == acc))) {
            is_known_access__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        is_known_access__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
    __Vfunc_uvm_report_enabled__25__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
    __Vfunc_uvm_report_enabled__25__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__25____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__27__Vfuncout;
    __Vtask_uvm_report_enabled__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__verbosity;
    __Vfunc_uvm_report_enabled__32__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__32__severity;
    __Vfunc_uvm_report_enabled__32__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__32____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__33__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__34__Vfuncout;
    __Vtask_uvm_report_enabled__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__verbosity;
    __Vfunc_uvm_report_enabled__38__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__38__severity;
    __Vfunc_uvm_report_enabled__38__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__38____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__39__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__40__Vfuncout;
    __Vtask_uvm_report_enabled__40__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_12__get_rights;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_name;
    std::string __VlefCall_9__get_full_name;
    CData/*0:0*/ __VlefCall_8__uvm_report_enabled;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_access;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_0__backdoor;
    std::string __VCase_h020138d7__0;
    {
        get_access__Vfuncrtn = ""s;
        get_access__Vfuncrtn = this->__PVT__m_access;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_0__backdoor);
        if ((map == __VlefCall_0__backdoor)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 913)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VCase_h020138d7__0);
        if ((1U & (~ ("RW"s == __VCase_h020138d7__0)))) {
            if (("RO"s == __VCase_h020138d7__0)) {
                if (((((((((((("RW"s == get_access__Vfuncrtn) 
                              || ("RO"s == get_access__Vfuncrtn)) 
                             || ("WC"s == get_access__Vfuncrtn)) 
                            || ("WS"s == get_access__Vfuncrtn)) 
                           || ("W1C"s == get_access__Vfuncrtn)) 
                          || ("W1S"s == get_access__Vfuncrtn)) 
                         || ("W1T"s == get_access__Vfuncrtn)) 
                        || ("W0C"s == get_access__Vfuncrtn)) 
                       || ("W0S"s == get_access__Vfuncrtn)) 
                      || ("W0T"s == get_access__Vfuncrtn)) 
                     || ("W1"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "RO"s;
                } else if (((((("RC"s == get_access__Vfuncrtn) 
                               || ("WRC"s == get_access__Vfuncrtn)) 
                              || ("W1SRC"s == get_access__Vfuncrtn)) 
                             || ("W0SRC"s == get_access__Vfuncrtn)) 
                            || ("WSRC"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "RC"s;
                } else if (((((("RS"s == get_access__Vfuncrtn) 
                               || ("WRS"s == get_access__Vfuncrtn)) 
                              || ("W1CRS"s == get_access__Vfuncrtn)) 
                             || ("W0CRS"s == get_access__Vfuncrtn)) 
                            || ("WCRS"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "RS"s;
                } else if ((((("WO"s == get_access__Vfuncrtn) 
                              || ("WOC"s == get_access__Vfuncrtn)) 
                             || ("WOS"s == get_access__Vfuncrtn)) 
                            || ("WO1"s == get_access__Vfuncrtn))) {
                    this->__Vfunc_uvm_report_enabled__25__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__25__severity = 2U;
                    __Vfunc_uvm_report_enabled__25__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__26__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), this->__Vfunc_uvm_report_enabled__25__id, __Vtask_uvm_report_enabled__27__Vfuncout);
                    __Vfunc_uvm_report_enabled__25____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__27__Vfuncout;
                    __VlefCall_1__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__25____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_1__uvm_report_enabled) {
                        this->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __VlefCall_2__get_access);
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 934)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("%s field \"%s\" restricted to RO in map \"%s\"",3
                                                                                , 'S',&(__VlefCall_2__get_access)
                                                                                , 'S',&(__VlefCall_3__get_name)
                                                                                , 'S',&(__VlefCall_4__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x000003a6U);
                    }
                }
            } else if (("WO"s == __VCase_h020138d7__0)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("WO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "WO"s;
                } else {
                    this->__Vfunc_uvm_report_enabled__32__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__32__severity = 2U;
                    __Vfunc_uvm_report_enabled__32__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__33__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__32__verbosity, (IData)(__Vfunc_uvm_report_enabled__32__severity), this->__Vfunc_uvm_report_enabled__32__id, __Vtask_uvm_report_enabled__34__Vfuncout);
                    __Vfunc_uvm_report_enabled__32____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__34__Vfuncout;
                    __VlefCall_5__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__32____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_5__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 946)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(get_access__Vfuncrtn, " field '"s), __VlefCall_6__get_full_name), "' restricted to WO in map '"s), __VlefCall_7__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x000003b2U);
                    }
                }
            } else {
                this->__Vfunc_uvm_report_enabled__38__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__38__severity = 2U;
                __Vfunc_uvm_report_enabled__38__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__39__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__38__verbosity, (IData)(__Vfunc_uvm_report_enabled__38__severity), this->__Vfunc_uvm_report_enabled__38__id, __Vtask_uvm_report_enabled__40__Vfuncout);
                __Vfunc_uvm_report_enabled__38____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__40__Vfuncout;
                __VlefCall_8__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__38____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_8__uvm_report_enabled) {
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 955)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                    VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 955)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 955)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VlefCall_12__get_rights);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_9__get_full_name), "' containing field '"s), __VlefCall_10__get_name), "' is mapped in map '"s), __VlefCall_11__get_full_name), "' with unknown access right '"s), __VlefCall_12__get_rights), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x000003bbU);
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_access(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__46__verbosity;
    __Vfunc_uvm_report_enabled__46__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__46__severity;
    __Vfunc_uvm_report_enabled__46__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__46____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__46____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__48__Vfuncout;
    __Vtask_uvm_report_enabled__48__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    set_access__Vfuncrtn = this->__PVT__m_access;
    this->__PVT__m_access = VL_TOUPPER_NN(mode);
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        this->__Vfunc_uvm_report_enabled__46__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__46__severity = 2U;
        __Vfunc_uvm_report_enabled__46__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__47__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__46__verbosity, (IData)(__Vfunc_uvm_report_enabled__46__severity), this->__Vfunc_uvm_report_enabled__46__id, __Vtask_uvm_report_enabled__48__Vfuncout);
        __Vfunc_uvm_report_enabled__46____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__48__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__46____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Access policy '"s, this->__PVT__m_access), "' is not a defined field access policy"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x000003c7U);
        }
        this->__PVT__m_access = set_access__Vfuncrtn;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_volatility(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_volatility\n"); );
    // Body
    this->__PVT__m_volatile = __SYM__volatile;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile\n"); );
    // Body
    is_volatile__Vfuncrtn = this->__PVT__m_volatile;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VCase_h3f9d239a__0;
    QData/*63:0*/ mask;
    XpredictX__Vfuncrtn = 0ULL;
    mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
            - 1ULL);
    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __VCase_h3f9d239a__0);
    XpredictX__Vfuncrtn = ((((((((("RO"s == __VCase_h3f9d239a__0) 
                                  | ("RW"s == __VCase_h3f9d239a__0)) 
                                 | ("RC"s == __VCase_h3f9d239a__0)) 
                                | ("RS"s == __VCase_h3f9d239a__0)) 
                               | ("WC"s == __VCase_h3f9d239a__0)) 
                              | ("WS"s == __VCase_h3f9d239a__0)) 
                             | ("WRC"s == __VCase_h3f9d239a__0)) 
                            | ("WRS"s == __VCase_h3f9d239a__0))
                            ? (("RO"s == __VCase_h3f9d239a__0)
                                ? cur_val : (("RW"s 
                                              == __VCase_h3f9d239a__0)
                                              ? wr_val
                                              : (("RC"s 
                                                  == __VCase_h3f9d239a__0)
                                                  ? cur_val
                                                  : 
                                                 (("RS"s 
                                                   == __VCase_h3f9d239a__0)
                                                   ? cur_val
                                                   : 
                                                  (("WC"s 
                                                    == __VCase_h3f9d239a__0)
                                                    ? 0ULL
                                                    : 
                                                   (("WS"s 
                                                     == __VCase_h3f9d239a__0)
                                                     ? mask
                                                     : wr_val))))))
                            : ((((((((("WSRC"s == __VCase_h3f9d239a__0) 
                                      | ("WCRS"s == __VCase_h3f9d239a__0)) 
                                     | ("W1C"s == __VCase_h3f9d239a__0)) 
                                    | ("W1S"s == __VCase_h3f9d239a__0)) 
                                   | ("W1T"s == __VCase_h3f9d239a__0)) 
                                  | ("W0C"s == __VCase_h3f9d239a__0)) 
                                 | ("W0S"s == __VCase_h3f9d239a__0)) 
                                | ("W0T"s == __VCase_h3f9d239a__0))
                                ? (("WSRC"s == __VCase_h3f9d239a__0)
                                    ? mask : (("WCRS"s 
                                               == __VCase_h3f9d239a__0)
                                               ? 0ULL
                                               : (("W1C"s 
                                                   == __VCase_h3f9d239a__0)
                                                   ? 
                                                  (cur_val 
                                                   & (~ wr_val))
                                                   : 
                                                  (("W1S"s 
                                                    == __VCase_h3f9d239a__0)
                                                    ? 
                                                   (cur_val 
                                                    | wr_val)
                                                    : 
                                                   (("W1T"s 
                                                     == __VCase_h3f9d239a__0)
                                                     ? 
                                                    (cur_val 
                                                     ^ wr_val)
                                                     : 
                                                    (("W0C"s 
                                                      == __VCase_h3f9d239a__0)
                                                      ? 
                                                     (cur_val 
                                                      & wr_val)
                                                      : 
                                                     (("W0S"s 
                                                       == __VCase_h3f9d239a__0)
                                                       ? 
                                                      (cur_val 
                                                       | ((~ wr_val) 
                                                          & mask))
                                                       : 
                                                      (cur_val 
                                                       ^ 
                                                       ((~ wr_val) 
                                                        & mask)))))))))
                                : ((((((((("W1SRC"s 
                                           == __VCase_h3f9d239a__0) 
                                          | ("W1CRS"s 
                                             == __VCase_h3f9d239a__0)) 
                                         | ("W0SRC"s 
                                            == __VCase_h3f9d239a__0)) 
                                        | ("W0CRS"s 
                                           == __VCase_h3f9d239a__0)) 
                                       | ("WO"s == __VCase_h3f9d239a__0)) 
                                      | ("WOC"s == __VCase_h3f9d239a__0)) 
                                     | ("WOS"s == __VCase_h3f9d239a__0)) 
                                    | ("W1"s == __VCase_h3f9d239a__0))
                                    ? (("W1SRC"s == __VCase_h3f9d239a__0)
                                        ? (cur_val 
                                           | wr_val)
                                        : (("W1CRS"s 
                                            == __VCase_h3f9d239a__0)
                                            ? (cur_val 
                                               & (~ wr_val))
                                            : (("W0SRC"s 
                                                == __VCase_h3f9d239a__0)
                                                ? (cur_val 
                                                   | ((~ wr_val) 
                                                      & mask))
                                                : (
                                                   ("W0CRS"s 
                                                    == __VCase_h3f9d239a__0)
                                                    ? 
                                                   (cur_val 
                                                    & wr_val)
                                                    : 
                                                   (("WO"s 
                                                     == __VCase_h3f9d239a__0)
                                                     ? wr_val
                                                     : 
                                                    (("WOC"s 
                                                      == __VCase_h3f9d239a__0)
                                                      ? 0ULL
                                                      : 
                                                     (("WOS"s 
                                                       == __VCase_h3f9d239a__0)
                                                       ? mask
                                                       : 
                                                      ((IData)(this->__PVT__m_written)
                                                        ? cur_val
                                                        : wr_val))))))))
                                    : (("WO1"s == __VCase_h3f9d239a__0)
                                        ? ((IData)(this->__PVT__m_written)
                                            ? cur_val
                                            : wr_val)
                                        : wr_val))));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_predict(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_predict\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    predict__Vfuncrtn = 0U;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    rw = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1089)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1090)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1091)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1092)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1093)->__PVT__lineno 
        = lineno;
    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
    predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1095)
                          ->__PVT__status) ? 0U : 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict\n"); );
    // Locals
    QData/*63:0*/ __Vtask_post_predict__62__value;
    __Vtask_post_predict__62__value = 0;
    QData/*63:0*/ __Vtask_post_predict__67__value;
    __Vtask_post_predict__67__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70__verbosity;
    __Vfunc_uvm_report_enabled__70__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__70__severity;
    __Vfunc_uvm_report_enabled__70__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__70____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__71__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__72__Vfuncout;
    __Vtask_uvm_report_enabled__72__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__75__verbosity;
    __Vtask_uvm_report_warning__75__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__75__line;
    __Vtask_uvm_report_warning__75__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__76__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_busy;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38> unnamedblk224__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk224__DOT__unnamedblk225__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38> unnamedblk226__DOT__cbs;
    std::string unnamedblk226__DOT__unnamedblk227__DOT__acc;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk226__DOT__unnamedblk228__DOT__cb;
    QData/*63:0*/ field_val;
    {
        field_val = (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1105)
                     ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                              - 1ULL));
        if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1107)
             ->__PVT__status)) {
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1108)->__PVT__status = 0U;
        }
        if ((1U & (~ (IData)(be)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1114)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1115)
            ->__PVT__lineno;
        if ((2U == kind)) {
            unnamedblk224__DOT__cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38, vlSymsp, 
                                             VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1123)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1123)
                                     ->__PVT__path))) {
                this->__VnoInFunc_XpredictX(vlProcess, vlSymsp, this->__PVT__m_mirrored, field_val, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1124)
                                            ->__PVT__map, field_val);
            }
            this->__PVT__m_written = 1U;
            VL_NULL_CHECK(unnamedblk224__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1128)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk224__DOT__unnamedblk225__DOT__cb);
            while ((VlNull{} != unnamedblk224__DOT__unnamedblk225__DOT__cb)) {
                __Vtask_post_predict__62__value = field_val;
                VL_NULL_CHECK(unnamedblk224__DOT__unnamedblk225__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1129)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__62__value, 2U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1130)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1130)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__62__value;
                VL_NULL_CHECK(unnamedblk224__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1128)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk224__DOT__unnamedblk225__DOT__cb);
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((1U == kind)) {
            unnamedblk226__DOT__cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38, vlSymsp, 
                                             VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1140)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1140)
                                     ->__PVT__path))) {
                this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1142)
                                             ->__PVT__map, unnamedblk226__DOT__unnamedblk227__DOT__acc);
                if (((((("RC"s == unnamedblk226__DOT__unnamedblk227__DOT__acc) 
                        | ("WRC"s == unnamedblk226__DOT__unnamedblk227__DOT__acc)) 
                       | ("WSRC"s == unnamedblk226__DOT__unnamedblk227__DOT__acc)) 
                      | ("W1SRC"s == unnamedblk226__DOT__unnamedblk227__DOT__acc)) 
                     | ("W0SRC"s == unnamedblk226__DOT__unnamedblk227__DOT__acc))) {
                    field_val = 0ULL;
                } else if (((((("RS"s == unnamedblk226__DOT__unnamedblk227__DOT__acc) 
                               | ("WRS"s == unnamedblk226__DOT__unnamedblk227__DOT__acc)) 
                              | ("WCRS"s == unnamedblk226__DOT__unnamedblk227__DOT__acc)) 
                             | ("W1CRS"s == unnamedblk226__DOT__unnamedblk227__DOT__acc)) 
                            | ("W0CRS"s == unnamedblk226__DOT__unnamedblk227__DOT__acc))) {
                    field_val = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                 - 1ULL);
                } else if ((((("WO"s == unnamedblk226__DOT__unnamedblk227__DOT__acc) 
                              | ("WOC"s == unnamedblk226__DOT__unnamedblk227__DOT__acc)) 
                             | ("WOS"s == unnamedblk226__DOT__unnamedblk227__DOT__acc)) 
                            | ("WO1"s == unnamedblk226__DOT__unnamedblk227__DOT__acc))) {
                    goto __Vlabel0;
                }
            }
            VL_NULL_CHECK(unnamedblk226__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1165)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk226__DOT__unnamedblk228__DOT__cb);
            while ((VlNull{} != unnamedblk226__DOT__unnamedblk228__DOT__cb)) {
                __Vtask_post_predict__67__value = field_val;
                VL_NULL_CHECK(unnamedblk226__DOT__unnamedblk228__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1166)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__67__value, 1U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1167)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1167)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__67__value;
                VL_NULL_CHECK(unnamedblk226__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1165)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk226__DOT__unnamedblk228__DOT__cb);
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((0U == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1175)->__VnoInFunc_is_busy(vlSymsp, __VlefCall_0__is_busy);
            if (__VlefCall_0__is_busy) {
                this->__Vfunc_uvm_report_enabled__70__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__70__severity = 1U;
                __Vfunc_uvm_report_enabled__70__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__71__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__70__verbosity, (IData)(__Vfunc_uvm_report_enabled__70__severity), this->__Vfunc_uvm_report_enabled__70__id, __Vtask_uvm_report_enabled__72__Vfuncout);
                __Vfunc_uvm_report_enabled__70____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__72__Vfuncout;
                __VlefCall_1__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__70____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_1__uvm_report_enabled) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1178)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_warning__75__line = 0x0000049aU;
                    this->__Vtask_uvm_report_warning__75__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__75__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__75__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Trying to predict value of field '"s, __VlefCall_2__get_name), "' while register '"s), __VlefCall_3__get_full_name), "' is being accessed"s));
                    this->__Vtask_uvm_report_warning__75__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__76__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vfunc_get__76__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__75__id, this->__Vtask_uvm_report_warning__75__message, __Vtask_uvm_report_warning__75__verbosity, this->__Vtask_uvm_report_warning__75__filename, __Vtask_uvm_report_warning__75__line);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1179)->__PVT__status = 1U;
            }
        }
        this->__PVT__m_mirrored = field_val;
        this->__PVT__m_desired = field_val;
        this->__PVT__value = field_val;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX\n"); );
    // Body
    XupdateX__Vfuncrtn = ((((((((("RO"s == this->__PVT__m_access) 
                                 | ("RW"s == this->__PVT__m_access)) 
                                | ("RC"s == this->__PVT__m_access)) 
                               | ("RS"s == this->__PVT__m_access)) 
                              | ("WRC"s == this->__PVT__m_access)) 
                             | ("WRS"s == this->__PVT__m_access)) 
                            | ("WC"s == this->__PVT__m_access)) 
                           | ("WS"s == this->__PVT__m_access))
                           ? this->__PVT__m_desired
                           : ((((((((("WSRC"s == this->__PVT__m_access) 
                                     | ("WCRS"s == this->__PVT__m_access)) 
                                    | ("W1C"s == this->__PVT__m_access)) 
                                   | ("W1S"s == this->__PVT__m_access)) 
                                  | ("W1T"s == this->__PVT__m_access)) 
                                 | ("W0C"s == this->__PVT__m_access)) 
                                | ("W0S"s == this->__PVT__m_access)) 
                               | ("W0T"s == this->__PVT__m_access))
                               ? (("WSRC"s == this->__PVT__m_access)
                                   ? this->__PVT__m_desired
                                   : (("WCRS"s == this->__PVT__m_access)
                                       ? this->__PVT__m_desired
                                       : (("W1C"s == this->__PVT__m_access)
                                           ? (~ this->__PVT__m_desired)
                                           : (("W1S"s 
                                               == this->__PVT__m_access)
                                               ? this->__PVT__m_desired
                                               : (("W1T"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   ^ this->__PVT__m_mirrored)
                                                   : 
                                                  (("W0C"s 
                                                    == this->__PVT__m_access)
                                                    ? this->__PVT__m_desired
                                                    : 
                                                   (("W0S"s 
                                                     == this->__PVT__m_access)
                                                     ? 
                                                    (~ this->__PVT__m_desired)
                                                     : 
                                                    (~ 
                                                     (this->__PVT__m_desired 
                                                      ^ this->__PVT__m_mirrored)))))))))
                               : ((((((((("W1SRC"s 
                                          == this->__PVT__m_access) 
                                         | ("W1CRS"s 
                                            == this->__PVT__m_access)) 
                                        | ("W0SRC"s 
                                           == this->__PVT__m_access)) 
                                       | ("W0CRS"s 
                                          == this->__PVT__m_access)) 
                                      | ("WO"s == this->__PVT__m_access)) 
                                     | ("WOC"s == this->__PVT__m_access)) 
                                    | ("WOS"s == this->__PVT__m_access)) 
                                   | ("W1"s == this->__PVT__m_access))
                                   ? (("W1SRC"s == this->__PVT__m_access)
                                       ? this->__PVT__m_desired
                                       : (("W1CRS"s 
                                           == this->__PVT__m_access)
                                           ? (~ this->__PVT__m_desired)
                                           : (("W0SRC"s 
                                               == this->__PVT__m_access)
                                               ? (~ this->__PVT__m_desired)
                                               : this->__PVT__m_desired)))
                                   : this->__PVT__m_desired)));
    XupdateX__Vfuncrtn = (XupdateX__Vfuncrtn & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                - 1ULL));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__78____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__79__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__80__Vfuncout;
    __Vtask_uvm_report_enabled__80__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__82__verbosity;
    __Vtask_uvm_report_warning__82__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__82__line;
    __Vtask_uvm_report_warning__82__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__83__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__86__verbosity;
    __Vfunc_uvm_report_enabled__86__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__86__severity;
    __Vfunc_uvm_report_enabled__86__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__86____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__86____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__87__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__88__Vfuncout;
    __Vtask_uvm_report_enabled__88__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__91__verbosity;
    __Vtask_uvm_report_warning__91__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__91__line;
    __Vtask_uvm_report_warning__91__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__92__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__is_busy;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ mask;
    mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
            - 1ULL);
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
        this->__Vfunc_uvm_report_enabled__78__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__78__severity = 1U;
        __Vfunc_uvm_report_enabled__78__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__79__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), this->__Vfunc_uvm_report_enabled__78__id, __Vtask_uvm_report_enabled__80__Vfuncout);
        __Vfunc_uvm_report_enabled__78____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__80__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__78____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_warning__82__line = 0x000004dcU;
            this->__Vtask_uvm_report_warning__82__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__82__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__82__message
                          ,"Specified value (0x%h) greater than field \"%s\" size (%0d bits)",3
                          , '#',64,value, 'S',&(__VlefCall_1__get_name)
                          , '#',32,this->__PVT__m_size);
            this->__Vtask_uvm_report_warning__82__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__83__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__82__id, this->__Vtask_uvm_report_warning__82__message, __Vtask_uvm_report_warning__82__verbosity, this->__Vtask_uvm_report_warning__82__filename, __Vtask_uvm_report_warning__82__line);
        }
        value = (value & mask);
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1248)->__VnoInFunc_is_busy(vlSymsp, __VlefCall_2__is_busy);
    if (__VlefCall_2__is_busy) {
        this->__Vfunc_uvm_report_enabled__86__id = "UVM/FLD/SET/BSY"s;
        __Vfunc_uvm_report_enabled__86__severity = 1U;
        __Vfunc_uvm_report_enabled__86__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__87__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__87__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__86__verbosity, (IData)(__Vfunc_uvm_report_enabled__86__severity), this->__Vfunc_uvm_report_enabled__86__id, __Vtask_uvm_report_enabled__88__Vfuncout);
        __Vfunc_uvm_report_enabled__86____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__88__Vfuncout;
        __VlefCall_3__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__86____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_3__uvm_report_enabled) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1251)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_warning__91__line = 0x000004e3U;
            this->__Vtask_uvm_report_warning__91__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__91__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__91__message
                          ,"Setting the value of field \"%s\" while containing register \"%s\" is being accessed may result in loss of desired field value. A race condition between threads concurrently accessing the register model is the likely cause of the problem.",2
                          , 'S',&(__VlefCall_4__get_name)
                          , 'S',&(__VlefCall_5__get_full_name));
            this->__Vtask_uvm_report_warning__91__id = "UVM/FLD/SET/BSY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__91__id, this->__Vtask_uvm_report_warning__91__message, __Vtask_uvm_report_warning__91__verbosity, this->__Vtask_uvm_report_warning__91__filename, __Vtask_uvm_report_warning__91__line);
        }
    }
    if ((((((((("RO"s == this->__PVT__m_access) | ("RW"s 
                                                   == this->__PVT__m_access)) 
              | ("RC"s == this->__PVT__m_access)) | 
             ("RS"s == this->__PVT__m_access)) | ("WC"s 
                                                  == this->__PVT__m_access)) 
           | ("WS"s == this->__PVT__m_access)) | ("WRC"s 
                                                  == this->__PVT__m_access)) 
         | ("WRS"s == this->__PVT__m_access))) {
        if ((1U & (~ ("RO"s == this->__PVT__m_access)))) {
            if (("RW"s == this->__PVT__m_access)) {
                this->__PVT__m_desired = value;
            } else if ((1U & (~ ("RC"s == this->__PVT__m_access)))) {
                if ((1U & (~ ("RS"s == this->__PVT__m_access)))) {
                    this->__PVT__m_desired = (("WC"s 
                                               == this->__PVT__m_access)
                                               ? 0ULL
                                               : (("WS"s 
                                                   == this->__PVT__m_access)
                                                   ? mask
                                                   : value));
                }
            }
        }
    } else {
        this->__PVT__m_desired = ((((((((("WSRC"s == this->__PVT__m_access) 
                                         | ("WCRS"s 
                                            == this->__PVT__m_access)) 
                                        | ("W1C"s == this->__PVT__m_access)) 
                                       | ("W1S"s == this->__PVT__m_access)) 
                                      | ("W1T"s == this->__PVT__m_access)) 
                                     | ("W0C"s == this->__PVT__m_access)) 
                                    | ("W0S"s == this->__PVT__m_access)) 
                                   | ("W0T"s == this->__PVT__m_access))
                                   ? (("WSRC"s == this->__PVT__m_access)
                                       ? mask : (("WCRS"s 
                                                  == this->__PVT__m_access)
                                                  ? 0ULL
                                                  : 
                                                 (("W1C"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   & (~ value))
                                                   : 
                                                  (("W1S"s 
                                                    == this->__PVT__m_access)
                                                    ? 
                                                   (this->__PVT__m_desired 
                                                    | value)
                                                    : 
                                                   (("W1T"s 
                                                     == this->__PVT__m_access)
                                                     ? 
                                                    (this->__PVT__m_desired 
                                                     ^ value)
                                                     : 
                                                    (("W0C"s 
                                                      == this->__PVT__m_access)
                                                      ? 
                                                     (this->__PVT__m_desired 
                                                      & value)
                                                      : 
                                                     (("W0S"s 
                                                       == this->__PVT__m_access)
                                                       ? 
                                                      (this->__PVT__m_desired 
                                                       | ((~ value) 
                                                          & mask))
                                                       : 
                                                      (this->__PVT__m_desired 
                                                       ^ 
                                                       ((~ value) 
                                                        & mask)))))))))
                                   : ((((((((("W1SRC"s 
                                              == this->__PVT__m_access) 
                                             | ("W1CRS"s 
                                                == this->__PVT__m_access)) 
                                            | ("W0SRC"s 
                                               == this->__PVT__m_access)) 
                                           | ("W0CRS"s 
                                              == this->__PVT__m_access)) 
                                          | ("WO"s 
                                             == this->__PVT__m_access)) 
                                         | ("WOC"s 
                                            == this->__PVT__m_access)) 
                                        | ("WOS"s == this->__PVT__m_access)) 
                                       | ("W1"s == this->__PVT__m_access))
                                       ? (("W1SRC"s 
                                           == this->__PVT__m_access)
                                           ? (this->__PVT__m_desired 
                                              | value)
                                           : (("W1CRS"s 
                                               == this->__PVT__m_access)
                                               ? (this->__PVT__m_desired 
                                                  & (~ value))
                                               : (("W0SRC"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   | ((~ value) 
                                                      & mask))
                                                   : 
                                                  (("W0CRS"s 
                                                    == this->__PVT__m_access)
                                                    ? 
                                                   (this->__PVT__m_desired 
                                                    & value)
                                                    : 
                                                   (("WO"s 
                                                     == this->__PVT__m_access)
                                                     ? value
                                                     : 
                                                    (("WOC"s 
                                                      == this->__PVT__m_access)
                                                      ? 0ULL
                                                      : 
                                                     (("WOS"s 
                                                       == this->__PVT__m_access)
                                                       ? mask
                                                       : 
                                                      ((IData)(this->__PVT__m_written)
                                                        ? this->__PVT__m_desired
                                                        : value))))))))
                                       : (("WO1"s == this->__PVT__m_access)
                                           ? ((IData)(this->__PVT__m_written)
                                               ? this->__PVT__m_desired
                                               : value)
                                           : value)));
    }
    this->__PVT__value = this->__PVT__m_desired;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get__Vfuncrtn = this->__PVT__m_desired;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get_mirrored_value__Vfuncrtn = this->__PVT__m_mirrored;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset\n"); );
    // Body
    {
        if ((! this->__PVT__m_reset.exists(kind))) {
            goto __Vlabel0;
        }
        this->__PVT__m_mirrored = this->__PVT__m_reset
            .at(kind);
        this->__PVT__m_desired = this->__PVT__m_mirrored;
        this->__PVT__value = this->__PVT__m_mirrored;
        if (("HARD"s == kind)) {
            this->__PVT__m_written = 0U;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset\n"); );
    // Body
    {
        has_reset__Vfuncrtn = 0U;
        if ((! this->__PVT__m_reset.exists(kind))) {
            has_reset__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (__SYM__delete) {
            this->__PVT__m_reset.erase(kind);
        }
        has_reset__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset\n"); );
    // Body
    {
        get_reset__Vfuncrtn = 0ULL;
        if ((! this->__PVT__m_reset.exists(kind))) {
            get_reset__Vfuncrtn = this->__PVT__m_desired;
            goto __Vlabel0;
        }
        get_reset__Vfuncrtn = this->__PVT__m_reset.at(kind);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset\n"); );
    // Body
    this->__PVT__m_reset.atWrite(kind) = (value & (
                                                   VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                   - 1ULL));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = (this->__PVT__m_mirrored 
                              != this->__PVT__m_desired);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__99__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__100__Vfuncout;
    __Vtask_uvm_report_enabled__100__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__102__verbosity;
    __Vtask_uvm_report_warning__102__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__102__line;
    __Vtask_uvm_report_warning__102__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__103__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__108__verbosity;
    __Vfunc_uvm_report_enabled__108__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__108__severity;
    __Vfunc_uvm_report_enabled__108__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__109__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__110__Vfuncout;
    __Vtask_uvm_report_enabled__110__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__115__verbosity;
    __Vfunc_uvm_report_enabled__115__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__115__severity;
    __Vfunc_uvm_report_enabled__115__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__115____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__115____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__116__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__117__Vfuncout;
    __Vtask_uvm_report_enabled__117__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    CData/*0:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_type_name;
    CData/*0:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_type_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_7__get_local_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_6__backdoor;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_3;
    CData/*0:0*/ __VlefCall_2__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_1__get_backdoor;
    IData/*31:0*/ __VlefCall_0__get_default_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk229__DOT__blk;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        if ((3U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1374)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1375)->__VnoInFunc_get_block(vlSymsp, unnamedblk229__DOT__blk);
            VL_NULL_CHECK(unnamedblk229__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1376)->__VnoInFunc_get_default_path(vlSymsp, __VlefCall_0__get_default_path);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1376)->__PVT__path 
                = __VlefCall_0__get_default_path;
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1379)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1380)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_1__get_backdoor);
            __VlefLogAnd_3 = (VlNull{} == __VlefCall_1__get_backdoor);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1380)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_2__has_hdl_path);
                __VlefLogAnd_3 = (1U & (~ (IData)(__VlefCall_2__has_hdl_path)));
            }
            if (__VlefLogAnd_3) {
                this->__Vfunc_uvm_report_enabled__98__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__98__severity = 1U;
                __Vfunc_uvm_report_enabled__98__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__99__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), this->__Vfunc_uvm_report_enabled__98__id, __Vtask_uvm_report_enabled__100__Vfuncout);
                __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__100__Vfuncout;
                __VlefCall_4__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_4__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    __Vtask_uvm_report_warning__102__line = 0x00000567U;
                    this->__Vtask_uvm_report_warning__102__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__102__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__102__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for field '"s, __VlefCall_5__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__102__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__103__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vfunc_get__103__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__102__id, this->__Vtask_uvm_report_warning__102__message, __Vtask_uvm_report_warning__102__verbosity, this->__Vtask_uvm_report_warning__102__filename, __Vtask_uvm_report_warning__102__line);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1384)->__PVT__path = 0U;
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_6__backdoor);
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1387)->__PVT__map 
                    = __VlefCall_6__backdoor;
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1390)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1392)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1392)
                                                                                ->__PVT__map, caller, __VlefCall_7__get_local_map);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1392)->__PVT__local_map 
                = __VlefCall_7__get_local_map;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1394)
                 ->__PVT__local_map)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                this->__Vfunc_uvm_report_enabled__108__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                __Vfunc_uvm_report_enabled__108__severity = 2U;
                __Vfunc_uvm_report_enabled__108__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__109__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__109__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__108__verbosity, (IData)(__Vfunc_uvm_report_enabled__108__severity), this->__Vfunc_uvm_report_enabled__108__id, __Vtask_uvm_report_enabled__110__Vfuncout);
                __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__110__Vfuncout;
                __VlefCall_9__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_9__uvm_report_enabled) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1397)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1397)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, __VlefCall_11__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x00000575U);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1398)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1402)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1402)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, this->__PVT__m_parent, 1U, map_info);
            if (((VlNull{} == VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1404)
                  ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1404)
                 ->__PVT__unmapped)) {
                this->__Vfunc_uvm_report_enabled__115__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__115__severity = 2U;
                __Vfunc_uvm_report_enabled__115__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__116__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__116__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__115__verbosity, (IData)(__Vfunc_uvm_report_enabled__115__severity), this->__Vfunc_uvm_report_enabled__115__id, __Vtask_uvm_report_enabled__117__Vfuncout);
                __Vfunc_uvm_report_enabled__115____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__117__Vfuncout;
                __VlefCall_12__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__115____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_12__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1408)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1408)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Field '"s, __VlefCall_13__get_full_name), "' in register that is unmapped in map '"s), __VlefCall_14__get_full_name), "' and does not have a user-defined frontdoor"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x00000580U);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1409)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1413)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1414)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1414)
                    ->__PVT__local_map;
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1435)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1436)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1437)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1438)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1439)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1440)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1441)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1442)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1443)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1444)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1445)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1449)
        ->__PVT__status;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__125__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__126__verbosity;
    __Vfunc_uvm_report_enabled__126__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__126__severity;
    __Vfunc_uvm_report_enabled__126__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__126____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__126____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__127__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__128__Vfuncout;
    __Vtask_uvm_report_enabled__128__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__130__verbosity;
    __Vtask_uvm_report_warning__130__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__130__line;
    __Vtask_uvm_report_warning__130__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__131__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__157__verbosity;
    __Vfunc_uvm_report_enabled__157__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__157__severity;
    __Vfunc_uvm_report_enabled__157__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__157____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__157____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__158__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__159__Vfuncout;
    __Vtask_uvm_report_enabled__159__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__161__verbosity;
    __Vtask_uvm_report_warning__161__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__161__line;
    __Vtask_uvm_report_warning__161__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__162__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    CData/*0:0*/ __VlefCall_8__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_7__get_auto_predict;
    CData/*0:0*/ __VlefCall_6__is_indv_accessible;
    IData/*31:0*/ __VlefCall_5__get_lsb_pos;
    IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    IData/*31:0*/ __VlefCall_3__get_n_bits;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    IData/*31:0*/ unnamedblk230__DOT__i;
    unnamedblk230__DOT__i = 0;
    IData/*31:0*/ unnamedblk230__DOT__i__Vloopsize;
    unnamedblk230__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk231__DOT__system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38> unnamedblk231__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk231__DOT__unnamedblk232__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk231__DOT__unnamedblk233__DOT__cb;
    std::string __VCase_h93b2169f__0;
    QData/*63:0*/ value_adjust;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> fields;
    CData/*0:0*/ bad_side_effect;
    {
        value_adjust = 0ULL;
        fields.clear();
        bad_side_effect = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1463)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1464)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1465)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__125__map_info, "write()"s, __VlefCall_0__Xcheck_accessX);
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        if ((0U != VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1472)
                                 ->__PVT__value.at(0U), this->__PVT__m_size))) {
            this->__Vfunc_uvm_report_enabled__126__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__126__severity = 1U;
            __Vfunc_uvm_report_enabled__126__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__127__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__127__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__126__verbosity, (IData)(__Vfunc_uvm_report_enabled__126__severity), this->__Vfunc_uvm_report_enabled__126__id, __Vtask_uvm_report_enabled__128__Vfuncout);
            __Vfunc_uvm_report_enabled__126____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__128__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__126____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_warning__130__line = 0x000005c2U;
                this->__Vtask_uvm_report_warning__130__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__130__verbosity = 0U;
                this->__Vtask_uvm_report_warning__130__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::write(): Value greater than field '"s, __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__130__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__131__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__131__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__130__id, this->__Vtask_uvm_report_warning__130__message, __Vtask_uvm_report_warning__130__verbosity, this->__Vtask_uvm_report_warning__130__filename, __Vtask_uvm_report_warning__130__line);
            }
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1475)->__PVT__value.atWrite(0U) 
                = (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1475)
                   ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                            - 1ULL));
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1479)->__VnoInFunc_get_fields(vlSymsp, fields);
        unnamedblk230__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk230__DOT__i, fields.size())) {
            unnamedblk230__DOT__i__Vloopsize = fields.size();
            {
                if ((fields.at(unnamedblk230__DOT__i) 
                     == VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this})) {
                    value_adjust = (value_adjust | 
                                    VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1483)
                                                  ->__PVT__value.at(0U), this->__PVT__m_lsb));
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(fields.at(unnamedblk230__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1488)->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1488)
                                                                                ->__PVT__local_map, __VCase_h93b2169f__0);
                if ((1U & (~ (((((((("RO"s == __VCase_h93b2169f__0) 
                                    || ("RC"s == __VCase_h93b2169f__0)) 
                                   || ("RS"s == __VCase_h93b2169f__0)) 
                                  || ("W1C"s == __VCase_h93b2169f__0)) 
                                 || ("W1S"s == __VCase_h93b2169f__0)) 
                                || ("W1T"s == __VCase_h93b2169f__0)) 
                               || ("W1SRC"s == __VCase_h93b2169f__0)) 
                              || ("W1CRC"s == __VCase_h93b2169f__0))))) {
                    if (((((("W0C"s == __VCase_h93b2169f__0) 
                            || ("W0S"s == __VCase_h93b2169f__0)) 
                           || ("W0T"s == __VCase_h93b2169f__0)) 
                          || ("W0SRC"s == __VCase_h93b2169f__0)) 
                         || ("W0CRS"s == __VCase_h93b2169f__0))) {
                        VL_NULL_CHECK(fields.at(unnamedblk230__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1497)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                        VL_NULL_CHECK(fields.at(unnamedblk230__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1497)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
                        value_adjust = (value_adjust 
                                        | VL_SHIFTL_QQI(64,64,32, 
                                                        (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_3__get_n_bits) 
                                                         - 1ULL), __VlefCall_4__get_lsb_pos));
                    } else if ((((((("WC"s == __VCase_h93b2169f__0) 
                                    || ("WS"s == __VCase_h93b2169f__0)) 
                                   || ("WCRS"s == __VCase_h93b2169f__0)) 
                                  || ("WSRC"s == __VCase_h93b2169f__0)) 
                                 || ("WOC"s == __VCase_h93b2169f__0)) 
                                || ("WOS"s == __VCase_h93b2169f__0))) {
                        bad_side_effect = 1U;
                    } else {
                        VL_NULL_CHECK(fields.at(unnamedblk230__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1504)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_5__get_lsb_pos);
                        value_adjust = (value_adjust 
                                        | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(fields.at(unnamedblk230__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1504)
                                                        ->__PVT__m_mirrored, __VlefCall_5__get_lsb_pos));
                    }
                }
                __Vlabel1: ;
            }
            if ((unnamedblk230__DOT__i__Vloopsize <= fields.size())) {
                unnamedblk230__DOT__i = ((IData)(1U) 
                                         + unnamedblk230__DOT__i);
            }
        }
        this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1516)
                                             ->__PVT__path, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1516)
                                             ->__PVT__local_map, __VlefCall_6__is_indv_accessible);
        if (__VlefCall_6__is_indv_accessible) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1528)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1528)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk231__DOT__system_map);
            unnamedblk231__DOT__cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38, vlSymsp, 
                                             VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1531)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1533)->__PVT__status = 0U;
            this->__VnoInFunc_pre_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk231__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1536)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk231__DOT__unnamedblk232__DOT__cb);
            while ((VlNull{} != unnamedblk231__DOT__unnamedblk232__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk231__DOT__unnamedblk232__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1537)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk231__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1536)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk231__DOT__unnamedblk232__DOT__cb);
            }
            if ((0U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1539)
                 ->__PVT__status)) {
                this->__PVT__m_write_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1541)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1542)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1547)
                                   ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1547)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk231__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1549)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_7__get_auto_predict);
            if (__VlefCall_7__get_auto_predict) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
            }
            this->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk231__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1554)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk231__DOT__unnamedblk233__DOT__cb);
            while ((VlNull{} != unnamedblk231__DOT__unnamedblk233__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk231__DOT__unnamedblk233__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1555)->__VnoInFunc_post_write(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk231__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1554)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk231__DOT__unnamedblk233__DOT__cb);
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1557)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1517)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1518)->__PVT__element 
                = this->__PVT__m_parent;
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1519)->__PVT__value.atWrite(0U) 
                = value_adjust;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1520)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            if (bad_side_effect) {
                this->__Vfunc_uvm_report_enabled__157__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__157__severity = 1U;
                __Vfunc_uvm_report_enabled__157__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__158__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__158__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__157__verbosity, (IData)(__Vfunc_uvm_report_enabled__157__severity), this->__Vfunc_uvm_report_enabled__157__id, __Vtask_uvm_report_enabled__159__Vfuncout);
                __Vfunc_uvm_report_enabled__157____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__159__Vfuncout;
                __VlefCall_8__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__157____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_8__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    __Vtask_uvm_report_warning__161__line = 0x000005f3U;
                    this->__Vtask_uvm_report_warning__161__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__161__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__161__message
                                  ,"Writing field \"%s\" will cause unintended side effects in adjoining Write-to-Clear or Write-to-Set fields in the same register",1
                                  , 'S',&(__VlefCall_9__get_full_name));
                    this->__Vtask_uvm_report_warning__161__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__162__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vfunc_get__162__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__161__id, this->__Vtask_uvm_report_warning__161__message, __Vtask_uvm_report_warning__161__verbosity, this->__Vtask_uvm_report_warning__161__filename, __Vtask_uvm_report_warning__161__line);
                }
            }
        }
        this->__PVT__m_write_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1564)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1583)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1584)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1585)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1586)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1587)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1588)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1589)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1590)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1591)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1592)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1593)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlSymsp, rw);
    value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1597)
        ->__PVT__value.at(0U);
    status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1598)
        ->__PVT__status;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__169__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__192__verbosity;
    __Vfunc_uvm_report_enabled__192__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__192__severity;
    __Vfunc_uvm_report_enabled__192__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__192____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__192____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__193__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__194__Vfuncout;
    __Vtask_uvm_report_enabled__194__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__196__verbosity;
    __Vtask_uvm_report_warning__196__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__196__line;
    __Vtask_uvm_report_warning__196__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__197__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__get_auto_predict;
    CData/*0:0*/ __VlefCall_1__is_indv_accessible;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk234__DOT__system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38> unnamedblk234__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk234__DOT__unnamedblk235__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk234__DOT__unnamedblk236__DOT__cb;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk237__DOT__fields;
    IData/*31:0*/ unnamedblk237__DOT__unnamedblk238__DOT__i;
    unnamedblk237__DOT__unnamedblk238__DOT__i = 0;
    IData/*31:0*/ unnamedblk237__DOT__unnamedblk238__DOT__i__Vloopsize;
    unnamedblk237__DOT__unnamedblk238__DOT__i__Vloopsize = 0;
    std::string unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode;
    CData/*0:0*/ bad_side_effect;
    {
        bad_side_effect = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1610)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1611)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1612)
            ->__PVT__lineno;
        this->__PVT__m_read_in_progress = 1U;
        this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__169__map_info, "read()"s, __VlefCall_0__Xcheck_accessX);
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1626)
                                             ->__PVT__path, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1626)
                                             ->__PVT__local_map, __VlefCall_1__is_indv_accessible);
        if (__VlefCall_1__is_indv_accessible) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1635)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1635)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk234__DOT__system_map);
            unnamedblk234__DOT__cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38, vlSymsp, 
                                             VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1638)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1640)->__PVT__status = 0U;
            this->__VnoInFunc_pre_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk234__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1643)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk234__DOT__unnamedblk235__DOT__cb);
            while ((VlNull{} != unnamedblk234__DOT__unnamedblk235__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk234__DOT__unnamedblk235__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1644)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk234__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1643)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk234__DOT__unnamedblk235__DOT__cb);
            }
            if ((0U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1646)
                 ->__PVT__status)) {
                this->__PVT__m_read_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1648)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1649)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1654)
                                   ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1654)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk234__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1657)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_2__get_auto_predict);
            if (__VlefCall_2__get_auto_predict) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
            }
            this->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk234__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1662)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk234__DOT__unnamedblk236__DOT__cb);
            while ((VlNull{} != unnamedblk234__DOT__unnamedblk236__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk234__DOT__unnamedblk236__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1663)->__VnoInFunc_post_read(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk234__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1662)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk234__DOT__unnamedblk236__DOT__cb);
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1665)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1627)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1628)->__PVT__element 
                = this->__PVT__m_parent;
            bad_side_effect = 1U;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1630)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1631)->__PVT__value.atWrite(0U) 
                = (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1631)
                                 ->__PVT__value.at(0U), this->__PVT__m_lsb) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                      - 1ULL));
        }
        this->__PVT__m_read_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1672)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        if (bad_side_effect) {
            unnamedblk237__DOT__fields.clear();
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1676)->__VnoInFunc_get_fields(vlSymsp, unnamedblk237__DOT__fields);
            unnamedblk237__DOT__unnamedblk238__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk237__DOT__unnamedblk238__DOT__i, unnamedblk237__DOT__fields.size())) {
                unnamedblk237__DOT__unnamedblk238__DOT__i__Vloopsize 
                    = unnamedblk237__DOT__fields.size();
                {
                    unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode = ""s;
                    if ((unnamedblk237__DOT__fields.at(unnamedblk237__DOT__unnamedblk238__DOT__i) 
                         == VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        goto __Vlabel1;
                    }
                    VL_NULL_CHECK(unnamedblk237__DOT__fields.at(unnamedblk237__DOT__unnamedblk238__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1681)->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode);
                    if ((((((((((("RC"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode) 
                                 | ("RS"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode)) 
                                | ("WRC"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode)) 
                               | ("WRS"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode)) 
                              | ("WSRC"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode)) 
                             | ("WCRS"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode)) 
                            | ("W1SRC"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode)) 
                           | ("W1CRS"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode)) 
                          | ("W0SRC"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode)) 
                         | ("W0CRS"s == unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__mode))) {
                        this->__Vfunc_uvm_report_enabled__192__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__192__severity = 1U;
                        __Vfunc_uvm_report_enabled__192__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__193__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vfunc_get__193__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__192__verbosity, (IData)(__Vfunc_uvm_report_enabled__192__severity), this->__Vfunc_uvm_report_enabled__192__id, __Vtask_uvm_report_enabled__194__Vfuncout);
                        __Vfunc_uvm_report_enabled__192____VlefCall_0__uvm_report_enabled 
                            = __Vtask_uvm_report_enabled__194__Vfuncout;
                        __VlefCall_3__uvm_report_enabled 
                            = (1U & __Vfunc_uvm_report_enabled__192____VlefCall_0__uvm_report_enabled);
                        if (__VlefCall_3__uvm_report_enabled) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                            __Vtask_uvm_report_warning__196__line = 0x0000069eU;
                            this->__Vtask_uvm_report_warning__196__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                            __Vtask_uvm_report_warning__196__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__196__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Reading field '"s, __VlefCall_4__get_full_name), "' will cause unintended side effects in adjoining "s), "Read-to-Clear or Read-to-Set fields in the same register"s));
                            this->__Vtask_uvm_report_warning__196__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__197__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vfunc_get__197__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__196__id, this->__Vtask_uvm_report_warning__196__message, __Vtask_uvm_report_warning__196__verbosity, this->__Vtask_uvm_report_warning__196__filename, __Vtask_uvm_report_warning__196__line);
                        }
                    }
                    __Vlabel1: ;
                }
                if ((unnamedblk237__DOT__unnamedblk238__DOT__i__Vloopsize 
                     <= unnamedblk237__DOT__fields.size())) {
                    unnamedblk237__DOT__unnamedblk238__DOT__i 
                        = ((IData)(1U) + unnamedblk237__DOT__unnamedblk238__DOT__i);
                }
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__199__verbosity;
    __Vfunc_uvm_report_enabled__199__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__199__severity;
    __Vfunc_uvm_report_enabled__199__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__199____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__199____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__200__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__201__Vfuncout;
    __Vtask_uvm_report_enabled__201__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__203__verbosity;
    __Vtask_uvm_report_warning__203__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__203__line;
    __Vtask_uvm_report_warning__203__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__204__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__206__verbosity;
    __Vfunc_uvm_report_enabled__206__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__206__severity;
    __Vfunc_uvm_report_enabled__206__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__206____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__206____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__207__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__208__Vfuncout;
    __Vtask_uvm_report_enabled__208__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__210__verbosity;
    __Vtask_uvm_report_warning__210__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__210__line;
    __Vtask_uvm_report_warning__210__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__211__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__214__verbosity;
    __Vfunc_uvm_report_enabled__214__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__214__severity;
    __Vfunc_uvm_report_enabled__214__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__214____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__214____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__215__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__216__Vfuncout;
    __Vtask_uvm_report_enabled__216__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__219__verbosity;
    __Vtask_uvm_report_warning__219__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__219__line;
    __Vtask_uvm_report_warning__219__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__220__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__224__Vfuncout;
    __Vtask_get_n_bytes__224__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__226__Vfuncout;
    __Vtask_get_lsb_pos__226__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__227__Vfuncout;
    __Vtask_get_n_bits__227__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__228__Vfuncout;
    __Vtask_get_lsb_pos__228__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__229__Vfuncout;
    __Vtask_get_n_bits__229__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__230__Vfuncout;
    __Vtask_get_lsb_pos__230__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__231__Vfuncout;
    __Vtask_get_n_bits__231__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__232__verbosity;
    __Vfunc_uvm_report_enabled__232__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__232__severity;
    __Vfunc_uvm_report_enabled__232__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__232____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__232____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__233__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__234__Vfuncout;
    __Vtask_uvm_report_enabled__234__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__236__verbosity;
    __Vtask_uvm_report_warning__236__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__236__line;
    __Vtask_uvm_report_warning__236__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__237__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_9__get_full_name;
    CData/*0:0*/ __VlefCall_8__uvm_report_enabled;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> __VlefCall_4__get_frontdoor;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk240__DOT__system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> unnamedblk240__DOT__adapter;
    IData/*31:0*/ unnamedblk241__DOT__fld_idx;
    IData/*31:0*/ unnamedblk241__DOT__bus_width;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk241__DOT__fields;
    IData/*31:0*/ unnamedblk241__DOT__unnamedblk242__DOT__prev_lsb;
    IData/*31:0*/ unnamedblk241__DOT__unnamedblk242__DOT__this_lsb;
    IData/*31:0*/ unnamedblk241__DOT__unnamedblk242__DOT__next_lsb;
    IData/*31:0*/ unnamedblk241__DOT__unnamedblk242__DOT__prev_sz;
    IData/*31:0*/ unnamedblk241__DOT__unnamedblk242__DOT__this_sz;
    IData/*31:0*/ unnamedblk241__DOT__unnamedblk242__DOT__bus_sz;
    IData/*31:0*/ unnamedblk241__DOT__unnamedblk242__DOT__unnamedblk243__DOT__i;
    unnamedblk241__DOT__unnamedblk242__DOT__unnamedblk243__DOT__i = 0;
    {
        is_indv_accessible__Vfuncrtn = 0U;
        if ((1U == path)) {
            this->__Vfunc_uvm_report_enabled__199__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__199__severity = 1U;
            __Vfunc_uvm_report_enabled__199__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__200__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__199__verbosity, (IData)(__Vfunc_uvm_report_enabled__199__severity), this->__Vfunc_uvm_report_enabled__199__id, __Vtask_uvm_report_enabled__201__Vfuncout);
            __Vfunc_uvm_report_enabled__199____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__201__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__199____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__203__line = 0x000006adU;
                this->__Vtask_uvm_report_warning__203__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__203__verbosity = 0U;
                this->__Vtask_uvm_report_warning__203__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual BACKDOOR field access not available for field '"s, __VlefCall_1__get_full_name), "'. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__203__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__204__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__204__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__203__id, this->__Vtask_uvm_report_warning__203__message, __Vtask_uvm_report_warning__203__verbosity, this->__Vtask_uvm_report_warning__203__filename, __Vtask_uvm_report_warning__203__line);
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__m_individually_accessible)))) {
            this->__Vfunc_uvm_report_enabled__206__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__206__severity = 1U;
            __Vfunc_uvm_report_enabled__206__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__207__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__207__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__206__verbosity, (IData)(__Vfunc_uvm_report_enabled__206__severity), this->__Vfunc_uvm_report_enabled__206__id, __Vtask_uvm_report_enabled__208__Vfuncout);
            __Vfunc_uvm_report_enabled__206____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__208__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__206____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_warning__210__line = 0x000006b4U;
                this->__Vtask_uvm_report_warning__210__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__210__verbosity = 0U;
                this->__Vtask_uvm_report_warning__210__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual field access not available for field '"s, __VlefCall_3__get_full_name), "'. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__210__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__211__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__211__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__210__id, this->__Vtask_uvm_report_warning__210__message, __Vtask_uvm_report_warning__210__verbosity, this->__Vtask_uvm_report_warning__210__filename, __Vtask_uvm_report_warning__210__line);
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1722)->__VnoInFunc_get_frontdoor(vlSymsp, local_map, __VlefCall_4__get_frontdoor);
        if ((VlNull{} != __VlefCall_4__get_frontdoor)) {
            this->__Vfunc_uvm_report_enabled__214__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__214__severity = 1U;
            __Vfunc_uvm_report_enabled__214__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__215__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__215__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__214__verbosity, (IData)(__Vfunc_uvm_report_enabled__214__severity), this->__Vfunc_uvm_report_enabled__214__id, __Vtask_uvm_report_enabled__216__Vfuncout);
            __Vfunc_uvm_report_enabled__214____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__216__Vfuncout;
            __VlefCall_5__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__214____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_5__uvm_report_enabled) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1725)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_warning__219__line = 0x000006bdU;
                this->__Vtask_uvm_report_warning__219__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__219__verbosity = 0U;
                this->__Vtask_uvm_report_warning__219__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Individual field access not available for field '"s, __VlefCall_6__get_name), "' because register '"s), __VlefCall_7__get_full_name), "' has a user-defined front-door. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__219__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__220__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__220__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__219__id, this->__Vtask_uvm_report_warning__219__message, __Vtask_uvm_report_warning__219__verbosity, this->__Vtask_uvm_report_warning__219__filename, __Vtask_uvm_report_warning__219__line);
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1730)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk240__DOT__system_map);
        VL_NULL_CHECK(unnamedblk240__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1731)->__VnoInFunc_get_adapter(vlSymsp, 1U, unnamedblk240__DOT__adapter);
        if (VL_NULL_CHECK(unnamedblk240__DOT__adapter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1732)
            ->__PVT__supports_byte_enable) {
            is_indv_accessible__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk241__DOT__fld_idx = 0U;
        VL_NULL_CHECK(local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1738)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__224__Vfuncout);
        unnamedblk241__DOT__bus_width = __Vtask_get_n_bytes__224__Vfuncout;
        unnamedblk241__DOT__fields.clear();
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1742)->__VnoInFunc_get_fields(vlSymsp, unnamedblk241__DOT__fields);
        if ((1U != unnamedblk241__DOT__fields.size())) {
            unnamedblk241__DOT__unnamedblk242__DOT__prev_lsb = 0U;
            unnamedblk241__DOT__unnamedblk242__DOT__this_lsb = 0U;
            unnamedblk241__DOT__unnamedblk242__DOT__next_lsb = 0U;
            unnamedblk241__DOT__unnamedblk242__DOT__prev_sz = 0U;
            unnamedblk241__DOT__unnamedblk242__DOT__this_sz = 0U;
            unnamedblk241__DOT__unnamedblk242__DOT__bus_sz 
                = VL_MULS_III(32, (IData)(8U), unnamedblk241__DOT__bus_width);
            {
                unnamedblk241__DOT__unnamedblk242__DOT__unnamedblk243__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__unnamedblk243__DOT__i, unnamedblk241__DOT__fields.size())) {
                    if ((unnamedblk241__DOT__fields.at(unnamedblk241__DOT__unnamedblk242__DOT__unnamedblk243__DOT__i) 
                         == VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        unnamedblk241__DOT__fld_idx 
                            = unnamedblk241__DOT__unnamedblk242__DOT__unnamedblk243__DOT__i;
                        goto __Vlabel1;
                    }
                    unnamedblk241__DOT__unnamedblk242__DOT__unnamedblk243__DOT__i 
                        = ((IData)(1U) + unnamedblk241__DOT__unnamedblk242__DOT__unnamedblk243__DOT__i);
                }
                __Vlabel1: ;
            }
            VL_NULL_CHECK(unnamedblk241__DOT__fields.at(unnamedblk241__DOT__fld_idx), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1759)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__226__Vfuncout);
            unnamedblk241__DOT__unnamedblk242__DOT__this_lsb 
                = __Vtask_get_lsb_pos__226__Vfuncout;
            VL_NULL_CHECK(unnamedblk241__DOT__fields.at(unnamedblk241__DOT__fld_idx), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1760)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__227__Vfuncout);
            unnamedblk241__DOT__unnamedblk242__DOT__this_sz 
                = __Vtask_get_n_bits__227__Vfuncout;
            if (VL_LTS_III(32, 0U, unnamedblk241__DOT__fld_idx)) {
                VL_NULL_CHECK(unnamedblk241__DOT__fields.at(
                                                            (unnamedblk241__DOT__fld_idx 
                                                             - (IData)(1U))), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1763)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__228__Vfuncout);
                unnamedblk241__DOT__unnamedblk242__DOT__prev_lsb 
                    = __Vtask_get_lsb_pos__228__Vfuncout;
                VL_NULL_CHECK(unnamedblk241__DOT__fields.at(
                                                            (unnamedblk241__DOT__fld_idx 
                                                             - (IData)(1U))), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1764)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__229__Vfuncout);
                unnamedblk241__DOT__unnamedblk242__DOT__prev_sz 
                    = __Vtask_get_n_bits__229__Vfuncout;
            }
            if (VL_LTS_III(32, unnamedblk241__DOT__fld_idx, 
                           (unnamedblk241__DOT__fields.size() 
                            - (IData)(1U)))) {
                VL_NULL_CHECK(unnamedblk241__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk241__DOT__fld_idx)), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1768)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__230__Vfuncout);
                unnamedblk241__DOT__unnamedblk242__DOT__next_lsb 
                    = __Vtask_get_lsb_pos__230__Vfuncout;
                VL_NULL_CHECK(unnamedblk241__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk241__DOT__fld_idx)), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1769)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__231__Vfuncout);
            }
            if (((0U == unnamedblk241__DOT__fld_idx) 
                 & ((0U == VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__next_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz)) 
                    | VL_GTS_III(32, (unnamedblk241__DOT__unnamedblk242__DOT__next_lsb 
                                      - unnamedblk241__DOT__unnamedblk242__DOT__this_sz), 
                                 VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__next_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if (((unnamedblk241__DOT__fld_idx 
                         == (unnamedblk241__DOT__fields.size() 
                             - (IData)(1U))) & ((0U 
                                                 == 
                                                 VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__this_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz)) 
                                                | VL_GTES_III(32, 
                                                              (unnamedblk241__DOT__unnamedblk242__DOT__this_lsb 
                                                               - 
                                                               (unnamedblk241__DOT__unnamedblk242__DOT__prev_lsb 
                                                                + unnamedblk241__DOT__unnamedblk242__DOT__prev_sz)), 
                                                              VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__this_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if ((0U == VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__this_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz))) {
                if (((0U == VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__next_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz)) 
                     | VL_GTES_III(32, (unnamedblk241__DOT__unnamedblk242__DOT__next_lsb 
                                        - (unnamedblk241__DOT__unnamedblk242__DOT__this_lsb 
                                           + unnamedblk241__DOT__unnamedblk242__DOT__this_sz)), 
                                   VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__next_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz)))) {
                    is_indv_accessible__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
            } else if ((VL_GTES_III(32, (unnamedblk241__DOT__unnamedblk242__DOT__next_lsb 
                                         - (unnamedblk241__DOT__unnamedblk242__DOT__this_lsb 
                                            + unnamedblk241__DOT__unnamedblk242__DOT__this_sz)), 
                                    VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__next_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz)) 
                        & VL_GTES_III(32, (unnamedblk241__DOT__unnamedblk242__DOT__this_lsb 
                                           - (unnamedblk241__DOT__unnamedblk242__DOT__prev_lsb 
                                              + unnamedblk241__DOT__unnamedblk242__DOT__prev_sz)), 
                                      VL_MODDIVS_III(32, unnamedblk241__DOT__unnamedblk242__DOT__this_lsb, unnamedblk241__DOT__unnamedblk242__DOT__bus_sz)))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        this->__Vfunc_uvm_report_enabled__232__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__232__severity = 1U;
        __Vfunc_uvm_report_enabled__232__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__233__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__233__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__232__verbosity, (IData)(__Vfunc_uvm_report_enabled__232__severity), this->__Vfunc_uvm_report_enabled__232__id, __Vtask_uvm_report_enabled__234__Vfuncout);
        __Vfunc_uvm_report_enabled__232____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__234__Vfuncout;
        __VlefCall_8__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__232____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_8__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            __Vtask_uvm_report_warning__236__line = 0x0000070cU;
            this->__Vtask_uvm_report_warning__236__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__236__verbosity = 0U;
            this->__Vtask_uvm_report_warning__236__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Target bus does not support byte enabling, and the field '"s, __VlefCall_9__get_full_name), "' is not the only field within the entire bus width. "s), "Individual field access will not be available. "s), "Accessing complete register instead."s));
            this->__Vtask_uvm_report_warning__236__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__237__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__237__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__236__id, this->__Vtask_uvm_report_warning__236__message, __Vtask_uvm_report_warning__236__verbosity, this->__Vtask_uvm_report_warning__236__filename, __Vtask_uvm_report_warning__236__line);
        }
        is_indv_accessible__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__239__verbosity;
    __Vfunc_uvm_report_enabled__239__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__239__severity;
    __Vfunc_uvm_report_enabled__239__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__239____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__239____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__240__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__241__Vfuncout;
    __Vtask_uvm_report_enabled__241__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__243__verbosity;
    __Vtask_uvm_report_warning__243__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__243__line;
    __Vtask_uvm_report_warning__243__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__244__Vfuncout;
    IData/*31:0*/ __Vtask_peek__247__status;
    __Vtask_peek__247__status = 0;
    QData/*63:0*/ __Vtask_peek__247__value;
    __Vtask_peek__247__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__248__verbosity;
    __Vfunc_uvm_report_enabled__248__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__248__severity;
    __Vfunc_uvm_report_enabled__248__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__248____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__248____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__249__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__250__Vfuncout;
    __Vtask_uvm_report_enabled__250__Vfuncout = 0;
    IData/*31:0*/ __Vtask_poke__254__status;
    __Vtask_poke__254__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ tmp;
    {
        status = 0U;
        tmp = 0ULL;
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
            this->__Vfunc_uvm_report_enabled__239__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__239__severity = 1U;
            __Vfunc_uvm_report_enabled__239__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__240__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__240__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__239__verbosity, (IData)(__Vfunc_uvm_report_enabled__239__severity), this->__Vfunc_uvm_report_enabled__239__id, __Vtask_uvm_report_enabled__241__Vfuncout);
            __Vfunc_uvm_report_enabled__239____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__241__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__239____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                __Vtask_uvm_report_warning__243__line = 0x00000724U;
                this->__Vtask_uvm_report_warning__243__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__243__verbosity = 0U;
                this->__Vtask_uvm_report_warning__243__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::poke(): Value exceeds size of field '"s, __VlefCall_1__get_name), "'"s));
                this->__Vtask_uvm_report_warning__243__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__244__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__244__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__243__id, this->__Vtask_uvm_report_warning__243__message, __Vtask_uvm_report_warning__243__verbosity, this->__Vtask_uvm_report_warning__243__filename, __Vtask_uvm_report_warning__243__line);
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                              - 1ULL));
        }
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1833)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1834)->__PVT__m_is_locked_by_field = 1U;
        tmp = 0ULL;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1839)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__247__status, __Vtask_peek__247__value, kind, parent, extension, fname, lineno);
        status = __Vtask_peek__247__status;
        tmp = __Vtask_peek__247__value;
        if ((1U == status)) {
            this->__Vfunc_uvm_report_enabled__248__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__248__severity = 2U;
            __Vfunc_uvm_report_enabled__248__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__249__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__249__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__248__verbosity, (IData)(__Vfunc_uvm_report_enabled__248__severity), this->__Vfunc_uvm_report_enabled__248__id, __Vtask_uvm_report_enabled__250__Vfuncout);
            __Vfunc_uvm_report_enabled__248____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__250__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__248____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1843)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_reg_field::poke(): Peek of register '"s, __VlefCall_3__get_full_name), "' returned status "s), Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                                                                [
                                                                                (3U 
                                                                                & status)])), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s, 0x00000733U);
            }
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1844)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1845)->__PVT__m_is_locked_by_field = 0U;
            goto __Vlabel0;
        }
        tmp = (tmp & (~ VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                 - 1ULL), this->__PVT__m_lsb)));
        tmp = (tmp | VL_SHIFTL_QQI(64,64,32, value, this->__PVT__m_lsb));
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1852)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__254__status, tmp, kind, parent, extension, fname, lineno);
        status = __Vtask_poke__254__status;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1854)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1855)->__PVT__m_is_locked_by_field = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__256__status;
    __Vtask_peek__256__status = 0;
    QData/*63:0*/ __Vtask_peek__256__value;
    __Vtask_peek__256__value = 0;
    // Body
    VL_KEEP_THIS;
    QData/*63:0*/ reg_value;
    status = 0U;
    value = 0ULL;
    reg_value = 0ULL;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1873)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__256__status, __Vtask_peek__256__value, kind, parent, extension, fname, lineno);
    status = __Vtask_peek__256__status;
    reg_value = __Vtask_peek__256__value;
    value = (VL_SHIFTR_QQI(64,64,32, reg_value, this->__PVT__m_lsb) 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL));
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__257__status;
    __Vtask_mirror__257__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    status = 0U;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1892)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__257__status, check, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_mirror__257__status;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ check) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare\n"); );
    // Body
    this->__PVT__m_check = check;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare\n"); );
    // Body
    get_compare__Vfuncrtn = this->__PVT__m_check;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize\n"); );
    // Body
    this->__PVT__value = this->__PVT__m_desired;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_desired = this->__PVT__value;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__convert2string;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_name;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1930)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__convert2string), 0x2eU);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_6__get_lsb_pos;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_access;
    IData/*31:0*/ __VlefCall_1__get_n_bits;
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    convert2string__Vfuncrtn = ""s;
    std::string fmt;
    std::string res_str;
    std::string prefix;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> reg_;
    fmt = ""s;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_register(vlSymsp, reg_);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
    VL_SFORMAT_NX(fmt,"%0d'h%%%0dh",2, '#',32,__VlefCall_0__get_n_bits
                  , '#',32,((IData)(1U) + ((__VlefCall_1__get_n_bits 
                                            - (IData)(1U)) 
                                           >> 2U)));
    this->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __VlefCall_2__get_access);
    VL_NULL_CHECK(reg_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 1948)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
    this->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
    this->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
    __Vtemp_1 = ((this->__PVT__m_desired != this->__PVT__m_mirrored)
                  ? VL_SFORMATF_N_NX(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(" (Mirror: "s, fmt), ")"s),3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_field.convert2string", 'T',-9
                                     , '#',64,this->__PVT__m_mirrored) 
                  : ""s);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN("%s %s %s[%0d:%0d]="s, fmt), "%s"s),9, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_field.convert2string", 'T',-9
                  , 'S',&(prefix), 'S',&(__VlefCall_2__get_access)
                  , 'S',&(__VlefCall_3__get_name), '#',32,
                  ((__VlefCall_4__get_lsb_pos + __VlefCall_5__get_n_bits) 
                   - (IData)(1U)), '#',32,__VlefCall_6__get_lsb_pos
                  , '#',64,this->__PVT__m_desired, 'S',&(__Vtemp_1));
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str," from %s:%0d",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), "currently being read"s), res_str);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str," from %s:%0d",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently being written"s);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__270__verbosity;
    __Vfunc_uvm_report_enabled__270__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__270__severity;
    __Vfunc_uvm_report_enabled__270__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__270____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__270____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__271__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__272__Vfuncout;
    __Vtask_uvm_report_enabled__272__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__273__verbosity;
    __Vtask_uvm_report_fatal__273__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__273__line;
    __Vtask_uvm_report_fatal__273__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__274__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__270__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__270__severity = 3U;
    __Vfunc_uvm_report_enabled__270__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__271__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__271__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__270__verbosity, (IData)(__Vfunc_uvm_report_enabled__270__severity), this->__Vfunc_uvm_report_enabled__270__id, __Vtask_uvm_report_enabled__272__Vfuncout);
    __Vfunc_uvm_report_enabled__270____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__272__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__270____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__273__line = 0x000007b2U;
        this->__Vtask_uvm_report_fatal__273__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_fatal__273__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__273__message = "RegModel field cannot be cloned"s;
        this->__Vtask_uvm_report_fatal__273__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__274__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__274__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__273__id, this->__Vtask_uvm_report_fatal__273__message, __Vtask_uvm_report_fatal__273__verbosity, this->__Vtask_uvm_report_fatal__273__filename, __Vtask_uvm_report_fatal__273__line);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__276__verbosity;
    __Vfunc_uvm_report_enabled__276__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__276__severity;
    __Vfunc_uvm_report_enabled__276__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__276____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__276____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__277__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__278__Vfuncout;
    __Vtask_uvm_report_enabled__278__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__279__verbosity;
    __Vtask_uvm_report_warning__279__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__279__line;
    __Vtask_uvm_report_warning__279__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__280__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__276__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__276__severity = 1U;
    __Vfunc_uvm_report_enabled__276__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__277__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__277__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__276__verbosity, (IData)(__Vfunc_uvm_report_enabled__276__severity), this->__Vfunc_uvm_report_enabled__276__id, __Vtask_uvm_report_enabled__278__Vfuncout);
    __Vfunc_uvm_report_enabled__276____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__278__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__276____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__279__line = 0x000007b9U;
        this->__Vtask_uvm_report_warning__279__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__279__verbosity = 0U;
        this->__Vtask_uvm_report_warning__279__message = "RegModel field copy not yet implemented"s;
        this->__Vtask_uvm_report_warning__279__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__280__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__280__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__279__id, this->__Vtask_uvm_report_warning__279__message, __Vtask_uvm_report_warning__279__verbosity, this->__Vtask_uvm_report_warning__279__filename, __Vtask_uvm_report_warning__279__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__282__verbosity;
    __Vfunc_uvm_report_enabled__282__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__282__severity;
    __Vfunc_uvm_report_enabled__282__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__282____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__282____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__283__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__284__Vfuncout;
    __Vtask_uvm_report_enabled__284__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__285__verbosity;
    __Vtask_uvm_report_warning__285__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__285__line;
    __Vtask_uvm_report_warning__285__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__286__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__282__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__282__severity = 1U;
    __Vfunc_uvm_report_enabled__282__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__283__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__283__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__282__verbosity, (IData)(__Vfunc_uvm_report_enabled__282__severity), this->__Vfunc_uvm_report_enabled__282__id, __Vtask_uvm_report_enabled__284__Vfuncout);
    __Vfunc_uvm_report_enabled__282____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__284__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__282____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__285__line = 0x000007c2U;
        this->__Vtask_uvm_report_warning__285__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__285__verbosity = 0U;
        this->__Vtask_uvm_report_warning__285__message = "RegModel field compare not yet implemented"s;
        this->__Vtask_uvm_report_warning__285__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__286__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__286__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__285__id, this->__Vtask_uvm_report_warning__285__message, __Vtask_uvm_report_warning__285__verbosity, this->__Vtask_uvm_report_warning__285__filename, __Vtask_uvm_report_warning__285__line);
    }
    do_compare__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__288__verbosity;
    __Vfunc_uvm_report_enabled__288__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__288__severity;
    __Vfunc_uvm_report_enabled__288__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__288____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__288____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__289__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__290__Vfuncout;
    __Vtask_uvm_report_enabled__290__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__291__verbosity;
    __Vtask_uvm_report_warning__291__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__291__line;
    __Vtask_uvm_report_warning__291__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__292__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__288__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__288__severity = 1U;
    __Vfunc_uvm_report_enabled__288__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__289__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__289__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__288__verbosity, (IData)(__Vfunc_uvm_report_enabled__288__severity), this->__Vfunc_uvm_report_enabled__288__id, __Vtask_uvm_report_enabled__290__Vfuncout);
    __Vfunc_uvm_report_enabled__288____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__290__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__288____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__291__line = 0x000007cbU;
        this->__Vtask_uvm_report_warning__291__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__291__verbosity = 0U;
        this->__Vtask_uvm_report_warning__291__message = "RegModel field cannot be packed"s;
        this->__Vtask_uvm_report_warning__291__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__292__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__292__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__291__id, this->__Vtask_uvm_report_warning__291__message, __Vtask_uvm_report_warning__291__verbosity, this->__Vtask_uvm_report_warning__291__filename, __Vtask_uvm_report_warning__291__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__294__verbosity;
    __Vfunc_uvm_report_enabled__294__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__294__severity;
    __Vfunc_uvm_report_enabled__294__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__294____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__294____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__295__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__296__Vfuncout;
    __Vtask_uvm_report_enabled__296__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__297__verbosity;
    __Vtask_uvm_report_warning__297__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__297__line;
    __Vtask_uvm_report_warning__297__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__298__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__294__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__294__severity = 1U;
    __Vfunc_uvm_report_enabled__294__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__295__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__295__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__294__verbosity, (IData)(__Vfunc_uvm_report_enabled__294__severity), this->__Vfunc_uvm_report_enabled__294__id, __Vtask_uvm_report_enabled__296__Vfuncout);
    __Vfunc_uvm_report_enabled__294____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__296__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__294____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__297__line = 0x000007d2U;
        this->__Vtask_uvm_report_warning__297__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__297__verbosity = 0U;
        this->__Vtask_uvm_report_warning__297__message = "RegModel field cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__297__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__298__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__298__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__297__id, this->__Vtask_uvm_report_warning__297__message, __Vtask_uvm_report_warning__297__verbosity, this->__Vtask_uvm_report_warning__297__filename, __Vtask_uvm_report_warning__297__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    {
        // Inlined CFunc: __VnoInFunc_pre_randomize
        this->__PVT__value = this->__PVT__m_desired;
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
    {
        // Inlined CFunc: __VnoInFunc_post_randomize
        this->__PVT__m_desired = this->__PVT__value;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    __Vtemp_1 = (Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.at(0U)
                  ? "value"s : VL_SFORMATF_N_NX("#x%x",1
                                                , '#',64,this->__PVT__value) );
    VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',64,VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size));
    VL_SFORMAT_NX(__Vtemp_3,"#b%b",1, '#',1,(0x00000040U 
                                             > this->__PVT__m_size));
    VL_SFORMAT_NX(__Vtemp_4,"(__Vbv (bvult %s %s))",2
                  , 'S',&(__Vtemp_1), 'S',&(__Vtemp_2));
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %s) (__Vbool %s)))",2
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__Vtemp_4)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_field.svh", 0x00000043U, 
                                                                   "      if (64 > m_size) {");
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_reg_field_valid_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__value = 0;
    __PVT__m_mirrored = 0;
    __PVT__m_desired = 0;
    __PVT__m_lsb = 0;
    __PVT__m_size = 0;
    __PVT__m_volatile = 0;
    __PVT__m_reset.atDefault() = 0;
    __PVT__m_written = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_lineno = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_individually_accessible = 0;
    __PVT__m_check = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field::~\n"); );
}
