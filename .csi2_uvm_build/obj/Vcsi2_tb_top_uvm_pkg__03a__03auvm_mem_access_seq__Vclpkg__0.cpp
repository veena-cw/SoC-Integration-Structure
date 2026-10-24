// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi66> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi66__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi66> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi66__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq, vlProcess, vlSymsp, "uvm_mem_access_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 210)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_access_seq"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 210)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::new\n"); );
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

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, "No register model specified to run sequence on"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000e0U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi65__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "single_mem_access_seq"s, VlNull{}, ""s, this->__PVT__mem_seq);
        this->__VnoInFunc_reset_blk(vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 233)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_do_block\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_18__get_full_name;
    IData/*31:0*/ __VlefCall_17__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_16;
    CData/*0:0*/ __VlefCall_15__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_14__get_backdoor;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_13__get_by_name;
    std::string __VlefCall_12__get_full_name;
    CData/*0:0*/ __VlefLogOr_11;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_10__get_by_name;
    std::string __VlefCall_9__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_8__get_by_name;
    std::string __VlefCall_7__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_6__get_by_name;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefLogOr_4;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_1__get_by_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i__Vloopsize;
    unnamedblk2__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> unnamedblk3__DOT__blks;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__i;
    unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__i__Vloopsize;
    unnamedblk3__DOT__unnamedblk4__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> mems;
    {
        mems.clear();
        VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 246)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_1__get_by_name);
        __VlefLogOr_4 = (VlNull{} != __VlefCall_1__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 248)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_3__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 250)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_6__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_6__get_by_name);
        }
        if (__VlefLogOr_4) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 255)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, mems.size())) {
            unnamedblk2__DOT__i__Vloopsize = mems.size();
            {
                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 258)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_7__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_8__get_by_name);
                __VlefLogOr_11 = (VlNull{} != __VlefCall_8__get_by_name);
                if ((1U & (~ (IData)(__VlefLogOr_11)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 260)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_10__get_by_name);
                    __VlefLogOr_11 = (VlNull{} != __VlefCall_10__get_by_name);
                }
                if ((1U & (~ (IData)(__VlefLogOr_11)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 262)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_12__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_13__get_by_name);
                    __VlefLogOr_11 = (VlNull{} != __VlefCall_13__get_by_name);
                }
                if (__VlefLogOr_11) {
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 267)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_14__get_backdoor);
                __VlefLogAnd_16 = (VlNull{} == __VlefCall_14__get_backdoor);
                if (__VlefLogAnd_16) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 268)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_15__has_hdl_path);
                    __VlefLogAnd_16 = (1U & (~ (IData)(__VlefCall_15__has_hdl_path)));
                }
                if (__VlefLogAnd_16) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_mem_access_seq"s, __VlefCall_17__uvm_report_enabled);
                    if ((0U != __VlefCall_17__uvm_report_enabled)) {
                        VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 270)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Memory \"%s\" does not have a backdoor mechanism available",1
                                                                                , 'S',&(__VlefCall_18__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000010eU);
                    }
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(this->__PVT__mem_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 274)->__PVT__mem 
                    = mems.at(unnamedblk2__DOT__i);
                co_await VL_NULL_CHECK(this->__PVT__mem_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 275)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel1: ;
            }
            if ((unnamedblk2__DOT__i__Vloopsize <= mems.size())) {
                unnamedblk2__DOT__i = ((IData)(1U) 
                                       + unnamedblk2__DOT__i);
            }
        }
        unnamedblk3__DOT__blks.clear();
        VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 281)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk3__DOT__blks, 1U);
        unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__i, unnamedblk3__DOT__blks.size())) {
            unnamedblk3__DOT__unnamedblk4__DOT__i__Vloopsize 
                = unnamedblk3__DOT__blks.size();
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk3__DOT__blks.at(unnamedblk3__DOT__unnamedblk4__DOT__i));
            if ((unnamedblk3__DOT__unnamedblk4__DOT__i__Vloopsize 
                 <= unnamedblk3__DOT__blks.size())) {
                unnamedblk3__DOT__unnamedblk4__DOT__i 
                    = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__i);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_reset_blk(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_reset_blk\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_access_seq::~\n"); );
}
