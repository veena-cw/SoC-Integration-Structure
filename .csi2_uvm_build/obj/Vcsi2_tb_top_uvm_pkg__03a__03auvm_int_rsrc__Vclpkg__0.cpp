// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc__Vclpkg::__VnoInFunc_get_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc__Vclpkg::__VnoInFunc_get_by_name\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_> __Vfunc_get_by_name__0__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__2__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__3__Vfuncout;
    __Vtask_uvm_report_enabled__3__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__4__verbosity;
    __Vtask_uvm_report_fatal__4__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__4__line;
    __Vtask_uvm_report_fatal__4__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc> t;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> b;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource___Vclpkg.__VnoInFunc_get_by_name(vlSymsp, scope, name, (IData)(rpterr), __Vfunc_get_by_name__0__Vfuncout);
    b = __Vfunc_get_by_name__0__Vfuncout;
    __VlefExpr_0 = VL_CAST_DYNAMIC(b, t);
    if ((! __VlefExpr_0)) {
        this->__Vfunc_uvm_report_enabled__1__id = "BADCAST"s;
        __Vfunc_uvm_report_enabled__1__severity = 3U;
        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __Vtask_uvm_report_enabled__3__Vfuncout);
        __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__3__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            __Vtask_uvm_report_fatal__4__line = 0x00000053U;
            this->__Vtask_uvm_report_fatal__4__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_specializations.svh"s;
            __Vtask_uvm_report_fatal__4__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__4__message = "cannot cast resource to resource subtype"s;
            this->__Vtask_uvm_report_fatal__4__id = "BADCAST"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vfunc_get__5__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__4__id, this->__Vtask_uvm_report_fatal__4__message, __Vtask_uvm_report_fatal__4__verbosity, this->__Vtask_uvm_report_fatal__4__filename, __Vtask_uvm_report_fatal__4__line);
        }
    }
    get_by_name__Vfuncrtn = t;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc__Vclpkg::__VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc__Vclpkg::__VnoInFunc_get_by_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_> __Vfunc_get_by_type__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__verbosity;
    __Vfunc_uvm_report_enabled__8__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__8__severity;
    __Vfunc_uvm_report_enabled__8__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__10__Vfuncout;
    __Vtask_uvm_report_enabled__10__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__11__verbosity;
    __Vtask_uvm_report_fatal__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__11__line;
    __Vtask_uvm_report_fatal__11__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__12__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc> t;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> b;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource___Vclpkg.__VnoInFunc_get_by_type(vlSymsp, scope, type_handle, __Vfunc_get_by_type__7__Vfuncout);
    b = __Vfunc_get_by_type__7__Vfuncout;
    __VlefExpr_0 = VL_CAST_DYNAMIC(b, t);
    if ((! __VlefExpr_0)) {
        this->__Vfunc_uvm_report_enabled__8__id = "BADCAST"s;
        __Vfunc_uvm_report_enabled__8__severity = 3U;
        __Vfunc_uvm_report_enabled__8__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __Vtask_uvm_report_enabled__10__Vfuncout);
        __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__10__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            __Vtask_uvm_report_fatal__11__line = 0x00000053U;
            this->__Vtask_uvm_report_fatal__11__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource_specializations.svh"s;
            __Vtask_uvm_report_fatal__11__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__11__message = "cannot cast resource to resource subtype"s;
            this->__Vtask_uvm_report_fatal__11__id = "BADCAST"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__11__id, this->__Vtask_uvm_report_fatal__11__message, __Vtask_uvm_report_fatal__11__verbosity, this->__Vtask_uvm_report_fatal__11__filename, __Vtask_uvm_report_fatal__11__line);
        }
    }
    get_by_type__Vfuncrtn = t;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string s) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_::init(vlProcess, vlSymsp, name, s);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__read;
    std::string s;
    convert2string__Vfuncrtn = ""s;
    s = ""s;
    this->__VnoInFunc_read(vlProcess, vlSymsp, VlNull{}, __VlefCall_0__read);
    VL_SFORMAT_NX(s,"%0d",1, '~',32,__VlefCall_0__read);
    convert2string__Vfuncrtn = s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_int_rsrc::~\n"); );
}
