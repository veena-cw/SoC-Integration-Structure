// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi70> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi70__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi70> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi70__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 63)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_shared_access_seq"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 63)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_lsb_pos__15__Vfuncout;
    __Vtask_get_lsb_pos__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__16__Vfuncout;
    __Vtask_get_n_bits__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__18__Vfuncout;
    __Vtask_get_lsb_pos__18__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__19__Vfuncout;
    __Vtask_get_n_bits__19__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__28__status;
    __Vtask_write__28__status = 0;
    IData/*31:0*/ __Vtask_read__38__status;
    __Vtask_read__38__status = 0;
    QData/*63:0*/ __Vtask_read__38__value;
    __Vtask_read__38__value = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_27__get_full_name;
    std::string __VlefCall_26__get_full_name;
    std::string __VlefCall_25__get_full_name;
    IData/*31:0*/ __VlefCall_24__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_23__uvm_report_enabled;
    std::string __VlefCall_22__get_full_name;
    std::string __VlefCall_21__get_full_name;
    IData/*31:0*/ __VlefCall_20__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_19__get;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_access;
    CData/*0:0*/ __VlefCall_7__is_known_access;
    IData/*31:0*/ __VlefCall_6__get_n_maps;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_4__get_by_name;
    std::string __VlefCall_3__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk2__DOT__k;
    unnamedblk2__DOT__k = 0;
    IData/*31:0*/ unnamedblk2__DOT__k__Vloopsize;
    unnamedblk2__DOT__k__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__lsb;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__w;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk4__DOT__j;
    unnamedblk4__DOT__j = 0;
    IData/*31:0*/ unnamedblk4__DOT__j__Vloopsize;
    unnamedblk4__DOT__j__Vloopsize = 0;
    QData/*63:0*/ unnamedblk4__DOT__unnamedblk5__DOT__wo;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k;
    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k__Vloopsize;
    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k__Vloopsize = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__w;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ unnamedblk8__DOT__j;
    unnamedblk8__DOT__j = 0;
    IData/*31:0*/ unnamedblk8__DOT__j__Vloopsize;
    unnamedblk8__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk8__DOT__unnamedblk9__DOT__status;
    QData/*63:0*/ unnamedblk8__DOT__unnamedblk9__DOT__prev;
    QData/*63:0*/ unnamedblk8__DOT__unnamedblk9__DOT__v;
    IData/*31:0*/ unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k;
    unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0;
    IData/*31:0*/ unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k__Vloopsize;
    unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k__Vloopsize = 0;
    QData/*63:0*/ unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__actual;
    QData/*63:0*/ unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__exp;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    QData/*63:0*/ other_mask;
    VlQueue<QData/*63:0*/> wo_mask;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> fields;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        other_mask = 0ULL;
        wo_mask.clear();
        wo_mask.atDefault() = 0;
        fields.clear();
        maps.clear();
        if ((VlNull{} == this->__PVT__rg)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000004dU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 82)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 84)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 89)->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_6__get_n_maps);
        if (VL_GTS_III(32, 2U, __VlefCall_6__get_n_maps)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 90)->__VnoInFunc_get_maps(vlSymsp, maps);
        VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 93)->__VnoInFunc_get_fields(vlSymsp, fields);
        other_mask = 0ULL;
        unnamedblk2__DOT__k = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__k, fields.size())) {
            unnamedblk2__DOT__k__Vloopsize = fields.size();
            unnamedblk2__DOT__unnamedblk3__DOT__lsb = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__w = 0U;
            VL_NULL_CHECK(fields.at(unnamedblk2__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 100)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__15__Vfuncout);
            unnamedblk2__DOT__unnamedblk3__DOT__lsb 
                = __Vtask_get_lsb_pos__15__Vfuncout;
            VL_NULL_CHECK(fields.at(unnamedblk2__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 101)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__16__Vfuncout);
            unnamedblk2__DOT__unnamedblk3__DOT__w = __Vtask_get_n_bits__16__Vfuncout;
            VL_NULL_CHECK(fields.at(unnamedblk2__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 103)->__VnoInFunc_is_known_access(vlProcess, vlSymsp, maps.at(0U), __VlefCall_7__is_known_access);
            if ((1U & (~ (IData)(__VlefCall_7__is_known_access)))) {
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk2__DOT__unnamedblk3__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    __Vincrement1 = unnamedblk2__DOT__unnamedblk3__DOT__lsb;
                    unnamedblk2__DOT__unnamedblk3__DOT__lsb 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__lsb);
                    other_mask = (other_mask | ((QData)((IData)(1U)) 
                                                << 
                                                (0x0000003fU 
                                                 & __Vincrement1)));
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                }
            }
            if ((unnamedblk2__DOT__k__Vloopsize <= fields.size())) {
                unnamedblk2__DOT__k = ((IData)(1U) 
                                       + unnamedblk2__DOT__k);
            }
        }
        unnamedblk4__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__j, maps.size())) {
            unnamedblk4__DOT__j__Vloopsize = maps.size();
            unnamedblk4__DOT__unnamedblk5__DOT__wo = 0ULL;
            unnamedblk4__DOT__unnamedblk5__DOT__wo = 0ULL;
            unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k, fields.size())) {
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k__Vloopsize 
                    = fields.size();
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb = 0U;
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__w = 0U;
                VL_NULL_CHECK(fields.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 119)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__18__Vfuncout);
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb 
                    = __Vtask_get_lsb_pos__18__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 120)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__19__Vfuncout);
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__w 
                    = __Vtask_get_n_bits__19__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 122)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk4__DOT__j), __VlefCall_8__get_access);
                if (("WO"s == __VlefCall_8__get_access)) {
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1 
                        = unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__w;
                    while (VL_LTS_III(32, 0U, unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                        __Vincrement2 = unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb;
                        unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb 
                            = ((IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__lsb);
                        unnamedblk4__DOT__unnamedblk5__DOT__wo 
                            = (unnamedblk4__DOT__unnamedblk5__DOT__wo 
                               | ((QData)((IData)(1U)) 
                                  << (0x0000003fU & __Vincrement2)));
                        unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1 
                            = (unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk1_2__DOT____Vrepeat1 
                               - (IData)(1U));
                    }
                }
                if ((unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k__Vloopsize 
                     <= fields.size())) {
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k);
                }
            }
            wo_mask.atWriteAppend(unnamedblk4__DOT__j) 
                = unnamedblk4__DOT__unnamedblk5__DOT__wo;
            if ((unnamedblk4__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk4__DOT__j = ((IData)(1U) 
                                       + unnamedblk4__DOT__j);
            }
        }
        unnamedblk8__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk8__DOT__j, maps.size())) {
            unnamedblk8__DOT__j__Vloopsize = maps.size();
            unnamedblk8__DOT__unnamedblk9__DOT__status = 0U;
            unnamedblk8__DOT__unnamedblk9__DOT__prev = 0ULL;
            unnamedblk8__DOT__unnamedblk9__DOT__v = 0ULL;
            VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 137)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, unnamedblk8__DOT__unnamedblk9__DOT__prev);
            unnamedblk8__DOT__unnamedblk9__DOT__v = 
                ((VL_RANDOM_Q() & (~ other_mask)) | 
                 (unnamedblk8__DOT__unnamedblk9__DOT__prev 
                  & other_mask));
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_9__uvm_report_enabled);
            if ((0U != __VlefCall_9__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 143)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk8__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 143)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Writing register %s via map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_10__get_full_name)
                                                                                , 'S',&(__VlefCall_11__get_full_name)) , 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000008fU);
            }
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000001f4U, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_12__uvm_report_enabled);
            if ((0U != __VlefCall_12__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Writing 'h%h over 'h%h",2
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__v
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__prev) , 0x000001f4U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000091U);
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 147)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__28__status, unnamedblk8__DOT__unnamedblk9__DOT__v, 0U, maps.at(unnamedblk8__DOT__j), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk8__DOT__unnamedblk9__DOT__status 
                = __Vtask_write__28__status;
            if ((0U != unnamedblk8__DOT__unnamedblk9__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_13__uvm_report_enabled);
                if ((0U != __VlefCall_13__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 150)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk8__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 150)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                    __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                        [(3U & unnamedblk8__DOT__unnamedblk9__DOT__status)];
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when writing register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_14__get_full_name)
                                                                                , 'S',&(__VlefCall_15__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000096U);
                }
            }
            unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k, maps.size())) {
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k__Vloopsize 
                    = maps.size();
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__actual = 0ULL;
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__exp = 0ULL;
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_16__uvm_report_enabled);
                if ((0U != __VlefCall_16__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 157)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 157)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Reading register %s via map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_17__get_full_name)
                                                                                , 'S',&(__VlefCall_18__get_full_name)) , 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000009dU);
                }
                VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 160)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_19__get);
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__exp 
                    = (__VlefCall_19__get & (~ wo_mask.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k)));
                co_await VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 162)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__38__status, __Vtask_read__38__value, 0U, maps.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk8__DOT__unnamedblk9__DOT__status 
                    = __Vtask_read__38__status;
                unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__actual 
                    = __Vtask_read__38__value;
                if ((0U != unnamedblk8__DOT__unnamedblk9__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_20__uvm_report_enabled);
                    if ((0U != __VlefCall_20__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 165)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 165)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                        __Vtemp_2 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                            [(3U & unnamedblk8__DOT__unnamedblk9__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_21__get_full_name)
                                                                                , 'S',&(__VlefCall_22__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000a5U);
                    }
                }
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000001f4U, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_23__uvm_report_enabled);
                if ((0U != __VlefCall_23__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Read 'h%h, expecting 'h%h",2
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__actual
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__exp) , 0x000001f4U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000a9U);
                }
                if ((unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__actual 
                     != unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__exp)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_24__uvm_report_enabled);
                    if ((0U != __VlefCall_24__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 174)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 174)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk8__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 174)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Register \"%s\" through map \"%s\" is 'h%h instead of 'h%h after writing 'h%h via map \"%s\" over 'h%h.",7
                                                                                , 'S',&(__VlefCall_25__get_full_name)
                                                                                , 'S',&(__VlefCall_26__get_full_name)
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__actual
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__exp
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__v
                                                                                , 'S',&(__VlefCall_27__get_full_name)
                                                                                , '#',64,unnamedblk8__DOT__unnamedblk9__DOT__prev) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000aeU);
                    }
                }
                if ((unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k__Vloopsize 
                     <= maps.size())) {
                    unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k 
                        = ((IData)(1U) + unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k);
                }
            }
            if ((unnamedblk8__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk8__DOT__j = ((IData)(1U) 
                                       + unnamedblk8__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::~\n"); );
}
