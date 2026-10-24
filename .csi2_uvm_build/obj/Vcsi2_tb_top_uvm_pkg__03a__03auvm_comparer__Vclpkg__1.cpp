// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ lhs, QData/*63:0*/ rhs, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*0:0*/ &compare_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ mask;
    std::string msg;
    {
        compare_field_int__Vfuncrtn = 0U;
        mask = 0;
        msg = ""s;
        mask = 0xffffffffffffffffULL;
        mask = VL_SHIFTR_QQI(64,64,32, mask, ((IData)(0x00000040U) 
                                              - size));
        if (((lhs & mask) != (rhs & mask))) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 213)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 213)->__VnoInFunc_set_arg(vlSymsp, name);
            if ((0x01000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = 'b%0b : rhs = 'b%0b",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x06000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = 'o%0o : rhs = 'o%0o",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x02000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = %0d : rhs = %0d",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x09000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = %0t : rhs = %0t",3, 'T',-9
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x08000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = %0s : rhs = %0s",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else if ((0x0a000000U == radix)) {
                VL_SFORMAT_NX(msg,"lhs = %0d : rhs = %0d",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            } else {
                VL_SFORMAT_NX(msg,"lhs = 'h%0x : rhs = 'h%0x",2
                              , '#',64,(lhs & mask)
                              , '#',64,(rhs & mask));
            }
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_int__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_field_int__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, double lhs, double rhs, CData/*0:0*/ &compare_field_real__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string msg;
    {
        compare_field_real__Vfuncrtn = 0U;
        msg = ""s;
        if ((lhs != rhs)) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 263)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 263)->__VnoInFunc_set_arg(vlSymsp, name);
            VL_SFORMAT_NX(msg,"lhs = %g : rhs = %g",2
                          , 'D',lhs, 'D',rhs);
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_real__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_field_real__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, CData/*0:0*/ &compare_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object\n"); );
    // Body
    {
        compare_object__Vfuncrtn = 0U;
        if ((rhs == lhs)) {
            compare_object__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if (((0x00001000U == this->__PVT__policy) & 
             (lhs != rhs))) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 292)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 292)->__VnoInFunc_set_arg(vlSymsp, name);
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            compare_object__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (((VlNull{} == rhs) | (VlNull{} == lhs))) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 298)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 298)->__VnoInFunc_set_arg(vlSymsp, name);
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            compare_object__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 303)
                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 303)->__VnoInFunc_down(vlSymsp, name);
        VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 304)->__VnoInFunc_compare(vlSymsp, rhs, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer>{this}, compare_object__Vfuncrtn);
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 305)
                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 305)->__VnoInFunc_up(vlSymsp, 0x2eU);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string lhs, std::string rhs, CData/*0:0*/ &compare_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string msg;
    {
        compare_string__Vfuncrtn = 0U;
        msg = ""s;
        if ((lhs != rhs)) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 323)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 323)->__VnoInFunc_set_arg(vlSymsp, name);
            msg = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN("lhs = \""s, lhs), "\" : rhs = \""s), rhs), "\""s);
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_string__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_string__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__17__verbosity;
    __Vtask_uvm_report_info__17__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__17__line;
    __Vtask_uvm_report_info__17__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__18__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get;
    std::string __VlefCall_0__get;
    this->__PVT__result = ((IData)(1U) + this->__PVT__result);
    if ((this->__PVT__result <= this->__PVT__show_max)) {
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 345)
                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 345)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
        msg = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN("Miscompare for "s, __VlefCall_0__get), ": "s), msg);
        __Vtask_uvm_report_info__17__line = 0U;
        this->__Vtask_uvm_report_info__17__filename = ""s;
        __Vtask_uvm_report_info__17__verbosity = 0x00000064U;
        this->__Vtask_uvm_report_info__17__message 
            = msg;
        this->__Vtask_uvm_report_info__17__id = "MISCMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vfunc_get__18__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__17__id, this->__Vtask_uvm_report_info__17__message, __Vtask_uvm_report_info__17__verbosity, this->__Vtask_uvm_report_info__17__filename, __Vtask_uvm_report_info__17__line);
    }
    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 348)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 348)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    this->__PVT__miscompares = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(this->__PVT__miscompares, __VlefCall_1__get), ": "s), msg), "\n"s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_rollup(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_rollup\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__26__verbosity;
    __Vtask_uvm_report_warning__26__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__26__line;
    __Vtask_uvm_report_warning__26__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__27__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__38__verbosity;
    __Vtask_uvm_report_info__38__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__38__line;
    __Vtask_uvm_report_info__38__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__39__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_12__get_inst_id;
    std::string __VlefCall_11__get_name;
    IData/*31:0*/ __VlefCall_10__get_inst_id;
    std::string __VlefCall_9__get_name;
    IData/*31:0*/ __VlefCall_8__get_inst_id;
    std::string __VlefCall_7__get_name;
    IData/*31:0*/ __VlefCall_6__get_inst_id;
    std::string __VlefCall_5__get_name;
    IData/*31:0*/ __VlefCall_4__get_inst_id;
    std::string __VlefCall_3__get_name;
    IData/*31:0*/ __VlefCall_2__get_inst_id;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__depth;
    std::string msg;
    msg = ""s;
    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 361)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 361)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    if ((0U == __VlefCall_0__depth)) {
        if (((0U != this->__PVT__result) & ((0U != this->__PVT__show_max) 
                                            | (0U != (IData)(this->__PVT__sev))))) {
            if ((this->__PVT__show_max < this->__PVT__result)) {
                VL_SFORMAT_NX(msg,"%0d Miscompare(s) (%0d shown) for object ",2
                              , '#',32,this->__PVT__result
                              , '#',32,this->__PVT__show_max);
            } else {
                VL_SFORMAT_NX(msg,"%0d Miscompare(s) for object ",1
                              , '#',32,this->__PVT__result);
            }
            if ((1U == (IData)(this->__PVT__sev))) {
                VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 373)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 373)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_2__get_inst_id);
                VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 373)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 373)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_4__get_inst_id);
                __Vtask_uvm_report_warning__26__line = 0U;
                this->__Vtask_uvm_report_warning__26__filename = ""s;
                __Vtask_uvm_report_warning__26__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__26__message
                              ,"%s%s@%0d vs. %s@%0d",5
                              , 'S',&(msg), 'S',&(__VlefCall_1__get_name)
                              , '~',32,__VlefCall_2__get_inst_id
                              , 'S',&(__VlefCall_3__get_name)
                              , '~',32,__VlefCall_4__get_inst_id);
                this->__Vtask_uvm_report_warning__26__id = "MISCMP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__27__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__26__id, this->__Vtask_uvm_report_warning__26__message, __Vtask_uvm_report_warning__26__verbosity, this->__Vtask_uvm_report_warning__26__filename, __Vtask_uvm_report_warning__26__line);
            } else if ((2U == (IData)(this->__PVT__sev))) {
                VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 377)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 377)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
                VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 377)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 377)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_8__get_inst_id);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "MISCMP"s, VL_SFORMATF_N_NX("%s%s@%0d vs. %s@%0d",5
                                                                                , 'S',&(msg)
                                                                                , 'S',&(__VlefCall_5__get_name)
                                                                                , '~',32,__VlefCall_6__get_inst_id
                                                                                , 'S',&(__VlefCall_7__get_name)
                                                                                , '~',32,__VlefCall_8__get_inst_id) , 0U, ""s, 0U);
            } else {
                VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 381)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 381)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_10__get_inst_id);
                VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 381)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 381)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_12__get_inst_id);
                __Vtask_uvm_report_info__38__line = 0U;
                this->__Vtask_uvm_report_info__38__filename = ""s;
                __Vtask_uvm_report_info__38__verbosity = 0x00000064U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__38__message
                              ,"%s%s@%0d vs. %s@%0d",5
                              , 'S',&(msg), 'S',&(__VlefCall_9__get_name)
                              , '~',32,__VlefCall_10__get_inst_id
                              , 'S',&(__VlefCall_11__get_name)
                              , '~',32,__VlefCall_12__get_inst_id);
                this->__Vtask_uvm_report_info__38__id = "MISCMP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vfunc_get__39__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__38__id, this->__Vtask_uvm_report_info__38__message, __Vtask_uvm_report_info__38__verbosity, this->__Vtask_uvm_report_info__38__filename, __Vtask_uvm_report_info__38__line);
            }
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__44__verbosity;
    __Vtask_uvm_report_info__44__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__44__line;
    __Vtask_uvm_report_info__44__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__45__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCond_9;
    IData/*31:0*/ __VlefCall_8__get_inst_id;
    IData/*31:0*/ __VlefCond_7;
    IData/*31:0*/ __VlefCall_6__get_inst_id;
    std::string __VlefCall_5__get;
    IData/*31:0*/ __VlefCond_4;
    IData/*31:0*/ __VlefCall_3__get_inst_id;
    IData/*31:0*/ __VlefCond_2;
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    std::string __VlefCall_0__get;
    this->__PVT__result = ((IData)(1U) + this->__PVT__result);
    if ((this->__PVT__result <= this->__PVT__show_max)) {
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 397)
                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 397)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
        if ((VlNull{} != lhs)) {
            VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 397)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            __VlefCond_2 = __VlefCall_1__get_inst_id;
        } else {
            __VlefCond_2 = 0U;
        }
        if ((VlNull{} != rhs)) {
            VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 397)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_3__get_inst_id);
            __VlefCond_4 = __VlefCall_3__get_inst_id;
        } else {
            __VlefCond_4 = 0U;
        }
        __Vtask_uvm_report_info__44__line = 0U;
        this->__Vtask_uvm_report_info__44__filename = ""s;
        __Vtask_uvm_report_info__44__verbosity = this->__PVT__verbosity;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__44__message
                      ,"Miscompare for %0s: lhs = @%0d : rhs = @%0d",3
                      , 'S',&(__VlefCall_0__get), '~',32,__VlefCond_2
                      , '~',32,__VlefCond_4);
        this->__Vtask_uvm_report_info__44__id = "MISCMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vfunc_get__45__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__44__id, this->__Vtask_uvm_report_info__44__message, __Vtask_uvm_report_info__44__verbosity, this->__Vtask_uvm_report_info__44__filename, __Vtask_uvm_report_info__44__line);
    }
    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 400)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 400)->__VnoInFunc_get(vlSymsp, __VlefCall_5__get);
    if ((VlNull{} != lhs)) {
        VL_NULL_CHECK(lhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 400)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
        __VlefCond_7 = __VlefCall_6__get_inst_id;
    } else {
        __VlefCond_7 = 0U;
    }
    if ((VlNull{} != rhs)) {
        VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_comparer.svh", 400)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_8__get_inst_id);
        __VlefCond_9 = __VlefCall_8__get_inst_id;
    } else {
        __VlefCond_9 = 0U;
    }
    VL_SFORMAT_NX(this->__PVT__miscompares,"%s%s: lhs = @%0d : rhs = @%0d",4
                  , 'S',&(this->__PVT__miscompares)
                  , 'S',&(__VlefCall_5__get), '~',32,__VlefCond_7
                  , '~',32,__VlefCond_9);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__policy = 0U;
    this->__PVT__show_max = 1U;
    this->__PVT__verbosity = 0x00000064U;
    this->__PVT__sev = 0U;
    this->__PVT__miscompares = ""s;
    this->__PVT__physical = 1U;
    this->__PVT__abstract = 1U;
    this->__PVT__check_type = 1U;
    this->__PVT__result = 0U;
    this->__PVT__compare_map = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map, vlSymsp);
    this->__PVT__scope = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__depth = 0;
}
