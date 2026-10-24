// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz100> __Vtask_m_initialize__1__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz115> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz115> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz100> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vfunc_get__6__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__10__verbosity;
    __Vtask_uvm_report_fatal__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__10__line;
    __Vtask_uvm_report_fatal__10__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__11__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    if ((VlNull{} == this->__PVT__m_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz115__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__2__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz115__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        this->__PVT__m_cb_typeid = __Vfunc_get__3__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz100__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
        this->__PVT__m_typeid = __Vfunc_get__4__Vfuncout;
        this->__PVT__m_inst = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100, vlProcess, vlSymsp);
        if ((unnamedblk1__DOT__cb_base_type == this->__PVT__m_cb_typeid)) {
            this->__PVT__m_base_inst = this->__PVT__m_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_t_inst 
                = this->__PVT__m_base_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map.atWrite(this->__PVT__m_typeid) 
                = this->__PVT__m_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__type_map.atWrite(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst) 
                = this->__PVT__m_typeid;
        } else {
            this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            this->__PVT__m_base_inst = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(this->__PVT__m_base_inst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 527)->__PVT__m_this_type.push_back(this->__PVT__m_inst);
        }
        if ((VlNull{} == this->__PVT__m_inst)) {
            this->__Vfunc_uvm_report_enabled__7__id = "CB/INTERNAL"s;
            __Vfunc_uvm_report_enabled__7__severity = 3U;
            __Vfunc_uvm_report_enabled__7__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __Vtask_uvm_report_enabled__9__Vfuncout);
            __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__9__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                __Vtask_uvm_report_fatal__10__line = 0x00000213U;
                this->__Vtask_uvm_report_fatal__10__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh"s;
                __Vtask_uvm_report_fatal__10__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__10__message = "get(): m_inst is null"s;
                this->__Vtask_uvm_report_fatal__10__id = "CB/INTERNAL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__11__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__10__id, this->__Vtask_uvm_report_fatal__10__message, __Vtask_uvm_report_fatal__10__verbosity, this->__Vtask_uvm_report_fatal__10__filename, __Vtask_uvm_report_fatal__10__line);
            }
        }
    }
    get__Vfuncrtn = this->__PVT__m_inst;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_m_register_pair(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> inst;
    m_register_pair__Vfuncrtn = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, inst);
    this->__PVT__m_typename = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_typename 
        = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = tname;
    this->__PVT__m_cb_typename = cbname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 553)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_add(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__23__verbosity;
    __Vtask_uvm_report_warning__23__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__23__line;
    __Vtask_uvm_report_warning__23__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__verbosity;
    __Vtask_uvm_report_warning__28__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__line;
    __Vtask_uvm_report_warning__28__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__36__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__46__verbosity;
    __Vtask_uvm_report_warning__46__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__46__line;
    __Vtask_uvm_report_warning__46__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__47__Vfuncout;
    IData/*31:0*/ __Vtask_m_cb_find_name__51__Vfuncout;
    __Vtask_m_cb_find_name__51__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_name;
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_name;
    IData/*31:0*/ __VlefCall_10__m_cb_find;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_9__get;
    IData/*31:0*/ __VlefCall_8__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> __VlefCall_7__get;
    IData/*31:0*/ __VlefCall_6__size;
    IData/*31:0*/ __VlefCall_5__size;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__m_cb_find;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__check_registration;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> unnamedblk2__DOT__unnamedblk3__DOT__qr;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk5__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    std::string nm;
    std::string tnm;
    {
        nm = ""s;
        tnm = ""s;
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__14__Vfuncout);
        if ((VlNull{} == cb)) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
            } else {
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 598)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
            }
            if ((""s != this->__PVT__m_typename)) {
                tnm = this->__PVT__m_typename;
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 603)->__VnoInFunc_get_type_name(vlSymsp, tnm);
            } else {
                tnm = "uvm_object"s;
            }
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "CBUNREG"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Null callback object cannot be registered with object "s, nm), " ("s), tnm), ")"s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_base_inst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 613)->__VnoInFunc_check_registration(vlSymsp, obj, cb, __VlefCall_0__check_registration);
        if ((1U & (~ (IData)(__VlefCall_0__check_registration)))) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
            } else {
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 618)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
            }
            if ((""s != this->__PVT__m_typename)) {
                tnm = this->__PVT__m_typename;
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 623)->__VnoInFunc_get_type_name(vlSymsp, tnm);
            } else {
                tnm = "uvm_object"s;
            }
            VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 628)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 629)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            __Vtask_uvm_report_warning__23__line = 0U;
            this->__Vtask_uvm_report_warning__23__filename = ""s;
            __Vtask_uvm_report_warning__23__verbosity = 0U;
            this->__Vtask_uvm_report_warning__23__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback "s, __VlefCall_1__get_name), " cannot be registered with object "s), nm), " because callback type "s), __VlefCall_2__get_type_name), " is not registered with object type "s), tnm));
            this->__Vtask_uvm_report_warning__23__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__23__id, this->__Vtask_uvm_report_warning__23__message, __Vtask_uvm_report_warning__23__verbosity, this->__Vtask_uvm_report_warning__23__filename, __Vtask_uvm_report_warning__23__line);
        }
        if ((VlNull{} == obj)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_tw_cb_q, cb, __VlefCall_3__m_cb_find);
            if ((0xffffffffU != __VlefCall_3__m_cb_find)) {
                tnm = ((""s != this->__PVT__m_typename)
                        ? this->__PVT__m_typename : "uvm_object"s);
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 642)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__28__line = 0U;
                this->__Vtask_uvm_report_warning__28__filename = ""s;
                __Vtask_uvm_report_warning__28__verbosity = 0U;
                this->__Vtask_uvm_report_warning__28__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Callback object "s, __VlefCall_4__get_name), " is already registered with type "s), tnm));
                this->__Vtask_uvm_report_warning__28__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__29__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__28__id, this->__Vtask_uvm_report_warning__28__message, __Vtask_uvm_report_warning__28__verbosity, this->__Vtask_uvm_report_warning__28__filename, __Vtask_uvm_report_warning__28__line);
            } else {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_t_inst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 648)->__VnoInFunc_m_add_tw_cbs(vlSymsp, cb, ordering);
            }
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 657)->__VnoInFunc_get(vlSymsp, obj, q);
            if ((VlNull{} == q)) {
                q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 661)->__VnoInFunc_add(vlSymsp, obj, q);
            }
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 664)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if ((0U == __VlefCall_5__size)) {
                this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__36__Vfuncout);
                unnamedblk2__DOT__unnamedblk3__DOT__qr 
                    = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_tw_cb_q;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
                while (true) {
                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__qr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 673)->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
                    if (!(VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i, __VlefCall_6__size))) break;
                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__qr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 674)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i, __VlefCall_7__get);
                    VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 674)->__VnoInFunc_push_back(vlSymsp, __VlefCall_7__get);
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i);
                }
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                while (true) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_tw_cb_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 677)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
                    if (!(VL_LTS_III(32, unnamedblk2__DOT__unnamedblk5__DOT__i, __VlefCall_8__size))) break;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_tw_cb_q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 678)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk5__DOT__i, __VlefCall_9__get);
                    VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 678)->__VnoInFunc_push_back(vlSymsp, __VlefCall_9__get);
                    unnamedblk2__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk5__DOT__i);
                }
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, q, cb, __VlefCall_10__m_cb_find);
            if ((0xffffffffU != __VlefCall_10__m_cb_find)) {
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 683)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 684)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                __Vtask_uvm_report_warning__46__line = 0U;
                this->__Vtask_uvm_report_warning__46__filename = ""s;
                __Vtask_uvm_report_warning__46__verbosity = 0U;
                this->__Vtask_uvm_report_warning__46__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback object "s, __VlefCall_11__get_name), " is already registered"s), " with object "s), __VlefCall_12__get_full_name));
                this->__Vtask_uvm_report_warning__46__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__47__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__46__id, this->__Vtask_uvm_report_warning__46__message, __Vtask_uvm_report_warning__46__verbosity, this->__Vtask_uvm_report_warning__46__filename, __Vtask_uvm_report_warning__46__line);
            } else {
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 687)->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 687)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__VnoInFunc_m_cb_find_name(vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_13__get_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, __VlefCall_14__get_full_name)), __Vtask_m_cb_find_name__51__Vfuncout);
                if ((0U == ordering)) {
                    VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 689)->__VnoInFunc_push_back(vlSymsp, cb);
                } else {
                    VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 691)->__VnoInFunc_push_front(vlSymsp, cb);
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_add_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_add_by_name\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__54__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__59__verbosity;
    __Vtask_uvm_report_warning__59__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__59__line;
    __Vtask_uvm_report_warning__59__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__60__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    IData/*31:0*/ unnamedblk6__DOT__i__Vloopsize;
    unnamedblk6__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> t;
    {
        cq.clear();
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__54__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
        if ((VlNull{} == cb)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "CBUNREG"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Null callback object cannot be registered with object(s) "s, name)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 721)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
        if ((0U == cq.size())) {
            VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 724)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            __Vtask_uvm_report_warning__59__line = 0U;
            this->__Vtask_uvm_report_warning__59__filename = ""s;
            __Vtask_uvm_report_warning__59__verbosity = 0U;
            this->__Vtask_uvm_report_warning__59__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("add_by_name failed to find any components matching the name "s, name), ", callback "s), __VlefCall_0__get_name), " will not be registered."s));
            this->__Vtask_uvm_report_warning__59__id = "CBNOMTC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__60__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__59__id, this->__Vtask_uvm_report_warning__59__message, __Vtask_uvm_report_warning__59__verbosity, this->__Vtask_uvm_report_warning__59__filename, __Vtask_uvm_report_warning__59__line);
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cq.size())) {
            unnamedblk6__DOT__i__Vloopsize = cq.size();
            t = cq.at(unnamedblk6__DOT__i);
            this->__VnoInFunc_add(vlSymsp, t, cb, ordering);
            if ((unnamedblk6__DOT__i__Vloopsize <= cq.size())) {
                unnamedblk6__DOT__i = ((IData)(1U) 
                                       + unnamedblk6__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_delete\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__63__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__70__verbosity;
    __Vtask_uvm_report_warning__70__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__70__line;
    __Vtask_uvm_report_warning__70__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__71__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    std::string unnamedblk7__DOT__nm;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> b_obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    CData/*0:0*/ found;
    IData/*31:0*/ pos;
    b_obj = obj;
    found = 0U;
    pos = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__63__Vfuncout);
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_t_inst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 757)->__VnoInFunc_m_delete_tw_cbs(vlSymsp, cb, found);
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 762)->__VnoInFunc_get(vlSymsp, b_obj, q);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, q, cb, pos);
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 765)->__VnoInFunc_delete(vlSymsp, pos);
            found = 1U;
        }
    }
    if ((1U & (~ (IData)(found)))) {
        unnamedblk7__DOT__nm = ""s;
        if ((VlNull{} == obj)) {
            unnamedblk7__DOT__nm = "(*)"s;
        } else {
            VL_NULL_CHECK(obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 771)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk7__DOT__nm);
        }
        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 772)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vtask_uvm_report_warning__70__line = 0U;
        this->__Vtask_uvm_report_warning__70__filename = ""s;
        __Vtask_uvm_report_warning__70__verbosity = 0U;
        this->__Vtask_uvm_report_warning__70__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("Callback "s, __VlefCall_0__get_name), " cannot be removed from object "s), unnamedblk7__DOT__nm), " because it is not currently registered to that object."s));
        this->__Vtask_uvm_report_warning__70__id = "CBUNREG"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__71__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__70__id, this->__Vtask_uvm_report_warning__70__message, __Vtask_uvm_report_warning__70__verbosity, this->__Vtask_uvm_report_warning__70__filename, __Vtask_uvm_report_warning__70__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_delete_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> root) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_delete_by_name\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__73__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__77__verbosity;
    __Vtask_uvm_report_warning__77__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__77__line;
    __Vtask_uvm_report_warning__77__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__78__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    IData/*31:0*/ unnamedblk8__DOT__i__Vloopsize;
    unnamedblk8__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> t;
    cq.clear();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__73__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
    VL_NULL_CHECK(top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 796)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
    if ((0U == cq.size())) {
        VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 799)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vtask_uvm_report_warning__77__line = 0U;
        this->__Vtask_uvm_report_warning__77__filename = ""s;
        __Vtask_uvm_report_warning__77__verbosity = 0U;
        this->__Vtask_uvm_report_warning__77__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("delete_by_name failed to find any components matching the name "s, name), ", callback "s), __VlefCall_0__get_name), " will not be unregistered."s));
        this->__Vtask_uvm_report_warning__77__id = "CBNOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__78__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__78__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__77__id, this->__Vtask_uvm_report_warning__77__message, __Vtask_uvm_report_warning__77__verbosity, this->__Vtask_uvm_report_warning__77__filename, __Vtask_uvm_report_warning__77__line);
    }
    unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk8__DOT__i, cq.size())) {
        unnamedblk8__DOT__i__Vloopsize = cq.size();
        t = cq.at(unnamedblk8__DOT__i);
        this->__VnoInFunc_delete(vlSymsp, t, cb);
        if ((unnamedblk8__DOT__i__Vloopsize <= cq.size())) {
            unnamedblk8__DOT__i = ((IData)(1U) + unnamedblk8__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_m_get_q(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> &q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_m_get_q\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> __VlefCall_1__m_get_tw_cb_q;
    IData/*31:0*/ __VlefCall_0__exists;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 818)->__VnoInFunc_exists(vlSymsp, obj, __VlefCall_0__exists);
    if ((0U != __VlefCall_0__exists)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 822)->__VnoInFunc_get(vlSymsp, obj, q);
        if ((VlNull{} == q)) {
            q = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115, vlProcess, vlSymsp, ""s);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 825)->__VnoInFunc_add(vlSymsp, obj, q);
        }
    } else {
        if ((VlNull{} == obj)) {
            __VlefCall_1__m_get_tw_cb_q = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_tw_cb_q;
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__PVT__m_t_inst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 819)->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __VlefCall_1__m_get_tw_cb_q);
        }
        q = __VlefCall_1__m_get_tw_cb_q;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get_first(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> &get_first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get_first\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__86__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__callback_mode;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__86__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 848)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 849)->__VnoInFunc_get(vlProcess, vlSymsp, itr, cb);
            __VlefCall_1__callback_mode = 1U;
            if (__VlefCall_1__callback_mode) {
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 849)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_1__callback_mode);
            }
            if (__VlefCall_1__callback_mode) {
                get_first__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((IData)(1U) + itr);
        }
        get_first__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get_last(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> &get_last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get_last\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__91__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__callback_mode;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__91__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 871)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        itr = (__VlefCall_0__size - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 872)->__VnoInFunc_get(vlProcess, vlSymsp, itr, cb);
            __VlefCall_1__callback_mode = 1U;
            if (__VlefCall_1__callback_mode) {
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 872)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_1__callback_mode);
            }
            if (__VlefCall_1__callback_mode) {
                get_last__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = (itr - (IData)(1U));
        }
        get_last__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get_next(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> &get_next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get_next\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__96__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__callback_mode;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__96__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = ((IData)(1U) + itr);
        while (true) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 897)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 898)->__VnoInFunc_get(vlProcess, vlSymsp, itr, cb);
            __VlefCall_1__callback_mode = 1U;
            if (__VlefCall_1__callback_mode) {
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 898)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_1__callback_mode);
            }
            if (__VlefCall_1__callback_mode) {
                get_next__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((IData)(1U) + itr);
        }
        get_next__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get_prev(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> &get_prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_get_prev\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__101__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__callback_mode;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__101__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = (itr - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            VL_NULL_CHECK(q, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 924)->__VnoInFunc_get(vlProcess, vlSymsp, itr, cb);
            __VlefCall_0__callback_mode = 1U;
            if (__VlefCall_0__callback_mode) {
                VL_NULL_CHECK(cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_callback.svh", 924)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_0__callback_mode);
            }
            if (__VlefCall_0__callback_mode) {
                get_prev__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = (itr - (IData)(1U));
        }
        get_prev__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100__Vclpkg::__VnoInFunc_display\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100> __Vtask_get__105__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__105__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg.__VnoInFunc_display(vlSymsp, obj);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc_m_is_registered(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc_m_is_registered\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__m_is_for_me;
    m_is_registered__Vfuncrtn = 0U;
    this->__VnoInFunc_m_is_for_me(vlSymsp, cb, __VlefCall_0__m_is_for_me);
    if (__VlefCall_0__m_is_for_me) {
        this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __VlefCall_0__m_is_for_me);
    }
    if (__VlefCall_0__m_is_for_me) {
        m_is_registered__Vfuncrtn = this->__PVT__m_registered;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc_m_is_for_me(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc_m_is_for_me\n"); );
    // Body
    m_is_for_me__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz100::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz100::~\n"); );
}
