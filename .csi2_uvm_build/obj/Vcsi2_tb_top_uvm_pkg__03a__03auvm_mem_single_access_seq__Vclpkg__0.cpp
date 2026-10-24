// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi65> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi65__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi65> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi65__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq, vlProcess, vlSymsp, "uam_mem_single_access_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 58)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_single_access_seq"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 58)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::new\n"); );
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

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_n_bits__19__Vfuncout;
    __Vtask_get_n_bits__19__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__27__status;
    __Vtask_peek__27__status = 0;
    QData/*63:0*/ __Vtask_peek__27__value;
    __Vtask_peek__27__value = 0;
    IData/*31:0*/ __Vtask_write__31__status;
    __Vtask_write__31__status = 0;
    IData/*31:0*/ __Vtask_peek__36__status;
    __Vtask_peek__36__status = 0;
    QData/*63:0*/ __Vtask_peek__36__value;
    __Vtask_peek__36__value = 0;
    IData/*31:0*/ __Vtask_poke__43__status;
    __Vtask_poke__43__status = 0;
    IData/*31:0*/ __Vtask_read__47__status;
    __Vtask_read__47__status = 0;
    QData/*63:0*/ __Vtask_read__47__value;
    __Vtask_read__47__value = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_34__get_full_name;
    IData/*31:0*/ __VlefCall_33__uvm_report_enabled;
    std::string __VlefCall_32__get_full_name;
    IData/*31:0*/ __VlefCall_31__uvm_report_enabled;
    std::string __VlefCall_30__get_full_name;
    std::string __VlefCall_29__get_full_name;
    IData/*31:0*/ __VlefCall_28__uvm_report_enabled;
    std::string __VlefCall_27__get_full_name;
    IData/*31:0*/ __VlefCall_26__uvm_report_enabled;
    std::string __VlefCall_25__get_full_name;
    IData/*31:0*/ __VlefCall_24__uvm_report_enabled;
    std::string __VlefCall_23__get_full_name;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_full_name;
    IData/*31:0*/ __VlefCall_17__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_16__get_size;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    std::string __VlefCall_12__get_full_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_10;
    CData/*0:0*/ __VlefCall_9__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_8__get_backdoor;
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
    std::string mode;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    IData/*31:0*/ n_bits;
    {
        mode = ""s;
        maps.clear();
        n_bits = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000046U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 75)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 77)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 79)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz125__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 84)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_8__get_backdoor);
        __VlefLogAnd_10 = (VlNull{} == __VlefCall_8__get_backdoor);
        if (__VlefLogAnd_10) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 84)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_9__has_hdl_path);
            __VlefLogAnd_10 = (1U & (~ (IData)(__VlefCall_9__has_hdl_path)));
        }
        if (__VlefLogAnd_10) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_11__uvm_report_enabled);
            if ((0U != __VlefCall_11__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 86)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_12__get_full_name), "' does not have a backdoor mechanism available"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000056U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 90)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__19__Vfuncout);
        n_bits = __Vtask_get_n_bits__19__Vfuncout;
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 93)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk2__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__j, maps.size())) {
            unnamedblk2__DOT__j__Vloopsize = maps.size();
            unnamedblk2__DOT__unnamedblk3__DOT__status = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__val = 0ULL;
            unnamedblk2__DOT__unnamedblk3__DOT__exp = 0ULL;
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_access_seq"s, __VlefCall_13__uvm_report_enabled);
            if ((0U != __VlefCall_13__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 102)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 102)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_access_seq"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Verifying access of memory '"s, __VlefCall_14__get_full_name), "' in map '"s), __VlefCall_15__get_full_name), "' ..."s)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000066U);
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 104)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__j), mode);
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0U;
            while (true) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 111)->__VnoInFunc_get_size(vlSymsp, __VlefCall_16__get_size);
                if (!(((QData)((IData)(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) 
                       < __VlefCall_16__get_size))) break;
                unnamedblk2__DOT__unnamedblk3__DOT__val 
                    = ((QData)((IData)(VL_RANDOM_I())) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                          - 1ULL));
                if (VL_LTS_III(32, 0x00000020U, n_bits)) {
                    unnamedblk2__DOT__unnamedblk3__DOT__val 
                        = ((unnamedblk2__DOT__unnamedblk3__DOT__val 
                            << 0x00000020U) | (QData)((IData)(
                                                              VL_RANDOM_I())));
                }
                if (("RO"s == mode)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 116)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__27__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), __Vtask_peek__27__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk2__DOT__unnamedblk3__DOT__status 
                        = __Vtask_peek__27__status;
                    unnamedblk2__DOT__unnamedblk3__DOT__exp 
                        = __Vtask_peek__27__value;
                    if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_17__uvm_report_enabled);
                        if ((0U != __VlefCall_17__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 119)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                                [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading \"%s[%0d]\" through backdoor.",3
                                                                                , 'S',&(__Vtemp_1)
                                                                                , 'S',&(__VlefCall_18__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000077U);
                        }
                    }
                } else {
                    unnamedblk2__DOT__unnamedblk3__DOT__exp 
                        = unnamedblk2__DOT__unnamedblk3__DOT__val;
                }
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 124)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__31__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), unnamedblk2__DOT__unnamedblk3__DOT__val, 0U, maps.at(unnamedblk2__DOT__j), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk2__DOT__unnamedblk3__DOT__status 
                    = __Vtask_write__31__status;
                if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_19__uvm_report_enabled);
                    if ((0U != __VlefCall_19__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 127)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 127)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                        __Vtemp_2 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                            [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when writing \"%s[%0d]\" through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_20__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , 'S',&(__VlefCall_21__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000007fU);
                    }
                }
                co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                        vlProcess, 
                                                        "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 
                                                        129);
                unnamedblk2__DOT__unnamedblk3__DOT__val = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 132)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__36__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), __Vtask_peek__36__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                unnamedblk2__DOT__unnamedblk3__DOT__status 
                    = __Vtask_peek__36__status;
                unnamedblk2__DOT__unnamedblk3__DOT__val 
                    = __Vtask_peek__36__value;
                if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_22__uvm_report_enabled);
                    if ((0U != __VlefCall_22__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 135)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                        __Vtemp_3 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                            [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading \"%s[%0d]\" through backdoor.",3
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__VlefCall_23__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000087U);
                    }
                } else if ((unnamedblk2__DOT__unnamedblk3__DOT__val 
                            != unnamedblk2__DOT__unnamedblk3__DOT__exp)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_24__uvm_report_enabled);
                    if ((0U != __VlefCall_24__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 140)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Backdoor \"%s[%0d]\" read back as 'h%h instead of 'h%h.",4
                                                                                , 'S',&(__VlefCall_25__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__val
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__exp) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000008cU);
                    }
                }
                unnamedblk2__DOT__unnamedblk3__DOT__exp 
                    = ((~ unnamedblk2__DOT__unnamedblk3__DOT__exp) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                          - 1ULL));
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 145)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__43__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), unnamedblk2__DOT__unnamedblk3__DOT__exp, ""s, VlNull{}, VlNull{}, ""s, 0U);
                unnamedblk2__DOT__unnamedblk3__DOT__status 
                    = __Vtask_poke__43__status;
                if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_26__uvm_report_enabled);
                    if ((0U != __VlefCall_26__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 148)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                        __Vtemp_4 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                            [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when writing \"%s[%0d-1]\" through backdoor.",3
                                                                                , 'S',&(__Vtemp_4)
                                                                                , 'S',&(__VlefCall_27__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000094U);
                    }
                }
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 151)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__47__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), __Vtask_read__47__value, 0U, maps.at(unnamedblk2__DOT__j), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk2__DOT__unnamedblk3__DOT__status 
                    = __Vtask_read__47__status;
                unnamedblk2__DOT__unnamedblk3__DOT__val 
                    = __Vtask_read__47__value;
                if ((0U != unnamedblk2__DOT__unnamedblk3__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_28__uvm_report_enabled);
                    if ((0U != __VlefCall_28__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 154)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 154)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_30__get_full_name);
                        __Vtemp_5 = Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                            [(3U & unnamedblk2__DOT__unnamedblk3__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %s when reading \"%s[%0d]\" through map \"%s\".",4
                                                                                , 'S',&(__Vtemp_5)
                                                                                , 'S',&(__VlefCall_29__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , 'S',&(__VlefCall_30__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000009aU);
                    }
                } else if (("WO"s == mode)) {
                    if ((0ULL != unnamedblk2__DOT__unnamedblk3__DOT__val)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_31__uvm_report_enabled);
                        if ((0U != __VlefCall_31__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 160)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Front door \"%s[%0d]\" read back as 'h%h instead of 'h00000000.",3
                                                                                , 'S',&(__VlefCall_32__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__val) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000a0U);
                        }
                    }
                } else if ((unnamedblk2__DOT__unnamedblk3__DOT__val 
                            != unnamedblk2__DOT__unnamedblk3__DOT__exp)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_33__uvm_report_enabled);
                    if ((0U != __VlefCall_33__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh", 166)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_34__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Front door \"%s[%0d]\" read back as 'h%h instead of 'h%h.",4
                                                                                , 'S',&(__VlefCall_34__get_full_name)
                                                                                , '~',32,unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__val
                                                                                , '#',64,unnamedblk2__DOT__unnamedblk3__DOT__exp) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000a6U);
                    }
                }
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                    = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_single_access_seq::~\n"); );
}
