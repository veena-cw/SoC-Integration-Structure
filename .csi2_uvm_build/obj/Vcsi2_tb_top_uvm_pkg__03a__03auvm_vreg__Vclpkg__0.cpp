// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::new\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__6____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__8__Vfuncout;
    __Vtask_uvm_report_enabled__8__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    if ((0U == n_bits)) {
        this->__Vfunc_uvm_report_enabled__1__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__1__severity = 2U;
        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __Vtask_uvm_report_enabled__3__Vfuncout);
        __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__3__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__1____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual register \"%s\" cannot have 0 bits",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000002e9U);
        }
        n_bits = 1U;
    }
    if ((0x00000040U < n_bits)) {
        this->__Vfunc_uvm_report_enabled__6__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__6__severity = 2U;
        __Vfunc_uvm_report_enabled__6__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), this->__Vfunc_uvm_report_enabled__6__id, __Vtask_uvm_report_enabled__8__Vfuncout);
        __Vfunc_uvm_report_enabled__6____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__8__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__6____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual register \"%s\" cannot have more than 64 bits (%0d)",2
                                                                                , 'S',&(__VlefCall_3__get_full_name)
                                                                                , '#',32,n_bits) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000002edU);
        }
        n_bits = 0x00000040U;
    }
    this->__PVT__n_bits = n_bits;
    this->__PVT__locked = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_configure\n"); );
    // Locals
    CData/*0:0*/ __Vtask_implement__11__Vfuncout;
    __Vtask_implement__11__Vfuncout = 0;
    // Body
    this->__PVT__parent = parent;
    this->__PVT__n_used_bits = 0U;
    if ((VlNull{} != mem)) {
        this->__VnoInFunc_implement(vlSymsp, size, mem, offset, incr, __Vtask_implement__11__Vfuncout);
        this->__PVT__is_static = 1U;
    } else {
        this->__PVT__mem = VlNull{};
        this->__PVT__is_static = 0U;
    }
    VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 774)->__VnoInFunc_add_vreg(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this});
    this->__PVT__atomic = VL_NEW(Vcsi2_tb_top_std__03a__03asemaphore, vlSymsp, 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_Xlock_modelX(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    {
        if (this->__PVT__locked) {
            goto __Vlabel0;
        }
        this->__PVT__locked = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_add_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_add_field\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__14____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__16__Vfuncout;
    __Vtask_uvm_report_enabled__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__verbosity;
    __Vfunc_uvm_report_enabled__18__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__18__severity;
    __Vfunc_uvm_report_enabled__18__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__18____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__19__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__20__Vfuncout;
    __Vtask_uvm_report_enabled__20__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__21__verbosity;
    __Vtask_uvm_report_fatal__21__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__21__line;
    __Vtask_uvm_report_fatal__21__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__22__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__24__Vfuncout;
    __Vtask_get_lsb_pos_in_register__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__verbosity;
    __Vfunc_uvm_report_enabled__27__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__27__severity;
    __Vfunc_uvm_report_enabled__27__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__27____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__28__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__29__Vfuncout;
    __Vtask_uvm_report_enabled__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
    __Vfunc_uvm_report_enabled__34__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
    __Vfunc_uvm_report_enabled__34__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__34____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
    __Vtask_uvm_report_enabled__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__verbosity;
    __Vfunc_uvm_report_enabled__43__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__43__severity;
    __Vfunc_uvm_report_enabled__43__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__43____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__44__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__45__Vfuncout;
    __Vtask_uvm_report_enabled__45__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_17__get_full_name;
    std::string __VlefCall_16__get_name;
    std::string __VlefCall_15__get_name;
    CData/*0:0*/ __VlefCall_14__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_13__get_lsb_pos_in_register;
    IData/*31:0*/ __VlefCall_12__get_n_bits;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_name;
    std::string __VlefCall_9__get_name;
    CData/*0:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    IData/*31:0*/ __VlefCall_6__get_lsb_pos_in_register;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_n_bits;
    IData/*31:0*/ __VlefCall_2__get_lsb_pos_in_register;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk345__DOT__i;
    unnamedblk345__DOT__i = 0;
    IData/*31:0*/ unnamedblk345__DOT__i__Vloopsize;
    unnamedblk345__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk345__DOT__unnamedblk346__DOT__j;
    IData/*31:0*/ offset;
    IData/*31:0*/ idx;
    {
        offset = 0U;
        idx = 0U;
        if (this->__PVT__locked) {
            this->__Vfunc_uvm_report_enabled__14__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__14__severity = 2U;
            __Vfunc_uvm_report_enabled__14__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), this->__Vfunc_uvm_report_enabled__14__id, __Vtask_uvm_report_enabled__16__Vfuncout);
            __Vfunc_uvm_report_enabled__14____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__16__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__14____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot add virtual field to locked virtual register model"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000319U);
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == field)) {
            this->__Vfunc_uvm_report_enabled__18__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__18__severity = 3U;
            __Vfunc_uvm_report_enabled__18__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__18__verbosity, (IData)(__Vfunc_uvm_report_enabled__18__severity), this->__Vfunc_uvm_report_enabled__18__id, __Vtask_uvm_report_enabled__20__Vfuncout);
            __Vfunc_uvm_report_enabled__18____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__20__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__18____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_fatal__21__line = 0x0000031dU;
                this->__Vtask_uvm_report_fatal__21__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_fatal__21__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__21__message = "Attempting to register NULL virtual field"s;
                this->__Vtask_uvm_report_fatal__21__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__22__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__21__id, this->__Vtask_uvm_report_fatal__21__message, __Vtask_uvm_report_fatal__21__verbosity, this->__Vtask_uvm_report_fatal__21__filename, __Vtask_uvm_report_fatal__21__line);
            }
        }
        VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 800)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__24__Vfuncout);
        offset = __Vtask_get_lsb_pos_in_register__24__Vfuncout;
        idx = 0xffffffffU;
        {
            unnamedblk345__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk345__DOT__i, this->__PVT__fields.size())) {
                unnamedblk345__DOT__i__Vloopsize = this->__PVT__fields.size();
                VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk345__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 804)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_2__get_lsb_pos_in_register);
                if ((offset < __VlefCall_2__get_lsb_pos_in_register)) {
                    unnamedblk345__DOT__unnamedblk346__DOT__j 
                        = unnamedblk345__DOT__i;
                    this->__PVT__fields.insert(unnamedblk345__DOT__unnamedblk346__DOT__j, field);
                    idx = unnamedblk345__DOT__i;
                    goto __Vlabel1;
                }
                if ((unnamedblk345__DOT__i__Vloopsize 
                     <= this->__PVT__fields.size())) {
                    unnamedblk345__DOT__i = ((IData)(1U) 
                                             + unnamedblk345__DOT__i);
                }
            }
            __Vlabel1: ;
        }
        if (VL_GTS_III(32, 0U, idx)) {
            this->__PVT__fields.push_back(field);
            idx = (this->__PVT__fields.size() - (IData)(1U));
        }
        VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 816)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
        this->__PVT__n_used_bits = (this->__PVT__n_used_bits 
                                    + __VlefCall_3__get_n_bits);
        if ((this->__PVT__n_used_bits > this->__PVT__n_bits)) {
            this->__Vfunc_uvm_report_enabled__27__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__27__severity = 2U;
            __Vfunc_uvm_report_enabled__27__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__28__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__28__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__27__verbosity, (IData)(__Vfunc_uvm_report_enabled__27__severity), this->__Vfunc_uvm_report_enabled__27__id, __Vtask_uvm_report_enabled__29__Vfuncout);
            __Vfunc_uvm_report_enabled__27____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__29__Vfuncout;
            __VlefCall_4__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__27____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_4__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual fields use more bits (%0d) than available in virtual register \"%s\" (%0d)",3
                                                                                , '#',32,this->__PVT__n_used_bits
                                                                                , 'S',&(__VlefCall_5__get_full_name)
                                                                                , '#',32,this->__PVT__n_bits) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000335U);
            }
        }
        if (VL_LTS_III(32, 0U, idx)) {
            VL_NULL_CHECK(this->__PVT__fields.at((idx 
                                                  - (IData)(1U))), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 826)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_6__get_lsb_pos_in_register);
            VL_NULL_CHECK(this->__PVT__fields.at((idx 
                                                  - (IData)(1U))), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 827)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
            if (((__VlefCall_6__get_lsb_pos_in_register 
                  + __VlefCall_7__get_n_bits) > offset)) {
                this->__Vfunc_uvm_report_enabled__34__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__34__severity = 2U;
                __Vfunc_uvm_report_enabled__34__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), this->__Vfunc_uvm_report_enabled__34__id, __Vtask_uvm_report_enabled__36__Vfuncout);
                __Vfunc_uvm_report_enabled__34____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__36__Vfuncout;
                __VlefCall_8__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__34____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_8__uvm_report_enabled) {
                    VL_NULL_CHECK(this->__PVT__fields.at(
                                                         (idx 
                                                          - (IData)(1U))), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 831)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                    VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 831)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Field %s overlaps field %s in virtual register \"%s\"",3
                                                                                , 'S',&(__VlefCall_9__get_name)
                                                                                , 'S',&(__VlefCall_10__get_name)
                                                                                , 'S',&(__VlefCall_11__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000033fU);
                }
            }
        }
        if (VL_LTS_III(32, idx, (this->__PVT__fields.size() 
                                 - (IData)(1U)))) {
            VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 835)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
            VL_NULL_CHECK(this->__PVT__fields.at(((IData)(1U) 
                                                  + idx)), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 836)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_13__get_lsb_pos_in_register);
            if (((offset + __VlefCall_12__get_n_bits) 
                 > __VlefCall_13__get_lsb_pos_in_register)) {
                this->__Vfunc_uvm_report_enabled__43__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__43__severity = 2U;
                __Vfunc_uvm_report_enabled__43__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__44__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__43__verbosity, (IData)(__Vfunc_uvm_report_enabled__43__severity), this->__Vfunc_uvm_report_enabled__43__id, __Vtask_uvm_report_enabled__45__Vfuncout);
                __Vfunc_uvm_report_enabled__43____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__45__Vfuncout;
                __VlefCall_14__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__43____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_14__uvm_report_enabled) {
                    VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 841)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                    VL_NULL_CHECK(this->__PVT__fields.at(
                                                         ((IData)(1U) 
                                                          + idx)), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 841)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Field %s overlaps field %s in virtual register \"%s\"",3
                                                                                , 'S',&(__VlefCall_15__get_name)
                                                                                , 'S',&(__VlefCall_16__get_name)
                                                                                , 'S',&(__VlefCall_17__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000349U);
                }
            }
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__51__Vfuncout;
    __Vtask_try_get__51__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if (on) {
        co_await VL_NULL_CHECK(this->__PVT__atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 848)->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
    } else {
        VL_NULL_CHECK(this->__PVT__atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 851)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__51__Vfuncout);
        VL_NULL_CHECK(this->__PVT__atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 852)->__VnoInFunc_put(vlSymsp, 1U);
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_reset\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__53__Vfuncout;
    __Vtask_try_get__53__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 860)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__53__Vfuncout);
    VL_NULL_CHECK(this->__PVT__atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 861)->__VnoInFunc_put(vlSymsp, 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_0__get_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk;
    {
        get_full_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        this->__VnoInFunc_get_block(vlSymsp, blk);
        if ((VlNull{} == blk)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 873)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_0__get_parent);
        if ((VlNull{} == __VlefCall_0__get_parent)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 875)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_set_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__parent = parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_implement(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_implement\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__verbosity;
    __Vfunc_uvm_report_enabled__59__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__59__severity;
    __Vfunc_uvm_report_enabled__59__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__59____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__60__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__61__Vfuncout;
    __Vtask_uvm_report_enabled__61__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__64__verbosity;
    __Vfunc_uvm_report_enabled__64__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__64__severity;
    __Vfunc_uvm_report_enabled__64__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__64____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__64____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__65__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__66__Vfuncout;
    __Vtask_uvm_report_enabled__66__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__69__verbosity;
    __Vfunc_uvm_report_enabled__69__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__69__severity;
    __Vfunc_uvm_report_enabled__69__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__69____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__69____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__70__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__71__Vfuncout;
    __Vtask_uvm_report_enabled__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__verbosity;
    __Vfunc_uvm_report_enabled__75__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__75__severity;
    __Vfunc_uvm_report_enabled__75__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__75____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__76__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__77__Vfuncout;
    __Vtask_uvm_report_enabled__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__83__verbosity;
    __Vfunc_uvm_report_enabled__83__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__83__severity;
    __Vfunc_uvm_report_enabled__83__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__83____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__83____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__84__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__85__Vfuncout;
    __Vtask_uvm_report_enabled__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__90__verbosity;
    __Vfunc_uvm_report_enabled__90__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__90__severity;
    __Vfunc_uvm_report_enabled__90__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__90____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__90____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__91__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__92__Vfuncout;
    __Vtask_uvm_report_enabled__92__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__99__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__100__Vfuncout;
    __Vtask_uvm_report_enabled__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
    __Vfunc_uvm_report_enabled__103__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
    __Vfunc_uvm_report_enabled__103__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__103____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__104__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__105__Vfuncout;
    __Vtask_uvm_report_enabled__105__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__109__verbosity;
    __Vtask_uvm_report_info__109__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__109__line;
    __Vtask_uvm_report_info__109__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__110__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_25__get_full_name;
    std::string __VlefCall_24__get_full_name;
    std::string __VlefCall_23__get_full_name;
    CData/*0:0*/ __VlefCall_22__uvm_report_enabled;
    std::string __VlefCall_21__get_full_name;
    CData/*0:0*/ __VlefCall_20__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_19__get_n_bytes;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    CData/*0:0*/ __VlefCall_16__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_15__get_size;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    CData/*0:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    IData/*31:0*/ __VlefCall_10__get_n_bytes;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_6__get_block;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk347__DOT__min_incr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> region;
    {
        implement__Vfuncrtn = 0U;
        if ((1ULL > n)) {
            this->__Vfunc_uvm_report_enabled__59__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__59__severity = 2U;
            __Vfunc_uvm_report_enabled__59__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__60__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__59__verbosity, (IData)(__Vfunc_uvm_report_enabled__59__severity), this->__Vfunc_uvm_report_enabled__59__id, __Vtask_uvm_report_enabled__61__Vfuncout);
            __Vfunc_uvm_report_enabled__59____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__61__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__59____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to implement virtual register \"%s\" with a subscript less than one doesn't make sense",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000384U);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__64__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__64__severity = 2U;
            __Vfunc_uvm_report_enabled__64__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__65__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__65__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__64__verbosity, (IData)(__Vfunc_uvm_report_enabled__64__severity), this->__Vfunc_uvm_report_enabled__64__id, __Vtask_uvm_report_enabled__66__Vfuncout);
            __Vfunc_uvm_report_enabled__64____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__66__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__64____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to implement virtual register \"%s\" using a NULL uvm_mem reference",1
                                                                                , 'S',&(__VlefCall_3__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000389U);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__69__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__69__severity = 2U;
            __Vfunc_uvm_report_enabled__69__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__70__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__70__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__69__verbosity, (IData)(__Vfunc_uvm_report_enabled__69__severity), this->__Vfunc_uvm_report_enabled__69__id, __Vtask_uvm_report_enabled__71__Vfuncout);
            __Vfunc_uvm_report_enabled__69____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__71__Vfuncout;
            __VlefCall_4__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__69____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_4__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual register \"%s\" is static and cannot be dynamically implemented",1
                                                                                , 'S',&(__VlefCall_5__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000038eU);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 914)->__VnoInFunc_get_block(vlSymsp, __VlefCall_6__get_block);
        if ((__VlefCall_6__get_block != this->__PVT__parent)) {
            this->__Vfunc_uvm_report_enabled__75__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__75__severity = 2U;
            __Vfunc_uvm_report_enabled__75__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__76__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__76__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__75__verbosity, (IData)(__Vfunc_uvm_report_enabled__75__severity), this->__Vfunc_uvm_report_enabled__75__id, __Vtask_uvm_report_enabled__77__Vfuncout);
            __Vfunc_uvm_report_enabled__75____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__77__Vfuncout;
            __VlefCall_7__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__75____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_7__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 917)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to implement virtual register \"%s\" on memory \"%s\" in a different block",2
                                                                                , 'S',&(__VlefCall_8__get_full_name)
                                                                                , 'S',&(__VlefCall_9__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000395U);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 922)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
        unnamedblk347__DOT__min_incr = ((IData)(1U) 
                                        + VL_DIV_III(32, 
                                                     (__VlefCall_10__get_n_bytes 
                                                      - (IData)(1U)), __VlefCall_11__get_n_bytes));
        if ((0U == incr)) {
            incr = unnamedblk347__DOT__min_incr;
        }
        if ((unnamedblk347__DOT__min_incr > incr)) {
            this->__Vfunc_uvm_report_enabled__83__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__83__severity = 2U;
            __Vfunc_uvm_report_enabled__83__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__84__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__83__verbosity, (IData)(__Vfunc_uvm_report_enabled__83__severity), this->__Vfunc_uvm_report_enabled__83__id, __Vtask_uvm_report_enabled__85__Vfuncout);
            __Vfunc_uvm_report_enabled__83____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__85__Vfuncout;
            __VlefCall_12__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__83____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_12__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 927)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual register \"%s\" increment is too small (%0d): Each virtual register requires at least %0d locations in memory \"%s\".",4
                                                                                , 'S',&(__VlefCall_13__get_full_name)
                                                                                , '#',32,incr
                                                                                , '~',32,unnamedblk347__DOT__min_incr
                                                                                , 'S',&(__VlefCall_14__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000039fU);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 933)->__VnoInFunc_get_size(vlSymsp, __VlefCall_15__get_size);
        if (((offset + (n * (QData)((IData)(incr)))) 
             > __VlefCall_15__get_size)) {
            this->__Vfunc_uvm_report_enabled__90__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__90__severity = 2U;
            __Vfunc_uvm_report_enabled__90__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__91__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__90__verbosity, (IData)(__Vfunc_uvm_report_enabled__90__severity), this->__Vfunc_uvm_report_enabled__90__id, __Vtask_uvm_report_enabled__92__Vfuncout);
            __Vfunc_uvm_report_enabled__90____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__92__Vfuncout;
            __VlefCall_16__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__90____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_16__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 934)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Given Offset for Virtual register \"%s[%0d]\" is too big for memory %s@'h%0h",4
                                                                                , 'S',&(__VlefCall_17__get_full_name)
                                                                                , '#',64,n
                                                                                , 'S',&(__VlefCall_18__get_full_name)
                                                                                , '#',64,offset) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000003a6U);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 938)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_19__get_n_bytes);
        VL_NULL_CHECK(VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 938)
                      ->__PVT__mam, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 938)->__VnoInFunc_reserve_region(vlSymsp, offset, (IData)(
                                                                                ((n 
                                                                                * (QData)((IData)(incr))) 
                                                                                * (QData)((IData)(__VlefCall_19__get_n_bytes)))), ""s, 0U, region);
        if ((VlNull{} == region)) {
            this->__Vfunc_uvm_report_enabled__98__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__98__severity = 2U;
            __Vfunc_uvm_report_enabled__98__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__99__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), this->__Vfunc_uvm_report_enabled__98__id, __Vtask_uvm_report_enabled__100__Vfuncout);
            __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__100__Vfuncout;
            __VlefCall_20__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_20__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Could not allocate a memory region for virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_21__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000003adU);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__103__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__103__severity = 0U;
            __Vfunc_uvm_report_enabled__103__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__104__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__104__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), this->__Vfunc_uvm_report_enabled__103__id, __Vtask_uvm_report_enabled__105__Vfuncout);
            __Vfunc_uvm_report_enabled__103____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__105__Vfuncout;
            __VlefCall_22__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__103____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_22__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 950)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 950)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                __Vtask_uvm_report_info__109__line = 0x000003b6U;
                this->__Vtask_uvm_report_info__109__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_info__109__verbosity = 0x000000c8U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__109__message
                              ,"Virtual register \"%s\" is being moved re-implemented from %s@'h%0h to %s@'h%0h",5
                              , 'S',&(__VlefCall_23__get_full_name)
                              , 'S',&(__VlefCall_24__get_full_name)
                              , '#',64,this->__PVT__offset
                              , 'S',&(__VlefCall_25__get_full_name)
                              , '#',64,offset);
                this->__Vtask_uvm_report_info__109__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vfunc_get__110__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__109__id, this->__Vtask_uvm_report_info__109__message, __Vtask_uvm_report_info__109__verbosity, this->__Vtask_uvm_report_info__109__filename, __Vtask_uvm_report_info__109__line);
            }
            this->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = region;
        this->__PVT__mem = mem;
        this->__PVT__size = n;
        this->__PVT__offset = offset;
        this->__PVT__incr = incr;
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 959)->__VnoInFunc_Xadd_vregX(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this});
        implement__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_allocate(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_allocate\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__114__verbosity;
    __Vfunc_uvm_report_enabled__114__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__114__severity;
    __Vfunc_uvm_report_enabled__114__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__114____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__114____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__115__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__116__Vfuncout;
    __Vtask_uvm_report_enabled__116__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__119__verbosity;
    __Vfunc_uvm_report_enabled__119__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__119__severity;
    __Vfunc_uvm_report_enabled__119__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__119____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__119____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__120__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__121__Vfuncout;
    __Vtask_uvm_report_enabled__121__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__124__verbosity;
    __Vfunc_uvm_report_enabled__124__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__124__severity;
    __Vfunc_uvm_report_enabled__124__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__124____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__124____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__125__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__126__Vfuncout;
    __Vtask_uvm_report_enabled__126__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__131__verbosity;
    __Vfunc_uvm_report_enabled__131__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__131__severity;
    __Vfunc_uvm_report_enabled__131__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__131____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__131____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__132__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__133__Vfuncout;
    __Vtask_uvm_report_enabled__133__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__139__verbosity;
    __Vfunc_uvm_report_enabled__139__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__139__severity;
    __Vfunc_uvm_report_enabled__139__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__139____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__139____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__140__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__141__Vfuncout;
    __Vtask_uvm_report_enabled__141__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__147__verbosity;
    __Vfunc_uvm_report_enabled__147__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__147__severity;
    __Vfunc_uvm_report_enabled__147__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__147____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__147____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__148__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__149__Vfuncout;
    __Vtask_uvm_report_enabled__149__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__152__verbosity;
    __Vfunc_uvm_report_enabled__152__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__152__severity;
    __Vfunc_uvm_report_enabled__152__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__152____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__152____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__153__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__154__Vfuncout;
    __Vtask_uvm_report_enabled__154__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__159__verbosity;
    __Vtask_uvm_report_info__159__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__159__line;
    __Vtask_uvm_report_info__159__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__160__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_22__get_start_offset;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_full_name;
    CData/*0:0*/ __VlefCall_18__uvm_report_enabled;
    std::string __VlefCall_17__get_full_name;
    CData/*0:0*/ __VlefCall_16__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_15__get_n_bytes;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    CData/*0:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    IData/*31:0*/ __VlefCall_10__get_n_bytes;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_6__get_block;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk348__DOT__min_incr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        if ((1ULL > n)) {
            this->__Vfunc_uvm_report_enabled__114__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__114__severity = 2U;
            __Vfunc_uvm_report_enabled__114__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__115__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__114__verbosity, (IData)(__Vfunc_uvm_report_enabled__114__severity), this->__Vfunc_uvm_report_enabled__114__id, __Vtask_uvm_report_enabled__116__Vfuncout);
            __Vfunc_uvm_report_enabled__114____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__116__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__114____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to implement virtual register \"%s\" with a subscript less than one doesn't make sense",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000003ccU);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VlNull{} == mam)) {
            this->__Vfunc_uvm_report_enabled__119__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__119__severity = 2U;
            __Vfunc_uvm_report_enabled__119__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__120__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__120__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__119__verbosity, (IData)(__Vfunc_uvm_report_enabled__119__severity), this->__Vfunc_uvm_report_enabled__119__id, __Vtask_uvm_report_enabled__121__Vfuncout);
            __Vfunc_uvm_report_enabled__119____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__121__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__119____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to implement virtual register \"%s\" using a NULL uvm_mem_mam reference",1
                                                                                , 'S',&(__VlefCall_3__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000003d1U);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__124__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__124__severity = 2U;
            __Vfunc_uvm_report_enabled__124__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__125__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__125__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__124__verbosity, (IData)(__Vfunc_uvm_report_enabled__124__severity), this->__Vfunc_uvm_report_enabled__124__id, __Vtask_uvm_report_enabled__126__Vfuncout);
            __Vfunc_uvm_report_enabled__124____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__126__Vfuncout;
            __VlefCall_4__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__124____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_4__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual register \"%s\" is static and cannot be dynamically allocated",1
                                                                                , 'S',&(__VlefCall_5__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000003d6U);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mam, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 986)->__VnoInFunc_get_memory(vlSymsp, mem);
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 987)->__VnoInFunc_get_block(vlSymsp, __VlefCall_6__get_block);
        if ((__VlefCall_6__get_block != this->__PVT__parent)) {
            this->__Vfunc_uvm_report_enabled__131__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__131__severity = 2U;
            __Vfunc_uvm_report_enabled__131__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__132__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__132__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__131__verbosity, (IData)(__Vfunc_uvm_report_enabled__131__severity), this->__Vfunc_uvm_report_enabled__131__id, __Vtask_uvm_report_enabled__133__Vfuncout);
            __Vfunc_uvm_report_enabled__131____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__133__Vfuncout;
            __VlefCall_7__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__131____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_7__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 990)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to allocate virtual register \"%s\" on memory \"%s\" in a different block",2
                                                                                , 'S',&(__VlefCall_8__get_full_name)
                                                                                , 'S',&(__VlefCall_9__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000003deU);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 995)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
        unnamedblk348__DOT__min_incr = ((IData)(1U) 
                                        + VL_DIV_III(32, 
                                                     (__VlefCall_10__get_n_bytes 
                                                      - (IData)(1U)), __VlefCall_11__get_n_bytes));
        if ((0U == this->__PVT__incr)) {
            this->__PVT__incr = unnamedblk348__DOT__min_incr;
        }
        if ((unnamedblk348__DOT__min_incr < this->__PVT__incr)) {
            this->__Vfunc_uvm_report_enabled__139__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__139__severity = 2U;
            __Vfunc_uvm_report_enabled__139__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__140__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__140__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__139__verbosity, (IData)(__Vfunc_uvm_report_enabled__139__severity), this->__Vfunc_uvm_report_enabled__139__id, __Vtask_uvm_report_enabled__141__Vfuncout);
            __Vfunc_uvm_report_enabled__139____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__141__Vfuncout;
            __VlefCall_12__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__139____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_12__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1000)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual register \"%s\" increment is too small (%0d): Each virtual register requires at least %0d locations in memory \"%s\".",4
                                                                                , 'S',&(__VlefCall_13__get_full_name)
                                                                                , '#',32,this->__PVT__incr
                                                                                , '~',32,unnamedblk348__DOT__min_incr
                                                                                , 'S',&(__VlefCall_14__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000003e8U);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1006)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_15__get_n_bytes);
        VL_NULL_CHECK(mam, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1006)->__VnoInFunc_request_region(vlSymsp, (IData)(
                                                                                ((n 
                                                                                * (QData)((IData)(this->__PVT__incr))) 
                                                                                * (QData)((IData)(__VlefCall_15__get_n_bytes)))), VlNull{}, ""s, 0U, allocate__Vfuncrtn);
        if ((VlNull{} == allocate__Vfuncrtn)) {
            this->__Vfunc_uvm_report_enabled__147__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__147__severity = 2U;
            __Vfunc_uvm_report_enabled__147__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__148__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__148__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__147__verbosity, (IData)(__Vfunc_uvm_report_enabled__147__severity), this->__Vfunc_uvm_report_enabled__147__id, __Vtask_uvm_report_enabled__149__Vfuncout);
            __Vfunc_uvm_report_enabled__147____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__149__Vfuncout;
            __VlefCall_16__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__147____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_16__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Could not allocate a memory region for virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_17__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000003f0U);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__152__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__152__severity = 0U;
            __Vfunc_uvm_report_enabled__152__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__153__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__153__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__152__verbosity, (IData)(__Vfunc_uvm_report_enabled__152__severity), this->__Vfunc_uvm_report_enabled__152__id, __Vtask_uvm_report_enabled__154__Vfuncout);
            __Vfunc_uvm_report_enabled__152____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__154__Vfuncout;
            __VlefCall_18__uvm_report_enabled = (1U 
                                                 & __Vfunc_uvm_report_enabled__152____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_18__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1018)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1018)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                VL_NULL_CHECK(allocate__Vfuncrtn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1018)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_22__get_start_offset);
                __Vtask_uvm_report_info__159__line = 0x000003faU;
                this->__Vtask_uvm_report_info__159__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_info__159__verbosity = 0x000000c8U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__159__message
                              ,"Virtual register \"%s\" is being moved re-allocated from %s@'h%0h to %s@'h%0h",5
                              , 'S',&(__VlefCall_19__get_full_name)
                              , 'S',&(__VlefCall_20__get_full_name)
                              , '#',64,this->__PVT__offset
                              , 'S',&(__VlefCall_21__get_full_name)
                              , '#',64,__VlefCall_22__get_start_offset);
                this->__Vtask_uvm_report_info__159__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__160__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vfunc_get__160__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__159__id, this->__Vtask_uvm_report_info__159__message, __Vtask_uvm_report_info__159__verbosity, this->__Vtask_uvm_report_info__159__filename, __Vtask_uvm_report_info__159__line);
            }
            this->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = allocate__Vfuncrtn;
        VL_NULL_CHECK(mam, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1025)->__VnoInFunc_get_memory(vlSymsp, this->__PVT__mem);
        VL_NULL_CHECK(allocate__Vfuncrtn, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1026)->__VnoInFunc_get_start_offset(vlSymsp, this->__PVT__offset);
        this->__PVT__size = n;
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1030)->__VnoInFunc_Xadd_vregX(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this});
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_region(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_region\n"); );
    // Body
    get_region__Vfuncrtn = this->__PVT__region;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_release_region(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_release_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__166__verbosity;
    __Vfunc_uvm_report_enabled__166__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__166__severity;
    __Vfunc_uvm_report_enabled__166__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__166____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__166____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__167__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__168__Vfuncout;
    __Vtask_uvm_report_enabled__168__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__166__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__166__severity = 2U;
            __Vfunc_uvm_report_enabled__166__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__167__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__167__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__166__verbosity, (IData)(__Vfunc_uvm_report_enabled__166__severity), this->__Vfunc_uvm_report_enabled__166__id, __Vtask_uvm_report_enabled__168__Vfuncout);
            __Vfunc_uvm_report_enabled__166____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__168__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__166____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Virtual register \"%s\" is static and cannot be dynamically released",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000411U);
            }
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1046)->__VnoInFunc_Xdelete_vregX(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this});
        }
        if ((VlNull{} != this->__PVT__region)) {
            VL_NULL_CHECK(this->__PVT__region, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1049)->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = VlNull{};
        this->__PVT__mem = VlNull{};
        this->__PVT__size = 0ULL;
        this->__PVT__offset = 0ULL;
        this->__VnoInFunc_reset(vlSymsp, "HARD"s);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory\n"); );
    // Body
    get_memory__Vfuncrtn = this->__PVT__mem;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__174__verbosity;
    __Vfunc_uvm_report_enabled__174__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__174__severity;
    __Vfunc_uvm_report_enabled__174__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__174____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__174____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__175__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__176__Vfuncout;
    __Vtask_uvm_report_enabled__176__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_offset_in_memory__Vfuncrtn = 0ULL;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__174__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__174__severity = 2U;
            __Vfunc_uvm_report_enabled__174__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__175__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__175__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__174__verbosity, (IData)(__Vfunc_uvm_report_enabled__174__severity), this->__Vfunc_uvm_report_enabled__174__id, __Vtask_uvm_report_enabled__176__Vfuncout);
            __Vfunc_uvm_report_enabled__174____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__176__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__174____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_offset_in_memory() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000042dU);
            }
            get_offset_in_memory__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        get_offset_in_memory__Vfuncrtn = (this->__PVT__offset 
                                          + (idx * (QData)((IData)(this->__PVT__incr))));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__179__verbosity;
    __Vfunc_uvm_report_enabled__179__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__179__severity;
    __Vfunc_uvm_report_enabled__179__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__180__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__181__Vfuncout;
    __Vtask_uvm_report_enabled__181__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_2__get_offset_in_memory;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_address__Vfuncrtn = 0ULL;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__179__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__179__severity = 2U;
            __Vfunc_uvm_report_enabled__179__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__180__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__180__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__179__verbosity, (IData)(__Vfunc_uvm_report_enabled__179__severity), this->__Vfunc_uvm_report_enabled__179__id, __Vtask_uvm_report_enabled__181__Vfuncout);
            __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__181__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot get address of of unimplemented virtual register \"%s\".",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000438U);
            }
            get_address__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_2__get_offset_in_memory);
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1084)->__VnoInFunc_get_address(vlProcess, vlSymsp, __VlefCall_2__get_offset_in_memory, map, get_address__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_size\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__186__verbosity;
    __Vfunc_uvm_report_enabled__186__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__186__severity;
    __Vfunc_uvm_report_enabled__186__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__186____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__186____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__187__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__188__Vfuncout;
    __Vtask_uvm_report_enabled__188__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_size__Vfuncrtn = 0U;
        if ((0ULL == this->__PVT__size)) {
            this->__Vfunc_uvm_report_enabled__186__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__186__severity = 2U;
            __Vfunc_uvm_report_enabled__186__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__187__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__187__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__186__verbosity, (IData)(__Vfunc_uvm_report_enabled__186__severity), this->__Vfunc_uvm_report_enabled__186__id, __Vtask_uvm_report_enabled__188__Vfuncout);
            __Vfunc_uvm_report_enabled__186____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__188__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__186____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_size() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000443U);
            }
            get_size__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_size__Vfuncrtn = (IData)(this->__PVT__size);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + ((this->__PVT__n_bits 
                                             - (IData)(1U)) 
                                            >> 3U));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__191__verbosity;
    __Vfunc_uvm_report_enabled__191__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__191__severity;
    __Vfunc_uvm_report_enabled__191__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__191____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__191____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__192__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__193__Vfuncout;
    __Vtask_uvm_report_enabled__193__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_n_memlocs__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__191__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__191__severity = 2U;
            __Vfunc_uvm_report_enabled__191__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__192__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__192__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__191__verbosity, (IData)(__Vfunc_uvm_report_enabled__191__severity), this->__Vfunc_uvm_report_enabled__191__id, __Vtask_uvm_report_enabled__193__Vfuncout);
            __Vfunc_uvm_report_enabled__191____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__193__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__191____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_n_memlocs() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000453U);
            }
            get_n_memlocs__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1111)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
        get_n_memlocs__Vfuncrtn = ((IData)(1U) + VL_DIV_III(32, 
                                                            (__VlefCall_2__get_n_bytes 
                                                             - (IData)(1U)), __VlefCall_3__get_n_bytes));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_incr(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_incr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__198__verbosity;
    __Vfunc_uvm_report_enabled__198__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__198__severity;
    __Vfunc_uvm_report_enabled__198__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__198____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__198____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__199__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__200__Vfuncout;
    __Vtask_uvm_report_enabled__200__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_incr__Vfuncrtn = 0U;
        if ((0U == this->__PVT__incr)) {
            this->__Vfunc_uvm_report_enabled__198__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__198__severity = 2U;
            __Vfunc_uvm_report_enabled__198__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__199__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__199__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__198__verbosity, (IData)(__Vfunc_uvm_report_enabled__198__severity), this->__Vfunc_uvm_report_enabled__198__id, __Vtask_uvm_report_enabled__200__Vfuncout);
            __Vfunc_uvm_report_enabled__198____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__200__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__198____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_incr() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000045eU);
            }
            get_incr__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_incr__Vfuncrtn = this->__PVT__incr;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__203__verbosity;
    __Vfunc_uvm_report_enabled__203__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__203__severity;
    __Vfunc_uvm_report_enabled__203__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__203____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__203____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__204__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__205__Vfuncout;
    __Vtask_uvm_report_enabled__205__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_n_maps__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__203__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__203__severity = 2U;
            __Vfunc_uvm_report_enabled__203__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__204__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__204__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__203__verbosity, (IData)(__Vfunc_uvm_report_enabled__203__severity), this->__Vfunc_uvm_report_enabled__203__id, __Vtask_uvm_report_enabled__205__Vfuncout);
            __Vfunc_uvm_report_enabled__203____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__205__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__203____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_n_maps() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000469U);
            }
            get_n_maps__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1133)->__VnoInFunc_get_n_maps(vlSymsp, get_n_maps__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__209__verbosity;
    __Vfunc_uvm_report_enabled__209__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__209__severity;
    __Vfunc_uvm_report_enabled__209__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__209____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__209____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__210__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__211__Vfuncout;
    __Vtask_uvm_report_enabled__211__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__209__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__209__severity = 2U;
            __Vfunc_uvm_report_enabled__209__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__210__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__210__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__209__verbosity, (IData)(__Vfunc_uvm_report_enabled__209__severity), this->__Vfunc_uvm_report_enabled__209__id, __Vtask_uvm_report_enabled__211__Vfuncout);
            __Vfunc_uvm_report_enabled__209____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__211__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__209____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_maps() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000474U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1144)->__VnoInFunc_get_maps(vlSymsp, maps);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__215__verbosity;
    __Vfunc_uvm_report_enabled__215__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__215__severity;
    __Vfunc_uvm_report_enabled__215__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__215____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__215____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__216__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__217__Vfuncout;
    __Vtask_uvm_report_enabled__217__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        is_in_map__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__215__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__215__severity = 2U;
            __Vfunc_uvm_report_enabled__215__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__216__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__216__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__215__verbosity, (IData)(__Vfunc_uvm_report_enabled__215__severity), this->__Vfunc_uvm_report_enabled__215__id, __Vtask_uvm_report_enabled__217__Vfuncout);
            __Vfunc_uvm_report_enabled__215____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__217__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__215____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::is_in_map() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000047fU);
            }
            is_in_map__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1155)->__VnoInFunc_is_in_map(vlSymsp, map, is_in_map__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__221__verbosity;
    __Vfunc_uvm_report_enabled__221__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__221__severity;
    __Vfunc_uvm_report_enabled__221__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__221____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__221____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__222__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__223__Vfuncout;
    __Vtask_uvm_report_enabled__223__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_access__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__221__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__221__severity = 2U;
            __Vfunc_uvm_report_enabled__221__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__222__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__222__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__221__verbosity, (IData)(__Vfunc_uvm_report_enabled__221__severity), this->__Vfunc_uvm_report_enabled__221__id, __Vtask_uvm_report_enabled__223__Vfuncout);
            __Vfunc_uvm_report_enabled__221____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__223__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__221____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000048aU);
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1166)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, get_access__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__227__verbosity;
    __Vfunc_uvm_report_enabled__227__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__227__severity;
    __Vfunc_uvm_report_enabled__227__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__227____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__227____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__228__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__229__Vfuncout;
    __Vtask_uvm_report_enabled__229__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_rights__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__227__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__227__severity = 2U;
            __Vfunc_uvm_report_enabled__227__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__228__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__228__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__227__verbosity, (IData)(__Vfunc_uvm_report_enabled__227__severity), this->__Vfunc_uvm_report_enabled__227__id, __Vtask_uvm_report_enabled__229__Vfuncout);
            __Vfunc_uvm_report_enabled__227____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__229__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__227____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%s\"",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x00000495U);
            }
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1177)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, get_rights__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk349__DOT__i;
    unnamedblk349__DOT__i = 0;
    unnamedblk349__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk349__DOT__i, this->__PVT__fields.size())) {
        fields.push_back(this->__PVT__fields.at(unnamedblk349__DOT__i));
        unnamedblk349__DOT__i = ((IData)(1U) + unnamedblk349__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_field_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_field_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__234__verbosity;
    __Vfunc_uvm_report_enabled__234__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__234__severity;
    __Vfunc_uvm_report_enabled__234__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__234____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__234____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__235__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__236__Vfuncout;
    __Vtask_uvm_report_enabled__236__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__238__verbosity;
    __Vtask_uvm_report_warning__238__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__238__line;
    __Vtask_uvm_report_warning__238__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__239__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk350__DOT__i;
    unnamedblk350__DOT__i = 0;
    IData/*31:0*/ unnamedblk350__DOT__i__Vloopsize;
    unnamedblk350__DOT__i__Vloopsize = 0;
    {
        unnamedblk350__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk350__DOT__i, this->__PVT__fields.size())) {
            unnamedblk350__DOT__i__Vloopsize = this->__PVT__fields.size();
            VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk350__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1189)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_field_by_name__Vfuncrtn = this->__PVT__fields.at(unnamedblk350__DOT__i);
                goto __Vlabel0;
            }
            if ((unnamedblk350__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk350__DOT__i = ((IData)(1U) 
                                         + unnamedblk350__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__234__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__234__severity = 1U;
        __Vfunc_uvm_report_enabled__234__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__235__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__235__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__234__verbosity, (IData)(__Vfunc_uvm_report_enabled__234__severity), this->__Vfunc_uvm_report_enabled__234__id, __Vtask_uvm_report_enabled__236__Vfuncout);
        __Vfunc_uvm_report_enabled__234____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__236__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__234____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__238__line = 0x000004aaU;
            this->__Vtask_uvm_report_warning__238__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_warning__238__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__238__message
                          ,"Unable to locate field \"%s\" in virtual register \"%s\".",2
                          , 'S',&(name), 'S',&(__VlefCall_2__get_full_name));
            this->__Vtask_uvm_report_warning__238__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__239__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__239__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__238__id, this->__Vtask_uvm_report_warning__238__message, __Vtask_uvm_report_warning__238__verbosity, this->__Vtask_uvm_report_warning__238__filename, __Vtask_uvm_report_warning__238__line);
        }
        get_field_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__242__verbosity;
    __Vfunc_uvm_report_enabled__242__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__242__severity;
    __Vfunc_uvm_report_enabled__242__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__243__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__244__Vfuncout;
    __Vtask_uvm_report_enabled__244__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__249__Vfuncout;
    __Vtask_get_lsb_pos_in_register__249__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__261__status;
    __Vtask_write__261__status = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__268__Vfuncout;
    __Vtask_get_lsb_pos_in_register__268__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__274__verbosity;
    __Vfunc_uvm_report_enabled__274__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__274__severity;
    __Vfunc_uvm_report_enabled__274__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__274____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__274____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__275__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__276__Vfuncout;
    __Vtask_uvm_report_enabled__276__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__278__verbosity;
    __Vtask_uvm_report_info__278__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__278__line;
    __Vtask_uvm_report_info__278__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__279__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_8__get_full_name;
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_6__get_n_bits;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    IData/*31:0*/ __VlefCall_3__get_n_memlocs;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk351__DOT__i;
    unnamedblk351__DOT__i = 0;
    IData/*31:0*/ unnamedblk351__DOT__i__Vloopsize;
    unnamedblk351__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39> unnamedblk351__DOT__unnamedblk352__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk351__DOT__unnamedblk352__DOT__f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk354__DOT__cb;
    IData/*31:0*/ unnamedblk355__DOT__i;
    IData/*31:0*/ unnamedblk355__DOT__unnamedblk356__DOT__s;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk357__DOT__cb;
    IData/*31:0*/ unnamedblk358__DOT__i;
    unnamedblk358__DOT__i = 0;
    IData/*31:0*/ unnamedblk358__DOT__i__Vloopsize;
    unnamedblk358__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39> unnamedblk358__DOT__unnamedblk359__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk358__DOT__unnamedblk359__DOT__f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk358__DOT__unnamedblk359__DOT__unnamedblk360__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi40> cbs;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi40, vlSymsp, 
                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this});
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__write_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__242__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__242__severity = 2U;
            __Vfunc_uvm_report_enabled__242__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__243__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__243__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__242__verbosity, (IData)(__Vfunc_uvm_report_enabled__242__severity), this->__Vfunc_uvm_report_enabled__242__id, __Vtask_uvm_report_enabled__244__Vfuncout);
            __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__244__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot write to unimplemented virtual register \"%s\".",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000004c3U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1225)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        unnamedblk351__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk351__DOT__i, this->__PVT__fields.size())) {
            unnamedblk351__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk351__DOT__unnamedblk352__DOT__cbs 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39, vlSymsp, this->__PVT__fields.at(unnamedblk351__DOT__i));
            unnamedblk351__DOT__unnamedblk352__DOT__f 
                = this->__PVT__fields.at(unnamedblk351__DOT__i);
            VL_NULL_CHECK(unnamedblk351__DOT__unnamedblk352__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1231)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__249__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__249__Vfuncout;
            VL_NULL_CHECK(unnamedblk351__DOT__unnamedblk352__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1232)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_2__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk351__DOT__unnamedblk352__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1235)->__VnoInFunc_pre_write(vlSymsp, idx, tmp, path, map);
            VL_NULL_CHECK(unnamedblk351__DOT__unnamedblk352__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1236)->__VnoInFunc_first(vlSymsp, unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__cb);
            while ((VlNull{} != unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1238)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1239)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1240)->__VnoInFunc_pre_write(vlSymsp, unnamedblk351__DOT__unnamedblk352__DOT__f, idx, tmp, path, map);
                VL_NULL_CHECK(unnamedblk351__DOT__unnamedblk352__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1237)->__VnoInFunc_next(vlSymsp, unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__cb);
            }
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk351__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk351__DOT__i = ((IData)(1U) 
                                         + unnamedblk351__DOT__i);
            }
        }
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1246)->__VnoInFunc_first(vlSymsp, unnamedblk354__DOT__cb);
        while ((VlNull{} != unnamedblk354__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk354__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1248)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk354__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1249)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk354__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1250)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1247)->__VnoInFunc_next(vlSymsp, unnamedblk354__DOT__cb);
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk355__DOT__i = 0U;
        unnamedblk355__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_3__get_n_memlocs);
            if (!((unnamedblk355__DOT__i < __VlefCall_3__get_n_memlocs))) break;
            unnamedblk355__DOT__unnamedblk356__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1260)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         (__VlefCall_4__get_n_bytes 
                                                          << 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1262)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__261__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk355__DOT__i))), tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk355__DOT__unnamedblk356__DOT__s 
                = __Vtask_write__261__status;
            if (((0U != unnamedblk355__DOT__unnamedblk356__DOT__s) 
                 & (2U != unnamedblk355__DOT__unnamedblk356__DOT__s))) {
                status = unnamedblk355__DOT__unnamedblk356__DOT__s;
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1264)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
            lsb = (lsb + (__VlefCall_5__get_n_bytes 
                          << 3U));
            unnamedblk355__DOT__i = ((IData)(1U) + unnamedblk355__DOT__i);
        }
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1267)->__VnoInFunc_first(vlSymsp, unnamedblk357__DOT__cb);
        while ((VlNull{} != unnamedblk357__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk357__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1269)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk357__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1270)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk357__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1271)->__VnoInFunc_post_write(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1268)->__VnoInFunc_next(vlSymsp, unnamedblk357__DOT__cb);
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        unnamedblk358__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk358__DOT__i, this->__PVT__fields.size())) {
            unnamedblk358__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk358__DOT__unnamedblk359__DOT__cbs 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39, vlSymsp, this->__PVT__fields.at(unnamedblk358__DOT__i));
            unnamedblk358__DOT__unnamedblk359__DOT__f 
                = this->__PVT__fields.at(unnamedblk358__DOT__i);
            VL_NULL_CHECK(unnamedblk358__DOT__unnamedblk359__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1278)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__268__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__268__Vfuncout;
            VL_NULL_CHECK(unnamedblk358__DOT__unnamedblk359__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1279)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_6__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_6__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk358__DOT__unnamedblk359__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1282)->__VnoInFunc_first(vlSymsp, unnamedblk358__DOT__unnamedblk359__DOT__unnamedblk360__DOT__cb);
            while ((VlNull{} != unnamedblk358__DOT__unnamedblk359__DOT__unnamedblk360__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk358__DOT__unnamedblk359__DOT__unnamedblk360__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1284)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk358__DOT__unnamedblk359__DOT__unnamedblk360__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1285)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk358__DOT__unnamedblk359__DOT__unnamedblk360__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1286)->__VnoInFunc_post_write(vlSymsp, unnamedblk358__DOT__unnamedblk359__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk358__DOT__unnamedblk359__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1283)->__VnoInFunc_next(vlSymsp, unnamedblk358__DOT__unnamedblk359__DOT__unnamedblk360__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk358__DOT__unnamedblk359__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1288)->__VnoInFunc_post_write(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk358__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk358__DOT__i = ((IData)(1U) 
                                         + unnamedblk358__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__274__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__274__severity = 0U;
        __Vfunc_uvm_report_enabled__274__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__275__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__275__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__274__verbosity, (IData)(__Vfunc_uvm_report_enabled__274__severity), this->__Vfunc_uvm_report_enabled__274__id, __Vtask_uvm_report_enabled__276__Vfuncout);
        __Vfunc_uvm_report_enabled__274____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__276__Vfuncout;
        __VlefCall_7__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__274____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_7__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
            __Vtask_uvm_report_info__278__line = 0x00000510U;
            this->__Vtask_uvm_report_info__278__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__278__verbosity = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__278__message
                          ,"Wrote virtual register \"%s\"[%0d] via %s with: 'h%h",4
                          , 'S',&(__VlefCall_8__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__278__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__279__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__279__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__278__id, this->__Vtask_uvm_report_info__278__message, __Vtask_uvm_report_info__278__verbosity, this->__Vtask_uvm_report_info__278__filename, __Vtask_uvm_report_info__278__line);
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__282__verbosity;
    __Vfunc_uvm_report_enabled__282__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__282__severity;
    __Vfunc_uvm_report_enabled__282__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__282____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__282____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__283__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__284__Vfuncout;
    __Vtask_uvm_report_enabled__284__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__298__status;
    __Vtask_read__298__status = 0;
    QData/*63:0*/ __Vtask_read__298__value;
    __Vtask_read__298__value = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__305__Vfuncout;
    __Vtask_get_lsb_pos_in_register__305__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__311__verbosity;
    __Vfunc_uvm_report_enabled__311__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__311__severity;
    __Vfunc_uvm_report_enabled__311__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__311____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__311____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__312__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__313__Vfuncout;
    __Vtask_uvm_report_enabled__313__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__315__verbosity;
    __Vtask_uvm_report_info__315__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__315__line;
    __Vtask_uvm_report_info__315__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__316__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk361__DOT__i;
    unnamedblk361__DOT__i = 0;
    IData/*31:0*/ unnamedblk361__DOT__i__Vloopsize;
    unnamedblk361__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39> unnamedblk361__DOT__unnamedblk362__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk361__DOT__unnamedblk362__DOT__f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk361__DOT__unnamedblk362__DOT__unnamedblk363__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk364__DOT__cb;
    IData/*31:0*/ unnamedblk365__DOT__i;
    IData/*31:0*/ unnamedblk365__DOT__unnamedblk366__DOT__s;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk367__DOT__cb;
    IData/*31:0*/ unnamedblk368__DOT__i;
    unnamedblk368__DOT__i = 0;
    IData/*31:0*/ unnamedblk368__DOT__i__Vloopsize;
    unnamedblk368__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39> unnamedblk368__DOT__unnamedblk369__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk368__DOT__unnamedblk369__DOT__f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk368__DOT__unnamedblk369__DOT__unnamedblk370__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi40> cbs;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        value = 0ULL;
        cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi40, vlSymsp, 
                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this});
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__read_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__282__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__282__severity = 2U;
            __Vfunc_uvm_report_enabled__282__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__283__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__283__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__282__verbosity, (IData)(__Vfunc_uvm_report_enabled__282__severity), this->__Vfunc_uvm_report_enabled__282__id, __Vtask_uvm_report_enabled__284__Vfuncout);
            __Vfunc_uvm_report_enabled__282____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__284__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__282____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot read from unimplemented virtual register \"%s\".",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000052dU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1331)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        unnamedblk361__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk361__DOT__i, this->__PVT__fields.size())) {
            unnamedblk361__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk361__DOT__unnamedblk362__DOT__cbs 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39, vlSymsp, this->__PVT__fields.at(unnamedblk361__DOT__i));
            unnamedblk361__DOT__unnamedblk362__DOT__f 
                = this->__PVT__fields.at(unnamedblk361__DOT__i);
            VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1337)->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
            VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1338)->__VnoInFunc_first(vlSymsp, unnamedblk361__DOT__unnamedblk362__DOT__unnamedblk363__DOT__cb);
            while ((VlNull{} != unnamedblk361__DOT__unnamedblk362__DOT__unnamedblk363__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__unnamedblk363__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1340)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__unnamedblk363__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1341)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__unnamedblk363__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1342)->__VnoInFunc_pre_read(vlSymsp, unnamedblk361__DOT__unnamedblk362__DOT__f, idx, path, map);
                VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1339)->__VnoInFunc_next(vlSymsp, unnamedblk361__DOT__unnamedblk362__DOT__unnamedblk363__DOT__cb);
            }
            if ((unnamedblk361__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk361__DOT__i = ((IData)(1U) 
                                         + unnamedblk361__DOT__i);
            }
        }
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1346)->__VnoInFunc_first(vlSymsp, unnamedblk364__DOT__cb);
        while ((VlNull{} != unnamedblk364__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk364__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1348)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk364__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1349)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk364__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1350)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1347)->__VnoInFunc_next(vlSymsp, unnamedblk364__DOT__cb);
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk365__DOT__i = 0U;
        unnamedblk365__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk365__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk365__DOT__unnamedblk366__DOT__s = 0U;
            co_await VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1361)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__298__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk365__DOT__i))), __Vtask_read__298__value, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk365__DOT__unnamedblk366__DOT__s 
                = __Vtask_read__298__status;
            tmp = __Vtask_read__298__value;
            if (((0U != unnamedblk365__DOT__unnamedblk366__DOT__s) 
                 & (2U != unnamedblk365__DOT__unnamedblk366__DOT__s))) {
                status = unnamedblk365__DOT__unnamedblk366__DOT__s;
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1365)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            lsb = (lsb + (__VlefCall_3__get_n_bytes 
                          << 3U));
            unnamedblk365__DOT__i = ((IData)(1U) + unnamedblk365__DOT__i);
        }
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1368)->__VnoInFunc_first(vlSymsp, unnamedblk367__DOT__cb);
        while ((VlNull{} != unnamedblk367__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk367__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1370)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk367__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1371)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk367__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1372)->__VnoInFunc_post_read(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1369)->__VnoInFunc_next(vlSymsp, unnamedblk367__DOT__cb);
        }
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        unnamedblk368__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk368__DOT__i, this->__PVT__fields.size())) {
            unnamedblk368__DOT__i__Vloopsize = this->__PVT__fields.size();
            unnamedblk368__DOT__unnamedblk369__DOT__cbs 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39, vlSymsp, this->__PVT__fields.at(unnamedblk368__DOT__i));
            unnamedblk368__DOT__unnamedblk369__DOT__f 
                = this->__PVT__fields.at(unnamedblk368__DOT__i);
            VL_NULL_CHECK(unnamedblk368__DOT__unnamedblk369__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1379)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__305__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__305__Vfuncout;
            VL_NULL_CHECK(unnamedblk368__DOT__unnamedblk369__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1381)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_4__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk368__DOT__unnamedblk369__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1384)->__VnoInFunc_first(vlSymsp, unnamedblk368__DOT__unnamedblk369__DOT__unnamedblk370__DOT__cb);
            while ((VlNull{} != unnamedblk368__DOT__unnamedblk369__DOT__unnamedblk370__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk368__DOT__unnamedblk369__DOT__unnamedblk370__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1386)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk368__DOT__unnamedblk369__DOT__unnamedblk370__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1387)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk368__DOT__unnamedblk369__DOT__unnamedblk370__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1388)->__VnoInFunc_post_read(vlSymsp, unnamedblk368__DOT__unnamedblk369__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk368__DOT__unnamedblk369__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1385)->__VnoInFunc_next(vlSymsp, unnamedblk368__DOT__unnamedblk369__DOT__unnamedblk370__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk368__DOT__unnamedblk369__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1390)->__VnoInFunc_post_read(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            if ((unnamedblk368__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
                unnamedblk368__DOT__i = ((IData)(1U) 
                                         + unnamedblk368__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__311__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__311__severity = 0U;
        __Vfunc_uvm_report_enabled__311__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__312__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__312__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__311__verbosity, (IData)(__Vfunc_uvm_report_enabled__311__severity), this->__Vfunc_uvm_report_enabled__311__id, __Vtask_uvm_report_enabled__313__Vfuncout);
        __Vfunc_uvm_report_enabled__311____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__313__Vfuncout;
        __VlefCall_5__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__311____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_5__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__315__line = 0x00000576U;
            this->__Vtask_uvm_report_info__315__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__315__verbosity = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__315__message
                          ,"Read virtual register \"%s\"[%0d] via %s: 'h%h",4
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__315__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__316__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__316__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__315__id, this->__Vtask_uvm_report_info__315__message, __Vtask_uvm_report_info__315__verbosity, this->__Vtask_uvm_report_info__315__filename, __Vtask_uvm_report_info__315__line);
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__318__verbosity;
    __Vfunc_uvm_report_enabled__318__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__318__severity;
    __Vfunc_uvm_report_enabled__318__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__318____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__318____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__319__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__320__Vfuncout;
    __Vtask_uvm_report_enabled__320__Vfuncout = 0;
    IData/*31:0*/ __Vtask_poke__325__status;
    __Vtask_poke__325__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__327__verbosity;
    __Vfunc_uvm_report_enabled__327__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__327__severity;
    __Vfunc_uvm_report_enabled__327__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__327____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__327____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__328__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__329__Vfuncout;
    __Vtask_uvm_report_enabled__329__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__331__verbosity;
    __Vtask_uvm_report_info__331__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__331__line;
    __Vtask_uvm_report_info__331__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__332__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk371__DOT__i;
    IData/*31:0*/ unnamedblk371__DOT__unnamedblk372__DOT__s;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__318__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__318__severity = 2U;
            __Vfunc_uvm_report_enabled__318__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__319__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__319__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__318__verbosity, (IData)(__Vfunc_uvm_report_enabled__318__severity), this->__Vfunc_uvm_report_enabled__318__id, __Vtask_uvm_report_enabled__320__Vfuncout);
            __Vfunc_uvm_report_enabled__318____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__320__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__318____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot poke in unimplemented virtual register \"%s\".",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x0000058dU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk371__DOT__i = 0U;
        unnamedblk371__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk371__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk371__DOT__unnamedblk372__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1433)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         (__VlefCall_3__get_n_bytes 
                                                          << 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1436)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__325__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk371__DOT__i))), tmp, ""s, parent, extension, fname, lineno);
            status = __Vtask_poke__325__status;
            if (((0U != unnamedblk371__DOT__unnamedblk372__DOT__s) 
                 & (2U != unnamedblk371__DOT__unnamedblk372__DOT__s))) {
                status = unnamedblk371__DOT__unnamedblk372__DOT__s;
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1439)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
            lsb = (lsb + (__VlefCall_4__get_n_bytes 
                          << 3U));
            unnamedblk371__DOT__i = ((IData)(1U) + unnamedblk371__DOT__i);
        }
        this->__Vfunc_uvm_report_enabled__327__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__327__severity = 0U;
        __Vfunc_uvm_report_enabled__327__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__328__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__328__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__327__verbosity, (IData)(__Vfunc_uvm_report_enabled__327__severity), this->__Vfunc_uvm_report_enabled__327__id, __Vtask_uvm_report_enabled__329__Vfuncout);
        __Vfunc_uvm_report_enabled__327____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__329__Vfuncout;
        __VlefCall_5__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__327____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_5__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__331__line = 0x000005a3U;
            this->__Vtask_uvm_report_info__331__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__331__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__331__message
                          ,"Poked virtual register \"%s\"[%0d] with: 'h%h",3
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__331__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__332__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__332__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__331__id, this->__Vtask_uvm_report_info__331__message, __Vtask_uvm_report_info__331__verbosity, this->__Vtask_uvm_report_info__331__filename, __Vtask_uvm_report_info__331__line);
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__334__verbosity;
    __Vfunc_uvm_report_enabled__334__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__334__severity;
    __Vfunc_uvm_report_enabled__334__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__334____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__334____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__335__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__336__Vfuncout;
    __Vtask_uvm_report_enabled__336__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__340__status;
    __Vtask_peek__340__status = 0;
    QData/*63:0*/ __Vtask_peek__340__value;
    __Vtask_peek__340__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__342__verbosity;
    __Vfunc_uvm_report_enabled__342__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__342__severity;
    __Vfunc_uvm_report_enabled__342__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__342____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__342____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__343__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__344__Vfuncout;
    __Vtask_uvm_report_enabled__344__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__346__verbosity;
    __Vtask_uvm_report_info__346__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__346__line;
    __Vtask_uvm_report_info__346__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__347__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk373__DOT__i;
    IData/*31:0*/ unnamedblk373__DOT__unnamedblk374__DOT__s;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        value = 0ULL;
        addr = 0ULL;
        tmp = 0ULL;
        lsb = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__334__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__334__severity = 2U;
            __Vfunc_uvm_report_enabled__334__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__335__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__335__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__334__verbosity, (IData)(__Vfunc_uvm_report_enabled__334__severity), this->__Vfunc_uvm_report_enabled__334__id, __Vtask_uvm_report_enabled__336__Vfuncout);
            __Vfunc_uvm_report_enabled__334____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__336__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__334____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot peek in from unimplemented virtual register \"%s\".",1
                                                                                , 'S',&(__VlefCall_1__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s, 0x000005b9U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk373__DOT__i = 0U;
        unnamedblk373__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk373__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk373__DOT__unnamedblk374__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1478)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__340__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk373__DOT__i))), __Vtask_peek__340__value, ""s, parent, extension, fname, lineno);
            status = __Vtask_peek__340__status;
            tmp = __Vtask_peek__340__value;
            if (((0U != unnamedblk373__DOT__unnamedblk374__DOT__s) 
                 & (2U != unnamedblk373__DOT__unnamedblk374__DOT__s))) {
                status = unnamedblk373__DOT__unnamedblk374__DOT__s;
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1482)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            lsb = (lsb + (__VlefCall_3__get_n_bytes 
                          << 3U));
            unnamedblk373__DOT__i = ((IData)(1U) + unnamedblk373__DOT__i);
        }
        this->__Vfunc_uvm_report_enabled__342__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__342__severity = 0U;
        __Vfunc_uvm_report_enabled__342__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__343__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__343__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__342__verbosity, (IData)(__Vfunc_uvm_report_enabled__342__severity), this->__Vfunc_uvm_report_enabled__342__id, __Vtask_uvm_report_enabled__344__Vfuncout);
        __Vfunc_uvm_report_enabled__342____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__344__Vfuncout;
        __VlefCall_4__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__342____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_4__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_info__346__line = 0x000005ceU;
            this->__Vtask_uvm_report_info__346__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__346__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__346__message
                          ,"Peeked virtual register \"%s\"[%0d]: 'h%h",3
                          , 'S',&(__VlefCall_5__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__346__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__347__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__347__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__346__id, this->__Vtask_uvm_report_info__346__message, __Vtask_uvm_report_info__346__verbosity, this->__Vtask_uvm_report_info__346__filename, __Vtask_uvm_report_info__346__line);
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__convert2string;
    std::string __VlefCall_0__get_type_name;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1496)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1496)->__VnoInFunc_print_generic(vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__convert2string), 0x2eU);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__convert2string;
    QData/*63:0*/ __VlefCall_3__get_address;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> unnamedblk375__DOT__maps;
    IData/*31:0*/ unnamedblk375__DOT__unnamedblk376__DOT__i;
    unnamedblk375__DOT__unnamedblk376__DOT__i = 0;
    IData/*31:0*/ unnamedblk375__DOT__unnamedblk376__DOT__i__Vloopsize;
    unnamedblk375__DOT__unnamedblk376__DOT__i__Vloopsize = 0;
    QData/*63:0*/ unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__addr0;
    IData/*31:0*/ unnamedblk378__DOT__i;
    unnamedblk378__DOT__i = 0;
    IData/*31:0*/ unnamedblk378__DOT__i__Vloopsize;
    unnamedblk378__DOT__i__Vloopsize = 0;
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"Virtual register %s -- ",1
                  , 'S',&(__VlefCall_0__get_full_name));
    if ((0ULL == this->__PVT__size)) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sunimplemented",1
                      , 'S',&(convert2string__Vfuncrtn));
    } else {
        unnamedblk375__DOT__maps.clear();
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1510)->__VnoInFunc_get_maps(vlSymsp, unnamedblk375__DOT__maps);
        VL_NULL_CHECK(this->__PVT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1513)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s[%0d] in %0s['h%0h+'h%0h]\n",5
                      , 'S',&(convert2string__Vfuncrtn)
                      , '#',64,this->__PVT__size, 'S',&(__VlefCall_1__get_full_name)
                      , '#',64,this->__PVT__offset, '#',32,this->__PVT__incr);
        unnamedblk375__DOT__unnamedblk376__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk375__DOT__unnamedblk376__DOT__i, unnamedblk375__DOT__maps.size())) {
            unnamedblk375__DOT__unnamedblk376__DOT__i__Vloopsize 
                = unnamedblk375__DOT__maps.size();
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, unnamedblk375__DOT__maps.at(unnamedblk375__DOT__unnamedblk376__DOT__i), unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__addr0);
            VL_NULL_CHECK(unnamedblk375__DOT__maps.at(unnamedblk375__DOT__unnamedblk376__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1518)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 1ULL, unnamedblk375__DOT__maps.at(unnamedblk375__DOT__unnamedblk376__DOT__i), __VlefCall_3__get_address);
            VL_SFORMAT_NX(convert2string__Vfuncrtn,"  Address in map '%s' -- @'h%0h+%0h",3
                          , 'S',&(__VlefCall_2__get_full_name)
                          , '#',64,unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__addr0
                          , '#',64,(__VlefCall_3__get_address 
                                    - unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__addr0));
            if ((unnamedblk375__DOT__unnamedblk376__DOT__i__Vloopsize 
                 <= unnamedblk375__DOT__maps.size())) {
                unnamedblk375__DOT__unnamedblk376__DOT__i 
                    = ((IData)(1U) + unnamedblk375__DOT__unnamedblk376__DOT__i);
            }
        }
    }
    unnamedblk378__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk378__DOT__i, this->__PVT__fields.size())) {
        unnamedblk378__DOT__i__Vloopsize = this->__PVT__fields.size();
        VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk378__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_vreg.svh", 1523)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_4__convert2string));
        if ((unnamedblk378__DOT__i__Vloopsize <= this->__PVT__fields.size())) {
            unnamedblk378__DOT__i = ((IData)(1U) + unnamedblk378__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__locked = 0;
    __PVT__n_bits = 0;
    __PVT__n_used_bits = 0;
    __PVT__offset = 0;
    __PVT__incr = 0;
    __PVT__size = 0;
    __PVT__is_static = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg::~\n"); );
}
