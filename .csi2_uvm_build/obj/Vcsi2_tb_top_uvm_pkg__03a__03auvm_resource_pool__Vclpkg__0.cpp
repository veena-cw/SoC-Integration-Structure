// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__rp)) {
        this->__PVT__rp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__rp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> __VlefCall_1__new;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk4__DOT__i;
    IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk5__DOT__i__Vnext;
    unnamedblk5__DOT__i__Vnext = 0;
    CData/*0:0*/ unnamedblk5__DOT__i__Vmore;
    unnamedblk5__DOT__i__Vmore = 0;
    IData/*31:0*/ unnamedblk5__DOT__unnamedblk6__DOT__j;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8>> all;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    all.clear();
    unnamedblk4__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 961)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk4__DOT__i, __VlefCall_0__size))) break;
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 962)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk4__DOT__i, r);
        if ((! all.exists(VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 963)
                          ->__PVT__precedence))) {
            __VlefCall_1__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
            all.atWrite(VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 964)
                        ->__PVT__precedence) = __VlefCall_1__new;
        }
        VL_NULL_CHECK(all.at(VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 965)
                             ->__PVT__precedence), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 965)->__VnoInFunc_push_front(vlSymsp, r);
        unnamedblk4__DOT__i = ((IData)(1U) + unnamedblk4__DOT__i);
    }
    VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 967)->__VnoInFunc_delete(vlProcess, vlSymsp, 0xffffffffU);
    unnamedblk5__DOT__i__Vmore = (0U != all.first(unnamedblk5__DOT__i__Vnext));
    while (unnamedblk5__DOT__i__Vmore) {
        unnamedblk5__DOT__i = unnamedblk5__DOT__i__Vnext;
        unnamedblk5__DOT__i__Vmore = (0U != all.next(unnamedblk5__DOT__i__Vnext));
        unnamedblk5__DOT__unnamedblk6__DOT__j = 0U;
        unnamedblk5__DOT__unnamedblk6__DOT__j = 0U;
        while (true) {
            VL_NULL_CHECK(all.at(unnamedblk5__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 969)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk5__DOT__unnamedblk6__DOT__j, __VlefCall_2__size))) break;
            VL_NULL_CHECK(all.at(unnamedblk5__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 970)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk5__DOT__unnamedblk6__DOT__j, r);
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 971)->__VnoInFunc_push_front(vlSymsp, r);
            unnamedblk5__DOT__unnamedblk6__DOT__j = 
                ((IData)(1U) + unnamedblk5__DOT__unnamedblk6__DOT__j);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check\n"); );
    // Body
    spell_check__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg.__VnoInFunc_check(vlSymsp, this->__PVT__rtab, s, spell_check__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, CData/*1:0*/ __SYM__override) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__has_regex_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    std::string name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle;
    {
        name = ""s;
        if ((VlNull{} == rsrc)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 739)->__VnoInFunc_get_name(vlSymsp, name);
        if ((""s != name)) {
            if (this->__PVT__rtab.exists(name)) {
                rq = this->__PVT__rtab.at(name);
            } else {
                rq = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
            }
            if ((0U != (2U & (IData)(__SYM__override)))) {
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 750)->__VnoInFunc_push_front(vlSymsp, rsrc);
            } else {
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 752)->__VnoInFunc_push_back(vlSymsp, rsrc);
            }
            this->__PVT__rtab.atWrite(name) = rq;
        }
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 758)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if (this->__PVT__ttab.exists(type_handle)) {
            rq = this->__PVT__ttab.at(type_handle);
        } else {
            rq = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
        }
        if ((0U != (1U & (IData)(__SYM__override)))) {
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 768)->__VnoInFunc_push_front(vlSymsp, rsrc);
        } else {
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 770)->__VnoInFunc_push_back(vlSymsp, rsrc);
        }
        this->__PVT__ttab.atWrite(type_handle) = rq;
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 776)->__VnoInFunc_has_regex_name(vlSymsp, __VlefCall_0__has_regex_name);
        if (__VlefCall_0__has_regex_name) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__m_has_wildcard_names = 1U;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set(vlProcess, vlSymsp, rsrc, 3U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_name_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_name_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set(vlProcess, vlSymsp, rsrc, 2U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_type_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set(vlProcess, vlSymsp, rsrc, 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_auditing;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03aget_t> impt;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
        if ((1U & (~ (IData)(__VlefCall_0__is_auditing)))) {
            goto __Vlabel0;
        }
        impt = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03aget_t, vlSymsp);
        VL_NULL_CHECK(impt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 826)->__PVT__name 
            = name;
        VL_NULL_CHECK(impt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 827)->__PVT__scope 
            = scope;
        VL_NULL_CHECK(impt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 828)->__PVT__rsrc 
            = rsrc;
        VL_NULL_CHECK(impt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 829)->__PVT__t 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__get_record.push_back(impt);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump_get_records(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump_get_records\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03aget_t> record;
    CData/*0:0*/ success;
    success = 0U;
    VL_WRITEF_NX("--- resource get records ---\n",0);
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__get_record.size())) {
        record = this->__PVT__get_record.at(unnamedblk1__DOT__i);
        success = (VlNull{} != VL_NULL_CHECK(record, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 846)
                   ->__PVT__rsrc);
        __Vtemp_1 = VL_NULL_CHECK(record, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 848)
            ->__PVT__name;
        __Vtemp_2 = VL_NULL_CHECK(record, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 848)
            ->__PVT__scope;
        VL_WRITEF_NX("get: name=%s  scope=%s  %s @ %0t\n",5, 'T',-9
                     , 'S',&(__Vtemp_1), 'S',&(__Vtemp_2)
                     , '#',56,((IData)(success) ? 0x0073756363657373ULL
                                : 0x000000006661696cULL)
                     , '#',64,VL_NULL_CHECK(record, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 850)
                     ->__PVT__t);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogOr_4;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> __VlefCall_3__get_type_handle;
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefLogAnd_1;
    CData/*0:0*/ __VlefCall_0__spell_check;
    IData/*31:0*/ unnamedblk2__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    {
        q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
        if ((""s == name)) {
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        __VlefLogAnd_1 = rpterr;
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_spell_check(vlSymsp, name, __VlefCall_0__spell_check);
            __VlefLogAnd_1 = (1U & (~ (IData)(__VlefCall_0__spell_check)));
        }
        if (((IData)(__VlefLogAnd_1) || ((~ (IData)(rpterr)) 
                                         & (! this->__PVT__rtab.exists(name))))) {
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        rq = this->__PVT__rtab.at(name);
        unnamedblk2__DOT__i = 0U;
        unnamedblk2__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 904)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk2__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 905)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__i, r);
            __VlefLogOr_4 = (VlNull{} == type_handle);
            if ((1U & (~ (IData)(__VlefLogOr_4)))) {
                VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 907)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __VlefCall_3__get_type_handle);
                __VlefLogOr_4 = (__VlefCall_3__get_type_handle 
                                 == type_handle);
            }
            if (__VlefLogOr_4) {
                VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 908)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefLogOr_4);
            }
            if (__VlefLogOr_4) {
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 909)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        lookup_name__Vfuncrtn = q;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_highest_precedence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk3__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ prec;
    {
        prec = 0U;
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 930)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 934)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, rsrc);
        prec = VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 935)
            ->__PVT__precedence;
        unnamedblk3__DOT__i = 0U;
        unnamedblk3__DOT__i = 1U;
        while (true) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 938)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk3__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 939)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__i, r);
            if ((VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 940)
                 ->__PVT__precedence > prec)) {
                rsrc = r;
                prec = VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 942)
                    ->__PVT__precedence;
            }
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__29__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        this->__VnoInFunc_lookup_name(vlProcess, vlSymsp, scope, name, type_handle, rpterr, q);
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 996)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            this->__VnoInFunc_push_get_record(vlSymsp, name, scope, VlNull{});
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, q, __Vfunc_get_highest_precedence__29__Vfuncout);
        rsrc = __Vfunc_get_highest_precedence__29__Vfuncout;
        this->__VnoInFunc_push_get_record(vlSymsp, name, scope, rsrc);
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__match_scope;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk7__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    {
        q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
        if (((VlNull{} == type_handle) | (! this->__PVT__ttab.exists(type_handle)))) {
            lookup_type__Vfuncrtn = q;
            goto __Vlabel0;
        }
        rq = this->__PVT__ttab.at(type_handle);
        unnamedblk7__DOT__i = 0U;
        unnamedblk7__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1027)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk7__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1028)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk7__DOT__i, r);
            VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1029)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefCall_1__match_scope);
            if (__VlefCall_1__match_scope) {
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1030)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
        }
        lookup_type__Vfuncrtn = q;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        this->__VnoInFunc_lookup_type(vlSymsp, scope, type_handle, q);
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1050)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            this->__VnoInFunc_push_get_record(vlSymsp, "<type>"s, scope, VlNull{});
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1055)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, rsrc);
        this->__VnoInFunc_push_get_record(vlSymsp, "<type>"s, scope, rsrc);
        get_by_type__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(const std::string &glob, std::string &uvm_glob_to_re__Vfuncrtn);
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(const std::string &re, const std::string &str, IData/*31:0*/ &uvm_re_match__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_regex_names__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex_names\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogOr_4;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> __VlefCall_3__get_type_handle;
    IData/*31:0*/ __VlefCall_2__uvm_re_match;
    std::string __VlefCall_1__uvm_glob_to_re;
    IData/*31:0*/ __VlefCall_0__size;
    std::string unnamedblk8__DOT__re;
    std::string unnamedblk8__DOT__re__Vnext;
    CData/*0:0*/ unnamedblk8__DOT__re__Vmore;
    unnamedblk8__DOT__re__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> result_q;
    IData/*31:0*/ i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    {
        i = 0U;
        if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__m_has_wildcard_names)))) {
            this->__VnoInFunc_lookup_name(vlProcess, vlSymsp, scope, name, type_handle, 0U, result_q);
            lookup_regex_names__Vfuncrtn = result_q;
            goto __Vlabel0;
        }
        result_q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
        unnamedblk8__DOT__re__Vmore = (0U != this->__PVT__rtab.first(unnamedblk8__DOT__re__Vnext));
        while (unnamedblk8__DOT__re__Vmore) {
            unnamedblk8__DOT__re = unnamedblk8__DOT__re__Vnext;
            unnamedblk8__DOT__re__Vmore = (0U != this->__PVT__rtab.next(unnamedblk8__DOT__re__Vnext));
            rq = this->__PVT__rtab.at(unnamedblk8__DOT__re);
            i = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1090)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                if (!((i < __VlefCall_0__size))) break;
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1091)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(unnamedblk8__DOT__re, __VlefCall_1__uvm_glob_to_re);
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(
                                                                             VL_CVT_PACK_STR_NN(__VlefCall_1__uvm_glob_to_re), name, __VlefCall_2__uvm_re_match);
                if ((0U == __VlefCall_2__uvm_re_match)) {
                    __VlefLogOr_4 = (VlNull{} == type_handle);
                    if ((1U & (~ (IData)(__VlefLogOr_4)))) {
                        VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1094)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __VlefCall_3__get_type_handle);
                        __VlefLogOr_4 = (__VlefCall_3__get_type_handle 
                                         == type_handle);
                    }
                    if (__VlefLogOr_4) {
                        VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1095)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefLogOr_4);
                    }
                    if (__VlefLogOr_4) {
                        VL_NULL_CHECK(result_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1096)->__VnoInFunc_push_back(vlSymsp, r);
                    }
                }
                i = ((IData)(1U) + i);
            }
        }
        lookup_regex_names__Vfuncrtn = result_q;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_regex__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__match_scope;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__uvm_re_match;
    std::string unnamedblk9__DOT__name;
    std::string unnamedblk9__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk9__DOT__name__Vmore;
    unnamedblk9__DOT__name__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> result_q;
    IData/*31:0*/ i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    i = 0U;
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(re, re);
    result_q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
    unnamedblk9__DOT__name__Vmore = (0U != this->__PVT__rtab.first(unnamedblk9__DOT__name__Vnext));
    while (unnamedblk9__DOT__name__Vmore) {
        unnamedblk9__DOT__name = unnamedblk9__DOT__name__Vnext;
        unnamedblk9__DOT__name__Vmore = (0U != this->__PVT__rtab.next(unnamedblk9__DOT__name__Vnext));
        {
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(re, unnamedblk9__DOT__name, __VlefCall_0__uvm_re_match);
            if ((0U != __VlefCall_0__uvm_re_match)) {
                goto __Vlabel0;
            }
            rq = this->__PVT__rtab.at(unnamedblk9__DOT__name);
            i = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1121)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                if (!((i < __VlefCall_1__size))) break;
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1122)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1123)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefCall_2__match_scope);
                if (__VlefCall_2__match_scope) {
                    VL_NULL_CHECK(result_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1124)->__VnoInFunc_push_back(vlSymsp, r);
                }
                i = ((IData)(1U) + i);
            }
            __Vlabel0: ;
        }
    }
    lookup_regex__Vfuncrtn = result_q;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &lookup_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefCall_2__match_scope;
    IData/*31:0*/ __VlefCall_1__size;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk10__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> q;
    std::string name;
    q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
    name = ""s;
    __VlefExpr_0 = (0U != this->__PVT__rtab.last(name));
    if (__VlefExpr_0) {
        do {
            rq = this->__PVT__rtab.at(name);
            unnamedblk10__DOT__i = 0U;
            unnamedblk10__DOT__i = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1156)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                if (!(VL_LTS_III(32, unnamedblk10__DOT__i, __VlefCall_1__size))) break;
                VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1157)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__i, r);
                VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1158)->__VnoInFunc_match_scope(vlSymsp, scope, __VlefCall_2__match_scope);
                if (__VlefCall_2__match_scope) {
                    VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1159)->__VnoInFunc_push_back(vlSymsp, r);
                }
                unnamedblk10__DOT__i = ((IData)(1U) 
                                        + unnamedblk10__DOT__i);
            }
            __VlefExpr_3 = (0U != this->__PVT__rtab.prev(name));
        } while (__VlefExpr_3);
    }
    lookup_scope__Vfuncrtn = q;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q, IData/*31:0*/ &pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    std::string msg;
    std::string name;
    {
        i = 0U;
        msg = ""s;
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1196)->__VnoInFunc_get_name(vlSymsp, name);
        i = 0U;
        {
            while (true) {
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1198)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                if (!((i < __VlefCall_0__size))) break;
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1199)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                if ((r == rsrc)) {
                    goto __Vlabel1;
                }
                i = ((IData)(1U) + i);
            }
            __Vlabel1: ;
        }
        if ((r != rsrc)) {
            VL_SFORMAT_NX(msg,"Handle for resource named %s is not in the name name; cannot change its priority",1
                          , 'S',&(name));
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "NORSRC"s, msg, 0x00000064U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1209)->__VnoInFunc_delete(vlProcess, vlSymsp, i);
        if ((0U == pri)) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1212)->__VnoInFunc_push_front(vlSymsp, rsrc);
        } else if ((1U == pri)) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1213)->__VnoInFunc_push_back(vlSymsp, rsrc);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__69__verbosity;
    __Vtask_uvm_report_warning__69__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__69__line;
    __Vtask_uvm_report_warning__69__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__70__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle;
    std::string msg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> q;
    {
        msg = ""s;
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__69__line = 0U;
            this->__Vtask_uvm_report_warning__69__filename = ""s;
            __Vtask_uvm_report_warning__69__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__69__message = "attempting to change the serach priority of a null resource"s;
            this->__Vtask_uvm_report_warning__69__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__70__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__70__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__69__id, this->__Vtask_uvm_report_warning__69__message, __Vtask_uvm_report_warning__69__verbosity, this->__Vtask_uvm_report_warning__69__filename, __Vtask_uvm_report_warning__69__line);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1237)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if ((! this->__PVT__ttab.exists(type_handle))) {
            VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1239)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_SFORMAT_NX(msg,"Type handle for resrouce named %s not found in type map; cannot change its search priority",1
                          , 'S',&(__VlefCall_0__get_name));
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RNFTYPE"s, msg, 0x00000064U, ""s, 0U);
            goto __Vlabel0;
        }
        q = this->__PVT__ttab.at(type_handle);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, q, pri);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__76__verbosity;
    __Vtask_uvm_report_warning__76__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__76__line;
    __Vtask_uvm_report_warning__76__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__77__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string name;
    std::string msg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> q;
    {
        name = ""s;
        msg = ""s;
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__76__line = 0U;
            this->__Vtask_uvm_report_warning__76__filename = ""s;
            __Vtask_uvm_report_warning__76__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__76__message = "attempting to change the serach priority of a null resource"s;
            this->__Vtask_uvm_report_warning__76__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__77__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__76__id, this->__Vtask_uvm_report_warning__76__message, __Vtask_uvm_report_warning__76__verbosity, this->__Vtask_uvm_report_warning__76__filename, __Vtask_uvm_report_warning__76__line);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1267)->__VnoInFunc_get_name(vlSymsp, name);
        if ((! this->__PVT__rtab.exists(name))) {
            VL_SFORMAT_NX(msg,"Resrouce named %s not found in name map; cannot change its search priority",1
                          , 'S',&(name));
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RNFNAME"s, msg, 0x00000064U, ""s, 0U);
            goto __Vlabel0;
        }
        q = this->__PVT__rtab.at(name);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, q, pri);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set_priority_type(vlSymsp, rsrc, pri);
    this->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, rsrc, pri);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_find_unused_resources(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &find_unused_resources__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_find_unused_resources\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__size;
    std::string unnamedblk11__DOT__name;
    std::string unnamedblk11__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk11__DOT__name__Vmore;
    unnamedblk11__DOT__name__Vmore = 0;
    IData/*31:0*/ unnamedblk11__DOT__unnamedblk12__DOT__i;
    std::string unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str;
    std::string unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vnext;
    CData/*0:0*/ unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore;
    unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    Vcsi2_tb_top_access_t__struct__0 a;
    IData/*31:0*/ reads;
    IData/*31:0*/ writes;
    q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8, vlProcess, vlSymsp, ""s);
    a.__PVT__read_time = 0;
    a.__PVT__write_time = 0;
    a.__PVT__read_count = 0;
    a.__PVT__write_count = 0;
    reads = 0U;
    writes = 0U;
    unnamedblk11__DOT__name__Vmore = (0U != this->__PVT__rtab.first(unnamedblk11__DOT__name__Vnext));
    while (unnamedblk11__DOT__name__Vmore) {
        unnamedblk11__DOT__name = unnamedblk11__DOT__name__Vnext;
        unnamedblk11__DOT__name__Vmore = (0U != this->__PVT__rtab.next(unnamedblk11__DOT__name__Vnext));
        rq = this->__PVT__rtab.at(unnamedblk11__DOT__name);
        unnamedblk11__DOT__unnamedblk12__DOT__i = 0U;
        unnamedblk11__DOT__unnamedblk12__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1312)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk11__DOT__unnamedblk12__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1313)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk11__DOT__unnamedblk12__DOT__i, r);
            reads = 0U;
            writes = 0U;
            unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore 
                = (0U != VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1316)
                   ->__PVT__access.first(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vnext));
            while (unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore) {
                unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str 
                    = unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vnext;
                unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vmore 
                    = (0U != VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1316)
                       ->__PVT__access.next(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str__Vnext));
                a = VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1317)
                    ->__PVT__access.at(unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__str);
                reads = (reads + a.__PVT__read_count);
                writes = (writes + a.__PVT__write_count);
            }
            if ((VL_LTS_III(32, 0U, writes) & (0U == reads))) {
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1322)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk11__DOT__unnamedblk12__DOT__i 
                = ((IData)(1U) + unnamedblk11__DOT__unnamedblk12__DOT__i);
        }
    }
    find_unused_resources__Vfuncrtn = q;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_print_resources(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_print_resources\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk14__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> r;
    {
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1345)
                      ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1345)->__PVT__separator = ""s;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1346)
                      ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1346)->__PVT__full_name = 0U;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1347)
                      ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1347)->__PVT__identifier = 0U;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1348)
                      ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1348)->__PVT__type_name = 0U;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1349)
                      ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1349)->__PVT__reference = 0U;
        __VlefLogOr_1 = (VlNull{} == rq);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1351)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            __VlefLogOr_1 = (0U == __VlefCall_0__size);
        }
        if (VL_UNLIKELY((__VlefLogOr_1))) {
            VL_WRITEF_NX("<none>\n",0);
            goto __Vlabel0;
        }
        unnamedblk14__DOT__i = 0U;
        unnamedblk14__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1356)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk14__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(rq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1357)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk14__DOT__i, r);
            VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1358)->__VnoInFunc_print(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer);
            if (audit) {
                VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 1360)->__VnoInFunc_print_accessors(vlSymsp);
            }
            unnamedblk14__DOT__i = ((IData)(1U) + unnamedblk14__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump\n"); );
    // Body
    std::string unnamedblk15__DOT__name;
    std::string unnamedblk15__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk15__DOT__name__Vmore;
    unnamedblk15__DOT__name__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rq;
    VL_WRITEF_NX("\n=== resource pool ===\n",0);
    unnamedblk15__DOT__name__Vmore = (0U != this->__PVT__rtab.first(unnamedblk15__DOT__name__Vnext));
    while (unnamedblk15__DOT__name__Vmore) {
        unnamedblk15__DOT__name = unnamedblk15__DOT__name__Vnext;
        unnamedblk15__DOT__name__Vmore = (0U != this->__PVT__rtab.next(unnamedblk15__DOT__name__Vnext));
        rq = this->__PVT__rtab.at(unnamedblk15__DOT__name);
        this->__VnoInFunc_print_resources(vlSymsp, rq, audit);
    }
    VL_WRITEF_NX("=== end of resource pool ===\n",0);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
