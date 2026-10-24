// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_hdl_path = "RTL"s;
    /*super.new*/;
    this->__PVT__hdl_paths_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz128, vlProcess, vlSymsp, "hdl_paths"s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_configure\n"); );
    // Body
    this->__PVT__parent = blk_parent;
    this->__PVT__m_rf = regfile_parent;
    this->__VnoInFunc_add_hdl_path(vlSymsp, hdl_path, "RTL"s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_regfile(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_regfile\n"); );
    // Body
    get_regfile__Vfuncrtn = this->__PVT__m_rf;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clear_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clear_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__10__verbosity;
    __Vtask_uvm_report_warning__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__10__line;
    __Vtask_uvm_report_warning__10__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__11__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__exists;
    {
        if (("ALL"s == kind)) {
            this->__PVT__hdl_paths_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz128, vlProcess, vlSymsp, "hdl_paths"s);
            goto __Vlabel0;
        }
        if ((""s == kind)) {
            if ((VlNull{} != this->__PVT__m_rf)) {
                VL_NULL_CHECK(this->__PVT__m_rf, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 267)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            } else {
                VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 269)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 272)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
        if ((1U & (~ (0U != __VlefCall_0__exists)))) {
            this->__Vfunc_uvm_report_enabled__7__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__7__severity = 1U;
            __Vfunc_uvm_report_enabled__7__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __Vtask_uvm_report_enabled__9__Vfuncout);
            __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__9__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_warning__10__line = 0x00000111U;
                this->__Vtask_uvm_report_warning__10__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s;
                __Vtask_uvm_report_warning__10__verbosity = 0U;
                this->__Vtask_uvm_report_warning__10__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_warning__10__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__11__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__10__id, this->__Vtask_uvm_report_warning__10__message, __Vtask_uvm_report_warning__10__verbosity, this->__Vtask_uvm_report_warning__10__filename, __Vtask_uvm_report_warning__10__line);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 277)->__VnoInFunc_delete(vlSymsp, kind);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_add_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string path, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_add_hdl_path\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz5> paths;
    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 287)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 289)->__VnoInFunc_push_back(vlSymsp, path);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        if ((VlNull{} != this->__PVT__m_rf)) {
            VL_NULL_CHECK(this->__PVT__m_rf, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 299)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        } else {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 301)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
    }
    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 304)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__22____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__23__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__24__Vfuncout;
    __Vtask_uvm_report_enabled__24__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get;
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk336__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz5> hdl_paths;
    {
        if ((""s == kind)) {
            if ((VlNull{} != this->__PVT__m_rf)) {
                VL_NULL_CHECK(this->__PVT__m_rf, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 316)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            } else {
                VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 318)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__22__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__22__severity = 2U;
            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), this->__Vfunc_uvm_report_enabled__22__id, __Vtask_uvm_report_enabled__24__Vfuncout);
            __Vfunc_uvm_report_enabled__22____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__24__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__22____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register does not have hdl path defined for abstraction '"s, kind), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s, 0x00000142U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 326)->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
        unnamedblk336__DOT__i = 0U;
        unnamedblk336__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 328)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk336__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 329)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk336__DOT__i, __VlefCall_3__get);
            paths.push_back(__VlefCall_3__get);
            unnamedblk336__DOT__i = ((IData)(1U) + unnamedblk336__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__verbosity;
    __Vfunc_uvm_report_enabled__31__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__31__severity;
    __Vfunc_uvm_report_enabled__31__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__31____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__33__Vfuncout;
    __Vtask_uvm_report_enabled__33__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz5> unnamedblk337__DOT__hdl_paths;
    VlQueue<std::string> unnamedblk337__DOT__parent_paths;
    IData/*31:0*/ unnamedblk337__DOT__unnamedblk338__DOT__i;
    std::string unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__hdl_path;
    IData/*31:0*/ unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__unnamedblk340__DOT__j;
    unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__unnamedblk340__DOT__j = 0;
    {
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__31__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__31__severity = 2U;
            __Vfunc_uvm_report_enabled__31__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__32__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__31__verbosity, (IData)(__Vfunc_uvm_report_enabled__31__severity), this->__Vfunc_uvm_report_enabled__31__id, __Vtask_uvm_report_enabled__33__Vfuncout);
            __Vfunc_uvm_report_enabled__31____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__33__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__31____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register file does not have hdl path defined for abstraction '"s, kind), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s, 0x00000157U);
            }
            goto __Vlabel0;
        }
        paths.clear();
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 350)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk337__DOT__hdl_paths);
        unnamedblk337__DOT__parent_paths.clear();
        unnamedblk337__DOT__parent_paths.atDefault().clear();
        if ((VlNull{} != this->__PVT__m_rf)) {
            VL_NULL_CHECK(this->__PVT__m_rf, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 354)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk337__DOT__parent_paths, kind, separator);
        } else if ((VlNull{} != this->__PVT__parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 356)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk337__DOT__parent_paths, kind, separator);
        }
        unnamedblk337__DOT__unnamedblk338__DOT__i = 0U;
        unnamedblk337__DOT__unnamedblk338__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk337__DOT__hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 358)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk337__DOT__unnamedblk338__DOT__i, __VlefCall_2__size))) break;
            {
                VL_NULL_CHECK(unnamedblk337__DOT__hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 359)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk337__DOT__unnamedblk338__DOT__i, unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__hdl_path);
                if ((0U == unnamedblk337__DOT__parent_paths.size())) {
                    if ((""s != unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__hdl_path)) {
                        paths.push_back(unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__hdl_path);
                    }
                    goto __Vlabel1;
                }
                unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__unnamedblk340__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__unnamedblk340__DOT__j, unnamedblk337__DOT__parent_paths.size())) {
                    if ((""s == unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__hdl_path)) {
                        paths.push_back(unnamedblk337__DOT__parent_paths.at(unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__unnamedblk340__DOT__j));
                    } else {
                        paths.push_back(VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(unnamedblk337__DOT__parent_paths.at(unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__unnamedblk340__DOT__j), separator), unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__hdl_path));
                    }
                    unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__unnamedblk340__DOT__j 
                        = ((IData)(1U) + unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__unnamedblk340__DOT__j);
                }
                __Vlabel1: ;
            }
            unnamedblk337__DOT__unnamedblk338__DOT__i 
                = ((IData)(1U) + unnamedblk337__DOT__unnamedblk338__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path\n"); );
    // Body
    {
        get_default_hdl_path__Vfuncrtn = ""s;
        if ((""s == this->__PVT__default_hdl_path)) {
            if ((VlNull{} != this->__PVT__m_rf)) {
                VL_NULL_CHECK(this->__PVT__m_rf, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 385)->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
            } else {
                VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 387)->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
            }
            goto __Vlabel0;
        }
        get_default_hdl_path__Vfuncrtn = this->__PVT__default_hdl_path;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_set_default_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_set_default_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__verbosity;
    __Vfunc_uvm_report_enabled__44__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__44__severity;
    __Vfunc_uvm_report_enabled__44__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__45__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__46__Vfuncout;
    __Vtask_uvm_report_enabled__46__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((""s == kind)) {
            if ((VlNull{} != this->__PVT__m_rf)) {
                VL_NULL_CHECK(this->__PVT__m_rf, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 399)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            } else if ((VlNull{} == this->__PVT__parent)) {
                VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 401)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            } else {
                this->__Vfunc_uvm_report_enabled__44__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__44__severity = 2U;
                __Vfunc_uvm_report_enabled__44__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__45__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__44__verbosity, (IData)(__Vfunc_uvm_report_enabled__44__severity), this->__Vfunc_uvm_report_enabled__44__id, __Vtask_uvm_report_enabled__46__Vfuncout);
                __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__46__Vfuncout;
                __VlefCall_0__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_0__uvm_report_enabled) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Register file has no parent. Must specify a valid HDL abstraction (kind)"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s, 0x00000194U);
                }
                goto __Vlabel0;
            }
        }
        this->__PVT__default_hdl_path = kind;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent\n"); );
    // Body
    this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_1__get_parent;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk;
    {
        get_full_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        if ((VlNull{} != this->__PVT__m_rf)) {
            VL_NULL_CHECK(this->__PVT__m_rf, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 430)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), get_full_name__Vfuncrtn);
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_block(vlSymsp, blk);
        if ((VlNull{} == blk)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 436)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_1__get_parent);
        if ((VlNull{} == __VlefCall_1__get_parent)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh", 438)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_2__get_full_name, "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__54__verbosity;
    __Vfunc_uvm_report_enabled__54__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__54__severity;
    __Vfunc_uvm_report_enabled__54__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__54____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__54____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__55__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__56__Vfuncout;
    __Vtask_uvm_report_enabled__56__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__57__verbosity;
    __Vtask_uvm_report_fatal__57__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__57__line;
    __Vtask_uvm_report_fatal__57__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__58__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    convert2string__Vfuncrtn = ""s;
    this->__Vfunc_uvm_report_enabled__54__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__54__severity = 3U;
    __Vfunc_uvm_report_enabled__54__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__55__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__54__verbosity, (IData)(__Vfunc_uvm_report_enabled__54__severity), this->__Vfunc_uvm_report_enabled__54__id, __Vtask_uvm_report_enabled__56__Vfuncout);
    __Vfunc_uvm_report_enabled__54____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__56__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__54____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__57__line = 0x000001c1U;
        this->__Vtask_uvm_report_fatal__57__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_fatal__57__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__57__message = "RegModel register files cannot be converted to strings"s;
        this->__Vtask_uvm_report_fatal__57__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__58__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__58__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__57__id, this->__Vtask_uvm_report_fatal__57__message, __Vtask_uvm_report_fatal__57__verbosity, this->__Vtask_uvm_report_fatal__57__filename, __Vtask_uvm_report_fatal__57__line);
    }
    convert2string__Vfuncrtn = ""s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__61__verbosity;
    __Vfunc_uvm_report_enabled__61__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__61__severity;
    __Vfunc_uvm_report_enabled__61__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__61____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__61____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__62__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__63__Vfuncout;
    __Vtask_uvm_report_enabled__63__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__64__verbosity;
    __Vtask_uvm_report_fatal__64__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__64__line;
    __Vtask_uvm_report_fatal__64__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__65__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__61__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__61__severity = 3U;
    __Vfunc_uvm_report_enabled__61__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__62__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__61__verbosity, (IData)(__Vfunc_uvm_report_enabled__61__severity), this->__Vfunc_uvm_report_enabled__61__id, __Vtask_uvm_report_enabled__63__Vfuncout);
    __Vfunc_uvm_report_enabled__61____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__63__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__61____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__64__line = 0x000001d1U;
        this->__Vtask_uvm_report_fatal__64__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_fatal__64__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__64__message = "RegModel register files cannot be cloned"s;
        this->__Vtask_uvm_report_fatal__64__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__65__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__65__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__64__id, this->__Vtask_uvm_report_fatal__64__message, __Vtask_uvm_report_fatal__64__verbosity, this->__Vtask_uvm_report_fatal__64__filename, __Vtask_uvm_report_fatal__64__line);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__verbosity;
    __Vfunc_uvm_report_enabled__67__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__67__severity;
    __Vfunc_uvm_report_enabled__67__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__67____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__68__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__69__Vfuncout;
    __Vtask_uvm_report_enabled__69__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__70__verbosity;
    __Vtask_uvm_report_fatal__70__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__70__line;
    __Vtask_uvm_report_fatal__70__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__71__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__67__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__67__severity = 3U;
    __Vfunc_uvm_report_enabled__67__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__68__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__67__verbosity, (IData)(__Vfunc_uvm_report_enabled__67__severity), this->__Vfunc_uvm_report_enabled__67__id, __Vtask_uvm_report_enabled__69__Vfuncout);
    __Vfunc_uvm_report_enabled__67____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__69__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__67____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__70__line = 0x000001d8U;
        this->__Vtask_uvm_report_fatal__70__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_fatal__70__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__70__message = "RegModel register files cannot be copied"s;
        this->__Vtask_uvm_report_fatal__70__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__71__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__70__id, this->__Vtask_uvm_report_fatal__70__message, __Vtask_uvm_report_fatal__70__verbosity, this->__Vtask_uvm_report_fatal__70__filename, __Vtask_uvm_report_fatal__70__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__73__verbosity;
    __Vfunc_uvm_report_enabled__73__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__73__severity;
    __Vfunc_uvm_report_enabled__73__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__73____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__73____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__74__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__75__Vfuncout;
    __Vtask_uvm_report_enabled__75__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__76__verbosity;
    __Vtask_uvm_report_warning__76__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__76__line;
    __Vtask_uvm_report_warning__76__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__77__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__73__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__73__severity = 1U;
    __Vfunc_uvm_report_enabled__73__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__74__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__74__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__73__verbosity, (IData)(__Vfunc_uvm_report_enabled__73__severity), this->__Vfunc_uvm_report_enabled__73__id, __Vtask_uvm_report_enabled__75__Vfuncout);
    __Vfunc_uvm_report_enabled__73____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__75__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__73____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__76__line = 0x000001e0U;
        this->__Vtask_uvm_report_warning__76__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_warning__76__verbosity = 0U;
        this->__Vtask_uvm_report_warning__76__message = "RegModel register files cannot be compared"s;
        this->__Vtask_uvm_report_warning__76__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__77__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__76__id, this->__Vtask_uvm_report_warning__76__message, __Vtask_uvm_report_warning__76__verbosity, this->__Vtask_uvm_report_warning__76__filename, __Vtask_uvm_report_warning__76__line);
    }
    do_compare__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79__verbosity;
    __Vfunc_uvm_report_enabled__79__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__79__severity;
    __Vfunc_uvm_report_enabled__79__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__79____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__81__Vfuncout;
    __Vtask_uvm_report_enabled__81__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__82__verbosity;
    __Vtask_uvm_report_warning__82__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__82__line;
    __Vtask_uvm_report_warning__82__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__83__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__79__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__79__severity = 1U;
    __Vfunc_uvm_report_enabled__79__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__80__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__80__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__79__verbosity, (IData)(__Vfunc_uvm_report_enabled__79__severity), this->__Vfunc_uvm_report_enabled__79__id, __Vtask_uvm_report_enabled__81__Vfuncout);
    __Vfunc_uvm_report_enabled__79____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__81__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__79____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__82__line = 0x000001e8U;
        this->__Vtask_uvm_report_warning__82__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_warning__82__verbosity = 0U;
        this->__Vtask_uvm_report_warning__82__message = "RegModel register files cannot be packed"s;
        this->__Vtask_uvm_report_warning__82__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__83__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__82__id, this->__Vtask_uvm_report_warning__82__message, __Vtask_uvm_report_warning__82__verbosity, this->__Vtask_uvm_report_warning__82__filename, __Vtask_uvm_report_warning__82__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
    __Vfunc_uvm_report_enabled__85__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
    __Vfunc_uvm_report_enabled__85__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__85____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__86__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__87__Vfuncout;
    __Vtask_uvm_report_enabled__87__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__88__verbosity;
    __Vtask_uvm_report_warning__88__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__88__line;
    __Vtask_uvm_report_warning__88__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__89__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__85__severity = 1U;
    __Vfunc_uvm_report_enabled__85__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__86__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __Vtask_uvm_report_enabled__87__Vfuncout);
    __Vfunc_uvm_report_enabled__85____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__87__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__85____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__88__line = 0x000001efU;
        this->__Vtask_uvm_report_warning__88__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_file.svh"s;
        __Vtask_uvm_report_warning__88__verbosity = 0U;
        this->__Vtask_uvm_report_warning__88__message = "RegModel register files cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__88__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__88__id, this->__Vtask_uvm_report_warning__88__message, __Vtask_uvm_report_warning__88__verbosity, this->__Vtask_uvm_report_warning__88__filename, __Vtask_uvm_report_warning__88__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file::~\n"); );
}
