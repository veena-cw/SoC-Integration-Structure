// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi73> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi73__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi73> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi73__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq, vlProcess, vlSymsp, "uvm_reg_mem_built_in_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 33)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_built_in_seq"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 33)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__tests = 0xffffffffffffffffULL;
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

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_45__get_name;
    IData/*31:0*/ __VlefCall_44__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_43__get_by_name;
    std::string __VlefCall_42__get_full_name;
    CData/*0:0*/ __VlefLogAnd_41;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_40__get_by_name;
    std::string __VlefCall_39__get_full_name;
    std::string __VlefCall_38__get_name;
    IData/*31:0*/ __VlefCall_37__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_36__get_by_name;
    std::string __VlefCall_35__get_full_name;
    CData/*0:0*/ __VlefLogAnd_34;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_33__get_by_name;
    std::string __VlefCall_32__get_full_name;
    std::string __VlefCall_31__get_name;
    IData/*31:0*/ __VlefCall_30__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_29__get_by_name;
    std::string __VlefCall_28__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_27__get_by_name;
    std::string __VlefCall_26__get_full_name;
    CData/*0:0*/ __VlefLogAnd_25;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_24__get_by_name;
    std::string __VlefCall_23__get_full_name;
    std::string __VlefCall_22__get_name;
    IData/*31:0*/ __VlefCall_21__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_20__get_by_name;
    std::string __VlefCall_19__get_full_name;
    CData/*0:0*/ __VlefLogAnd_18;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_17__get_by_name;
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_13__get_by_name;
    std::string __VlefCall_12__get_full_name;
    CData/*0:0*/ __VlefLogAnd_11;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_10__get_by_name;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_6__get_by_name;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefLogAnd_4;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq> unnamedblk2__DOT__seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_bit_bash_seq> unnamedblk3__DOT__seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_access_seq> unnamedblk4__DOT__seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq> unnamedblk5__DOT__seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> unnamedblk6__DOT__seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_walk_seq> unnamedblk7__DOT__seq;
    {
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_built_in_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_built_in_seq"s, "Not block or system specified to run sequence on"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000003dU);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "START_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U);
        __VlefLogAnd_4 = (0U != (1ULL & this->__PVT__tests));
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 68)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogAnd_4 = (VlNull{} == __VlefCall_3__get_by_name);
        }
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 70)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_6__get_by_name);
            __VlefLogAnd_4 = (VlNull{} == __VlefCall_6__get_by_name);
        }
        if (__VlefLogAnd_4) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_hw_reset_seq"s, VlNull{}, ""s, unnamedblk2__DOT__seq);
            VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 73)->__PVT__model 
                = Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 74)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 75)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_8__get_name), " sequence."s)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000004bU);
            }
        }
        __VlefLogAnd_11 = (0U != (2ULL & this->__PVT__tests));
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 79)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_10__get_by_name);
            __VlefLogAnd_11 = (VlNull{} == __VlefCall_10__get_by_name);
        }
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 81)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_12__get_full_name)), "NO_REG_BIT_BASH_TEST"s, 0U, __VlefCall_13__get_by_name);
            __VlefLogAnd_11 = (VlNull{} == __VlefCall_13__get_by_name);
        }
        if (__VlefLogAnd_11) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi62__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_bit_bash_seq"s, VlNull{}, ""s, unnamedblk3__DOT__seq);
            VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 84)->__PVT__model 
                = Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 85)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_14__uvm_report_enabled);
            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 86)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_15__get_name), " sequence."s)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000056U);
            }
        }
        __VlefLogAnd_18 = (0U != (4ULL & this->__PVT__tests));
        if (__VlefLogAnd_18) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 90)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_16__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_17__get_by_name);
            __VlefLogAnd_18 = (VlNull{} == __VlefCall_17__get_by_name);
        }
        if (__VlefLogAnd_18) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 92)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_19__get_full_name)), "NO_REG_ACCESS_TEST"s, 0U, __VlefCall_20__get_by_name);
            __VlefLogAnd_18 = (VlNull{} == __VlefCall_20__get_by_name);
        }
        if (__VlefLogAnd_18) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi68__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_access_seq"s, VlNull{}, ""s, unnamedblk4__DOT__seq);
            VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 95)->__PVT__model 
                = Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 96)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_21__uvm_report_enabled);
            if ((0U != __VlefCall_21__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 97)->__VnoInFunc_get_name(vlSymsp, __VlefCall_22__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_22__get_name), " sequence."s)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000061U);
            }
        }
        __VlefLogAnd_25 = (0U != (8ULL & this->__PVT__tests));
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 101)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_23__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_24__get_by_name);
            __VlefLogAnd_25 = (VlNull{} == __VlefCall_24__get_by_name);
        }
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 103)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_26__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_27__get_by_name);
            __VlefLogAnd_25 = (VlNull{} == __VlefCall_27__get_by_name);
        }
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 105)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_28__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_29__get_by_name);
            __VlefLogAnd_25 = (VlNull{} == __VlefCall_29__get_by_name);
        }
        if (__VlefLogAnd_25) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi66__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_access_seq"s, VlNull{}, ""s, unnamedblk5__DOT__seq);
            VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 108)->__PVT__model 
                = Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 109)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_30__uvm_report_enabled);
            if ((0U != __VlefCall_30__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 110)->__VnoInFunc_get_name(vlSymsp, __VlefCall_31__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_31__get_name), " sequence."s)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000006eU);
            }
        }
        __VlefLogAnd_34 = (0U != (0x0000000000000010ULL 
                                  & this->__PVT__tests));
        if (__VlefLogAnd_34) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 114)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_32__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_33__get_by_name);
            __VlefLogAnd_34 = (VlNull{} == __VlefCall_33__get_by_name);
        }
        if (__VlefLogAnd_34) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 116)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_35__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_35__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_36__get_by_name);
            __VlefLogAnd_34 = (VlNull{} == __VlefCall_36__get_by_name);
        }
        if (__VlefLogAnd_34) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi72__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "shared_access_seq"s, VlNull{}, ""s, unnamedblk6__DOT__seq);
            VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 119)->__PVT__model 
                = Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 120)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_37__uvm_report_enabled);
            if ((0U != __VlefCall_37__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 121)->__VnoInFunc_get_name(vlSymsp, __VlefCall_38__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_38__get_name), " sequence."s)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000079U);
            }
        }
        __VlefLogAnd_41 = (0U != (0x0000000000000020ULL 
                                  & this->__PVT__tests));
        if (__VlefLogAnd_41) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 125)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_39__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_39__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_40__get_by_name);
            __VlefLogAnd_41 = (VlNull{} == __VlefCall_40__get_by_name);
        }
        if (__VlefLogAnd_41) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 127)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_42__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_42__get_full_name)), "NO_MEM_WALK_TEST"s, 0U, __VlefCall_43__get_by_name);
            __VlefLogAnd_41 = (VlNull{} == __VlefCall_43__get_by_name);
        }
        if (__VlefLogAnd_41) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi64__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_walk_seq"s, VlNull{}, ""s, unnamedblk7__DOT__seq);
            VL_NULL_CHECK(unnamedblk7__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 130)->__PVT__model 
                = Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk7__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 131)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_44__uvm_report_enabled);
            if ((0U != __VlefCall_44__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk7__DOT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 132)->__VnoInFunc_get_name(vlSymsp, __VlefCall_45__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_45__get_name), " sequence."s)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000084U);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::~\n"); );
}
