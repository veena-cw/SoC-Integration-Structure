// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__my_type)) {
        this->__PVT__my_type = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129, vlProcess, vlSymsp, ""s, ""s);
    }
    get_type__Vfuncrtn = this->__PVT__my_type;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg::__VnoInFunc_get_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg::__VnoInFunc_get_by_name\n"); );
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
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> rsrc;
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg::__VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg::__VnoInFunc_get_by_type\n"); );
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
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> rsrc;
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg::__VnoInFunc_get_highest_precedence(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
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
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> rsrc;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> r;
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string scope) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::init(vlProcess, vlSymsp, name, scope);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__val);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"(PARAMTYPEDTYPE 'T') %0p",1
                  , '!',&(__Vtemp_1));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_get_type_handle\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> __Vfunc_get_type__1__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz129__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__1__Vfuncout);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__1__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_set\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1503)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129>{this}, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_set_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ __SYM__override) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_set_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1518)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129>{this}, __SYM__override);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    read__Vfuncrtn = this->__PVT__val;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> t, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
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
        if ((this->__PVT__val == t)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        this->__PVT__val = t;
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_set_priority\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1659)->__VnoInFunc_set_priority(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129>{this}, pri);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129::~\n"); );
}
