// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi71> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi71__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi71> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi71__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 212)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_shared_access_seq"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 212)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::new\n"); );
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

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__29__status;
    __Vtask_peek__29__status = 0;
    QData/*63:0*/ __Vtask_peek__29__value;
    __Vtask_peek__29__value = 0;
    IData/*31:0*/ __Vtask_read__33__status;
    __Vtask_read__33__status = 0;
    QData/*63:0*/ __Vtask_read__33__value;
    __Vtask_read__33__value = 0;
    IData/*31:0*/ __Vtask_write__38__status;
    __Vtask_write__38__status = 0;
    IData/*31:0*/ __Vtask_read__43__status;
    __Vtask_read__43__status = 0;
    QData/*63:0*/ __Vtask_read__43__value;
    __Vtask_read__43__value = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_36__get_full_name;
    std::string __VlefCall_35__get_full_name;
    std::string __VlefCall_34__get_full_name;
    IData/*31:0*/ __VlefCall_33__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_32__get_n_bits;
    std::string __VlefCall_31__get_access;
    std::string __VlefCall_30__get_access;
    std::string __VlefCall_29__get_full_name;
    std::string __VlefCall_28__get_full_name;
    IData/*31:0*/ __VlefCall_27__uvm_report_enabled;
    std::string __VlefCall_26__get_full_name;
    std::string __VlefCall_25__get_full_name;
    IData/*31:0*/ __VlefCall_24__uvm_report_enabled;
    std::string __VlefCall_23__get_full_name;
    std::string __VlefCall_22__get_full_name;
    IData/*31:0*/ __VlefCall_21__uvm_report_enabled;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_18__get_backdoor;
    QData/*63:0*/ __VlefCall_17__get_size;
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_full_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_11__get_backdoor;
    IData/*31:0*/ __VlefCall_10__get_n_maps;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_9__get_by_name;
    std::string __VlefCall_8__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_7__get_by_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_4__get_by_name;
    std::string __VlefCall_3__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz125> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk2__DOT__j;
    unnamedblk2__DOT__j = 0;
    IData/*31:0*/ unnamedblk2__DOT__j__Vloopsize;
    unnamedblk2__DOT__j__Vloopsize = 0;
    std::string unnamedblk2__DOT__unnamedblk3__DOT__right;
    IData/*31:0*/ unnamedblk4__DOT__j;
    unnamedblk4__DOT__j = 0;
    IData/*31:0*/ unnamedblk4__DOT__j__Vloopsize;
    unnamedblk4__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__offset;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status;
    QData/*63:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__prev;
    QData/*63:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__v;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k;
    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k__Vloopsize;
    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k__Vloopsize = 0;
    QData/*63:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__actual;
    QData/*63:0*/ unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp;
    IData/*31:0*/ read_from;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        read_from = 0U;
        maps.clear();
        if ((VlNull{} == this->__PVT__mem)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, "No memory specified to run sequence on"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000dfU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 228)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 230)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 232)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 234)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_8__get_full_name)), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __VlefCall_9__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_9__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 239)->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_10__get_n_maps);
        if (VL_GTS_III(32, 2U, __VlefCall_10__get_n_maps)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 240)->__VnoInFunc_get_maps(vlSymsp, maps);
        read_from = 0xffffffffU;
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 245)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_11__get_backdoor);
        if ((VlNull{} == __VlefCall_11__get_backdoor)) {
            {
                unnamedblk2__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk2__DOT__j, maps.size())) {
                    unnamedblk2__DOT__j__Vloopsize 
                        = maps.size();
                    unnamedblk2__DOT__unnamedblk3__DOT__right = ""s;
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 248)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__j), unnamedblk2__DOT__unnamedblk3__DOT__right);
                    if ((("RW"s == unnamedblk2__DOT__unnamedblk3__DOT__right) 
                         | ("RO"s == unnamedblk2__DOT__unnamedblk3__DOT__right))) {
                        read_from = unnamedblk2__DOT__j;
                        goto __Vlabel1;
                    }
                    if ((unnamedblk2__DOT__j__Vloopsize 
                         <= maps.size())) {
                        unnamedblk2__DOT__j = ((IData)(1U) 
                                               + unnamedblk2__DOT__j);
                    }
                }
                __Vlabel1: ;
            }
            if (VL_GTS_III(32, 0U, read_from)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_mem_shared_access_seq"s, __VlefCall_12__uvm_report_enabled);
                if ((0U != __VlefCall_12__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 256)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Memory \"%s\" cannot be read from any maps or backdoor. Shared access not verified.",1
                                                                                , 'S',&(__VlefCall_13__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000100U);
                }
                goto __Vlabel0;
            }
        }
        unnamedblk4__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__j, maps.size())) {
            unnamedblk4__DOT__j__Vloopsize = maps.size();
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_shared_access_seq"s, __VlefCall_14__uvm_report_enabled);
            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 265)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk4__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 265)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Writing shared memory \"%s\" via map \"%s\".",2
                                                                                , 'S',&(__VlefCall_15__get_full_name)
                                                                                , 'S',&(__VlefCall_16__get_full_name)) , 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000109U);
            }
            unnamedblk4__DOT__unnamedblk5__DOT__offset = 0U;
            unnamedblk4__DOT__unnamedblk5__DOT__offset = 0U;
            while (true) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 268)->__VnoInFunc_get_size(vlSymsp, __VlefCall_17__get_size);
                if (!(((QData)((IData)(unnamedblk4__DOT__unnamedblk5__DOT__offset)) 
                       < __VlefCall_17__get_size))) break;
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status = 0U;
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__prev = 0ULL;
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__v = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 273)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_18__get_backdoor);
                if ((VlNull{} != __VlefCall_18__get_backdoor)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 274)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__29__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk4__DOT__unnamedblk5__DOT__offset), __Vtask_peek__29__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status 
                        = __Vtask_peek__29__status;
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__prev 
                        = __Vtask_peek__29__value;
                    if ((0U != unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_19__uvm_report_enabled);
                        if ((0U != __VlefCall_19__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 277)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                [(3U & unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading initial value of \"%s\"[%0d] through backdoor.",3
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_20__get_full_name)
                                                                                , '~',32,unnamedblk4__DOT__unnamedblk5__DOT__offset) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000115U);
                        }
                    }
                } else {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 281)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__33__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk4__DOT__unnamedblk5__DOT__offset), __Vtask_read__33__value, 0U, maps.at(read_from), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status 
                        = __Vtask_read__33__status;
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__prev 
                        = __Vtask_read__33__value;
                    if ((0U != unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_21__uvm_report_enabled);
                        if ((0U != __VlefCall_21__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 285)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                            VL_NULL_CHECK(maps.at(read_from), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 285)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                            __Vtemp_2 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                [(3U & unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading initial value of \"%s\"[%0d] through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_22__get_full_name)
                                                                                , '~',32,unnamedblk4__DOT__unnamedblk5__DOT__offset
                                                                                , 'S',&(__VlefCall_23__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000011dU);
                        }
                    }
                }
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__v 
                    = VL_RANDOM_Q();
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 293)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__38__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk4__DOT__unnamedblk5__DOT__offset), unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__v, 0U, maps.at(unnamedblk4__DOT__j), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status 
                    = __Vtask_write__38__status;
                if ((0U != unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_24__uvm_report_enabled);
                    if ((0U != __VlefCall_24__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 296)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk4__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 296)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                        __Vtemp_3 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                            [(3U & unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when writing \"%s\"[%0d] through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__VlefCall_25__get_full_name)
                                                                                , '~',32,unnamedblk4__DOT__unnamedblk5__DOT__offset
                                                                                , 'S',&(__VlefCall_26__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000128U);
                    }
                }
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k, maps.size())) {
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k__Vloopsize 
                        = maps.size();
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__actual = 0ULL;
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp = 0ULL;
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 303)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__43__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk4__DOT__unnamedblk5__DOT__offset), __Vtask_read__43__value, 0U, maps.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status 
                        = __Vtask_read__43__status;
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__actual 
                        = __Vtask_read__43__value;
                    if ((0U != unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_27__uvm_report_enabled);
                        if ((0U != __VlefCall_27__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 306)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 306)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                            __Vtemp_4 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                [(3U & unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading %s[%0d] through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__VlefCall_28__get_full_name)
                                                                                , '~',32,unnamedblk4__DOT__unnamedblk5__DOT__offset
                                                                                , 'S',&(__VlefCall_29__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000132U);
                        }
                    }
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp 
                        = unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__v;
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 311)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk4__DOT__j), __VlefCall_30__get_access);
                    if (("RO"s == __VlefCall_30__get_access)) {
                        unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp 
                            = unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__prev;
                    }
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 314)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k), __VlefCall_31__get_access);
                    if (("WO"s == __VlefCall_31__get_access)) {
                        unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp = 0ULL;
                    }
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 318)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_32__get_n_bits);
                    unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp 
                        = (unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_32__get_n_bits) 
                              - 1ULL));
                    if ((unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__actual 
                         != unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_33__uvm_report_enabled);
                        if ((0U != __VlefCall_33__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 322)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_34__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 322)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_35__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk4__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 322)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_36__get_full_name);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("%s[%0d] through map \"%s\" is 'h%h instead of 'h%h after writing 'h%h via map \"%s\" over 'h%h.",8
                                                                                , 'S',&(__VlefCall_34__get_full_name)
                                                                                , '~',32,unnamedblk4__DOT__unnamedblk5__DOT__offset
                                                                                , 'S',&(__VlefCall_35__get_full_name)
                                                                                , '#',64,unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__actual
                                                                                , '#',64,unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__exp
                                                                                , '#',64,unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__v
                                                                                , 'S',&(__VlefCall_36__get_full_name)
                                                                                , '#',64,unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__prev) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000142U);
                        }
                    }
                    if ((unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k__Vloopsize 
                         <= maps.size())) {
                        unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k 
                            = ((IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__k);
                    }
                }
                unnamedblk4__DOT__unnamedblk5__DOT__offset 
                    = ((IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__offset);
            }
            if ((unnamedblk4__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk4__DOT__j = ((IData)(1U) 
                                       + unnamedblk4__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_shared_access_seq::~\n"); );
}
