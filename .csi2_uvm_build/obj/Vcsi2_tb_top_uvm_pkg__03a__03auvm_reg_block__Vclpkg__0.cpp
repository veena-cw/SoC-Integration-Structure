// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_check_data_width(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_check_data_width\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__0__verbosity;
    __Vfunc_uvm_report_enabled__0__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__0__severity;
    __Vfunc_uvm_report_enabled__0__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__0____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__0____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__1__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__2__Vfuncout;
    __Vtask_uvm_report_enabled__2__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__3__verbosity;
    __Vtask_uvm_report_fatal__3__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__3__line;
    __Vtask_uvm_report_fatal__3__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__4__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        check_data_width__Vfuncrtn = 0U;
        if ((0x00000040U >= width)) {
            check_data_width__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__Vfunc_uvm_report_enabled__0__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__0__severity = 3U;
        __Vfunc_uvm_report_enabled__0__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__1__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__0__verbosity, (IData)(__Vfunc_uvm_report_enabled__0__severity), this->__Vfunc_uvm_report_enabled__0__id, __Vtask_uvm_report_enabled__2__Vfuncout);
        __Vfunc_uvm_report_enabled__0____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__2__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__0____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            __Vtask_uvm_report_fatal__3__line = 0x000003b2U;
            this->__Vtask_uvm_report_fatal__3__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_fatal__3__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_fatal__3__message
                          ,"Register model requires that UVM_REG_DATA_WIDTH be defined as %0d or greater. Currently defined as 64",1
                          , '#',32,width);
            this->__Vtask_uvm_report_fatal__3__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vfunc_get__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__3__id, this->__Vtask_uvm_report_fatal__3__message, __Vtask_uvm_report_fatal__3__verbosity, this->__Vtask_uvm_report_fatal__3__filename, __Vtask_uvm_report_fatal__3__line);
        }
        check_data_width__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> &blks) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk568__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk568__DOT__blk__Vnext;
    CData/*0:0*/ unnamedblk568__DOT__blk__Vmore;
    unnamedblk568__DOT__blk__Vmore = 0;
    unnamedblk568__DOT__blk__Vmore = (0U != this->__PVT__m_roots.first(unnamedblk568__DOT__blk__Vnext));
    while (unnamedblk568__DOT__blk__Vmore) {
        unnamedblk568__DOT__blk = unnamedblk568__DOT__blk__Vnext;
        unnamedblk568__DOT__blk__Vmore = (0U != this->__PVT__m_roots.next(unnamedblk568__DOT__blk__Vnext));
        blks.push_back(unnamedblk568__DOT__blk);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_blocks(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_blocks\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __VlefCall_4__read;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__size;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk569__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129> unnamedblk569__DOT__unnamedblk570__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> rpl;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> rs;
    find_blocks__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rpl);
    blks.clear();
    if ((VlNull{} != root)) {
        VL_NULL_CHECK(root, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1264)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), name);
    }
    VL_NULL_CHECK(rpl, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1266)->__VnoInFunc_lookup_regex(vlSymsp, name, "uvm_reg::"s, rs);
    unnamedblk569__DOT__i = 0U;
    unnamedblk569__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(rs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1267)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
        if (!(VL_LTS_III(32, unnamedblk569__DOT__i, __VlefCall_1__size))) break;
        {
            VL_NULL_CHECK(rs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1269)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk569__DOT__i, __VlefCall_2__get);
            __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__get, unnamedblk569__DOT__unnamedblk570__DOT__blk);
            if ((! __VlefExpr_3)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(unnamedblk569__DOT__unnamedblk570__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1270)->__VnoInFunc_read(vlSymsp, accessor, __VlefCall_4__read);
            blks.push_back(__VlefCall_4__read);
            __Vlabel0: ;
        }
        unnamedblk569__DOT__i = ((IData)(1U) + unnamedblk569__DOT__i);
    }
    find_blocks__Vfuncrtn = blks.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_block\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_find_blocks__12__Vfuncout;
    __Vfunc_find_blocks__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__13____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__15__Vfuncout;
    __Vtask_uvm_report_enabled__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__16__verbosity;
    __Vtask_uvm_report_warning__16__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__16__line;
    __Vtask_uvm_report_warning__16__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__17__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__find_blocks;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> blks;
    {
        blks.clear();
        this->__VnoInFunc_find_blocks(vlSymsp, name, blks, root, accessor, __Vfunc_find_blocks__12__Vfuncout);
        __VlefCall_0__find_blocks = __Vfunc_find_blocks__12__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__find_blocks)))) {
            find_block__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 1U, blks.size())) {
            this->__Vfunc_uvm_report_enabled__13__id = "MRTH1BLK"s;
            __Vfunc_uvm_report_enabled__13__severity = 1U;
            __Vfunc_uvm_report_enabled__13__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__15__Vfuncout);
            __Vfunc_uvm_report_enabled__13____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__15__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__13____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_warning__16__line = 0x00000509U;
                this->__Vtask_uvm_report_warning__16__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__16__verbosity = 0U;
                this->__Vtask_uvm_report_warning__16__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("More than one block matched the name \""s, name), "\"."s));
                this->__Vtask_uvm_report_warning__16__id = "MRTH1BLK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__17__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__16__id, this->__Vtask_uvm_report_warning__16__message, __Vtask_uvm_report_warning__16__verbosity, this->__Vtask_uvm_report_warning__16__filename, __Vtask_uvm_report_warning__16__line);
            }
        }
        find_block__Vfuncrtn = blks.at(0U);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_path = 3U;
    this->__PVT__default_hdl_path = "RTL"s;
    /*super.new*/;
    this->__PVT__hdl_paths_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz128, vlProcess, vlSymsp, "hdl_paths"s);
    this->__PVT__has_cover = has_coverage;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.atWrite(
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>{this}) = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_configure\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    this->__PVT__parent = parent;
    if ((VlNull{} != parent)) {
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 968)->__VnoInFunc_add_block(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>{this});
    }
    this->__VnoInFunc_add_hdl_path(vlSymsp, hdl_path, "RTL"s);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz129__Vclpkg.__VnoInFunc_set(vlSymsp, "uvm_reg::*"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>{this}, VlNull{});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_block\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__13__Vfuncout;
    __Vtask_uvm_report_enabled__13__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    {
        this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            this->__Vfunc_uvm_report_enabled__7__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__7__severity = 2U;
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot add subblock to locked block model"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x000003d3U);
            }
            goto __Vlabel0;
        }
        if (this->__PVT__blks.exists(blk)) {
            this->__Vfunc_uvm_report_enabled__11__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__11__severity = 2U;
            __Vfunc_uvm_report_enabled__11__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), this->__Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__13__Vfuncout);
            __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__13__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 984)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Subblock '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x000003d8U);
            }
            goto __Vlabel0;
        }
        __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
        this->__PVT__blks.atWrite(blk) = __Vincrement1;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.exists(blk)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.erase(blk);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__verbosity;
    __Vfunc_uvm_report_enabled__18__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__18__severity;
    __Vfunc_uvm_report_enabled__18__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__18____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__19__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__20__Vfuncout;
    __Vtask_uvm_report_enabled__20__Vfuncout = 0;
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
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    {
        this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            this->__Vfunc_uvm_report_enabled__18__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__18__severity = 2U;
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot add register to locked block model"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x000003e4U);
            }
            goto __Vlabel0;
        }
        if (this->__PVT__regs.exists(rg)) {
            this->__Vfunc_uvm_report_enabled__22__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__22__severity = 2U;
            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), this->__Vfunc_uvm_report_enabled__22__id, __Vtask_uvm_report_enabled__24__Vfuncout);
            __Vfunc_uvm_report_enabled__22____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__24__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__22____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1002)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x000003eaU);
            }
            goto __Vlabel0;
        }
        __Vincrement2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
        this->__PVT__regs.atWrite(rg) = __Vincrement2;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_vreg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_vreg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__29____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__31__Vfuncout;
    __Vtask_uvm_report_enabled__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__33____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__34__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__35__Vfuncout;
    __Vtask_uvm_report_enabled__35__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    {
        this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            this->__Vfunc_uvm_report_enabled__29__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__29__severity = 2U;
            __Vfunc_uvm_report_enabled__29__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__30__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), this->__Vfunc_uvm_report_enabled__29__id, __Vtask_uvm_report_enabled__31__Vfuncout);
            __Vfunc_uvm_report_enabled__29____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__31__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__29____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot add virtual register to locked block model"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x000003f6U);
            }
            goto __Vlabel0;
        }
        if (this->__PVT__vregs.exists(vreg)) {
            this->__Vfunc_uvm_report_enabled__33__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__33__severity = 2U;
            __Vfunc_uvm_report_enabled__33__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__34__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), this->__Vfunc_uvm_report_enabled__33__id, __Vtask_uvm_report_enabled__35__Vfuncout);
            __Vfunc_uvm_report_enabled__33____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__35__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__33____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                VL_NULL_CHECK(vreg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1020)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Virtual register '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x000003fcU);
            }
            goto __Vlabel0;
        }
        __Vincrement3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
        this->__PVT__vregs.atWrite(vreg) = __Vincrement3;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_mem(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40__verbosity;
    __Vfunc_uvm_report_enabled__40__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__40__severity;
    __Vfunc_uvm_report_enabled__40__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__41__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__42__Vfuncout;
    __Vtask_uvm_report_enabled__42__Vfuncout = 0;
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
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    IData/*31:0*/ __Vincrement4;
    __Vincrement4 = 0;
    {
        this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            this->__Vfunc_uvm_report_enabled__40__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__40__severity = 2U;
            __Vfunc_uvm_report_enabled__40__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__41__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__40__verbosity, (IData)(__Vfunc_uvm_report_enabled__40__severity), this->__Vfunc_uvm_report_enabled__40__id, __Vtask_uvm_report_enabled__42__Vfuncout);
            __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__42__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot add memory to locked block model"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x00000407U);
            }
            goto __Vlabel0;
        }
        if (this->__PVT__mems.exists(mem)) {
            this->__Vfunc_uvm_report_enabled__44__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__44__severity = 2U;
            __Vfunc_uvm_report_enabled__44__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__45__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__44__verbosity, (IData)(__Vfunc_uvm_report_enabled__44__severity), this->__Vfunc_uvm_report_enabled__44__id, __Vtask_uvm_report_enabled__46__Vfuncout);
            __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__46__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__44____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1037)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x0000040dU);
            }
            goto __Vlabel0;
        }
        __Vincrement4 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
        this->__PVT__mems.atWrite(mem) = __Vincrement4;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_parent\n"); );
    // Body
    if ((VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>{this} 
         != parent)) {
        this->__PVT__parent = parent;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked\n"); );
    // Body
    is_locked__Vfuncrtn = this->__PVT__locked;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_lock_model(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_lock_model\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_max_size__54__Vfuncout;
    __Vfunc_get_max_size__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_max_size__56__Vfuncout;
    __Vfunc_get_max_size__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_max_size__58__Vfuncout;
    __Vfunc_get_max_size__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__verbosity;
    __Vfunc_uvm_report_enabled__59__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__59__severity;
    __Vfunc_uvm_report_enabled__59__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__59____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__60__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__61__Vfuncout;
    __Vtask_uvm_report_enabled__61__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__62__verbosity;
    __Vtask_uvm_report_fatal__62__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__62__line;
    __Vtask_uvm_report_fatal__62__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__63__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__68__verbosity;
    __Vfunc_uvm_report_enabled__68__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__68__severity;
    __Vfunc_uvm_report_enabled__68__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__68____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__68____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__69__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__70__Vfuncout;
    __Vtask_uvm_report_enabled__70__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__get_name;
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    std::string __VlefCall_5__get_name;
    std::string __VlefCall_4__get_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__get_max_size;
    IData/*31:0*/ __VlefCall_1__get_max_size;
    CData/*0:0*/ __VlefCall_0__is_locked;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk538__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk538__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk538__DOT__rg___Vmore;
    unnamedblk538__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk538__DOT__unnamedblk539__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk540__DOT__mem_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk540__DOT__mem___Vnext;
    CData/*0:0*/ unnamedblk540__DOT__mem___Vmore;
    unnamedblk540__DOT__mem___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk540__DOT__unnamedblk541__DOT__mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk542__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk542__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk542__DOT__blk___Vmore;
    unnamedblk542__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk542__DOT__unnamedblk543__DOT__blk;
    IData/*31:0*/ unnamedblk544__DOT__max_size;
    IData/*31:0*/ unnamedblk544__DOT__unnamedblk545__DOT__n;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vnext;
    CData/*0:0*/ unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vmore;
    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__blk;
    {
        this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            goto __Vlabel0;
        }
        this->__PVT__locked = 1U;
        unnamedblk538__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk538__DOT__rg___Vnext));
        while (unnamedblk538__DOT__rg___Vmore) {
            unnamedblk538__DOT__rg_ = unnamedblk538__DOT__rg___Vnext;
            unnamedblk538__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk538__DOT__rg___Vnext));
            unnamedblk538__DOT__unnamedblk539__DOT__rg 
                = unnamedblk538__DOT__rg_;
            VL_NULL_CHECK(unnamedblk538__DOT__unnamedblk539__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1070)->__VnoInFunc_Xlock_modelX(vlSymsp);
        }
        unnamedblk540__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk540__DOT__mem___Vnext));
        while (unnamedblk540__DOT__mem___Vmore) {
            unnamedblk540__DOT__mem_ = unnamedblk540__DOT__mem___Vnext;
            unnamedblk540__DOT__mem___Vmore = (0U != this->__PVT__mems.next(unnamedblk540__DOT__mem___Vnext));
            unnamedblk540__DOT__unnamedblk541__DOT__mem 
                = unnamedblk540__DOT__mem_;
            VL_NULL_CHECK(unnamedblk540__DOT__unnamedblk541__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1075)->__VnoInFunc_Xlock_modelX(vlSymsp);
        }
        unnamedblk542__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk542__DOT__blk___Vnext));
        while (unnamedblk542__DOT__blk___Vmore) {
            unnamedblk542__DOT__blk_ = unnamedblk542__DOT__blk___Vnext;
            unnamedblk542__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk542__DOT__blk___Vnext));
            unnamedblk542__DOT__unnamedblk543__DOT__blk 
                = unnamedblk542__DOT__blk_;
            VL_NULL_CHECK(unnamedblk542__DOT__unnamedblk543__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1080)->__VnoInFunc_lock_model(vlSymsp);
        }
        if ((VlNull{} == this->__PVT__parent)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__54__Vfuncout);
            unnamedblk544__DOT__max_size = __Vfunc_get_max_size__54__Vfuncout;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __VlefCall_1__get_max_size);
            if ((__VlefCall_1__get_max_size > unnamedblk544__DOT__max_size)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__56__Vfuncout);
                unnamedblk544__DOT__max_size = __Vfunc_get_max_size__56__Vfuncout;
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __VlefCall_2__get_max_size);
            if ((__VlefCall_2__get_max_size > unnamedblk544__DOT__max_size)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__58__Vfuncout);
                unnamedblk544__DOT__max_size = __Vfunc_get_max_size__58__Vfuncout;
            }
            if (VL_LTS_III(32, 0x00000040U, unnamedblk544__DOT__max_size)) {
                this->__Vfunc_uvm_report_enabled__59__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__59__severity = 3U;
                __Vfunc_uvm_report_enabled__59__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__60__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__59__verbosity, (IData)(__Vfunc_uvm_report_enabled__59__severity), this->__Vfunc_uvm_report_enabled__59__id, __Vtask_uvm_report_enabled__61__Vfuncout);
                __Vfunc_uvm_report_enabled__59____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__61__Vfuncout;
                __VlefCall_3__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__59____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_3__uvm_report_enabled) {
                    __Vtask_uvm_report_fatal__62__line = 0x00000445U;
                    this->__Vtask_uvm_report_fatal__62__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_fatal__62__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_fatal__62__message
                                  ,"Register model requires that UVM_REG_DATA_WIDTH be defined as %0d or greater. Currently defined as 64",1
                                  , '~',32,unnamedblk544__DOT__max_size);
                    this->__Vtask_uvm_report_fatal__62__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vfunc_get__63__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__62__id, this->__Vtask_uvm_report_fatal__62__message, __Vtask_uvm_report_fatal__62__verbosity, this->__Vtask_uvm_report_fatal__62__filename, __Vtask_uvm_report_fatal__62__line);
                }
            }
            {
                // Inlined CFunc: __VnoInFunc_Xinit_address_mapsX
                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map_;
                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vnext;
                CData/*0:0*/ __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vmore;
                __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vmore = 0;
                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__unnamedblk639__DOT__map;
                __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vmore 
                    = (0U != this->__PVT__maps.first(__Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vnext));
                while (__Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vmore) {
                    __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map_ 
                        = __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vnext;
                    __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vmore 
                        = (0U != this->__PVT__maps.next(__Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map___Vnext));
                    __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__unnamedblk639__DOT__map 
                        = __Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__map_;
                    VL_NULL_CHECK(__Vinline_0___VnoInFunc_Xinit_address_mapsX_unnamedblk638__DOT__unnamedblk639__DOT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1924)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
                }
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots
                                 .at(VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>{this}))))) {
                unnamedblk544__DOT__unnamedblk545__DOT__n = 0U;
                unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vmore 
                    = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.first(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vnext));
                while (unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vmore) {
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk 
                        = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vnext;
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vmore 
                        = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.next(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk__Vnext));
                    unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__blk 
                        = unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT___blk;
                    VL_NULL_CHECK(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1107)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                    if ((__VlefCall_4__get_name == __VlefCall_5__get_name)) {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.atWrite(unnamedblk544__DOT__unnamedblk545__DOT__unnamedblk546__DOT__unnamedblk547__DOT__blk) = 1U;
                        unnamedblk544__DOT__unnamedblk545__DOT__n 
                            = ((IData)(1U) + unnamedblk544__DOT__unnamedblk545__DOT__n);
                    }
                }
                if (VL_LTS_III(32, 1U, unnamedblk544__DOT__unnamedblk545__DOT__n)) {
                    this->__Vfunc_uvm_report_enabled__68__id = "UVM/REG/DUPLROOT"s;
                    __Vfunc_uvm_report_enabled__68__severity = 2U;
                    __Vfunc_uvm_report_enabled__68__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__69__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__69__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__68__verbosity, (IData)(__Vfunc_uvm_report_enabled__68__severity), this->__Vfunc_uvm_report_enabled__68__id, __Vtask_uvm_report_enabled__70__Vfuncout);
                    __Vfunc_uvm_report_enabled__68____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__70__Vfuncout;
                    __VlefCall_6__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__68____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_6__uvm_report_enabled) {
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/REG/DUPLROOT"s, VL_SFORMATF_N_NX("There are %0d root register models named \"%s\". The names of the root register models have to be unique",2
                                                                                , '~',32,unnamedblk544__DOT__unnamedblk545__DOT__n
                                                                                , 'S',&(__VlefCall_7__get_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x0000045cU);
                    }
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__parent)) {
            this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1133)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk548__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk548__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk548__DOT__rg___Vmore;
    unnamedblk548__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk548__DOT__unnamedblk549__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk550__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk550__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk550__DOT__blk___Vmore;
    unnamedblk550__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk550__DOT__unnamedblk551__DOT__blk;
    unnamedblk548__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk548__DOT__rg___Vnext));
    while (unnamedblk548__DOT__rg___Vmore) {
        unnamedblk548__DOT__rg_ = unnamedblk548__DOT__rg___Vnext;
        unnamedblk548__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk548__DOT__rg___Vnext));
        unnamedblk548__DOT__unnamedblk549__DOT__rg 
            = unnamedblk548__DOT__rg_;
        VL_NULL_CHECK(unnamedblk548__DOT__unnamedblk549__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1145)->__VnoInFunc_get_fields(vlSymsp, fields);
    }
    if ((1U == hier)) {
        unnamedblk550__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk550__DOT__blk___Vnext));
        while (unnamedblk550__DOT__blk___Vmore) {
            unnamedblk550__DOT__blk_ = unnamedblk550__DOT__blk___Vnext;
            unnamedblk550__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk550__DOT__blk___Vnext));
            unnamedblk550__DOT__unnamedblk551__DOT__blk 
                = unnamedblk550__DOT__blk_;
            VL_NULL_CHECK(unnamedblk550__DOT__unnamedblk551__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1152)->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk552__DOT__vreg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk552__DOT__vreg___Vnext;
    CData/*0:0*/ unnamedblk552__DOT__vreg___Vmore;
    unnamedblk552__DOT__vreg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk552__DOT__unnamedblk553__DOT__vreg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk554__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk554__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk554__DOT__blk___Vmore;
    unnamedblk554__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk554__DOT__unnamedblk555__DOT__blk;
    unnamedblk552__DOT__vreg___Vmore = (0U != this->__PVT__vregs.first(unnamedblk552__DOT__vreg___Vnext));
    while (unnamedblk552__DOT__vreg___Vmore) {
        unnamedblk552__DOT__vreg_ = unnamedblk552__DOT__vreg___Vnext;
        unnamedblk552__DOT__vreg___Vmore = (0U != this->__PVT__vregs.next(unnamedblk552__DOT__vreg___Vnext));
        unnamedblk552__DOT__unnamedblk553__DOT__vreg 
            = unnamedblk552__DOT__vreg_;
        VL_NULL_CHECK(unnamedblk552__DOT__unnamedblk553__DOT__vreg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1165)->__VnoInFunc_get_fields(vlSymsp, fields);
    }
    if ((1U == hier)) {
        unnamedblk554__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk554__DOT__blk___Vnext));
        while (unnamedblk554__DOT__blk___Vmore) {
            unnamedblk554__DOT__blk_ = unnamedblk554__DOT__blk___Vnext;
            unnamedblk554__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk554__DOT__blk___Vnext));
            unnamedblk554__DOT__unnamedblk555__DOT__blk 
                = unnamedblk554__DOT__blk_;
            VL_NULL_CHECK(unnamedblk554__DOT__unnamedblk555__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1171)->__VnoInFunc_get_virtual_fields(vlSymsp, fields, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk556__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk556__DOT__rg__Vnext;
    CData/*0:0*/ unnamedblk556__DOT__rg__Vmore;
    unnamedblk556__DOT__rg__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk557__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk557__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk557__DOT__blk___Vmore;
    unnamedblk557__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk557__DOT__unnamedblk558__DOT__blk;
    unnamedblk556__DOT__rg__Vmore = (0U != this->__PVT__regs.first(unnamedblk556__DOT__rg__Vnext));
    while (unnamedblk556__DOT__rg__Vmore) {
        unnamedblk556__DOT__rg = unnamedblk556__DOT__rg__Vnext;
        unnamedblk556__DOT__rg__Vmore = (0U != this->__PVT__regs.next(unnamedblk556__DOT__rg__Vnext));
        regs.push_back(unnamedblk556__DOT__rg);
    }
    if ((1U == hier)) {
        unnamedblk557__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk557__DOT__blk___Vnext));
        while (unnamedblk557__DOT__blk___Vmore) {
            unnamedblk557__DOT__blk_ = unnamedblk557__DOT__blk___Vnext;
            unnamedblk557__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk557__DOT__blk___Vnext));
            unnamedblk557__DOT__unnamedblk558__DOT__blk 
                = unnamedblk557__DOT__blk_;
            VL_NULL_CHECK(unnamedblk557__DOT__unnamedblk558__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1186)->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk559__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk559__DOT__rg__Vnext;
    CData/*0:0*/ unnamedblk559__DOT__rg__Vmore;
    unnamedblk559__DOT__rg__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk560__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk560__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk560__DOT__blk___Vmore;
    unnamedblk560__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk560__DOT__unnamedblk561__DOT__blk;
    unnamedblk559__DOT__rg__Vmore = (0U != this->__PVT__vregs.first(unnamedblk559__DOT__rg__Vnext));
    while (unnamedblk559__DOT__rg__Vmore) {
        unnamedblk559__DOT__rg = unnamedblk559__DOT__rg__Vnext;
        unnamedblk559__DOT__rg__Vmore = (0U != this->__PVT__vregs.next(unnamedblk559__DOT__rg__Vnext));
        regs.push_back(unnamedblk559__DOT__rg);
    }
    if ((1U == hier)) {
        unnamedblk560__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk560__DOT__blk___Vnext));
        while (unnamedblk560__DOT__blk___Vmore) {
            unnamedblk560__DOT__blk_ = unnamedblk560__DOT__blk___Vnext;
            unnamedblk560__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk560__DOT__blk___Vnext));
            unnamedblk560__DOT__unnamedblk561__DOT__blk 
                = unnamedblk560__DOT__blk_;
            VL_NULL_CHECK(unnamedblk560__DOT__unnamedblk561__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1202)->__VnoInFunc_get_virtual_registers(vlSymsp, regs, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk562__DOT__mem_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk562__DOT__mem___Vnext;
    CData/*0:0*/ unnamedblk562__DOT__mem___Vmore;
    unnamedblk562__DOT__mem___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk562__DOT__unnamedblk563__DOT__mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk564__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk564__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk564__DOT__blk___Vmore;
    unnamedblk564__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk564__DOT__unnamedblk565__DOT__blk;
    unnamedblk562__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk562__DOT__mem___Vnext));
    while (unnamedblk562__DOT__mem___Vmore) {
        unnamedblk562__DOT__mem_ = unnamedblk562__DOT__mem___Vnext;
        unnamedblk562__DOT__mem___Vmore = (0U != this->__PVT__mems.next(unnamedblk562__DOT__mem___Vnext));
        unnamedblk562__DOT__unnamedblk563__DOT__mem 
            = unnamedblk562__DOT__mem_;
        mems.push_back(unnamedblk562__DOT__unnamedblk563__DOT__mem);
    }
    if ((1U == hier)) {
        unnamedblk564__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk564__DOT__blk___Vnext));
        while (unnamedblk564__DOT__blk___Vmore) {
            unnamedblk564__DOT__blk_ = unnamedblk564__DOT__blk___Vnext;
            unnamedblk564__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk564__DOT__blk___Vnext));
            unnamedblk564__DOT__unnamedblk565__DOT__blk 
                = unnamedblk564__DOT__blk_;
            VL_NULL_CHECK(unnamedblk564__DOT__unnamedblk565__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1220)->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk566__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk566__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk566__DOT__blk___Vmore;
    unnamedblk566__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk566__DOT__unnamedblk567__DOT__blk;
    unnamedblk566__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk566__DOT__blk___Vnext));
    while (unnamedblk566__DOT__blk___Vmore) {
        unnamedblk566__DOT__blk_ = unnamedblk566__DOT__blk___Vnext;
        unnamedblk566__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk566__DOT__blk___Vnext));
        unnamedblk566__DOT__unnamedblk567__DOT__blk 
            = unnamedblk566__DOT__blk_;
        blks.push_back(unnamedblk566__DOT__unnamedblk567__DOT__blk);
        if ((1U == hier)) {
            VL_NULL_CHECK(unnamedblk566__DOT__unnamedblk567__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1235)->__VnoInFunc_get_blocks(vlSymsp, blks, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk571__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk571__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk571__DOT__map__Vmore;
    unnamedblk571__DOT__map__Vmore = 0;
    unnamedblk571__DOT__map__Vmore = (0U != this->__PVT__maps.first(unnamedblk571__DOT__map__Vnext));
    while (unnamedblk571__DOT__map__Vmore) {
        unnamedblk571__DOT__map = unnamedblk571__DOT__map__Vnext;
        unnamedblk571__DOT__map__Vmore = (0U != this->__PVT__maps.next(unnamedblk571__DOT__map__Vnext));
        maps.push_back(unnamedblk571__DOT__map);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_block_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_block_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__88__verbosity;
    __Vfunc_uvm_report_enabled__88__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__88__severity;
    __Vfunc_uvm_report_enabled__88__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__88____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__88____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__89__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__90__Vfuncout;
    __Vtask_uvm_report_enabled__90__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__92__verbosity;
    __Vtask_uvm_report_warning__92__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__92__line;
    __Vtask_uvm_report_warning__92__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__93__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk572__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk572__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk572__DOT__blk___Vmore;
    unnamedblk572__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk572__DOT__unnamedblk573__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk574__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk574__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk574__DOT__blk___Vmore;
    unnamedblk574__DOT__blk___Vmore = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> unnamedblk574__DOT__unnamedblk575__DOT__subblks;
    IData/*31:0*/ unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j;
    unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j = 0;
    IData/*31:0*/ unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j__Vloopsize;
    unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j__Vloopsize = 0;
    {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == name)) {
            get_block_by_name__Vfuncrtn = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>{this};
            goto __Vlabel0;
        }
        unnamedblk572__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk572__DOT__blk___Vnext));
        while (unnamedblk572__DOT__blk___Vmore) {
            unnamedblk572__DOT__blk_ = unnamedblk572__DOT__blk___Vnext;
            unnamedblk572__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk572__DOT__blk___Vnext));
            unnamedblk572__DOT__unnamedblk573__DOT__blk 
                = unnamedblk572__DOT__blk_;
            VL_NULL_CHECK(unnamedblk572__DOT__unnamedblk573__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1328)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            if ((__VlefCall_1__get_name == name)) {
                get_block_by_name__Vfuncrtn = unnamedblk572__DOT__unnamedblk573__DOT__blk;
                goto __Vlabel0;
            }
        }
        unnamedblk574__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk574__DOT__blk___Vnext));
        while (unnamedblk574__DOT__blk___Vmore) {
            unnamedblk574__DOT__blk_ = unnamedblk574__DOT__blk___Vnext;
            unnamedblk574__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk574__DOT__blk___Vnext));
            unnamedblk574__DOT__unnamedblk575__DOT__subblks.clear();
            VL_NULL_CHECK(unnamedblk574__DOT__blk_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1335)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk574__DOT__unnamedblk575__DOT__subblks, 1U);
            unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j, unnamedblk574__DOT__unnamedblk575__DOT__subblks.size())) {
                unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j__Vloopsize 
                    = unnamedblk574__DOT__unnamedblk575__DOT__subblks.size();
                VL_NULL_CHECK(unnamedblk574__DOT__unnamedblk575__DOT__subblks.at(unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1338)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                if ((__VlefCall_2__get_name == name)) {
                    get_block_by_name__Vfuncrtn = unnamedblk574__DOT__unnamedblk575__DOT__subblks.at(unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j);
                    goto __Vlabel0;
                }
                if ((unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j__Vloopsize 
                     <= unnamedblk574__DOT__unnamedblk575__DOT__subblks.size())) {
                    unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j 
                        = ((IData)(1U) + unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__j);
                }
            }
        }
        this->__Vfunc_uvm_report_enabled__88__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__88__severity = 1U;
        __Vfunc_uvm_report_enabled__88__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__88__verbosity, (IData)(__Vfunc_uvm_report_enabled__88__severity), this->__Vfunc_uvm_report_enabled__88__id, __Vtask_uvm_report_enabled__90__Vfuncout);
        __Vfunc_uvm_report_enabled__88____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__90__Vfuncout;
        __VlefCall_3__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__88____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_3__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_warning__92__line = 0x0000053fU;
            this->__Vtask_uvm_report_warning__92__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__92__verbosity = 0U;
            this->__Vtask_uvm_report_warning__92__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate block '"s, name), "' in block '"s), __VlefCall_4__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__92__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__92__id, this->__Vtask_uvm_report_warning__92__message, __Vtask_uvm_report_warning__92__verbosity, this->__Vtask_uvm_report_warning__92__filename, __Vtask_uvm_report_warning__92__line);
        }
        get_block_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_reg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_reg_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__99__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__100__Vfuncout;
    __Vtask_uvm_report_enabled__100__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__102__verbosity;
    __Vtask_uvm_report_warning__102__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__102__line;
    __Vtask_uvm_report_warning__102__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__103__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk577__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk577__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk577__DOT__rg___Vmore;
    unnamedblk577__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk577__DOT__unnamedblk578__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk579__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk579__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk579__DOT__blk___Vmore;
    unnamedblk579__DOT__blk___Vmore = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> unnamedblk579__DOT__unnamedblk580__DOT__subregs;
    IData/*31:0*/ unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j;
    unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j = 0;
    IData/*31:0*/ unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j__Vloopsize;
    unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j__Vloopsize = 0;
    {
        unnamedblk577__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk577__DOT__rg___Vnext));
        while (unnamedblk577__DOT__rg___Vmore) {
            unnamedblk577__DOT__rg_ = unnamedblk577__DOT__rg___Vnext;
            unnamedblk577__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk577__DOT__rg___Vnext));
            unnamedblk577__DOT__unnamedblk578__DOT__rg 
                = unnamedblk577__DOT__rg_;
            VL_NULL_CHECK(unnamedblk577__DOT__unnamedblk578__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1355)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_reg_by_name__Vfuncrtn = unnamedblk577__DOT__unnamedblk578__DOT__rg;
                goto __Vlabel0;
            }
        }
        unnamedblk579__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk579__DOT__blk___Vnext));
        while (unnamedblk579__DOT__blk___Vmore) {
            unnamedblk579__DOT__blk_ = unnamedblk579__DOT__blk___Vnext;
            unnamedblk579__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk579__DOT__blk___Vnext));
            unnamedblk579__DOT__unnamedblk580__DOT__subregs.clear();
            VL_NULL_CHECK(unnamedblk579__DOT__blk_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1362)->__VnoInFunc_get_registers(vlSymsp, unnamedblk579__DOT__unnamedblk580__DOT__subregs, 1U);
            unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j, unnamedblk579__DOT__unnamedblk580__DOT__subregs.size())) {
                unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j__Vloopsize 
                    = unnamedblk579__DOT__unnamedblk580__DOT__subregs.size();
                VL_NULL_CHECK(unnamedblk579__DOT__unnamedblk580__DOT__subregs.at(unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1365)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((__VlefCall_1__get_name == name)) {
                    get_reg_by_name__Vfuncrtn = unnamedblk579__DOT__unnamedblk580__DOT__subregs.at(unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j);
                    goto __Vlabel0;
                }
                if ((unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j__Vloopsize 
                     <= unnamedblk579__DOT__unnamedblk580__DOT__subregs.size())) {
                    unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j 
                        = ((IData)(1U) + unnamedblk579__DOT__unnamedblk580__DOT__unnamedblk581__DOT__j);
                }
            }
        }
        this->__Vfunc_uvm_report_enabled__98__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__98__severity = 1U;
        __Vfunc_uvm_report_enabled__98__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__99__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), this->__Vfunc_uvm_report_enabled__98__id, __Vtask_uvm_report_enabled__100__Vfuncout);
        __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__100__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__98____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_warning__102__line = 0x0000055aU;
            this->__Vtask_uvm_report_warning__102__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__102__verbosity = 0U;
            this->__Vtask_uvm_report_warning__102__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate register '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__102__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__103__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__103__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__102__id, this->__Vtask_uvm_report_warning__102__message, __Vtask_uvm_report_warning__102__verbosity, this->__Vtask_uvm_report_warning__102__filename, __Vtask_uvm_report_warning__102__line);
        }
        get_reg_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vreg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vreg_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__108__verbosity;
    __Vfunc_uvm_report_enabled__108__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__108__severity;
    __Vfunc_uvm_report_enabled__108__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__109__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__110__Vfuncout;
    __Vtask_uvm_report_enabled__110__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__112__verbosity;
    __Vtask_uvm_report_warning__112__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__112__line;
    __Vtask_uvm_report_warning__112__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__113__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk582__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk582__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk582__DOT__rg___Vmore;
    unnamedblk582__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk582__DOT__unnamedblk583__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk584__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk584__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk584__DOT__blk___Vmore;
    unnamedblk584__DOT__blk___Vmore = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> unnamedblk584__DOT__unnamedblk585__DOT__subvregs;
    IData/*31:0*/ unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j;
    unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j = 0;
    IData/*31:0*/ unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j__Vloopsize;
    unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j__Vloopsize = 0;
    {
        unnamedblk582__DOT__rg___Vmore = (0U != this->__PVT__vregs.first(unnamedblk582__DOT__rg___Vnext));
        while (unnamedblk582__DOT__rg___Vmore) {
            unnamedblk582__DOT__rg_ = unnamedblk582__DOT__rg___Vnext;
            unnamedblk582__DOT__rg___Vmore = (0U != this->__PVT__vregs.next(unnamedblk582__DOT__rg___Vnext));
            unnamedblk582__DOT__unnamedblk583__DOT__rg 
                = unnamedblk582__DOT__rg_;
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1382)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_vreg_by_name__Vfuncrtn = unnamedblk582__DOT__unnamedblk583__DOT__rg;
                goto __Vlabel0;
            }
        }
        unnamedblk584__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk584__DOT__blk___Vnext));
        while (unnamedblk584__DOT__blk___Vmore) {
            unnamedblk584__DOT__blk_ = unnamedblk584__DOT__blk___Vnext;
            unnamedblk584__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk584__DOT__blk___Vnext));
            unnamedblk584__DOT__unnamedblk585__DOT__subvregs.clear();
            VL_NULL_CHECK(unnamedblk584__DOT__blk_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1389)->__VnoInFunc_get_virtual_registers(vlSymsp, unnamedblk584__DOT__unnamedblk585__DOT__subvregs, 1U);
            unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j, unnamedblk584__DOT__unnamedblk585__DOT__subvregs.size())) {
                unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j__Vloopsize 
                    = unnamedblk584__DOT__unnamedblk585__DOT__subvregs.size();
                VL_NULL_CHECK(unnamedblk584__DOT__unnamedblk585__DOT__subvregs.at(unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1392)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((__VlefCall_1__get_name == name)) {
                    get_vreg_by_name__Vfuncrtn = unnamedblk584__DOT__unnamedblk585__DOT__subvregs.at(unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j);
                    goto __Vlabel0;
                }
                if ((unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j__Vloopsize 
                     <= unnamedblk584__DOT__unnamedblk585__DOT__subvregs.size())) {
                    unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j 
                        = ((IData)(1U) + unnamedblk584__DOT__unnamedblk585__DOT__unnamedblk586__DOT__j);
                }
            }
        }
        this->__Vfunc_uvm_report_enabled__108__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__108__severity = 1U;
        __Vfunc_uvm_report_enabled__108__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__109__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__109__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__108__verbosity, (IData)(__Vfunc_uvm_report_enabled__108__severity), this->__Vfunc_uvm_report_enabled__108__id, __Vtask_uvm_report_enabled__110__Vfuncout);
        __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__110__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__108____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_warning__112__line = 0x00000575U;
            this->__Vtask_uvm_report_warning__112__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__112__verbosity = 0U;
            this->__Vtask_uvm_report_warning__112__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate virtual register '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__112__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__113__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__113__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__112__id, this->__Vtask_uvm_report_warning__112__message, __Vtask_uvm_report_warning__112__verbosity, this->__Vtask_uvm_report_warning__112__filename, __Vtask_uvm_report_warning__112__line);
        }
        get_vreg_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_mem_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_mem_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__118__verbosity;
    __Vfunc_uvm_report_enabled__118__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__118__severity;
    __Vfunc_uvm_report_enabled__118__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__118____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__118____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__119__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__120__Vfuncout;
    __Vtask_uvm_report_enabled__120__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__122__verbosity;
    __Vtask_uvm_report_warning__122__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__122__line;
    __Vtask_uvm_report_warning__122__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__123__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk587__DOT__mem_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk587__DOT__mem___Vnext;
    CData/*0:0*/ unnamedblk587__DOT__mem___Vmore;
    unnamedblk587__DOT__mem___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk587__DOT__unnamedblk588__DOT__mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk589__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk589__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk589__DOT__blk___Vmore;
    unnamedblk589__DOT__blk___Vmore = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> unnamedblk589__DOT__unnamedblk590__DOT__submems;
    IData/*31:0*/ unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j;
    unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j = 0;
    IData/*31:0*/ unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j__Vloopsize;
    unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j__Vloopsize = 0;
    {
        unnamedblk587__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk587__DOT__mem___Vnext));
        while (unnamedblk587__DOT__mem___Vmore) {
            unnamedblk587__DOT__mem_ = unnamedblk587__DOT__mem___Vnext;
            unnamedblk587__DOT__mem___Vmore = (0U != this->__PVT__mems.next(unnamedblk587__DOT__mem___Vnext));
            unnamedblk587__DOT__unnamedblk588__DOT__mem 
                = unnamedblk587__DOT__mem_;
            VL_NULL_CHECK(unnamedblk587__DOT__unnamedblk588__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1409)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_mem_by_name__Vfuncrtn = unnamedblk587__DOT__unnamedblk588__DOT__mem;
                goto __Vlabel0;
            }
        }
        unnamedblk589__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk589__DOT__blk___Vnext));
        while (unnamedblk589__DOT__blk___Vmore) {
            unnamedblk589__DOT__blk_ = unnamedblk589__DOT__blk___Vnext;
            unnamedblk589__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk589__DOT__blk___Vnext));
            unnamedblk589__DOT__unnamedblk590__DOT__submems.clear();
            VL_NULL_CHECK(unnamedblk589__DOT__blk_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1416)->__VnoInFunc_get_memories(vlSymsp, unnamedblk589__DOT__unnamedblk590__DOT__submems, 1U);
            unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j, unnamedblk589__DOT__unnamedblk590__DOT__submems.size())) {
                unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j__Vloopsize 
                    = unnamedblk589__DOT__unnamedblk590__DOT__submems.size();
                VL_NULL_CHECK(unnamedblk589__DOT__unnamedblk590__DOT__submems.at(unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1419)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((__VlefCall_1__get_name == name)) {
                    get_mem_by_name__Vfuncrtn = unnamedblk589__DOT__unnamedblk590__DOT__submems.at(unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j);
                    goto __Vlabel0;
                }
                if ((unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j__Vloopsize 
                     <= unnamedblk589__DOT__unnamedblk590__DOT__submems.size())) {
                    unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j 
                        = ((IData)(1U) + unnamedblk589__DOT__unnamedblk590__DOT__unnamedblk591__DOT__j);
                }
            }
        }
        this->__Vfunc_uvm_report_enabled__118__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__118__severity = 1U;
        __Vfunc_uvm_report_enabled__118__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__119__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__119__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__118__verbosity, (IData)(__Vfunc_uvm_report_enabled__118__severity), this->__Vfunc_uvm_report_enabled__118__id, __Vtask_uvm_report_enabled__120__Vfuncout);
        __Vfunc_uvm_report_enabled__118____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__120__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__118____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_warning__122__line = 0x00000590U;
            this->__Vtask_uvm_report_warning__122__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__122__verbosity = 0U;
            this->__Vtask_uvm_report_warning__122__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate memory '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__122__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__123__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__123__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__122__id, this->__Vtask_uvm_report_warning__122__message, __Vtask_uvm_report_warning__122__verbosity, this->__Vtask_uvm_report_warning__122__filename, __Vtask_uvm_report_warning__122__line);
        }
        get_mem_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_field_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_field_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__130__verbosity;
    __Vfunc_uvm_report_enabled__130__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__130__severity;
    __Vfunc_uvm_report_enabled__130__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__130____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__130____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__131__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__132__Vfuncout;
    __Vtask_uvm_report_enabled__132__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__134__verbosity;
    __Vtask_uvm_report_warning__134__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__134__line;
    __Vtask_uvm_report_warning__134__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__135__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk592__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk592__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk592__DOT__rg___Vmore;
    unnamedblk592__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk592__DOT__unnamedblk593__DOT__rg;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk592__DOT__unnamedblk593__DOT__fields;
    IData/*31:0*/ unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i;
    unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i = 0;
    IData/*31:0*/ unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i__Vloopsize;
    unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk595__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk595__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk595__DOT__blk___Vmore;
    unnamedblk595__DOT__blk___Vmore = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> unnamedblk595__DOT__unnamedblk596__DOT__subregs;
    IData/*31:0*/ unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j;
    unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j = 0;
    IData/*31:0*/ unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j__Vloopsize;
    unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__fields;
    IData/*31:0*/ unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i;
    unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i = 0;
    IData/*31:0*/ unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i__Vloopsize;
    unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i__Vloopsize = 0;
    {
        unnamedblk592__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk592__DOT__rg___Vnext));
        while (unnamedblk592__DOT__rg___Vmore) {
            unnamedblk592__DOT__rg_ = unnamedblk592__DOT__rg___Vnext;
            unnamedblk592__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk592__DOT__rg___Vnext));
            unnamedblk592__DOT__unnamedblk593__DOT__rg 
                = unnamedblk592__DOT__rg_;
            unnamedblk592__DOT__unnamedblk593__DOT__fields.clear();
            VL_NULL_CHECK(unnamedblk592__DOT__unnamedblk593__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1438)->__VnoInFunc_get_fields(vlSymsp, unnamedblk592__DOT__unnamedblk593__DOT__fields);
            unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i, unnamedblk592__DOT__unnamedblk593__DOT__fields.size())) {
                unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i__Vloopsize 
                    = unnamedblk592__DOT__unnamedblk593__DOT__fields.size();
                VL_NULL_CHECK(unnamedblk592__DOT__unnamedblk593__DOT__fields.at(unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1440)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                if ((__VlefCall_0__get_name == name)) {
                    get_field_by_name__Vfuncrtn = unnamedblk592__DOT__unnamedblk593__DOT__fields.at(unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i);
                    goto __Vlabel0;
                }
                if ((unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i__Vloopsize 
                     <= unnamedblk592__DOT__unnamedblk593__DOT__fields.size())) {
                    unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i 
                        = ((IData)(1U) + unnamedblk592__DOT__unnamedblk593__DOT__unnamedblk594__DOT__i);
                }
            }
        }
        unnamedblk595__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk595__DOT__blk___Vnext));
        while (unnamedblk595__DOT__blk___Vmore) {
            unnamedblk595__DOT__blk_ = unnamedblk595__DOT__blk___Vnext;
            unnamedblk595__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk595__DOT__blk___Vnext));
            unnamedblk595__DOT__unnamedblk596__DOT__subregs.clear();
            VL_NULL_CHECK(unnamedblk595__DOT__blk_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1447)->__VnoInFunc_get_registers(vlSymsp, unnamedblk595__DOT__unnamedblk596__DOT__subregs, 1U);
            unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j, unnamedblk595__DOT__unnamedblk596__DOT__subregs.size())) {
                unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j__Vloopsize 
                    = unnamedblk595__DOT__unnamedblk596__DOT__subregs.size();
                unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__fields.clear();
                VL_NULL_CHECK(unnamedblk595__DOT__unnamedblk596__DOT__subregs.at(unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1451)->__VnoInFunc_get_fields(vlSymsp, unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__fields);
                unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i, unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__fields.size())) {
                    unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i__Vloopsize 
                        = unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__fields.size();
                    VL_NULL_CHECK(unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__fields.at(unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1453)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    if ((__VlefCall_1__get_name == name)) {
                        get_field_by_name__Vfuncrtn 
                            = unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__fields.at(unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i__Vloopsize 
                         <= unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__fields.size())) {
                        unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i 
                            = ((IData)(1U) + unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__unnamedblk598__DOT__unnamedblk599__DOT__i);
                    }
                }
                if ((unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j__Vloopsize 
                     <= unnamedblk595__DOT__unnamedblk596__DOT__subregs.size())) {
                    unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j 
                        = ((IData)(1U) + unnamedblk595__DOT__unnamedblk596__DOT__unnamedblk597__DOT__j);
                }
            }
        }
        this->__Vfunc_uvm_report_enabled__130__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__130__severity = 1U;
        __Vfunc_uvm_report_enabled__130__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__131__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__131__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__130__verbosity, (IData)(__Vfunc_uvm_report_enabled__130__severity), this->__Vfunc_uvm_report_enabled__130__id, __Vtask_uvm_report_enabled__132__Vfuncout);
        __Vfunc_uvm_report_enabled__130____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__132__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__130____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_warning__134__line = 0x000005b3U;
            this->__Vtask_uvm_report_warning__134__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__134__verbosity = 0U;
            this->__Vtask_uvm_report_warning__134__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate field '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__134__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__135__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__135__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__134__id, this->__Vtask_uvm_report_warning__134__message, __Vtask_uvm_report_warning__134__verbosity, this->__Vtask_uvm_report_warning__134__filename, __Vtask_uvm_report_warning__134__line);
        }
        get_field_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vfield_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vfield_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__142__verbosity;
    __Vfunc_uvm_report_enabled__142__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__142__severity;
    __Vfunc_uvm_report_enabled__142__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__142____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__142____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__143__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__144__Vfuncout;
    __Vtask_uvm_report_enabled__144__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__146__verbosity;
    __Vtask_uvm_report_warning__146__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__146__line;
    __Vtask_uvm_report_warning__146__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__147__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk600__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk600__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk600__DOT__rg___Vmore;
    unnamedblk600__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk600__DOT__unnamedblk601__DOT__rg;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> unnamedblk600__DOT__unnamedblk601__DOT__fields;
    IData/*31:0*/ unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i;
    unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i = 0;
    IData/*31:0*/ unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i__Vloopsize;
    unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk603__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk603__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk603__DOT__blk___Vmore;
    unnamedblk603__DOT__blk___Vmore = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> unnamedblk603__DOT__unnamedblk604__DOT__subvregs;
    IData/*31:0*/ unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j;
    unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j = 0;
    IData/*31:0*/ unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j__Vloopsize;
    unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__fields;
    IData/*31:0*/ unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i;
    unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i = 0;
    IData/*31:0*/ unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i__Vloopsize;
    unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i__Vloopsize = 0;
    {
        unnamedblk600__DOT__rg___Vmore = (0U != this->__PVT__vregs.first(unnamedblk600__DOT__rg___Vnext));
        while (unnamedblk600__DOT__rg___Vmore) {
            unnamedblk600__DOT__rg_ = unnamedblk600__DOT__rg___Vnext;
            unnamedblk600__DOT__rg___Vmore = (0U != this->__PVT__vregs.next(unnamedblk600__DOT__rg___Vnext));
            unnamedblk600__DOT__unnamedblk601__DOT__rg 
                = unnamedblk600__DOT__rg_;
            unnamedblk600__DOT__unnamedblk601__DOT__fields.clear();
            VL_NULL_CHECK(unnamedblk600__DOT__unnamedblk601__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1474)->__VnoInFunc_get_fields(vlSymsp, unnamedblk600__DOT__unnamedblk601__DOT__fields);
            unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i, unnamedblk600__DOT__unnamedblk601__DOT__fields.size())) {
                unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i__Vloopsize 
                    = unnamedblk600__DOT__unnamedblk601__DOT__fields.size();
                VL_NULL_CHECK(unnamedblk600__DOT__unnamedblk601__DOT__fields.at(unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1476)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                if ((__VlefCall_0__get_name == name)) {
                    get_vfield_by_name__Vfuncrtn = unnamedblk600__DOT__unnamedblk601__DOT__fields.at(unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i);
                    goto __Vlabel0;
                }
                if ((unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i__Vloopsize 
                     <= unnamedblk600__DOT__unnamedblk601__DOT__fields.size())) {
                    unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i 
                        = ((IData)(1U) + unnamedblk600__DOT__unnamedblk601__DOT__unnamedblk602__DOT__i);
                }
            }
        }
        unnamedblk603__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk603__DOT__blk___Vnext));
        while (unnamedblk603__DOT__blk___Vmore) {
            unnamedblk603__DOT__blk_ = unnamedblk603__DOT__blk___Vnext;
            unnamedblk603__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk603__DOT__blk___Vnext));
            unnamedblk603__DOT__unnamedblk604__DOT__subvregs.clear();
            VL_NULL_CHECK(unnamedblk603__DOT__blk_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1483)->__VnoInFunc_get_virtual_registers(vlSymsp, unnamedblk603__DOT__unnamedblk604__DOT__subvregs, 1U);
            unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j, unnamedblk603__DOT__unnamedblk604__DOT__subvregs.size())) {
                unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j__Vloopsize 
                    = unnamedblk603__DOT__unnamedblk604__DOT__subvregs.size();
                unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__fields.clear();
                VL_NULL_CHECK(unnamedblk603__DOT__unnamedblk604__DOT__subvregs.at(unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1487)->__VnoInFunc_get_fields(vlSymsp, unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__fields);
                unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i, unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__fields.size())) {
                    unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i__Vloopsize 
                        = unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__fields.size();
                    VL_NULL_CHECK(unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__fields.at(unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1489)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    if ((__VlefCall_1__get_name == name)) {
                        get_vfield_by_name__Vfuncrtn 
                            = unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__fields.at(unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i);
                        goto __Vlabel0;
                    }
                    if ((unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i__Vloopsize 
                         <= unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__fields.size())) {
                        unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i 
                            = ((IData)(1U) + unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__unnamedblk606__DOT__unnamedblk607__DOT__i);
                    }
                }
                if ((unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j__Vloopsize 
                     <= unnamedblk603__DOT__unnamedblk604__DOT__subvregs.size())) {
                    unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j 
                        = ((IData)(1U) + unnamedblk603__DOT__unnamedblk604__DOT__unnamedblk605__DOT__j);
                }
            }
        }
        this->__Vfunc_uvm_report_enabled__142__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__142__severity = 1U;
        __Vfunc_uvm_report_enabled__142__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__143__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__143__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__142__verbosity, (IData)(__Vfunc_uvm_report_enabled__142__severity), this->__Vfunc_uvm_report_enabled__142__id, __Vtask_uvm_report_enabled__144__Vfuncout);
        __Vfunc_uvm_report_enabled__142____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__144__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__142____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_warning__146__line = 0x000005d7U;
            this->__Vtask_uvm_report_warning__146__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__146__verbosity = 0U;
            this->__Vtask_uvm_report_warning__146__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate virtual field '"s, name), "' in block '"s), __VlefCall_3__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__146__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__147__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__147__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__146__id, this->__Vtask_uvm_report_warning__146__message, __Vtask_uvm_report_warning__146__verbosity, this->__Vtask_uvm_report_warning__146__filename, __Vtask_uvm_report_warning__146__line);
        }
        get_vfield_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage\n"); );
    // Locals
    IData/*31:0*/ __Vtask_set_coverage__149__Vfuncout;
    __Vtask_set_coverage__149__Vfuncout = 0;
    IData/*31:0*/ __Vtask_set_coverage__150__Vfuncout;
    __Vtask_set_coverage__150__Vfuncout = 0;
    IData/*31:0*/ __Vtask_set_coverage__151__Vfuncout;
    __Vtask_set_coverage__151__Vfuncout = 0;
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk608__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk608__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk608__DOT__rg___Vmore;
    unnamedblk608__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk608__DOT__unnamedblk609__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk610__DOT__mem_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk610__DOT__mem___Vnext;
    CData/*0:0*/ unnamedblk610__DOT__mem___Vmore;
    unnamedblk610__DOT__mem___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk610__DOT__unnamedblk611__DOT__mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk612__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk612__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk612__DOT__blk___Vmore;
    unnamedblk612__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk612__DOT__unnamedblk613__DOT__blk;
    set_coverage__Vfuncrtn = 0U;
    this->__PVT__cover_on = (this->__PVT__has_cover 
                             & is_on);
    unnamedblk608__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk608__DOT__rg___Vnext));
    while (unnamedblk608__DOT__rg___Vmore) {
        unnamedblk608__DOT__rg_ = unnamedblk608__DOT__rg___Vnext;
        unnamedblk608__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk608__DOT__rg___Vnext));
        unnamedblk608__DOT__unnamedblk609__DOT__rg 
            = unnamedblk608__DOT__rg_;
        VL_NULL_CHECK(unnamedblk608__DOT__unnamedblk609__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1514)->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__149__Vfuncout);
    }
    unnamedblk610__DOT__mem___Vmore = (0U != this->__PVT__mems.first(unnamedblk610__DOT__mem___Vnext));
    while (unnamedblk610__DOT__mem___Vmore) {
        unnamedblk610__DOT__mem_ = unnamedblk610__DOT__mem___Vnext;
        unnamedblk610__DOT__mem___Vmore = (0U != this->__PVT__mems.next(unnamedblk610__DOT__mem___Vnext));
        unnamedblk610__DOT__unnamedblk611__DOT__mem 
            = unnamedblk610__DOT__mem_;
        VL_NULL_CHECK(unnamedblk610__DOT__unnamedblk611__DOT__mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1519)->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__150__Vfuncout);
    }
    unnamedblk612__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk612__DOT__blk___Vnext));
    while (unnamedblk612__DOT__blk___Vmore) {
        unnamedblk612__DOT__blk_ = unnamedblk612__DOT__blk___Vnext;
        unnamedblk612__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk612__DOT__blk___Vnext));
        unnamedblk612__DOT__unnamedblk613__DOT__blk 
            = unnamedblk612__DOT__blk_;
        VL_NULL_CHECK(unnamedblk612__DOT__unnamedblk613__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1524)->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__151__Vfuncout);
    }
    set_coverage__Vfuncrtn = this->__PVT__cover_on;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk614__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk614__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk614__DOT__rg___Vmore;
    unnamedblk614__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk614__DOT__unnamedblk615__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk616__DOT__blk___Vmore;
    unnamedblk616__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__unnamedblk617__DOT__blk;
    unnamedblk614__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk614__DOT__rg___Vnext));
    while (unnamedblk614__DOT__rg___Vmore) {
        unnamedblk614__DOT__rg_ = unnamedblk614__DOT__rg___Vnext;
        unnamedblk614__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk614__DOT__rg___Vnext));
        unnamedblk614__DOT__unnamedblk615__DOT__rg 
            = unnamedblk614__DOT__rg_;
        VL_NULL_CHECK(unnamedblk614__DOT__unnamedblk615__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1536)->__VnoInFunc_sample_values(vlSymsp);
    }
    unnamedblk616__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk616__DOT__blk___Vnext));
    while (unnamedblk616__DOT__blk___Vmore) {
        unnamedblk616__DOT__blk_ = unnamedblk616__DOT__blk___Vnext;
        unnamedblk616__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk616__DOT__blk___Vnext));
        unnamedblk616__DOT__unnamedblk617__DOT__blk 
            = unnamedblk616__DOT__blk_;
        VL_NULL_CHECK(unnamedblk616__DOT__unnamedblk617__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1541)->__VnoInFunc_sample_values(vlSymsp);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_build_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_build_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vtask_read_by_name__156__Vfuncout;
    __Vtask_read_by_name__156__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read_by_name__156__val;
    __Vtask_read_by_name__156__val = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    build_coverage__Vfuncrtn = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    __Vtask_read_by_name__156__val = build_coverage__Vfuncrtn;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz105__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__156__val, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>{this}, __Vtask_read_by_name__156__Vfuncout);
    build_coverage__Vfuncrtn = __Vtask_read_by_name__156__val;
    build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                & models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_coverage\n"); );
    // Body
    this->__PVT__has_cover = (this->__PVT__has_cover 
                              | models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_coverage\n"); );
    // Body
    has_coverage__Vfuncrtn = ((this->__PVT__has_cover 
                               & models) == models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_coverage\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__has_coverage;
    {
        get_coverage__Vfuncrtn = 0U;
        this->__VnoInFunc_has_coverage(vlSymsp, is_on, __VlefCall_0__has_coverage);
        if ((1U & (~ (IData)(__VlefCall_0__has_coverage)))) {
            get_coverage__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_coverage__Vfuncrtn = ((this->__PVT__cover_on 
                                   & is_on) == is_on);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk618__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk618__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk618__DOT__rg___Vmore;
    unnamedblk618__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk618__DOT__unnamedblk619__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk620__DOT__blk___Vmore;
    unnamedblk620__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__unnamedblk621__DOT__blk;
    unnamedblk618__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk618__DOT__rg___Vnext));
    while (unnamedblk618__DOT__rg___Vmore) {
        unnamedblk618__DOT__rg_ = unnamedblk618__DOT__rg___Vnext;
        unnamedblk618__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk618__DOT__rg___Vnext));
        unnamedblk618__DOT__unnamedblk619__DOT__rg 
            = unnamedblk618__DOT__rg_;
        VL_NULL_CHECK(unnamedblk618__DOT__unnamedblk619__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1601)->__VnoInFunc_reset(vlSymsp, kind);
    }
    unnamedblk620__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk620__DOT__blk___Vnext));
    while (unnamedblk620__DOT__blk___Vmore) {
        unnamedblk620__DOT__blk_ = unnamedblk620__DOT__blk___Vnext;
        unnamedblk620__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk620__DOT__blk___Vnext));
        unnamedblk620__DOT__unnamedblk621__DOT__blk 
            = unnamedblk620__DOT__blk_;
        VL_NULL_CHECK(unnamedblk620__DOT__unnamedblk621__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1606)->__VnoInFunc_reset(vlSymsp, kind);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update\n"); );
    // Body
    CData/*0:0*/ __VlefCall_1__needs_update;
    CData/*0:0*/ __VlefCall_0__needs_update;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk622__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk622__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk622__DOT__rg___Vmore;
    unnamedblk622__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk622__DOT__unnamedblk623__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk624__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk624__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk624__DOT__blk___Vmore;
    unnamedblk624__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk624__DOT__unnamedblk625__DOT__blk;
    {
        needs_update__Vfuncrtn = 0U;
        needs_update__Vfuncrtn = 0U;
        unnamedblk622__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk622__DOT__rg___Vnext));
        while (unnamedblk622__DOT__rg___Vmore) {
            unnamedblk622__DOT__rg_ = unnamedblk622__DOT__rg___Vnext;
            unnamedblk622__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk622__DOT__rg___Vnext));
            unnamedblk622__DOT__unnamedblk623__DOT__rg 
                = unnamedblk622__DOT__rg_;
            VL_NULL_CHECK(unnamedblk622__DOT__unnamedblk623__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1618)->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
            if (__VlefCall_0__needs_update) {
                needs_update__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        unnamedblk624__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk624__DOT__blk___Vnext));
        while (unnamedblk624__DOT__blk___Vmore) {
            unnamedblk624__DOT__blk_ = unnamedblk624__DOT__blk___Vnext;
            unnamedblk624__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk624__DOT__blk___Vnext));
            unnamedblk624__DOT__unnamedblk625__DOT__blk 
                = unnamedblk624__DOT__blk_;
            VL_NULL_CHECK(unnamedblk624__DOT__unnamedblk625__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1623)->__VnoInFunc_needs_update(vlSymsp, __VlefCall_1__needs_update);
            if (__VlefCall_1__needs_update) {
                needs_update__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__163__verbosity;
    __Vfunc_uvm_report_enabled__163__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__163__severity;
    __Vfunc_uvm_report_enabled__163__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__163____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__163____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__164__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__165__Vfuncout;
    __Vtask_uvm_report_enabled__165__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__167__verbosity;
    __Vtask_uvm_report_info__167__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__167__line;
    __Vtask_uvm_report_info__167__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__168__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__170____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__171__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__172__Vfuncout;
    __Vtask_uvm_report_enabled__172__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__174__verbosity;
    __Vtask_uvm_report_info__174__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__174__line;
    __Vtask_uvm_report_info__174__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__175__Vfuncout;
    IData/*31:0*/ __Vtask_update__178__status;
    __Vtask_update__178__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__179__verbosity;
    __Vfunc_uvm_report_enabled__179__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__179__severity;
    __Vfunc_uvm_report_enabled__179__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__180__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__181__Vfuncout;
    __Vtask_uvm_report_enabled__181__Vfuncout = 0;
    IData/*31:0*/ __Vtask_update__184__status;
    __Vtask_update__184__status = 0;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_5__needs_update;
    std::string __VlefCall_4__get_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__needs_update;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk626__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk626__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk626__DOT__rg___Vmore;
    unnamedblk626__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk626__DOT__unnamedblk627__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk628__DOT__blk___Vmore;
    unnamedblk628__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__unnamedblk629__DOT__blk;
    {
        status = 0U;
        status = 0U;
        this->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
        if ((1U & (~ (IData)(__VlefCall_0__needs_update)))) {
            this->__Vfunc_uvm_report_enabled__163__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__163__severity = 0U;
            __Vfunc_uvm_report_enabled__163__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__164__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__164__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__163__verbosity, (IData)(__Vfunc_uvm_report_enabled__163__severity), this->__Vfunc_uvm_report_enabled__163__id, __Vtask_uvm_report_enabled__165__Vfuncout);
            __Vfunc_uvm_report_enabled__163____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__165__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__163____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                __Vtask_uvm_report_info__167__line = 0x0000066aU;
                this->__Vtask_uvm_report_info__167__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_info__167__verbosity = 0x0000012cU;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__167__message
                              ,"%s:%0d - RegModel block %s does not need updating",3
                              , 'S',&(fname), '~',32,lineno
                              , 'S',&(__VlefCall_2__get_name));
                this->__Vtask_uvm_report_info__167__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__168__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vfunc_get__168__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__167__id, this->__Vtask_uvm_report_info__167__message, __Vtask_uvm_report_info__167__verbosity, this->__Vtask_uvm_report_info__167__filename, __Vtask_uvm_report_info__167__line);
            }
            goto __Vlabel0;
        }
        this->__Vfunc_uvm_report_enabled__170__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__170__severity = 0U;
        __Vfunc_uvm_report_enabled__170__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__171__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__171__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), this->__Vfunc_uvm_report_enabled__170__id, __Vtask_uvm_report_enabled__172__Vfuncout);
        __Vfunc_uvm_report_enabled__170____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__172__Vfuncout;
        __VlefCall_3__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__170____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_3__uvm_report_enabled) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            __Vtask_uvm_report_info__174__line = 0x0000066fU;
            this->__Vtask_uvm_report_info__174__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_info__174__verbosity = 0x0000012cU;
            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name75
                [(3U & path)];
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__174__message
                          ,"%s:%0d - Updating model block %s with %s path",4
                          , 'S',&(fname), '~',32,lineno
                          , 'S',&(__VlefCall_4__get_name)
                          , 'S',&(__Vtemp_1));
            this->__Vtask_uvm_report_info__174__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__175__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__175__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__174__id, this->__Vtask_uvm_report_info__174__message, __Vtask_uvm_report_info__174__verbosity, this->__Vtask_uvm_report_info__174__filename, __Vtask_uvm_report_info__174__line);
        }
        unnamedblk626__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk626__DOT__rg___Vnext));
        while (unnamedblk626__DOT__rg___Vmore) {
            unnamedblk626__DOT__rg_ = unnamedblk626__DOT__rg___Vnext;
            unnamedblk626__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk626__DOT__rg___Vnext));
            unnamedblk626__DOT__unnamedblk627__DOT__rg 
                = unnamedblk626__DOT__rg_;
            VL_NULL_CHECK(unnamedblk626__DOT__unnamedblk627__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1651)->__VnoInFunc_needs_update(vlSymsp, __VlefCall_5__needs_update);
            if (__VlefCall_5__needs_update) {
                co_await VL_NULL_CHECK(unnamedblk626__DOT__unnamedblk627__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1652)->__VnoInFunc_update(vlSymsp, __Vtask_update__178__status, path, VlNull{}, parent, prior, extension, ""s, 0U);
                status = __Vtask_update__178__status;
                if (((0U != status) & (2U != status))) {
                    this->__Vfunc_uvm_report_enabled__179__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__179__severity = 2U;
                    __Vfunc_uvm_report_enabled__179__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__180__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__180__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__179__verbosity, (IData)(__Vfunc_uvm_report_enabled__179__severity), this->__Vfunc_uvm_report_enabled__179__id, __Vtask_uvm_report_enabled__181__Vfuncout);
                    __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__181__Vfuncout;
                    __VlefCall_6__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_6__uvm_report_enabled) {
                        VL_NULL_CHECK(unnamedblk626__DOT__unnamedblk627__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1655)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Register \"%s\" could not be updated",1
                                                                                , 'S',&(__VlefCall_7__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x00000677U);
                    }
                    goto __Vlabel0;
                }
            }
        }
        unnamedblk628__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk628__DOT__blk___Vnext));
        while (unnamedblk628__DOT__blk___Vmore) {
            unnamedblk628__DOT__blk_ = unnamedblk628__DOT__blk___Vnext;
            unnamedblk628__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk628__DOT__blk___Vnext));
            unnamedblk628__DOT__unnamedblk629__DOT__blk 
                = unnamedblk628__DOT__blk_;
            co_await VL_NULL_CHECK(unnamedblk628__DOT__unnamedblk629__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1663)->__VnoInFunc_update(vlSymsp, __Vtask_update__184__status, path, parent, prior, extension, fname, lineno);
            status = __Vtask_update__184__status;
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__185__status;
    __Vtask_mirror__185__status = 0;
    IData/*31:0*/ __Vtask_mirror__186__status;
    __Vtask_mirror__186__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk630__DOT__rg_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk630__DOT__rg___Vnext;
    CData/*0:0*/ unnamedblk630__DOT__rg___Vmore;
    unnamedblk630__DOT__rg___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk630__DOT__unnamedblk631__DOT__rg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk632__DOT__blk_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk632__DOT__blk___Vnext;
    CData/*0:0*/ unnamedblk632__DOT__blk___Vmore;
    unnamedblk632__DOT__blk___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk632__DOT__unnamedblk633__DOT__blk;
    status = 0U;
    unnamedblk630__DOT__rg___Vmore = (0U != this->__PVT__regs.first(unnamedblk630__DOT__rg___Vnext));
    while (unnamedblk630__DOT__rg___Vmore) {
        unnamedblk630__DOT__rg_ = unnamedblk630__DOT__rg___Vnext;
        unnamedblk630__DOT__rg___Vmore = (0U != this->__PVT__regs.next(unnamedblk630__DOT__rg___Vnext));
        unnamedblk630__DOT__unnamedblk631__DOT__rg 
            = unnamedblk630__DOT__rg_;
        co_await VL_NULL_CHECK(unnamedblk630__DOT__unnamedblk631__DOT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1682)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__185__status, check, path, VlNull{}, parent, prior, extension, fname, lineno);
        status = __Vtask_mirror__185__status;
    }
    unnamedblk632__DOT__blk___Vmore = (0U != this->__PVT__blks.first(unnamedblk632__DOT__blk___Vnext));
    while (unnamedblk632__DOT__blk___Vmore) {
        unnamedblk632__DOT__blk_ = unnamedblk632__DOT__blk___Vnext;
        unnamedblk632__DOT__blk___Vmore = (0U != this->__PVT__blks.next(unnamedblk632__DOT__blk___Vnext));
        unnamedblk632__DOT__unnamedblk633__DOT__blk 
            = unnamedblk632__DOT__blk_;
        co_await VL_NULL_CHECK(unnamedblk632__DOT__unnamedblk633__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1692)->__VnoInFunc_mirror(vlSymsp, __Vtask_mirror__186__status, check, path, parent, prior, extension, fname, lineno);
        status = __Vtask_mirror__186__status;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_reg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_reg_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__188__status;
    __Vtask_write__188__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg;
    this->__PVT__fname = fname;
    this->__PVT__lineno = lineno;
    status = 1U;
    this->__VnoInFunc_get_reg_by_name(vlSymsp, name, rg);
    if ((VlNull{} != rg)) {
        co_await VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1720)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__188__status, data, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_write__188__status;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_reg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_reg_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_read__190__status;
    __Vtask_read__190__status = 0;
    QData/*63:0*/ __Vtask_read__190__value;
    __Vtask_read__190__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg;
    data = 0ULL;
    this->__PVT__fname = fname;
    this->__PVT__lineno = lineno;
    status = 1U;
    this->__VnoInFunc_get_reg_by_name(vlSymsp, name, rg);
    if ((VlNull{} != rg)) {
        co_await VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1744)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__190__status, __Vtask_read__190__value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_read__190__status;
        data = __Vtask_read__190__value;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_mem_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_mem_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__192__status;
    __Vtask_write__192__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    this->__PVT__fname = fname;
    this->__PVT__lineno = lineno;
    status = 1U;
    this->__VnoInFunc_get_mem_by_name(vlSymsp, name, mem);
    if ((VlNull{} != mem)) {
        co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1768)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__192__status, offset, data, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_write__192__status;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_mem_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_mem_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_read__194__status;
    __Vtask_read__194__status = 0;
    QData/*63:0*/ __Vtask_read__194__value;
    __Vtask_read__194__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    data = 0ULL;
    this->__PVT__fname = fname;
    this->__PVT__lineno = lineno;
    status = 1U;
    this->__VnoInFunc_get_mem_by_name(vlSymsp, name, mem);
    if ((VlNull{} != mem)) {
        co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1792)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__194__status, offset, __Vtask_read__194__value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_read__194__status;
        data = __Vtask_read__194__value;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_readmemh(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_readmemh\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_writememh(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_writememh\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__195__verbosity;
    __Vfunc_uvm_report_enabled__195__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__195__severity;
    __Vfunc_uvm_report_enabled__195__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__195____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__195____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__196__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__197__Vfuncout;
    __Vtask_uvm_report_enabled__197__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map;
    {
        if (this->__PVT__locked) {
            this->__Vfunc_uvm_report_enabled__195__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__195__severity = 2U;
            __Vfunc_uvm_report_enabled__195__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__196__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__196__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__195__verbosity, (IData)(__Vfunc_uvm_report_enabled__195__severity), this->__Vfunc_uvm_report_enabled__195__id, __Vtask_uvm_report_enabled__197__Vfuncout);
            __Vfunc_uvm_report_enabled__195____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__197__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__195____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot add map to locked model"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x00000721U);
            }
            create_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi48__Vclpkg.__VnoInFunc_create(vlSymsp, name, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), map);
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1830)->__VnoInFunc_configure(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>{this}, base_addr, n_bytes, endian, (IData)(byte_addressing));
        this->__PVT__maps.atWrite(map) = 1U;
        if ((1U == this->__PVT__maps.size())) {
            this->__PVT__default_map = map;
        }
        create_map__Vfuncrtn = map;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__202__verbosity;
    __Vfunc_uvm_report_enabled__202__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__202__severity;
    __Vfunc_uvm_report_enabled__202__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__202____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__202____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__203__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__204__Vfuncout;
    __Vtask_uvm_report_enabled__204__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__206__verbosity;
    __Vfunc_uvm_report_enabled__206__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__206__severity;
    __Vfunc_uvm_report_enabled__206__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__206____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__206____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__207__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__208__Vfuncout;
    __Vtask_uvm_report_enabled__208__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if (this->__PVT__locked) {
            this->__Vfunc_uvm_report_enabled__202__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__202__severity = 2U;
            __Vfunc_uvm_report_enabled__202__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__203__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__203__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__202__verbosity, (IData)(__Vfunc_uvm_report_enabled__202__severity), this->__Vfunc_uvm_report_enabled__202__id, __Vtask_uvm_report_enabled__204__Vfuncout);
            __Vfunc_uvm_report_enabled__202____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__204__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__202____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot add map to locked model"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x00000735U);
            }
            goto __Vlabel0;
        }
        if (this->__PVT__maps.exists(map)) {
            this->__Vfunc_uvm_report_enabled__206__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__206__severity = 2U;
            __Vfunc_uvm_report_enabled__206__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__207__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__207__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__206__verbosity, (IData)(__Vfunc_uvm_report_enabled__206__severity), this->__Vfunc_uvm_report_enabled__206__id, __Vtask_uvm_report_enabled__208__Vfuncout);
            __Vfunc_uvm_report_enabled__206____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__208__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__206____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1851)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_name), "' already exists in '"s), __VlefCall_3__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x0000073bU);
            }
            goto __Vlabel0;
        }
        this->__PVT__maps.atWrite(map) = 1U;
        if ((1U == this->__PVT__maps.size())) {
            this->__PVT__default_map = map;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_map_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_map_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__216__verbosity;
    __Vfunc_uvm_report_enabled__216__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__216__severity;
    __Vfunc_uvm_report_enabled__216__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__216____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__216____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__217__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__218__Vfuncout;
    __Vtask_uvm_report_enabled__218__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__219__verbosity;
    __Vtask_uvm_report_warning__219__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__219__line;
    __Vtask_uvm_report_warning__219__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__220__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk634__DOT__i;
    unnamedblk634__DOT__i = 0;
    IData/*31:0*/ unnamedblk634__DOT__i__Vloopsize;
    unnamedblk634__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk635__DOT__i;
    unnamedblk635__DOT__i = 0;
    IData/*31:0*/ unnamedblk635__DOT__i__Vloopsize;
    unnamedblk635__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> unnamedblk635__DOT__unnamedblk636__DOT__submaps;
    IData/*31:0*/ unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j;
    unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0;
    IData/*31:0*/ unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j__Vloopsize;
    unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        maps.clear();
        this->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk634__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk634__DOT__i, maps.size())) {
            unnamedblk634__DOT__i__Vloopsize = maps.size();
            VL_NULL_CHECK(maps.at(unnamedblk634__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1870)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_map_by_name__Vfuncrtn = maps.at(unnamedblk634__DOT__i);
                goto __Vlabel0;
            }
            if ((unnamedblk634__DOT__i__Vloopsize <= maps.size())) {
                unnamedblk634__DOT__i = ((IData)(1U) 
                                         + unnamedblk634__DOT__i);
            }
        }
        unnamedblk635__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk635__DOT__i, maps.size())) {
            unnamedblk635__DOT__i__Vloopsize = maps.size();
            unnamedblk635__DOT__unnamedblk636__DOT__submaps.clear();
            VL_NULL_CHECK(maps.at(unnamedblk635__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1875)->__VnoInFunc_get_submaps(vlSymsp, unnamedblk635__DOT__unnamedblk636__DOT__submaps, 1U);
            unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j, unnamedblk635__DOT__unnamedblk636__DOT__submaps.size())) {
                unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j__Vloopsize 
                    = unnamedblk635__DOT__unnamedblk636__DOT__submaps.size();
                VL_NULL_CHECK(unnamedblk635__DOT__unnamedblk636__DOT__submaps.at(unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((__VlefCall_1__get_name == name)) {
                    get_map_by_name__Vfuncrtn = unnamedblk635__DOT__unnamedblk636__DOT__submaps.at(unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                    goto __Vlabel0;
                }
                if ((unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j__Vloopsize 
                     <= unnamedblk635__DOT__unnamedblk636__DOT__submaps.size())) {
                    unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j 
                        = ((IData)(1U) + unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                }
            }
            if ((unnamedblk635__DOT__i__Vloopsize <= maps.size())) {
                unnamedblk635__DOT__i = ((IData)(1U) 
                                         + unnamedblk635__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__216__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__216__severity = 1U;
        __Vfunc_uvm_report_enabled__216__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__217__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__217__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__216__verbosity, (IData)(__Vfunc_uvm_report_enabled__216__severity), this->__Vfunc_uvm_report_enabled__216__id, __Vtask_uvm_report_enabled__218__Vfuncout);
        __Vfunc_uvm_report_enabled__216____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__218__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__216____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            __Vtask_uvm_report_warning__219__line = 0x0000075bU;
            this->__Vtask_uvm_report_warning__219__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__219__verbosity = 0U;
            this->__Vtask_uvm_report_warning__219__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Map with name '"s, name), "' does not exist in block"s));
            this->__Vtask_uvm_report_warning__219__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__220__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__220__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__219__id, this->__Vtask_uvm_report_warning__219__message, __Vtask_uvm_report_warning__219__verbosity, this->__Vtask_uvm_report_warning__219__filename, __Vtask_uvm_report_warning__219__line);
        }
        get_map_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__222__verbosity;
    __Vfunc_uvm_report_enabled__222__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__222__severity;
    __Vfunc_uvm_report_enabled__222__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__222____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__222____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__223__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__224__Vfuncout;
    __Vtask_uvm_report_enabled__224__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__226__verbosity;
    __Vtask_uvm_report_warning__226__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__226__line;
    __Vtask_uvm_report_warning__226__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__227__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    if ((! this->__PVT__maps.exists(map))) {
        this->__Vfunc_uvm_report_enabled__222__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__222__severity = 1U;
        __Vfunc_uvm_report_enabled__222__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__223__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__223__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__222__verbosity, (IData)(__Vfunc_uvm_report_enabled__222__severity), this->__Vfunc_uvm_report_enabled__222__id, __Vtask_uvm_report_enabled__224__Vfuncout);
        __Vfunc_uvm_report_enabled__222____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__224__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__222____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1892)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_warning__226__line = 0x00000764U;
            this->__Vtask_uvm_report_warning__226__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__226__verbosity = 0U;
            this->__Vtask_uvm_report_warning__226__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Map '"s, __VlefCall_1__get_full_name), "' does not exist in block"s));
            this->__Vtask_uvm_report_warning__226__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__227__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__227__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__226__id, this->__Vtask_uvm_report_warning__226__message, __Vtask_uvm_report_warning__226__verbosity, this->__Vtask_uvm_report_warning__226__filename, __Vtask_uvm_report_warning__226__line);
        }
    }
    this->__PVT__default_map = map;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map\n"); );
    // Body
    get_default_map__Vfuncrtn = this->__PVT__default_map;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_path\n"); );
    // Body
    {
        get_default_path__Vfuncrtn = 0U;
        if ((3U != this->__PVT__default_path)) {
            get_default_path__Vfuncrtn = this->__PVT__default_path;
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1912)->__VnoInFunc_get_default_path(vlSymsp, get_default_path__Vfuncrtn);
            goto __Vlabel0;
        }
        get_default_path__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_Xinit_address_mapsX(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_Xinit_address_mapsX\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk638__DOT__map_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk638__DOT__map___Vnext;
    CData/*0:0*/ unnamedblk638__DOT__map___Vmore;
    unnamedblk638__DOT__map___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk638__DOT__unnamedblk639__DOT__map;
    unnamedblk638__DOT__map___Vmore = (0U != this->__PVT__maps.first(unnamedblk638__DOT__map___Vnext));
    while (unnamedblk638__DOT__map___Vmore) {
        unnamedblk638__DOT__map_ = unnamedblk638__DOT__map___Vnext;
        unnamedblk638__DOT__map___Vmore = (0U != this->__PVT__maps.next(unnamedblk638__DOT__map___Vnext));
        unnamedblk638__DOT__unnamedblk639__DOT__map 
            = unnamedblk638__DOT__map_;
        VL_NULL_CHECK(unnamedblk638__DOT__unnamedblk639__DOT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1924)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_backdoor\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__232__verbosity;
    __Vfunc_uvm_report_enabled__232__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__232__severity;
    __Vfunc_uvm_report_enabled__232__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__232____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__232____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__233__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__234__Vfuncout;
    __Vtask_uvm_report_enabled__234__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__235__verbosity;
    __Vtask_uvm_report_warning__235__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__235__line;
    __Vtask_uvm_report_warning__235__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__236__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_update_threads;
    VL_NULL_CHECK(bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1939)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1940)->__PVT__lineno 
        = lineno;
    __VlefCall_0__has_update_threads = (VlNull{} != this->__PVT__backdoor);
    if (__VlefCall_0__has_update_threads) {
        VL_NULL_CHECK(this->__PVT__backdoor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1942)->__VnoInFunc_has_update_threads(vlSymsp, __VlefCall_0__has_update_threads);
    }
    if (__VlefCall_0__has_update_threads) {
        this->__Vfunc_uvm_report_enabled__232__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__232__severity = 1U;
        __Vfunc_uvm_report_enabled__232__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__233__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__233__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__232__verbosity, (IData)(__Vfunc_uvm_report_enabled__232__severity), this->__Vfunc_uvm_report_enabled__232__id, __Vtask_uvm_report_enabled__234__Vfuncout);
        __Vfunc_uvm_report_enabled__232____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__234__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__232____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            __Vtask_uvm_report_warning__235__line = 0x00000797U;
            this->__Vtask_uvm_report_warning__235__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__235__verbosity = 0U;
            this->__Vtask_uvm_report_warning__235__message = "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts."s;
            this->__Vtask_uvm_report_warning__235__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__236__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__236__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__235__id, this->__Vtask_uvm_report_warning__235__message, __Vtask_uvm_report_warning__235__verbosity, this->__Vtask_uvm_report_warning__235__filename, __Vtask_uvm_report_warning__235__line);
        }
    }
    this->__PVT__backdoor = bkdr;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk640__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk640__DOT__unnamedblk641__DOT__bkdr;
    {
        if (((VlNull{} == this->__PVT__backdoor) & (IData)(inherited))) {
            this->__VnoInFunc_get_parent(vlSymsp, unnamedblk640__DOT__blk);
            while ((VlNull{} != unnamedblk640__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk640__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1955)->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk640__DOT__unnamedblk641__DOT__bkdr);
                if ((VlNull{} != unnamedblk640__DOT__unnamedblk641__DOT__bkdr)) {
                    get_backdoor__Vfuncrtn = unnamedblk640__DOT__unnamedblk641__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk640__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1958)->__VnoInFunc_get_parent(vlSymsp, unnamedblk640__DOT__blk);
            }
        }
        get_backdoor__Vfuncrtn = this->__PVT__backdoor;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clear_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clear_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__244__verbosity;
    __Vfunc_uvm_report_enabled__244__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__244__severity;
    __Vfunc_uvm_report_enabled__244__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__244____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__244____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__245__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__246__Vfuncout;
    __Vtask_uvm_report_enabled__246__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__247__verbosity;
    __Vtask_uvm_report_warning__247__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__247__line;
    __Vtask_uvm_report_warning__247__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__248__Vfuncout;
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
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1978)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
        if ((1U & (~ (0U != __VlefCall_0__exists)))) {
            this->__Vfunc_uvm_report_enabled__244__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__244__severity = 1U;
            __Vfunc_uvm_report_enabled__244__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__245__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__245__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__244__verbosity, (IData)(__Vfunc_uvm_report_enabled__244__severity), this->__Vfunc_uvm_report_enabled__244__id, __Vtask_uvm_report_enabled__246__Vfuncout);
            __Vfunc_uvm_report_enabled__244____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__246__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__244____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_warning__247__line = 0x000007bbU;
                this->__Vtask_uvm_report_warning__247__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__247__verbosity = 0U;
                this->__Vtask_uvm_report_warning__247__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_warning__247__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__248__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__248__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__247__id, this->__Vtask_uvm_report_warning__247__message, __Vtask_uvm_report_warning__247__verbosity, this->__Vtask_uvm_report_warning__247__filename, __Vtask_uvm_report_warning__247__line);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1983)->__VnoInFunc_delete(vlSymsp, kind);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string path, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_hdl_path\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz5> paths;
    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1993)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 1995)->__VnoInFunc_push_back(vlSymsp, path);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2006)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__257__verbosity;
    __Vfunc_uvm_report_enabled__257__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__257__severity;
    __Vfunc_uvm_report_enabled__257__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__257____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__257____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__258__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__259__Vfuncout;
    __Vtask_uvm_report_enabled__259__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get;
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk642__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz5> hdl_paths;
    {
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__257__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__257__severity = 2U;
            __Vfunc_uvm_report_enabled__257__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__258__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__258__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__257__verbosity, (IData)(__Vfunc_uvm_report_enabled__257__severity), this->__Vfunc_uvm_report_enabled__257__id, __Vtask_uvm_report_enabled__259__Vfuncout);
            __Vfunc_uvm_report_enabled__257____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__259__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__257____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x000007e4U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2024)->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
        unnamedblk642__DOT__i = 0U;
        unnamedblk642__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2026)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk642__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2027)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk642__DOT__i, __VlefCall_3__get);
            paths.push_back(__VlefCall_3__get);
            unnamedblk642__DOT__i = ((IData)(1U) + unnamedblk642__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__267__verbosity;
    __Vfunc_uvm_report_enabled__267__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__267__severity;
    __Vfunc_uvm_report_enabled__267__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__267____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__267____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__268__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__269__Vfuncout;
    __Vtask_uvm_report_enabled__269__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__size;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__has_hdl_path;
    CData/*0:0*/ __VlefCall_0__is_hdl_path_root;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz5> unnamedblk643__DOT__hdl_paths;
    VlQueue<std::string> unnamedblk643__DOT__parent_paths;
    IData/*31:0*/ unnamedblk643__DOT__unnamedblk644__DOT__i;
    std::string unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__hdl_path;
    IData/*31:0*/ unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__unnamedblk646__DOT__j;
    unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__unnamedblk646__DOT__j = 0;
    {
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        paths.clear();
        this->__VnoInFunc_is_hdl_path_root(vlSymsp, kind, __VlefCall_0__is_hdl_path_root);
        if (__VlefCall_0__is_hdl_path_root) {
            if ((""s != this->__PVT__root_hdl_paths
                 .at(kind))) {
                paths.push_back(this->__PVT__root_hdl_paths
                                .at(kind));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_1__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_1__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__267__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__267__severity = 2U;
            __Vfunc_uvm_report_enabled__267__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__268__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__268__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__267__verbosity, (IData)(__Vfunc_uvm_report_enabled__267__severity), this->__Vfunc_uvm_report_enabled__267__id, __Vtask_uvm_report_enabled__269__Vfuncout);
            __Vfunc_uvm_report_enabled__267____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__269__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__267____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x00000801U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2054)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk643__DOT__hdl_paths);
        unnamedblk643__DOT__parent_paths.clear();
        unnamedblk643__DOT__parent_paths.atDefault().clear();
        if ((VlNull{} != this->__PVT__parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2058)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk643__DOT__parent_paths, kind, separator);
        }
        unnamedblk643__DOT__unnamedblk644__DOT__i = 0U;
        unnamedblk643__DOT__unnamedblk644__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk643__DOT__hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2060)->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
            if (!(VL_LTS_III(32, unnamedblk643__DOT__unnamedblk644__DOT__i, __VlefCall_3__size))) break;
            {
                VL_NULL_CHECK(unnamedblk643__DOT__hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2061)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk643__DOT__unnamedblk644__DOT__i, unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__hdl_path);
                if ((0U == unnamedblk643__DOT__parent_paths.size())) {
                    if ((""s != unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__hdl_path)) {
                        paths.push_back(unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__hdl_path);
                    }
                    goto __Vlabel1;
                }
                unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__unnamedblk646__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__unnamedblk646__DOT__j, unnamedblk643__DOT__parent_paths.size())) {
                    if ((""s == unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__hdl_path)) {
                        paths.push_back(unnamedblk643__DOT__parent_paths.at(unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__unnamedblk646__DOT__j));
                    } else {
                        paths.push_back(VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(unnamedblk643__DOT__parent_paths.at(unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__unnamedblk646__DOT__j), separator), unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__hdl_path));
                    }
                    unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__unnamedblk646__DOT__j 
                        = ((IData)(1U) + unnamedblk643__DOT__unnamedblk644__DOT__unnamedblk645__DOT__unnamedblk646__DOT__j);
                }
                __Vlabel1: ;
            }
            unnamedblk643__DOT__unnamedblk644__DOT__i 
                = ((IData)(1U) + unnamedblk643__DOT__unnamedblk644__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path\n"); );
    // Body
    {
        get_default_hdl_path__Vfuncrtn = ""s;
        if (((""s == this->__PVT__default_hdl_path) 
             & (VlNull{} != this->__PVT__parent))) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2086)->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
            goto __Vlabel0;
        }
        get_default_hdl_path__Vfuncrtn = this->__PVT__default_hdl_path;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__276__verbosity;
    __Vfunc_uvm_report_enabled__276__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__276__severity;
    __Vfunc_uvm_report_enabled__276__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__276____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__276____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__277__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__278__Vfuncout;
    __Vtask_uvm_report_enabled__278__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    if ((""s == kind)) {
        if ((VlNull{} == this->__PVT__parent)) {
            this->__Vfunc_uvm_report_enabled__276__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__276__severity = 2U;
            __Vfunc_uvm_report_enabled__276__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__277__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__277__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__276__verbosity, (IData)(__Vfunc_uvm_report_enabled__276__severity), this->__Vfunc_uvm_report_enabled__276__id, __Vtask_uvm_report_enabled__278__Vfuncout);
            __Vfunc_uvm_report_enabled__276____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__278__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__276____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Block has no parent. Must specify a valid HDL abstraction (kind)"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s, 0x00000832U);
            }
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2100)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    this->__PVT__default_hdl_path = kind;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_hdl_path_root(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string path, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_hdl_path_root\n"); );
    // Body
    if ((""s == kind)) {
        this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    this->__PVT__root_hdl_paths.atWrite(kind) = path;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root\n"); );
    // Body
    is_hdl_path_root__Vfuncrtn = 0U;
    if ((""s == kind)) {
        this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    is_hdl_path_root__Vfuncrtn = (1U & this->__PVT__root_hdl_paths.exists(kind));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk647__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk647__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk647__DOT__i__Vmore;
    unnamedblk647__DOT__i__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk647__DOT__unnamedblk648__DOT__b;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk647__DOT__unnamedblk648__DOT__obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk649__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk649__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk649__DOT__i__Vmore;
    unnamedblk649__DOT__i__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> unnamedblk649__DOT__unnamedblk650__DOT__r;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk649__DOT__unnamedblk650__DOT__obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk651__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk651__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk651__DOT__i__Vmore;
    unnamedblk651__DOT__i__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk651__DOT__unnamedblk652__DOT__r;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk651__DOT__unnamedblk652__DOT__obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk653__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk653__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk653__DOT__i__Vmore;
    unnamedblk653__DOT__i__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> unnamedblk653__DOT__unnamedblk654__DOT__m;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk653__DOT__unnamedblk654__DOT__obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk655__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk655__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk655__DOT__i__Vmore;
    unnamedblk655__DOT__i__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk655__DOT__unnamedblk656__DOT__m;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk655__DOT__unnamedblk656__DOT__obj;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    unnamedblk647__DOT__i__Vmore = (0U != this->__PVT__blks.first(unnamedblk647__DOT__i__Vnext));
    while (unnamedblk647__DOT__i__Vmore) {
        unnamedblk647__DOT__i = unnamedblk647__DOT__i__Vnext;
        unnamedblk647__DOT__i__Vmore = (0U != this->__PVT__blks.next(unnamedblk647__DOT__i__Vnext));
        unnamedblk647__DOT__unnamedblk648__DOT__b = unnamedblk647__DOT__i;
        unnamedblk647__DOT__unnamedblk648__DOT__obj 
            = unnamedblk647__DOT__unnamedblk648__DOT__b;
        VL_NULL_CHECK(unnamedblk647__DOT__unnamedblk648__DOT__obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2138)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2138)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), unnamedblk647__DOT__unnamedblk648__DOT__obj, 0x2eU);
    }
    unnamedblk649__DOT__i__Vmore = (0U != this->__PVT__regs.first(unnamedblk649__DOT__i__Vnext));
    while (unnamedblk649__DOT__i__Vmore) {
        unnamedblk649__DOT__i = unnamedblk649__DOT__i__Vnext;
        unnamedblk649__DOT__i__Vmore = (0U != this->__PVT__regs.next(unnamedblk649__DOT__i__Vnext));
        unnamedblk649__DOT__unnamedblk650__DOT__r = unnamedblk649__DOT__i;
        unnamedblk649__DOT__unnamedblk650__DOT__obj 
            = unnamedblk649__DOT__unnamedblk650__DOT__r;
        VL_NULL_CHECK(unnamedblk649__DOT__unnamedblk650__DOT__obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2144)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2144)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), unnamedblk649__DOT__unnamedblk650__DOT__obj, 0x2eU);
    }
    unnamedblk651__DOT__i__Vmore = (0U != this->__PVT__vregs.first(unnamedblk651__DOT__i__Vnext));
    while (unnamedblk651__DOT__i__Vmore) {
        unnamedblk651__DOT__i = unnamedblk651__DOT__i__Vnext;
        unnamedblk651__DOT__i__Vmore = (0U != this->__PVT__vregs.next(unnamedblk651__DOT__i__Vnext));
        unnamedblk651__DOT__unnamedblk652__DOT__r = unnamedblk651__DOT__i;
        unnamedblk651__DOT__unnamedblk652__DOT__obj 
            = unnamedblk651__DOT__unnamedblk652__DOT__r;
        VL_NULL_CHECK(unnamedblk651__DOT__unnamedblk652__DOT__obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2150)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2150)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), unnamedblk651__DOT__unnamedblk652__DOT__obj, 0x2eU);
    }
    unnamedblk653__DOT__i__Vmore = (0U != this->__PVT__mems.first(unnamedblk653__DOT__i__Vnext));
    while (unnamedblk653__DOT__i__Vmore) {
        unnamedblk653__DOT__i = unnamedblk653__DOT__i__Vnext;
        unnamedblk653__DOT__i__Vmore = (0U != this->__PVT__mems.next(unnamedblk653__DOT__i__Vnext));
        unnamedblk653__DOT__unnamedblk654__DOT__m = unnamedblk653__DOT__i;
        unnamedblk653__DOT__unnamedblk654__DOT__obj 
            = unnamedblk653__DOT__unnamedblk654__DOT__m;
        VL_NULL_CHECK(unnamedblk653__DOT__unnamedblk654__DOT__obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2156)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2156)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_name), unnamedblk653__DOT__unnamedblk654__DOT__obj, 0x2eU);
    }
    unnamedblk655__DOT__i__Vmore = (0U != this->__PVT__maps.first(unnamedblk655__DOT__i__Vnext));
    while (unnamedblk655__DOT__i__Vmore) {
        unnamedblk655__DOT__i = unnamedblk655__DOT__i__Vnext;
        unnamedblk655__DOT__i__Vmore = (0U != this->__PVT__maps.next(unnamedblk655__DOT__i__Vnext));
        unnamedblk655__DOT__unnamedblk656__DOT__m = unnamedblk655__DOT__i;
        unnamedblk655__DOT__unnamedblk656__DOT__obj 
            = unnamedblk655__DOT__unnamedblk656__DOT__m;
        VL_NULL_CHECK(unnamedblk655__DOT__unnamedblk656__DOT__obj, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2162)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh", 2162)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_name), unnamedblk655__DOT__unnamedblk656__DOT__obj, 0x2eU);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__294__verbosity;
    __Vfunc_uvm_report_enabled__294__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__294__severity;
    __Vfunc_uvm_report_enabled__294__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__294____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__294____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__295__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__296__Vfuncout;
    __Vtask_uvm_report_enabled__296__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__297__verbosity;
    __Vtask_uvm_report_fatal__297__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__297__line;
    __Vtask_uvm_report_fatal__297__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__298__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__294__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__294__severity = 3U;
    __Vfunc_uvm_report_enabled__294__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__295__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__295__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__294__verbosity, (IData)(__Vfunc_uvm_report_enabled__294__severity), this->__Vfunc_uvm_report_enabled__294__id, __Vtask_uvm_report_enabled__296__Vfuncout);
    __Vfunc_uvm_report_enabled__294____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__296__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__294____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__297__line = 0x0000087cU;
        this->__Vtask_uvm_report_fatal__297__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
        __Vtask_uvm_report_fatal__297__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__297__message = "RegModel blocks cannot be cloned"s;
        this->__Vtask_uvm_report_fatal__297__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__298__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__298__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__297__id, this->__Vtask_uvm_report_fatal__297__message, __Vtask_uvm_report_fatal__297__verbosity, this->__Vtask_uvm_report_fatal__297__filename, __Vtask_uvm_report_fatal__297__line);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__300__verbosity;
    __Vfunc_uvm_report_enabled__300__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__300__severity;
    __Vfunc_uvm_report_enabled__300__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__300____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__300____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__301__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__302__Vfuncout;
    __Vtask_uvm_report_enabled__302__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__303__verbosity;
    __Vtask_uvm_report_fatal__303__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__303__line;
    __Vtask_uvm_report_fatal__303__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__304__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__300__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__300__severity = 3U;
    __Vfunc_uvm_report_enabled__300__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__301__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__301__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__300__verbosity, (IData)(__Vfunc_uvm_report_enabled__300__severity), this->__Vfunc_uvm_report_enabled__300__id, __Vtask_uvm_report_enabled__302__Vfuncout);
    __Vfunc_uvm_report_enabled__300____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__302__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__300____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__303__line = 0x00000883U;
        this->__Vtask_uvm_report_fatal__303__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
        __Vtask_uvm_report_fatal__303__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__303__message = "RegModel blocks cannot be copied"s;
        this->__Vtask_uvm_report_fatal__303__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__304__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__304__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__303__id, this->__Vtask_uvm_report_fatal__303__message, __Vtask_uvm_report_fatal__303__verbosity, this->__Vtask_uvm_report_fatal__303__filename, __Vtask_uvm_report_fatal__303__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306__verbosity;
    __Vfunc_uvm_report_enabled__306__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__306__severity;
    __Vfunc_uvm_report_enabled__306__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__306____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__307__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__308__Vfuncout;
    __Vtask_uvm_report_enabled__308__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__309__verbosity;
    __Vtask_uvm_report_warning__309__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__309__line;
    __Vtask_uvm_report_warning__309__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__310__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__306__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__306__severity = 1U;
    __Vfunc_uvm_report_enabled__306__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__307__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__307__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__306__verbosity, (IData)(__Vfunc_uvm_report_enabled__306__severity), this->__Vfunc_uvm_report_enabled__306__id, __Vtask_uvm_report_enabled__308__Vfuncout);
    __Vfunc_uvm_report_enabled__306____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__308__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__306____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__309__line = 0x0000088bU;
        this->__Vtask_uvm_report_warning__309__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
        __Vtask_uvm_report_warning__309__verbosity = 0U;
        this->__Vtask_uvm_report_warning__309__message = "RegModel blocks cannot be compared"s;
        this->__Vtask_uvm_report_warning__309__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__310__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__310__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__309__id, this->__Vtask_uvm_report_warning__309__message, __Vtask_uvm_report_warning__309__verbosity, this->__Vtask_uvm_report_warning__309__filename, __Vtask_uvm_report_warning__309__line);
    }
    do_compare__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__312__verbosity;
    __Vfunc_uvm_report_enabled__312__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__312__severity;
    __Vfunc_uvm_report_enabled__312__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__312____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__312____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__313__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__314__Vfuncout;
    __Vtask_uvm_report_enabled__314__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__315__verbosity;
    __Vtask_uvm_report_warning__315__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__315__line;
    __Vtask_uvm_report_warning__315__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__316__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__312__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__312__severity = 1U;
    __Vfunc_uvm_report_enabled__312__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__313__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__313__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__312__verbosity, (IData)(__Vfunc_uvm_report_enabled__312__severity), this->__Vfunc_uvm_report_enabled__312__id, __Vtask_uvm_report_enabled__314__Vfuncout);
    __Vfunc_uvm_report_enabled__312____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__314__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__312____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__315__line = 0x00000893U;
        this->__Vtask_uvm_report_warning__315__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
        __Vtask_uvm_report_warning__315__verbosity = 0U;
        this->__Vtask_uvm_report_warning__315__message = "RegModel blocks cannot be packed"s;
        this->__Vtask_uvm_report_warning__315__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__316__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__316__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__315__id, this->__Vtask_uvm_report_warning__315__message, __Vtask_uvm_report_warning__315__verbosity, this->__Vtask_uvm_report_warning__315__filename, __Vtask_uvm_report_warning__315__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack\n"); );
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
    IData/*31:0*/ __Vtask_uvm_report_warning__321__verbosity;
    __Vtask_uvm_report_warning__321__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__321__line;
    __Vtask_uvm_report_warning__321__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__322__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__318__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__318__severity = 1U;
    __Vfunc_uvm_report_enabled__318__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__319__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__319__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__318__verbosity, (IData)(__Vfunc_uvm_report_enabled__318__severity), this->__Vfunc_uvm_report_enabled__318__id, __Vtask_uvm_report_enabled__320__Vfuncout);
    __Vfunc_uvm_report_enabled__318____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__320__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__318____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__321__line = 0x0000089aU;
        this->__Vtask_uvm_report_warning__321__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_block.svh"s;
        __Vtask_uvm_report_warning__321__verbosity = 0U;
        this->__Vtask_uvm_report_warning__321__message = "RegModel blocks cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__321__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__322__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__321__id, this->__Vtask_uvm_report_warning__321__message, __Vtask_uvm_report_warning__321__verbosity, this->__Vtask_uvm_report_warning__321__filename, __Vtask_uvm_report_warning__321__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__blks.atDefault() = 0;
    __PVT__regs.atDefault() = 0;
    __PVT__vregs.atDefault() = 0;
    __PVT__mems.atDefault() = 0;
    __PVT__maps.atDefault() = 0;
    __PVT__locked = 0;
    __PVT__has_cover = 0;
    __PVT__cover_on = 0;
    __PVT__lineno = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block::~\n"); );
}
