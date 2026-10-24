// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg::__VnoInFunc_m_initialize(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19> &m_initialize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg::__VnoInFunc_m_initialize\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base> __Vtask_m_initialize__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_t_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__0__Vfuncout);
        this->__PVT__m_t_inst = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19, vlProcess, vlSymsp);
        this->__PVT__m_tw_cb_q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115, vlProcess, vlSymsp, "typewide_queue"s);
    }
    m_initialize__Vfuncrtn = this->__PVT__m_t_inst;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg::__VnoInFunc_m_cb_find(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg::__VnoInFunc_m_cb_find\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk3__DOT__i;
    {
        m_cb_find__Vfuncrtn = 0U;
        unnamedblk3__DOT__i = 0U;
        unnamedblk3__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 226)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk3__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 227)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__i, __VlefCall_1__get);
            if ((__VlefCall_1__get == cb)) {
                m_cb_find__Vfuncrtn = unnamedblk3__DOT__i;
                goto __Vlabel0;
            }
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        m_cb_find__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg::__VnoInFunc_m_cb_find_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg::__VnoInFunc_m_cb_find_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__verbosity;
    __Vfunc_uvm_report_enabled__8__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__8__severity;
    __Vfunc_uvm_report_enabled__8__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__10__Vfuncout;
    __Vtask_uvm_report_enabled__10__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__11__verbosity;
    __Vtask_uvm_report_warning__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__11__line;
    __Vtask_uvm_report_warning__11__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__12__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk4__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb;
    {
        m_cb_find_name__Vfuncrtn = 0U;
        unnamedblk4__DOT__i = 0U;
        unnamedblk4__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 234)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk4__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 235)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk4__DOT__i, cb);
            VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 236)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            if ((__VlefCall_1__get_name == name)) {
                this->__Vfunc_uvm_report_enabled__8__id = "UVM/CB/NAM/SAM"s;
                __Vfunc_uvm_report_enabled__8__severity = 1U;
                __Vfunc_uvm_report_enabled__8__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __Vtask_uvm_report_enabled__10__Vfuncout);
                __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__10__Vfuncout;
                __VlefCall_2__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_2__uvm_report_enabled) {
                    __Vtask_uvm_report_warning__11__line = 0x000000eeU;
                    this->__Vtask_uvm_report_warning__11__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh"s;
                    __Vtask_uvm_report_warning__11__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__11__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN("A callback named \""s, name), "\" is already registered with "s), where));
                    this->__Vtask_uvm_report_warning__11__id = "UVM/CB/NAM/SAM"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vfunc_get__12__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__11__id, this->__Vtask_uvm_report_warning__11__message, __Vtask_uvm_report_warning__11__verbosity, this->__Vtask_uvm_report_warning__11__filename, __Vtask_uvm_report_warning__11__line);
                }
                m_cb_find_name__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk4__DOT__i = ((IData)(1U) + unnamedblk4__DOT__i);
        }
        m_cb_find_name__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg::__VnoInFunc_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg::__VnoInFunc_display\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__20__Vfuncout;
    __Vtask_first__20__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__21__Vfuncout;
    __Vtask_next__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__33__Vfuncout;
    __Vtask_next__33__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_22__is_enabled;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_name;
    IData/*31:0*/ __VlefCall_19__size;
    IData/*31:0*/ __VlefCall_18__exists;
    std::string __VlefCall_17__get_full_name;
    CData/*0:0*/ __VlefLogOr_16;
    IData/*31:0*/ __VlefCall_15__size;
    IData/*31:0*/ __VlefCall_14__exists;
    IData/*31:0*/ __VlefCall_13__next;
    CData/*0:0*/ __VlefCall_12__is_enabled;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_name;
    IData/*31:0*/ __VlefCall_9__size;
    IData/*31:0*/ __VlefExpr_8;
    CData/*0:0*/ __VlefLogOr_7;
    IData/*31:0*/ __VlefCall_6__size;
    IData/*31:0*/ __VlefCall_5__next;
    IData/*31:0*/ __VlefExpr_4;
    IData/*31:0*/ __VlefCall_3__first;
    CData/*0:0*/ __VlefCall_2__is_enabled;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk7__DOT__i;
    IData/*31:0*/ unnamedblk8__DOT__i;
    IData/*31:0*/ unnamedblk9__DOT__i;
    IData/*31:0*/ unnamedblk10__DOT__i;
    unnamedblk10__DOT__i = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> me;
    VlQueue<std::string> cbq;
    VlQueue<std::string> inst_q;
    VlQueue<std::string> mode_q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb;
    std::string blanks;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> bobj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    std::string tname;
    std::string str;
    IData/*31:0*/ max_cb_name;
    IData/*31:0*/ max_inst_name;
    cbq.clear();
    cbq.atDefault().clear();
    inst_q.clear();
    inst_q.atDefault().clear();
    mode_q.clear();
    mode_q.atDefault().clear();
    blanks = "                             "s;
    bobj = obj;
    tname = ""s;
    str = ""s;
    max_cb_name = 0U;
    max_inst_name = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 0U;
    if ((""s != this->__PVT__m_typename)) {
        tname = this->__PVT__m_typename;
    } else if ((VlNull{} != obj)) {
        VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 339)->__VnoInFunc_get_type_name(vlSymsp, tname);
    } else {
        tname = "*"s;
    }
    q = this->__PVT__m_tw_cb_q;
    unnamedblk7__DOT__i = 0U;
    unnamedblk7__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 343)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk7__DOT__i, __VlefCall_0__size))) break;
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 344)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk7__DOT__i, cb);
        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 345)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        cbq.push_back(__VlefCall_1__get_name);
        inst_q.push_back("(*)"s);
        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 347)->__VnoInFunc_is_enabled(vlSymsp, __VlefCall_2__is_enabled);
        if (__VlefCall_2__is_enabled) {
            mode_q.push_back("ON"s);
        } else {
            mode_q.push_back("OFF"s);
        }
        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 350)->__VnoInFunc_get_name(vlSymsp, str);
        max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                  VL_LEN_IN(str)) ? max_cb_name
                        : VL_LEN_IN(str));
        str = "(*)"s;
        max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                    VL_LEN_IN(str))
                          ? max_inst_name : VL_LEN_IN(str));
        unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
    }
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 357)->__VnoInFunc_first(vlSymsp, bobj, __Vtask_first__20__Vfuncout);
        __VlefCall_3__first = __Vtask_first__20__Vfuncout;
        if ((0U != __VlefCall_3__first)) {
            {
                do {
                    __VlefExpr_4 = VL_CAST_DYNAMIC(bobj, me);
                    if (__VlefExpr_4) {
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 360)->__VnoInFunc_next(vlSymsp, bobj, __Vtask_next__21__Vfuncout);
                    __VlefCall_5__next = __Vtask_next__21__Vfuncout;
                } while ((0U != __VlefCall_5__next));
                __Vlabel0: ;
            }
        }
        __VlefLogOr_7 = (VlNull{} != me);
        if ((1U & (~ (IData)(__VlefLogOr_7)))) {
            VL_NULL_CHECK(this->__PVT__m_tw_cb_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 362)->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
            __VlefLogOr_7 = (0U != __VlefCall_6__size);
        }
        if (VL_UNLIKELY((__VlefLogOr_7))) {
            VL_WRITEF_NX("Registered callbacks for all instances of %s\n---------------------------------------------------------------\n",1
                         , 'S',&(tname));
        }
        if (VL_LIKELY(((VlNull{} != me)))) {
            do {
                __VlefExpr_8 = VL_CAST_DYNAMIC(bobj, me);
                if (__VlefExpr_8) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 369)->__VnoInFunc_get(vlSymsp, bobj, q);
                    if ((VlNull{} == q)) {
                        q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115, vlProcess, vlSymsp, ""s);
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 372)->__VnoInFunc_add(vlSymsp, bobj, q);
                    }
                    unnamedblk8__DOT__i = 0U;
                    unnamedblk8__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 374)->__VnoInFunc_size(vlSymsp, __VlefCall_9__size);
                        if (!(VL_LTS_III(32, unnamedblk8__DOT__i, __VlefCall_9__size))) break;
                        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 375)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk8__DOT__i, cb);
                        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 376)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                        cbq.push_back(__VlefCall_10__get_name);
                        VL_NULL_CHECK(bobj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 377)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                        inst_q.push_back(__VlefCall_11__get_full_name);
                        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 378)->__VnoInFunc_is_enabled(vlSymsp, __VlefCall_12__is_enabled);
                        if (__VlefCall_12__is_enabled) {
                            mode_q.push_back("ON"s);
                        } else {
                            mode_q.push_back("OFF"s);
                        }
                        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 381)->__VnoInFunc_get_name(vlSymsp, str);
                        max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                                  VL_LEN_IN(str))
                                        ? max_cb_name
                                        : VL_LEN_IN(str));
                        VL_NULL_CHECK(bobj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 383)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
                        max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                                    VL_LEN_IN(str))
                                          ? max_inst_name
                                          : VL_LEN_IN(str));
                        unnamedblk8__DOT__i = ((IData)(1U) 
                                               + unnamedblk8__DOT__i);
                    }
                }
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 387)->__VnoInFunc_next(vlSymsp, bobj, __Vtask_next__33__Vfuncout);
                __VlefCall_13__next = __Vtask_next__33__Vfuncout;
            } while ((0U != __VlefCall_13__next));
        } else {
            VL_WRITEF_NX("No callbacks registered for any instances of type %s\n",1
                         , 'S',&(tname));
        }
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 394)->__VnoInFunc_exists(vlSymsp, bobj, __VlefCall_14__exists);
        __VlefLogOr_16 = (0U != __VlefCall_14__exists);
        if ((1U & (~ (IData)(__VlefLogOr_16)))) {
            VL_NULL_CHECK(this->__PVT__m_tw_cb_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 394)->__VnoInFunc_size(vlSymsp, __VlefCall_15__size);
            __VlefLogOr_16 = (0U != __VlefCall_15__size);
        }
        if (VL_UNLIKELY((__VlefLogOr_16))) {
            VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 395)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
            VL_WRITEF_NX("Registered callbacks for instance %s of %s\n---------------------------------------------------------------\n",2
                         , 'S',&(__VlefCall_17__get_full_name)
                         , 'S',&(tname));
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 398)->__VnoInFunc_exists(vlSymsp, bobj, __VlefCall_18__exists);
        if ((0U != __VlefCall_18__exists)) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 399)->__VnoInFunc_get(vlSymsp, bobj, q);
            if ((VlNull{} == q)) {
                q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 402)->__VnoInFunc_add(vlSymsp, bobj, q);
            }
            unnamedblk9__DOT__i = 0U;
            unnamedblk9__DOT__i = 0U;
            while (true) {
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 404)->__VnoInFunc_size(vlSymsp, __VlefCall_19__size);
                if (!(VL_LTS_III(32, unnamedblk9__DOT__i, __VlefCall_19__size))) break;
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 405)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__i, cb);
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 406)->__VnoInFunc_get_name(vlSymsp, __VlefCall_20__get_name);
                cbq.push_back(__VlefCall_20__get_name);
                VL_NULL_CHECK(bobj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 407)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                inst_q.push_back(__VlefCall_21__get_full_name);
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 408)->__VnoInFunc_is_enabled(vlSymsp, __VlefCall_22__is_enabled);
                if (__VlefCall_22__is_enabled) {
                    mode_q.push_back("ON"s);
                } else {
                    mode_q.push_back("OFF"s);
                }
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 411)->__VnoInFunc_get_name(vlSymsp, str);
                max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                          VL_LEN_IN(str))
                                ? max_cb_name : VL_LEN_IN(str));
                VL_NULL_CHECK(bobj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 413)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
                max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                            VL_LEN_IN(str))
                                  ? max_inst_name : 
                                 VL_LEN_IN(str));
                unnamedblk9__DOT__i = ((IData)(1U) 
                                       + unnamedblk9__DOT__i);
            }
        }
    }
    if (VL_UNLIKELY(((1U & (~ (0U != cbq.size())))))) {
        if ((VlNull{} == obj)) {
            str = "*"s;
        } else {
            VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 420)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
        }
        VL_WRITEF_NX("No callbacks registered for instance %s of type %s\n",2
                     , 'S',&(str), 'S',&(tname));
    }
    unnamedblk10__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk10__DOT__i, cbq.size())) {
        __Vtemp_1 = cbq.at(unnamedblk10__DOT__i);
        __Vtemp_2 = VL_SUBSTR_N(blanks,0U,((max_cb_name 
                                            - VL_LEN_IN(cbq.at(unnamedblk10__DOT__i))) 
                                           - (IData)(1U)));
        __Vtemp_3 = inst_q.at(unnamedblk10__DOT__i);
        __Vtemp_4 = VL_SUBSTR_N(blanks,0U,((max_inst_name 
                                            - VL_LEN_IN(inst_q.at(unnamedblk10__DOT__i))) 
                                           - (IData)(1U)));
        __Vtemp_5 = mode_q.at(unnamedblk10__DOT__i);
        VL_WRITEF_NX("%s  %s on %s  %s%s\n",5, 'S',&(__Vtemp_1)
                     , 'S',&(__Vtemp_2), 'S',&(__Vtemp_3)
                     , 'S',&(__Vtemp_4), 'S',&(__Vtemp_5));
        unnamedblk10__DOT__i = ((IData)(1U) + unnamedblk10__DOT__i);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_m_am_i_a(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_m_am_i_a\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> this_type;
    {
        m_am_i_a__Vfuncrtn = 0U;
        if ((VlNull{} == obj)) {
            m_am_i_a__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(obj, this_type);
        m_am_i_a__Vfuncrtn = (1U & __VlefExpr_0);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_m_get_tw_cb_q(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> &m_get_tw_cb_q__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_m_get_tw_cb_q\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__m_am_i_a;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk1__DOT__i__Vloopsize;
    unnamedblk1__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base> unnamedblk1__DOT__unnamedblk2__DOT__dt;
    {
        this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __VlefCall_0__m_am_i_a);
        if (__VlefCall_0__m_am_i_a) {
            unnamedblk1__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__i, Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
                unnamedblk1__DOT__i__Vloopsize = Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size();
                unnamedblk1__DOT__unnamedblk2__DOT__dt 
                    = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                    .at(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk1__DOT__i));
                if (((VlNull{} != unnamedblk1__DOT__unnamedblk2__DOT__dt) 
                     & (unnamedblk1__DOT__unnamedblk2__DOT__dt 
                        != VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19>{this}))) {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__dt, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 214)->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, m_get_tw_cb_q__Vfuncrtn);
                    if ((VlNull{} != m_get_tw_cb_q__Vfuncrtn)) {
                        goto __Vlabel0;
                    }
                }
                if ((unnamedblk1__DOT__i__Vloopsize 
                     <= Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
                    unnamedblk1__DOT__i = ((IData)(1U) 
                                           + unnamedblk1__DOT__i);
                }
            }
            m_get_tw_cb_q__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__PVT__m_tw_cb_q;
        } else {
            m_get_tw_cb_q__Vfuncrtn = VlNull{};
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_m_add_tw_cbs(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_m_add_tw_cbs\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__7__Vfuncout;
    __Vtask_first__7__Vfuncout = 0;
    IData/*31:0*/ __Vtask_m_cb_find_name__14__Vfuncout;
    __Vtask_m_cb_find_name__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__17__Vfuncout;
    __Vtask_next__17__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_8__next;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_name;
    IData/*31:0*/ __VlefCall_5__m_cb_find;
    IData/*31:0*/ __VlefExpr_4;
    IData/*31:0*/ __VlefCall_3__first;
    IData/*31:0*/ __VlefCall_2__m_cb_find_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__m_cb_find;
    IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk5__DOT__i__Vloopsize;
    unnamedblk5__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base> cb_pair;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> me;
    CData/*0:0*/ warned;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    warned = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__PVT__m_tw_cb_q, cb, __VlefCall_0__m_cb_find);
    if ((0xffffffffU == __VlefCall_0__m_cb_find)) {
        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 253)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__VnoInFunc_m_cb_find_name(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__PVT__m_tw_cb_q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), "type"s, __VlefCall_2__m_cb_find_name);
        warned = (1U & __VlefCall_2__m_cb_find_name);
        if ((0U == ordering)) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__PVT__m_tw_cb_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 255)->__VnoInFunc_push_back(vlSymsp, cb);
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__PVT__m_tw_cb_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 257)->__VnoInFunc_push_front(vlSymsp, cb);
        }
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 259)->__VnoInFunc_first(vlSymsp, obj, __Vtask_first__7__Vfuncout);
    __VlefCall_3__first = __Vtask_first__7__Vfuncout;
    if ((0U != __VlefCall_3__first)) {
        do {
            __VlefExpr_4 = VL_CAST_DYNAMIC(obj, me);
            if (__VlefExpr_4) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 262)->__VnoInFunc_get(vlSymsp, obj, q);
                if ((VlNull{} == q)) {
                    q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115, vlProcess, vlSymsp, ""s);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 265)->__VnoInFunc_add(vlSymsp, obj, q);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, q, cb, __VlefCall_5__m_cb_find);
                if ((0xffffffffU == __VlefCall_5__m_cb_find)) {
                    if ((1U & (~ (IData)(warned)))) {
                        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 269)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                        VL_NULL_CHECK(me, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 269)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__VnoInFunc_m_cb_find_name(vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__get_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, __VlefCall_7__get_full_name)), __Vtask_m_cb_find_name__14__Vfuncout);
                    }
                    if ((0U == ordering)) {
                        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 272)->__VnoInFunc_push_back(vlSymsp, cb);
                    } else {
                        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 274)->__VnoInFunc_push_front(vlSymsp, cb);
                    }
                }
            }
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 277)->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__17__Vfuncout);
            __VlefCall_8__next = __Vtask_next__17__Vfuncout;
        } while ((0U != __VlefCall_8__next));
    }
    unnamedblk5__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk5__DOT__i, Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
        unnamedblk5__DOT__i__Vloopsize = Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size();
        cb_pair = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
            .at(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk5__DOT__i));
        if ((cb_pair != VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19>{this})) {
            VL_NULL_CHECK(cb_pair, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 282)->__VnoInFunc_m_add_tw_cbs(vlSymsp, cb, ordering);
        }
        if ((unnamedblk5__DOT__i__Vloopsize <= Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_m_delete_tw_cbs(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_m_delete_tw_cbs\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__21__Vfuncout;
    __Vtask_first__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__27__Vfuncout;
    __Vtask_next__27__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__m_delete_tw_cbs;
    IData/*31:0*/ __VlefCall_1__next;
    IData/*31:0*/ __VlefCall_0__first;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    IData/*31:0*/ unnamedblk6__DOT__i__Vloopsize;
    unnamedblk6__DOT__i__Vloopsize = 0;
    m_delete_tw_cbs__Vfuncrtn = 0U;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base> cb_pair;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    IData/*31:0*/ pos;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__PVT__m_tw_cb_q, cb, pos);
    if ((0xffffffffU != pos)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__PVT__m_tw_cb_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 295)->__VnoInFunc_delete(vlSymsp, pos);
        m_delete_tw_cbs__Vfuncrtn = 1U;
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 299)->__VnoInFunc_first(vlSymsp, obj, __Vtask_first__21__Vfuncout);
    __VlefCall_0__first = __Vtask_first__21__Vfuncout;
    if ((0U != __VlefCall_0__first)) {
        do {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 301)->__VnoInFunc_get(vlSymsp, obj, q);
            if ((VlNull{} == q)) {
                q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 304)->__VnoInFunc_add(vlSymsp, obj, q);
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz19__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, q, cb, pos);
            if ((0xffffffffU != pos)) {
                VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 308)->__VnoInFunc_delete(vlSymsp, pos);
                m_delete_tw_cbs__Vfuncrtn = 1U;
            }
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 311)->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__27__Vfuncout);
            __VlefCall_1__next = __Vtask_next__27__Vfuncout;
        } while ((0U != __VlefCall_1__next));
    }
    unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk6__DOT__i, Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
        unnamedblk6__DOT__i__Vloopsize = Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size();
        cb_pair = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
            .at(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk6__DOT__i));
        if ((cb_pair != VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19>{this})) {
            VL_NULL_CHECK(cb_pair, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 316)->__VnoInFunc_m_delete_tw_cbs(vlSymsp, cb, __VlefCall_2__m_delete_tw_cbs);
            m_delete_tw_cbs__Vfuncrtn = ((IData)(m_delete_tw_cbs__Vfuncrtn) 
                                         | (IData)(__VlefCall_2__m_delete_tw_cbs));
        }
        if ((unnamedblk6__DOT__i__Vloopsize <= Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz19::~\n"); );
}
