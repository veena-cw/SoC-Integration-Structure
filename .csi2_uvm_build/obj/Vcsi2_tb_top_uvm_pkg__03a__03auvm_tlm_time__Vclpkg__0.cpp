// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time__Vclpkg::__VnoInFunc_set_time_resolution(Vcsi2_tb_top__Syms* __restrict vlSymsp, double res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time__Vclpkg::__VnoInFunc_set_time_resolution\n"); );
    // Body
    this->__PVT__m_resolution = res;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::init(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, double res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_name = name;
    this->__PVT__m_res = ((0.0 == res) ? vlSymsp->TOP__uvm_pkg__03a__03auvm_tlm_time__Vclpkg.__PVT__m_resolution
                           : res);
    {
        // Inlined CFunc: __VnoInFunc_reset
        this->__PVT__m_time = 0ULL;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_name;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__m_time = 0ULL;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_to_m_res(Vcsi2_tb_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs, double &to_m_res__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_to_m_res\n"); );
    // Body
    to_m_res__Vfuncrtn = ((t / VL_ITOR_D_Q(64, scaled)) 
                          * (secs / this->__PVT__m_res));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_realtime(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ scaled, double secs, double &get_realtime__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_realtime\n"); );
    // Body
    get_realtime__Vfuncrtn = (((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                * VL_ITOR_D_Q(64, scaled)) 
                               * this->__PVT__m_res) 
                              / secs);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_incr(Vcsi2_tb_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_incr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__2__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__3__Vfuncout;
    __Vtask_uvm_report_enabled__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__5____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__8__verbosity;
    __Vtask_uvm_report_fatal__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__8__line;
    __Vtask_uvm_report_fatal__8__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__9__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    double __VlefCall_2__to_m_res;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((t < 0.0)) {
            this->__Vfunc_uvm_report_enabled__1__id = "UVM/TLM/TIMENEG"s;
            __Vfunc_uvm_report_enabled__1__severity = 2U;
            __Vfunc_uvm_report_enabled__1__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__2__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __Vtask_uvm_report_enabled__3__Vfuncout);
            __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__3__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/TLM/TIMENEG"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot increment uvm_tlm_time variable "s, this->__PVT__m_name), " by a negative value"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_time.svh"s, 0x0000007bU);
            }
            goto __Vlabel0;
        }
        if ((0ULL == scaled)) {
            this->__Vfunc_uvm_report_enabled__5__id = "UVM/TLM/BADSCALE"s;
            __Vfunc_uvm_report_enabled__5__severity = 3U;
            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), this->__Vfunc_uvm_report_enabled__5__id, __Vtask_uvm_report_enabled__7__Vfuncout);
            __Vfunc_uvm_report_enabled__5____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__7__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__5____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_fatal__8__line = 0x00000080U;
                this->__Vtask_uvm_report_fatal__8__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_time.svh"s;
                __Vtask_uvm_report_fatal__8__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__8__message = "uvm_tlm_time::incr() called with a scaled time literal that is smaller than the current timescale"s;
                this->__Vtask_uvm_report_fatal__8__id = "UVM/TLM/BADSCALE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__8__id, this->__Vtask_uvm_report_fatal__8__message, __Vtask_uvm_report_fatal__8__verbosity, this->__Vtask_uvm_report_fatal__8__filename, __Vtask_uvm_report_fatal__8__line);
            }
        }
        this->__VnoInFunc_to_m_res(vlSymsp, t, scaled, secs, __VlefCall_2__to_m_res);
        this->__PVT__m_time = VL_RTOIROUND_Q_D((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                                + __VlefCall_2__to_m_res));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_decr(Vcsi2_tb_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_decr\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__16____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__17__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__18__Vfuncout;
    __Vtask_uvm_report_enabled__18__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__19__verbosity;
    __Vtask_uvm_report_fatal__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__19__line;
    __Vtask_uvm_report_fatal__19__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__20__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__23____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__25__Vfuncout;
    __Vtask_uvm_report_enabled__25__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    double __VlefCall_2__to_m_res;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((t < 0.0)) {
            this->__Vfunc_uvm_report_enabled__12__id = "UVM/TLM/TIMENEG"s;
            __Vfunc_uvm_report_enabled__12__severity = 2U;
            __Vfunc_uvm_report_enabled__12__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), this->__Vfunc_uvm_report_enabled__12__id, __Vtask_uvm_report_enabled__14__Vfuncout);
            __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__14__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/TLM/TIMENEG"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot decrement uvm_tlm_time variable "s, this->__PVT__m_name), " by a negative value"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_time.svh"s, 0x00000095U);
            }
            goto __Vlabel0;
        }
        if ((0ULL == scaled)) {
            this->__Vfunc_uvm_report_enabled__16__id = "UVM/TLM/BADSCALE"s;
            __Vfunc_uvm_report_enabled__16__severity = 3U;
            __Vfunc_uvm_report_enabled__16__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), this->__Vfunc_uvm_report_enabled__16__id, __Vtask_uvm_report_enabled__18__Vfuncout);
            __Vfunc_uvm_report_enabled__16____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__18__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__16____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_fatal__19__line = 0x0000009aU;
                this->__Vtask_uvm_report_fatal__19__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_time.svh"s;
                __Vtask_uvm_report_fatal__19__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__19__message = "uvm_tlm_time::decr() called with a scaled time literal that is smaller than the current timescale"s;
                this->__Vtask_uvm_report_fatal__19__id = "UVM/TLM/BADSCALE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__20__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__19__id, this->__Vtask_uvm_report_fatal__19__message, __Vtask_uvm_report_fatal__19__verbosity, this->__Vtask_uvm_report_fatal__19__filename, __Vtask_uvm_report_fatal__19__line);
            }
        }
        this->__VnoInFunc_to_m_res(vlSymsp, t, scaled, secs, __VlefCall_2__to_m_res);
        this->__PVT__m_time = VL_RTOIROUND_Q_D((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                                - __VlefCall_2__to_m_res));
        if ((VL_ITOR_D_Q(64, this->__PVT__m_time) < 0.0)) {
            this->__Vfunc_uvm_report_enabled__23__id = "UVM/TLM/TOODECR"s;
            __Vfunc_uvm_report_enabled__23__severity = 2U;
            __Vfunc_uvm_report_enabled__23__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__23__verbosity, (IData)(__Vfunc_uvm_report_enabled__23__severity), this->__Vfunc_uvm_report_enabled__23__id, __Vtask_uvm_report_enabled__25__Vfuncout);
            __Vfunc_uvm_report_enabled__23____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__25__Vfuncout;
            __VlefCall_3__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__23____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_3__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/TLM/TOODECR"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot decrement uvm_tlm_time variable "s, this->__PVT__m_name), " to a negative value"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_time.svh"s, 0x000000a0U);
            }
            {
                // Inlined CFunc: __VnoInFunc_reset
                this->__PVT__m_time = 0ULL;
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_abstime(Vcsi2_tb_top__Syms* __restrict vlSymsp, double secs, double &get_abstime__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_get_abstime\n"); );
    // Body
    get_abstime__Vfuncrtn = ((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                              * this->__PVT__m_res) 
                             / secs);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_set_abstime(Vcsi2_tb_top__Syms* __restrict vlSymsp, double t, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::__VnoInFunc_set_abstime\n"); );
    // Body
    this->__PVT__m_time = VL_RTOIROUND_Q_D(((t * secs) 
                                            / this->__PVT__m_res));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_res = 0;
    __PVT__m_time = VL_SCOPED_RAND_RESET_Q(64, 2519606764001584816ULL, 8253044889826645110ull);
}
