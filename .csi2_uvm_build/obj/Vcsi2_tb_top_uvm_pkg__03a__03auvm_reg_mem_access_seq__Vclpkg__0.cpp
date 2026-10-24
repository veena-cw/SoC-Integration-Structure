// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi69> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi69__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi69> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi69__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq, vlProcess, vlSymsp, "uvm_reg_mem_access_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 315)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_access_seq"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 315)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
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

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_7__get_by_name;
    std::string __VlefCall_6__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_5__get_by_name;
    std::string __VlefCall_4__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_access_seq> unnamedblk2__DOT__sub_seq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq> unnamedblk3__DOT__sub_seq;
    {
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_access_seq"s, "Register model handle is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000144U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U);
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 331)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_3__get_by_name);
        if ((VlNull{} == __VlefCall_3__get_by_name)) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 333)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_4__get_full_name)), "NO_REG_ACCESS_TEST"s, 0U, __VlefCall_5__get_by_name);
            if ((VlNull{} == __VlefCall_5__get_by_name)) {
                unnamedblk2__DOT__sub_seq = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_access_seq, vlProcess, vlSymsp, "reg_access_seq"s);
                this->__VnoInFunc_reset_blk(vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
                VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 337)->__VnoInFunc_reset(vlSymsp, "HARD"s);
                VL_NULL_CHECK(unnamedblk2__DOT__sub_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 338)->__PVT__model 
                    = Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model;
                co_await VL_NULL_CHECK(unnamedblk2__DOT__sub_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 339)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq>{this}, 0xffffffffU, 1U);
            }
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 341)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_7__get_by_name);
            if ((VlNull{} == __VlefCall_7__get_by_name)) {
                unnamedblk3__DOT__sub_seq = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq, vlProcess, vlSymsp, "mem_access_seq"s);
                this->__VnoInFunc_reset_blk(vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
                VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 345)->__VnoInFunc_reset(vlSymsp, "HARD"s);
                VL_NULL_CHECK(unnamedblk3__DOT__sub_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 346)->__PVT__model 
                    = Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model;
                co_await VL_NULL_CHECK(unnamedblk3__DOT__sub_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_access_seq.svh", 347)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq>{this}, 0xffffffffU, 1U);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_reset_blk(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_reset_blk\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_access_seq::~\n"); );
}
