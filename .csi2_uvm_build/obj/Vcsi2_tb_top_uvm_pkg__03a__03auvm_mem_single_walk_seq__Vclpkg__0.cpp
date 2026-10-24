// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi63> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi63__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi63> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi63__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq, vlProcess, vlSymsp, "uvm_mem_walk_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 62)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_single_walk_seq"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 62)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::new\n"); );
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

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_n_bits__14__Vfuncout;
    __Vtask_get_n_bits__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__22__status;
    __Vtask_write__22__status = 0;
    IData/*31:0*/ __Vtask_read__27__status;
    __Vtask_read__27__status = 0;
    QData/*63:0*/ __Vtask_read__27__value;
    __Vtask_read__27__value = 0;
    IData/*31:0*/ __Vtask_write__35__status;
    __Vtask_write__35__status = 0;
    IData/*31:0*/ __Vtask_read__41__status;
    __Vtask_read__41__status = 0;
    QData/*63:0*/ __Vtask_read__41__value;
    __Vtask_read__41__value = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_29__get_full_name;
    IData/*31:0*/ __VlefCall_28__uvm_report_enabled;
    std::string __VlefCall_27__get_full_name;
    std::string __VlefCall_26__get_full_name;
    IData/*31:0*/ __VlefCall_25__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_24__get_size;
    std::string __VlefCall_23__get_full_name;
    std::string __VlefCall_22__get_full_name;
    IData/*31:0*/ __VlefCall_21__uvm_report_enabled;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_12__get_size;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_access;
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
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__status;
    QData/*63:0*/ unnamedblk2__DOT__unnamedblk3__DOT__val;
    QData/*63:0*/ unnamedblk2__DOT__unnamedblk3__DOT__exp;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    IData/*31:0*/ n_bits;
    {
        maps.clear();
        n_bits = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, "No memory specified to run sequence on"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x0000005bU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 96)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 98)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 100)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_MEM_WALK_TEST"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 104)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__14__Vfuncout);
        n_bits = __Vtask_get_n_bits__14__Vfuncout;
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 107)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk2__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__j, maps.size())) {
            unnamedblk2__DOT__j__Vloopsize = maps.size();
            {
                unnamedblk2__DOT__unnamedblk3__DOT__status = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__val = 0ULL;
                unnamedblk2__DOT__unnamedblk3__DOT__exp = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 115)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__j), __VlefCall_8__get_access);
                if (("RW"s != __VlefCall_8__get_access)) {
                    goto __Vlabel1;
                }
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_walk_seq"s, __VlefCall_9__uvm_report_enabled);
                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 118)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 118)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Walking memory %s in map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_10__get_full_name)
                                                                                , 'S',&(__VlefCall_11__get_full_name)) , 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000076U);
                }
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0U;
                while (true) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 125)->__VnoInFunc_get_size(vlSymsp, __VlefCall_12__get_size);
                    if (!(((QData)((IData)(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) 
                           < __VlefCall_12__get_size))) break;
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 127)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__22__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), 
                                                                                (~ 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)), 0U, maps.at(unnamedblk2__DOT__j), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk2__DOT__unnamedblk3__DOT__status 
                        = __Vtask_write__22__status;
                    if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_13__uvm_report_enabled);
                        if ((0U != __VlefCall_13__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 131)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 131)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %s when writing \"%s[%0d]\" through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_14__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , 'S',&(__VlefCall_15__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000083U);
                        }
                    }
                    if (VL_LTS_III(32, 0U, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) {
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 135)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__27__status, 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k) 
                                                                                - 1ULL), __Vtask_read__27__value, 0U, maps.at(unnamedblk2__DOT__j), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk2__DOT__unnamedblk3__DOT__status 
                            = __Vtask_read__27__status;
                        unnamedblk2__DOT__unnamedblk3__DOT__val 
                            = __Vtask_read__27__value;
                        if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_16__uvm_report_enabled);
                            if ((0U != __VlefCall_16__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 138)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                                VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 138)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                                __Vtemp_2 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                    [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %s when reading \"%s[%0d]\" through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_17__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , 'S',&(__VlefCall_18__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x0000008aU);
                            }
                        } else {
                            unnamedblk2__DOT__unnamedblk3__DOT__exp 
                                = ((~ ((QData)((IData)(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) 
                                       - 1ULL)) & (
                                                   VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                                   - 1ULL));
                            if ((unnamedblk2__DOT__unnamedblk3__DOT__val 
                                 != unnamedblk2__DOT__unnamedblk3__DOT__exp)) {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_19__uvm_report_enabled);
                                if ((0U != __VlefCall_19__uvm_report_enabled)) {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 144)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("\"%s[%0d-1]\" read back as 'h%h instead of 'h%h.",4
                                                                                , 'S',&(__VlefCall_20__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__val
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__exp) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000090U);
                                }
                            }
                        }
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 149)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__35__status, 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k) 
                                                                                - 1ULL), 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k) 
                                                                                - 1ULL), 0U, maps.at(unnamedblk2__DOT__j), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk2__DOT__unnamedblk3__DOT__status 
                            = __Vtask_write__35__status;
                        if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_21__uvm_report_enabled);
                            if ((0U != __VlefCall_21__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 152)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                                VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 152)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                                __Vtemp_3 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                    [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %s when writing \"%s[%0d-1]\" through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__VlefCall_22__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , 'S',&(__VlefCall_23__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000098U);
                            }
                        }
                    }
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 156)->__VnoInFunc_get_size(vlSymsp, __VlefCall_24__get_size);
                    if (((QData)((IData)(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) 
                         == (__VlefCall_24__get_size 
                             - 1ULL))) {
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 157)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__41__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), __Vtask_read__41__value, 0U, maps.at(unnamedblk2__DOT__j), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk2__DOT__unnamedblk3__DOT__status 
                            = __Vtask_read__41__status;
                        unnamedblk2__DOT__unnamedblk3__DOT__val 
                            = __Vtask_read__41__value;
                        if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_25__uvm_report_enabled);
                            if ((0U != __VlefCall_25__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 160)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                                VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 160)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                                __Vtemp_4 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                    [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %s when reading \"%s[%0d]\" through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__VlefCall_26__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , 'S',&(__VlefCall_27__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x000000a0U);
                            }
                        } else {
                            unnamedblk2__DOT__unnamedblk3__DOT__exp 
                                = ((~ (QData)((IData)(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k))) 
                                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                      - 1ULL));
                            if ((unnamedblk2__DOT__unnamedblk3__DOT__val 
                                 != unnamedblk2__DOT__unnamedblk3__DOT__exp)) {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_28__uvm_report_enabled);
                                if ((0U != __VlefCall_28__uvm_report_enabled)) {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh", 166)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("\"%s[%0d]\" read back as 'h%h instead of 'h%h.",4
                                                                                , 'S',&(__VlefCall_29__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__val
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__exp) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x000000a6U);
                                }
                            }
                        }
                    }
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                }
                __Vlabel1: ;
            }
            if ((unnamedblk2__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk2__DOT__j = ((IData)(1U) 
                                       + unnamedblk2__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::~\n"); );
}
