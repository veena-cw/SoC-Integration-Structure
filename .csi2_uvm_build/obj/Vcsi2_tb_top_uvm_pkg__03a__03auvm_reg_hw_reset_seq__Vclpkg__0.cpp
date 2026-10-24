// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi60> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 50)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_hw_reset_seq"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 50)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::new\n"); );
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

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__28__status;
    __Vtask_mirror__28__status = 0;
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_type_name;
    IData/*31:0*/ __VlefCall_18__uvm_report_enabled;
    std::string __VlefCall_17__get_type_name;
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_type_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    std::string __VlefCall_12__get_type_name;
    CData/*0:0*/ __VlefLogOr_11;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_10__get_by_name;
    std::string __VlefCall_9__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_8__get_by_name;
    std::string __VlefCall_7__get_full_name;
    CData/*0:0*/ __VlefLogOr_6;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_5__get_by_name;
    std::string __VlefCall_4__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk2__DOT__d;
    unnamedblk2__DOT__d = 0;
    IData/*31:0*/ unnamedblk2__DOT__d__Vloopsize;
    unnamedblk2__DOT__d__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i;
    unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i__Vloopsize;
    unnamedblk2__DOT__unnamedblk3__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__status;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        regs.clear();
        maps.clear();
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_hw_reset_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s, "Not block or system specified to run sequence on"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x0000004bU);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U);
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 81)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_3__get_by_name);
        __VlefLogOr_6 = (VlNull{} != __VlefCall_3__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_6)))) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 83)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_4__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_5__get_by_name);
            __VlefLogOr_6 = (VlNull{} != __VlefCall_5__get_by_name);
        }
        if (__VlefLogOr_6) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_reset_blk(vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 88)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 89)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk2__DOT__d = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__d, maps.size())) {
            unnamedblk2__DOT__d__Vloopsize = maps.size();
            regs.clear();
            VL_NULL_CHECK(maps.at(unnamedblk2__DOT__d), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 100)->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
            unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__i, regs.size())) {
                unnamedblk2__DOT__unnamedblk3__DOT__i__Vloopsize 
                    = regs.size();
                {
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__status = 0U;
                    VL_NULL_CHECK(regs.at(unnamedblk2__DOT__unnamedblk3__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 107)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_7__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_8__get_by_name);
                    __VlefLogOr_11 = (VlNull{} != __VlefCall_8__get_by_name);
                    if ((1U & (~ (IData)(__VlefLogOr_11)))) {
                        VL_NULL_CHECK(regs.at(unnamedblk2__DOT__unnamedblk3__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 109)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_10__get_by_name);
                        __VlefLogOr_11 = (VlNull{} 
                                          != __VlefCall_10__get_by_name);
                    }
                    if (__VlefLogOr_11) {
                        goto __Vlabel1;
                    }
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, 
                                                         VL_CVT_PACK_STR_NN(__VlefCall_12__get_type_name), __VlefCall_13__uvm_report_enabled);
                    if ((0U != __VlefCall_13__uvm_report_enabled)) {
                        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_14__get_type_name);
                        VL_NULL_CHECK(regs.at(unnamedblk2__DOT__unnamedblk3__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 115)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk2__DOT__d), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 115)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(__VlefCall_14__get_type_name), VL_SFORMATF_N_NX("Verifying reset value of register %s in map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_15__get_full_name)
                                                                                , 'S',&(__VlefCall_16__get_full_name)) , 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000073U);
                    }
                    co_await VL_NULL_CHECK(regs.at(unnamedblk2__DOT__unnamedblk3__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 117)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__28__status, 1U, 0U, maps.at(unnamedblk2__DOT__d), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__status 
                        = __Vtask_mirror__28__status;
                    if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__status)) {
                        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_17__get_type_name);
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, 
                                                             VL_CVT_PACK_STR_NN(__VlefCall_17__get_type_name), __VlefCall_18__uvm_report_enabled);
                        if ((0U != __VlefCall_18__uvm_report_enabled)) {
                            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_19__get_type_name);
                            VL_NULL_CHECK(regs.at(unnamedblk2__DOT__unnamedblk3__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 122)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk2__DOT__d), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 122)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                [(3U & unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                                               VL_CVT_PACK_STR_NN(__VlefCall_19__get_type_name), VL_SFORMATF_N_NX("Status was %s when reading reset value of register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_20__get_full_name)
                                                                                , 'S',&(__VlefCall_21__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x0000007aU);
                        }
                    }
                    __Vlabel1: ;
                }
                if ((unnamedblk2__DOT__unnamedblk3__DOT__i__Vloopsize 
                     <= regs.size())) {
                    unnamedblk2__DOT__unnamedblk3__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__i);
                }
            }
            if ((unnamedblk2__DOT__d__Vloopsize <= maps.size())) {
                unnamedblk2__DOT__d = ((IData)(1U) 
                                       + unnamedblk2__DOT__d);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::~\n"); );
}
