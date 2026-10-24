// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::init(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__for_each_idx = 0xffffffffU;
    this->__PVT__cfg = cfg;
    this->__PVT__memory = mem;
    this->__PVT__default_alloc = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reconfigure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reconfigure\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_4__get_end_offset;
    QData/*63:0*/ __VlefCall_3__get_start_offset;
    CData/*0:0*/ __VlefLogOr_2;
    QData/*63:0*/ __VlefCall_1__get_end_offset;
    QData/*63:0*/ __VlefCall_0__get_start_offset;
    IData/*31:0*/ unnamedblk341__DOT__i;
    unnamedblk341__DOT__i = 0;
    IData/*31:0*/ unnamedblk341__DOT__i__Vloopsize;
    unnamedblk341__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    {
        if ((VlNull{} == cfg)) {
            reconfigure__Vfuncrtn = this->__PVT__cfg;
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
        if ((VL_NULL_CHECK(cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 671)
             ->__PVT__n_bytes != VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 671)
             ->__PVT__n_bytes)) {
            VL_NULL_CHECK(top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 672)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_mam"s, VL_SFORMATF_N_NX("Cannot reconfigure Memory Allocation Manager with a different number of bytes (%0d !== %0d)",2
                                                                                , '#',32,VL_NULL_CHECK(cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 674)
                                                                                ->__PVT__n_bytes
                                                                                , '#',32,VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 674)
                                                                                ->__PVT__n_bytes) , 0x00000064U, ""s, 0U);
            reconfigure__Vfuncrtn = this->__PVT__cfg;
            goto __Vlabel0;
        }
        unnamedblk341__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk341__DOT__i, this->__PVT__in_use.size())) {
            unnamedblk341__DOT__i__Vloopsize = this->__PVT__in_use.size();
            VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk341__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 680)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_0__get_start_offset);
            __VlefLogOr_2 = (__VlefCall_0__get_start_offset 
                             < VL_NULL_CHECK(cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 680)
                             ->__PVT__start_offset);
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk341__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 681)->__VnoInFunc_get_end_offset(vlSymsp, __VlefCall_1__get_end_offset);
                __VlefLogOr_2 = (__VlefCall_1__get_end_offset 
                                 > VL_NULL_CHECK(cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 681)
                                 ->__PVT__end_offset);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk341__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 684)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_3__get_start_offset);
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk341__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 685)->__VnoInFunc_get_end_offset(vlSymsp, __VlefCall_4__get_end_offset);
                VL_NULL_CHECK(top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 682)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_mam"s, VL_SFORMATF_N_NX("Cannot reconfigure Memory Allocation Manager with a currently allocated region outside of the managed address range ([%0d:%0d] outside of [%0d:%0d])",4
                                                                                , '#',64,__VlefCall_3__get_start_offset
                                                                                , '#',64,__VlefCall_4__get_end_offset
                                                                                , '#',64,VL_NULL_CHECK(cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 686)
                                                                                ->__PVT__start_offset
                                                                                , '#',64,VL_NULL_CHECK(cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 686)
                                                                                ->__PVT__end_offset) , 0x00000064U, ""s, 0U);
                reconfigure__Vfuncrtn = this->__PVT__cfg;
                goto __Vlabel0;
            }
            if ((unnamedblk341__DOT__i__Vloopsize <= this->__PVT__in_use.size())) {
                unnamedblk341__DOT__i = ((IData)(1U) 
                                         + unnamedblk341__DOT__i);
            }
        }
        reconfigure__Vfuncrtn = this->__PVT__cfg;
        this->__PVT__cfg = cfg;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reserve_region(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reserve_region\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__verbosity;
    __Vfunc_uvm_report_enabled__20__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__20__severity;
    __Vfunc_uvm_report_enabled__20__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__22__Vfuncout;
    __Vtask_uvm_report_enabled__22__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__23__verbosity;
    __Vtask_uvm_report_info__23__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__23__line;
    __Vtask_uvm_report_info__23__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__24__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__verbosity;
    __Vfunc_uvm_report_enabled__28__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__28__severity;
    __Vfunc_uvm_report_enabled__28__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__28____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__29__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__30__Vfuncout;
    __Vtask_uvm_report_enabled__30__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_9__get_start_offset;
    std::string __VlefCall_8__convert2string;
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_6;
    QData/*63:0*/ __VlefCall_5__get_start_offset;
    QData/*63:0*/ __VlefCall_4__get_end_offset;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk342__DOT__i;
    unnamedblk342__DOT__i = 0;
    IData/*31:0*/ unnamedblk342__DOT__i__Vloopsize;
    unnamedblk342__DOT__i__Vloopsize = 0;
    QData/*63:0*/ end_offset;
    {
        end_offset = 0ULL;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((0U == n_bytes)) {
            this->__Vfunc_uvm_report_enabled__8__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__8__severity = 2U;
            __Vfunc_uvm_report_enabled__8__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __Vtask_uvm_report_enabled__10__Vfuncout);
            __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__10__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot reserve 0 bytes"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000002c0U);
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((start_offset < VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 708)
             ->__PVT__start_offset)) {
            this->__Vfunc_uvm_report_enabled__12__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__12__severity = 2U;
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot reserve before start of memory space: 'h%h < 'h%h",2
                                                                                , '#',64,start_offset
                                                                                , '#',64,VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 710)
                                                                                ->__PVT__start_offset) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000002c6U);
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        end_offset = (start_offset + VL_DIV_QQQ(64, 
                                                ((QData)((IData)(n_bytes)) 
                                                 - 1ULL), (QData)((IData)(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 714)
                                                                          ->__PVT__n_bytes))));
        n_bytes = (IData)(((1ULL + (end_offset - start_offset)) 
                           * (QData)((IData)(VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 715)
                                             ->__PVT__n_bytes))));
        if ((end_offset > VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 717)
             ->__PVT__end_offset)) {
            this->__Vfunc_uvm_report_enabled__16__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__16__severity = 2U;
            __Vfunc_uvm_report_enabled__16__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), this->__Vfunc_uvm_report_enabled__16__id, __Vtask_uvm_report_enabled__18__Vfuncout);
            __Vfunc_uvm_report_enabled__16____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__18__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__16____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot reserve past end of memory space: 'h%h > 'h%h",2
                                                                                , '#',64,end_offset
                                                                                , '#',64,VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 719)
                                                                                ->__PVT__end_offset) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000002cfU);
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__Vfunc_uvm_report_enabled__20__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__20__severity = 0U;
        __Vfunc_uvm_report_enabled__20__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__21__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__20__verbosity, (IData)(__Vfunc_uvm_report_enabled__20__severity), this->__Vfunc_uvm_report_enabled__20__id, __Vtask_uvm_report_enabled__22__Vfuncout);
        __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__22__Vfuncout;
        __VlefCall_3__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__20____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_3__uvm_report_enabled) {
            __Vtask_uvm_report_info__23__line = 0x000002d4U;
            this->__Vtask_uvm_report_info__23__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s;
            __Vtask_uvm_report_info__23__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__23__message
                          ,"Attempting to reserve ['h%h:'h%h]...",2
                          , '#',64,start_offset, '#',64,end_offset);
            this->__Vtask_uvm_report_info__23__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__23__id, this->__Vtask_uvm_report_info__23__message, __Vtask_uvm_report_info__23__verbosity, this->__Vtask_uvm_report_info__23__filename, __Vtask_uvm_report_info__23__line);
        }
        unnamedblk342__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk342__DOT__i, this->__PVT__in_use.size())) {
            unnamedblk342__DOT__i__Vloopsize = this->__PVT__in_use.size();
            VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk342__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 730)->__VnoInFunc_get_end_offset(vlSymsp, __VlefCall_4__get_end_offset);
            __VlefLogAnd_6 = (start_offset <= __VlefCall_4__get_end_offset);
            if (__VlefLogAnd_6) {
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk342__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 731)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_5__get_start_offset);
                __VlefLogAnd_6 = (end_offset >= __VlefCall_5__get_start_offset);
            }
            if (__VlefLogAnd_6) {
                this->__Vfunc_uvm_report_enabled__28__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__28__severity = 2U;
                __Vfunc_uvm_report_enabled__28__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__29__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__28__verbosity, (IData)(__Vfunc_uvm_report_enabled__28__severity), this->__Vfunc_uvm_report_enabled__28__id, __Vtask_uvm_report_enabled__30__Vfuncout);
                __Vfunc_uvm_report_enabled__28____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__30__Vfuncout;
                __VlefCall_7__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__28____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_7__uvm_report_enabled) {
                    VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk342__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 735)->__VnoInFunc_convert2string(vlSymsp, __VlefCall_8__convert2string);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot reserve ['h%h:'h%h] because it overlaps with %s",3
                                                                                , '#',64,start_offset
                                                                                , '#',64,end_offset
                                                                                , 'S',&(__VlefCall_8__convert2string)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000002dfU);
                }
                reserve_region__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk342__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 740)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_9__get_start_offset);
            if ((start_offset > __VlefCall_9__get_start_offset)) {
                reserve_region__Vfuncrtn = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region, vlSymsp, start_offset, end_offset, 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(end_offset) 
                                                    - (IData)(start_offset))), n_bytes, 
                                                  VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam>{this});
                this->__PVT__in_use.insert(unnamedblk342__DOT__i, reserve_region__Vfuncrtn);
                goto __Vlabel0;
            }
            if ((unnamedblk342__DOT__i__Vloopsize <= this->__PVT__in_use.size())) {
                unnamedblk342__DOT__i = ((IData)(1U) 
                                         + unnamedblk342__DOT__i);
            }
        }
        reserve_region__Vfuncrtn = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region, vlSymsp, start_offset, end_offset, 
                                          ((IData)(1U) 
                                           + ((IData)(end_offset) 
                                              - (IData)(start_offset))), n_bytes, 
                                          VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam>{this});
        this->__PVT__in_use.push_back(reserve_region__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_request_region(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_request_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__verbosity;
    __Vfunc_uvm_report_enabled__37__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__37__severity;
    __Vfunc_uvm_report_enabled__37__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__37____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__38__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__39__Vfuncout;
    __Vtask_uvm_report_enabled__39__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    {
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == alloc)) {
            alloc = this->__PVT__default_alloc;
        }
        VL_NULL_CHECK(alloc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 762)->__PVT__len 
            = ((IData)(1U) + VL_DIV_III(32, (n_bytes 
                                             - (IData)(1U)), VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 762)
                                        ->__PVT__n_bytes));
        VL_NULL_CHECK(alloc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 763)->__PVT__min_offset 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 763)
            ->__PVT__start_offset;
        VL_NULL_CHECK(alloc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 764)->__PVT__max_offset 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 764)
            ->__PVT__end_offset;
        VL_NULL_CHECK(alloc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 765)->__PVT__in_use 
            = this->__PVT__in_use;
        if ((VlNull{} != alloc)) {
            VL_NULL_CHECK(alloc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 767)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if ((1U & (~ (0U != __VlefCond_1)))) {
            this->__Vfunc_uvm_report_enabled__37__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__37__severity = 2U;
            __Vfunc_uvm_report_enabled__37__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__38__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__37__verbosity, (IData)(__Vfunc_uvm_report_enabled__37__severity), this->__Vfunc_uvm_report_enabled__37__id, __Vtask_uvm_report_enabled__39__Vfuncout);
            __Vfunc_uvm_report_enabled__37____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__39__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__37____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Unable to randomize policy"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x00000300U);
            }
            request_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_reserve_region(vlSymsp, VL_NULL_CHECK(alloc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 772)
                                         ->__PVT__start_offset, n_bytes, ""s, 0U, request_region__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_region(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> region) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__verbosity;
    __Vfunc_uvm_report_enabled__42__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__42__severity;
    __Vfunc_uvm_report_enabled__42__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__42____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__44__Vfuncout;
    __Vtask_uvm_report_enabled__44__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__convert2string;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk343__DOT__i;
    unnamedblk343__DOT__i = 0;
    IData/*31:0*/ unnamedblk343__DOT__i__Vloopsize;
    unnamedblk343__DOT__i__Vloopsize = 0;
    {
        if ((VlNull{} == region)) {
            goto __Vlabel0;
        }
        unnamedblk343__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk343__DOT__i, this->__PVT__in_use.size())) {
            unnamedblk343__DOT__i__Vloopsize = this->__PVT__in_use.size();
            if ((this->__PVT__in_use.at(unnamedblk343__DOT__i) 
                 == region)) {
                this->__PVT__in_use.erase(unnamedblk343__DOT__i);
                goto __Vlabel0;
            }
            if ((unnamedblk343__DOT__i__Vloopsize <= this->__PVT__in_use.size())) {
                unnamedblk343__DOT__i = ((IData)(1U) 
                                         + unnamedblk343__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__42__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__42__severity = 2U;
        __Vfunc_uvm_report_enabled__42__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__43__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__42__verbosity, (IData)(__Vfunc_uvm_report_enabled__42__severity), this->__Vfunc_uvm_report_enabled__42__id, __Vtask_uvm_report_enabled__44__Vfuncout);
        __Vfunc_uvm_report_enabled__42____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__44__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__42____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            VL_NULL_CHECK(region, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 787)->__VnoInFunc_convert2string(vlSymsp, __VlefCall_1__convert2string);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Attempting to release unallocated region\n"s, __VlefCall_1__convert2string)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x00000313U);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_all_regions(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_all_regions\n"); );
    // Body
    this->__PVT__in_use.clear();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_convert2string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_convert2string\n"); );
    // Body
    std::string __VlefCall_0__convert2string;
    IData/*31:0*/ unnamedblk344__DOT__i;
    unnamedblk344__DOT__i = 0;
    IData/*31:0*/ unnamedblk344__DOT__i__Vloopsize;
    unnamedblk344__DOT__i__Vloopsize = 0;
    convert2string__Vfuncrtn = "Allocated memory regions:\n"s;
    unnamedblk344__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk344__DOT__i, this->__PVT__in_use.size())) {
        unnamedblk344__DOT__i__Vloopsize = this->__PVT__in_use.size();
        VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk344__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 800)->__VnoInFunc_convert2string(vlSymsp, __VlefCall_0__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s   %s\n",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_0__convert2string));
        if ((unnamedblk344__DOT__i__Vloopsize <= this->__PVT__in_use.size())) {
            unnamedblk344__DOT__i = ((IData)(1U) + unnamedblk344__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_for_each(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_for_each\n"); );
    // Body
    {
        if (reset) {
            this->__PVT__for_each_idx = 0xffffffffU;
        }
        this->__PVT__for_each_idx = ((IData)(1U) + this->__PVT__for_each_idx);
        if (VL_GTES_III(32, this->__PVT__for_each_idx, this->__PVT__in_use.size())) {
            for_each__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        for_each__Vfuncrtn = this->__PVT__in_use.at(this->__PVT__for_each_idx);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_get_memory(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_get_memory\n"); );
    // Body
    get_memory__Vfuncrtn = this->__PVT__memory;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}
