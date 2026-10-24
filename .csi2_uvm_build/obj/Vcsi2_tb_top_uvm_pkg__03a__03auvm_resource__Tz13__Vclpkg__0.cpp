// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__my_type)) {
        this->__PVT__my_type = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13, vlProcess, vlSymsp, ""s, ""s);
    }
    get_type__Vfuncrtn = this->__PVT__my_type;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg::__VnoInFunc_get_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg::__VnoInFunc_get_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__4____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__6__Vfuncout;
    __Vtask_uvm_report_enabled__6__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__verbosity;
    __Vtask_uvm_report_warning__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__line;
    __Vtask_uvm_report_warning__7__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> rsrc;
    std::string msg;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
        msg = ""s;
        VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1541)->__VnoInFunc_get_by_name(vlProcess, vlSymsp, scope, name, this->__PVT__my_type, rpterr, rsrc_base);
        if ((VlNull{} == rsrc_base)) {
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rsrc_base, rsrc);
        if ((! __VlefExpr_0)) {
            if (rpterr) {
                VL_SFORMAT_NX(msg,"Resource with name %s in scope %s has incorrect type",2
                              , 'S',&(name), 'S',&(scope));
                this->__Vfunc_uvm_report_enabled__4__id = "RSRCTYPE"s;
                __Vfunc_uvm_report_enabled__4__severity = 1U;
                __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__5__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), this->__Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__6__Vfuncout);
                __Vfunc_uvm_report_enabled__4____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__6__Vfuncout;
                __VlefCall_1__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__4____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_1__uvm_report_enabled) {
                    __Vtask_uvm_report_warning__7__line = 0x0000060cU;
                    this->__Vtask_uvm_report_warning__7__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh"s;
                    __Vtask_uvm_report_warning__7__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__7__message 
                        = msg;
                    this->__Vtask_uvm_report_warning__7__id = "RSRCTYPE"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vfunc_get__8__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__7__id, this->__Vtask_uvm_report_warning__7__message, __Vtask_uvm_report_warning__7__verbosity, this->__Vtask_uvm_report_warning__7__filename, __Vtask_uvm_report_warning__7__line);
                }
            }
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg::__VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg::__VnoInFunc_get_by_type\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__14__Vfuncout;
    __Vtask_uvm_report_enabled__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__verbosity;
    __Vtask_uvm_report_warning__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__line;
    __Vtask_uvm_report_warning__15__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__16__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> rsrc;
    std::string msg;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
        msg = ""s;
        if ((VlNull{} == type_handle)) {
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1575)->__VnoInFunc_get_by_type(vlSymsp, scope, type_handle, rsrc_base);
        if ((VlNull{} == rsrc_base)) {
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rsrc_base, rsrc);
        if ((! __VlefExpr_0)) {
            VL_SFORMAT_NX(msg,"Resource with specified type handle in scope %s was not located",1
                          , 'S',&(scope));
            this->__Vfunc_uvm_report_enabled__12__id = "RSRCNF"s;
            __Vfunc_uvm_report_enabled__12__severity = 1U;
            __Vfunc_uvm_report_enabled__12__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), this->__Vfunc_uvm_report_enabled__12__id, __Vtask_uvm_report_enabled__14__Vfuncout);
            __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__14__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_warning__15__line = 0x0000062dU;
                this->__Vtask_uvm_report_warning__15__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh"s;
                __Vtask_uvm_report_warning__15__verbosity = 0U;
                this->__Vtask_uvm_report_warning__15__message 
                    = msg;
                this->__Vtask_uvm_report_warning__15__id = "RSRCNF"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__15__id, this->__Vtask_uvm_report_warning__15__message, __Vtask_uvm_report_warning__15__verbosity, this->__Vtask_uvm_report_warning__15__filename, __Vtask_uvm_report_warning__15__line);
            }
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_type__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg::__VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_7;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> __VlefCall_6__get;
    IData/*31:0*/ __VlefCall_5__size;
    CData/*0:0*/ __VlefLogAnd_4;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> rsrc;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> r;
    IData/*31:0*/ prec;
    IData/*31:0*/ first;
    {
        prec = 0U;
        first = 0U;
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1677)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        first = 0U;
        rsrc = VlNull{};
        prec = 0U;
        first = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1685)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __VlefLogAnd_4 = (first < __VlefCall_1__size);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1685)->__VnoInFunc_get(vlProcess, vlSymsp, first, __VlefCall_2__get);
                __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__get, rsrc);
                __VlefLogAnd_4 = (! __VlefExpr_3);
            }
            if (!(__VlefLogAnd_4)) break;
            first = ((IData)(1U) + first);
        }
        if ((VlNull{} == rsrc)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        prec = VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1691)
            ->__PVT__precedence;
        unnamedblk1__DOT__i = 0U;
        unnamedblk1__DOT__i = ((IData)(1U) + first);
        while (true) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1695)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if (!(VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_5__size))) break;
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1696)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, __VlefCall_6__get);
            __VlefExpr_7 = VL_CAST_DYNAMIC(__VlefCall_6__get, r);
            if (__VlefExpr_7) {
                if ((VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1697)
                     ->__PVT__precedence > prec)) {
                    rsrc = r;
                    prec = VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1699)
                        ->__PVT__precedence;
                }
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string scope) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::init(vlProcess, vlSymsp, name, scope);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"(PARAMTYPEDTYPE 'T') %0p",1
                  , '~',4096,this->__PVT__val.data());
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_get_type_handle\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13> __Vfunc_get_type__1__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz13__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__1__Vfuncout);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__1__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_set\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1503)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13>{this}, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_set_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ __SYM__override) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_set_override\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1518)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13>{this}, __SYM__override);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, VlWide<128>/*4095:0*/ &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_ZERO_W(4096, read__Vfuncrtn);
    this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        read__Vfuncrtn[__Vilp1] = this->__PVT__val[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ t, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vdeeptemp_h9f6fb78b__0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__is_read_only;
    {
        this->__VnoInFunc_is_read_only(vlSymsp, __VlefCall_0__is_read_only);
        if (__VlefCall_0__is_read_only) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "resource"s, VL_SFORMATF_N_NX("resource %s is read only -- cannot modify",1
                                                                                , 'S',&(__VlefCall_1__get_name)) , 0x00000064U, ""s, 0U);
            goto __Vlabel0;
        }
        __Vdeeptemp_h9f6fb78b__0 = ((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((this->__PVT__val[0U] 
                                                                                ^ t[0U]) 
                                                                                | (this->__PVT__val[1U] 
                                                                                ^ t[1U])) 
                                                                                | (this->__PVT__val[2U] 
                                                                                ^ t[2U])) 
                                                                                | (this->__PVT__val[3U] 
                                                                                ^ t[3U])) 
                                                                                | (this->__PVT__val[4U] 
                                                                                ^ t[4U])) 
                                                                                | (this->__PVT__val[5U] 
                                                                                ^ t[5U])) 
                                                                                | (this->__PVT__val[6U] 
                                                                                ^ t[6U])) 
                                                                                | (this->__PVT__val[7U] 
                                                                                ^ t[7U])) 
                                                                                | (this->__PVT__val[8U] 
                                                                                ^ t[8U])) 
                                                                                | (this->__PVT__val[9U] 
                                                                                ^ t[9U])) 
                                                                                | (this->__PVT__val[10U] 
                                                                                ^ t[10U])) 
                                                                                | (this->__PVT__val[11U] 
                                                                                ^ t[11U])) 
                                                                                | (this->__PVT__val[12U] 
                                                                                ^ t[12U])) 
                                                                                | (this->__PVT__val[13U] 
                                                                                ^ t[13U])) 
                                                                                | (this->__PVT__val[14U] 
                                                                                ^ t[14U])) 
                                                                                | (this->__PVT__val[15U] 
                                                                                ^ t[15U])) 
                                                                                | (this->__PVT__val[16U] 
                                                                                ^ t[16U])) 
                                                                                | (this->__PVT__val[17U] 
                                                                                ^ t[17U])) 
                                                                                | (this->__PVT__val[18U] 
                                                                                ^ t[18U])) 
                                                                                | (this->__PVT__val[19U] 
                                                                                ^ t[19U])) 
                                                                                | (this->__PVT__val[20U] 
                                                                                ^ t[20U])) 
                                                                                | (this->__PVT__val[21U] 
                                                                                ^ t[21U])) 
                                                                                | (this->__PVT__val[22U] 
                                                                                ^ t[22U])) 
                                                                                | (this->__PVT__val[23U] 
                                                                                ^ t[23U])) 
                                                                                | (this->__PVT__val[24U] 
                                                                                ^ t[24U])) 
                                                                                | (this->__PVT__val[25U] 
                                                                                ^ t[25U])) 
                                                                                | (this->__PVT__val[26U] 
                                                                                ^ t[26U])) 
                                                                                | (this->__PVT__val[27U] 
                                                                                ^ t[27U])) 
                                                                                | (this->__PVT__val[28U] 
                                                                                ^ t[28U])) 
                                                                                | (this->__PVT__val[29U] 
                                                                                ^ t[29U])) 
                                                                                | (this->__PVT__val[30U] 
                                                                                ^ t[30U])) 
                                                                                | (this->__PVT__val[31U] 
                                                                                ^ t[31U])) 
                                                                                | (this->__PVT__val[32U] 
                                                                                ^ t[32U])) 
                                                                                | (this->__PVT__val[33U] 
                                                                                ^ t[33U])) 
                                                                                | (this->__PVT__val[34U] 
                                                                                ^ t[34U])) 
                                                                                | (this->__PVT__val[35U] 
                                                                                ^ t[35U])) 
                                                                                | (this->__PVT__val[36U] 
                                                                                ^ t[36U])) 
                                                                                | (this->__PVT__val[37U] 
                                                                                ^ t[37U])) 
                                                                                | (this->__PVT__val[38U] 
                                                                                ^ t[38U])) 
                                                                                | (this->__PVT__val[39U] 
                                                                                ^ t[39U])) 
                                                                                | (this->__PVT__val[40U] 
                                                                                ^ t[40U])) 
                                                                                | (this->__PVT__val[41U] 
                                                                                ^ t[41U])) 
                                                                                | (this->__PVT__val[42U] 
                                                                                ^ t[42U])) 
                                                                                | (this->__PVT__val[43U] 
                                                                                ^ t[43U])) 
                                                                                | (this->__PVT__val[44U] 
                                                                                ^ t[44U])) 
                                                                                | (this->__PVT__val[45U] 
                                                                                ^ t[45U])) 
                                                                                | (this->__PVT__val[46U] 
                                                                                ^ t[46U])) 
                                                                                | (this->__PVT__val[47U] 
                                                                                ^ t[47U])) 
                                                                                | (this->__PVT__val[48U] 
                                                                                ^ t[48U])) 
                                                                                | (this->__PVT__val[49U] 
                                                                                ^ t[49U])) 
                                                                                | (this->__PVT__val[50U] 
                                                                                ^ t[50U])) 
                                                                                | (this->__PVT__val[51U] 
                                                                                ^ t[51U])) 
                                                                                | (this->__PVT__val[52U] 
                                                                                ^ t[52U])) 
                                                                                | (this->__PVT__val[53U] 
                                                                                ^ t[53U])) 
                                                                                | (this->__PVT__val[54U] 
                                                                                ^ t[54U])) 
                                                                                | (this->__PVT__val[55U] 
                                                                                ^ t[55U])) 
                                                                                | (this->__PVT__val[56U] 
                                                                                ^ t[56U])) 
                                                                                | (this->__PVT__val[57U] 
                                                                                ^ t[57U])) 
                                                                                | (this->__PVT__val[58U] 
                                                                                ^ t[58U])) 
                                                                                | (this->__PVT__val[59U] 
                                                                                ^ t[59U])) 
                                                                                | (this->__PVT__val[60U] 
                                                                                ^ t[60U])) 
                                                                                | (this->__PVT__val[61U] 
                                                                                ^ t[61U])) 
                                                                                | (this->__PVT__val[62U] 
                                                                                ^ t[62U])) 
                                                                                | (this->__PVT__val[63U] 
                                                                                ^ t[63U])) 
                                                                                | (this->__PVT__val[64U] 
                                                                                ^ t[64U])) 
                                                                                | (this->__PVT__val[65U] 
                                                                                ^ t[65U])) 
                                                                                | (this->__PVT__val[66U] 
                                                                                ^ t[66U])) 
                                                                                | (this->__PVT__val[67U] 
                                                                                ^ t[67U])) 
                                                                                | (this->__PVT__val[68U] 
                                                                                ^ t[68U])) 
                                                                                | (this->__PVT__val[69U] 
                                                                                ^ t[69U])) 
                                                                                | (this->__PVT__val[70U] 
                                                                                ^ t[70U])) 
                                                                                | (this->__PVT__val[71U] 
                                                                                ^ t[71U])) 
                                                                                | (this->__PVT__val[72U] 
                                                                                ^ t[72U])) 
                                                                                | (this->__PVT__val[73U] 
                                                                                ^ t[73U])) 
                                                                                | (this->__PVT__val[74U] 
                                                                                ^ t[74U])) 
                                                                               | (this->__PVT__val[75U] 
                                                                                ^ t[75U])) 
                                                                              | (this->__PVT__val[76U] 
                                                                                ^ t[76U])) 
                                                                             | (this->__PVT__val[77U] 
                                                                                ^ t[77U])) 
                                                                            | (this->__PVT__val[78U] 
                                                                               ^ t[78U])) 
                                                                           | (this->__PVT__val[79U] 
                                                                              ^ t[79U])) 
                                                                          | (this->__PVT__val[80U] 
                                                                             ^ t[80U])) 
                                                                         | (this->__PVT__val[81U] 
                                                                            ^ t[81U])) 
                                                                        | (this->__PVT__val[82U] 
                                                                           ^ t[82U])) 
                                                                       | (this->__PVT__val[83U] 
                                                                          ^ t[83U])) 
                                                                      | (this->__PVT__val[84U] 
                                                                         ^ t[84U])) 
                                                                     | (this->__PVT__val[85U] 
                                                                        ^ t[85U])) 
                                                                    | (this->__PVT__val[86U] 
                                                                       ^ t[86U])) 
                                                                   | (this->__PVT__val[87U] 
                                                                      ^ t[87U])) 
                                                                  | (this->__PVT__val[88U] 
                                                                     ^ t[88U])) 
                                                                 | (this->__PVT__val[89U] 
                                                                    ^ t[89U])) 
                                                                | (this->__PVT__val[90U] 
                                                                   ^ t[90U])) 
                                                               | (this->__PVT__val[91U] 
                                                                  ^ t[91U])) 
                                                              | (this->__PVT__val[92U] 
                                                                 ^ t[92U])) 
                                                             | (this->__PVT__val[93U] 
                                                                ^ t[93U])) 
                                                            | (this->__PVT__val[94U] 
                                                               ^ t[94U])) 
                                                           | (this->__PVT__val[95U] 
                                                              ^ t[95U])) 
                                                          | (this->__PVT__val[96U] 
                                                             ^ t[96U])) 
                                                         | (this->__PVT__val[97U] 
                                                            ^ t[97U])) 
                                                        | (this->__PVT__val[98U] 
                                                           ^ t[98U])) 
                                                       | (this->__PVT__val[99U] 
                                                          ^ t[99U])) 
                                                      | (this->__PVT__val[100U] 
                                                         ^ t[100U])) 
                                                     | (this->__PVT__val[101U] 
                                                        ^ t[101U])) 
                                                    | (this->__PVT__val[102U] 
                                                       ^ t[102U])) 
                                                   | (this->__PVT__val[103U] 
                                                      ^ t[103U])) 
                                                  | (this->__PVT__val[104U] 
                                                     ^ t[104U])) 
                                                 | (this->__PVT__val[105U] 
                                                    ^ t[105U])) 
                                                | (this->__PVT__val[106U] 
                                                   ^ t[106U])) 
                                               | (this->__PVT__val[107U] 
                                                  ^ t[107U])) 
                                              | (this->__PVT__val[108U] 
                                                 ^ t[108U])) 
                                             | (this->__PVT__val[109U] 
                                                ^ t[109U])) 
                                            | (this->__PVT__val[110U] 
                                               ^ t[110U])) 
                                           | (this->__PVT__val[111U] 
                                              ^ t[111U])) 
                                          | (this->__PVT__val[112U] 
                                             ^ t[112U])) 
                                         | (this->__PVT__val[113U] 
                                            ^ t[113U])) 
                                        | (this->__PVT__val[114U] 
                                           ^ t[114U])) 
                                       | (this->__PVT__val[115U] 
                                          ^ t[115U])) 
                                      | (this->__PVT__val[116U] 
                                         ^ t[116U])) 
                                     | (this->__PVT__val[117U] 
                                        ^ t[117U])) 
                                    | (this->__PVT__val[118U] 
                                       ^ t[118U]));
        if ((0U == (((((((((__Vdeeptemp_h9f6fb78b__0 
                            | (this->__PVT__val[119U] 
                               ^ t[119U])) | (this->__PVT__val[120U] 
                                              ^ t[120U])) 
                          | (this->__PVT__val[121U] 
                             ^ t[121U])) | (this->__PVT__val[122U] 
                                            ^ t[122U])) 
                        | (this->__PVT__val[123U] ^ t[123U])) 
                       | (this->__PVT__val[124U] ^ t[124U])) 
                      | (this->__PVT__val[125U] ^ t[125U])) 
                     | (this->__PVT__val[126U] ^ t[126U])) 
                    | (this->__PVT__val[127U] ^ t[127U])))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000007fU)) {
            this->__PVT__val[__Vilp1] = t[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_set_priority\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1659)->__VnoInFunc_set_priority(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13>{this}, pri);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    VL_SCOPED_RAND_RESET_W(4096, __PVT__val, 11273257914447788301ULL, 14157650751545541461ull);
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13::~\n"); );
}
