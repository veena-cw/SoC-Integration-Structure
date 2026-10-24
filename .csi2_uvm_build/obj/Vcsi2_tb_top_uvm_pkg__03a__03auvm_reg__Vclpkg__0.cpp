// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_get_max_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_include_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ models, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_include_coverage\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz105__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, scope)), "include_coverage"s, models, accessor);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_watch(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_watch\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample_values(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample_values\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XsampleX(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, data, byte_en, (IData)(is_read), map);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_coverage) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__2____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__4__Vfuncout;
    __Vtask_uvm_report_enabled__4__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    if ((0U == n_bits)) {
        this->__Vfunc_uvm_report_enabled__2__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__2__severity = 2U;
        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __Vtask_uvm_report_enabled__4__Vfuncout);
        __Vfunc_uvm_report_enabled__2____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__4__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__2____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Register \"%s\" cannot have 0 bits",1
                                                                                , 'S',&(__VlefCall_1__get_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x00000495U);
        }
        n_bits = 1U;
    }
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_atomic = VL_NEW(Vcsi2_tb_top_std__03a__03asemaphore, vlSymsp, 1U);
    this->__PVT__m_n_used_bits = 0U;
    this->__PVT__m_locked = 0U;
    this->__PVT__m_is_busy = 0U;
    this->__PVT__m_is_locked_by_field = 0U;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure\n"); );
    // Body
    this->__PVT__m_parent = blk_parent;
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1197)->__VnoInFunc_add_reg(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this});
    this->__PVT__m_regfile_parent = regfile_parent;
    if ((""s != hdl_path)) {
        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__13__Vfuncout;
    __Vtask_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__18__verbosity;
    __Vtask_uvm_report_fatal__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__18__line;
    __Vtask_uvm_report_fatal__18__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__19__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos__21__Vfuncout;
    __Vtask_get_lsb_pos__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__verbosity;
    __Vfunc_uvm_report_enabled__24__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__24__severity;
    __Vfunc_uvm_report_enabled__24__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__24____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__26__Vfuncout;
    __Vtask_uvm_report_enabled__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__verbosity;
    __Vfunc_uvm_report_enabled__31__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__31__severity;
    __Vfunc_uvm_report_enabled__31__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__31____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__33__Vfuncout;
    __Vtask_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40__verbosity;
    __Vfunc_uvm_report_enabled__40__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__40__severity;
    __Vfunc_uvm_report_enabled__40__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__41__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__42__Vfuncout;
    __Vtask_uvm_report_enabled__42__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_17__get_name;
    std::string __VlefCall_16__get_name;
    std::string __VlefCall_15__get_name;
    CData/*0:0*/ __VlefCall_14__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_13__get_lsb_pos;
    IData/*31:0*/ __VlefCall_12__get_n_bits;
    std::string __VlefCall_11__get_name;
    std::string __VlefCall_10__get_name;
    std::string __VlefCall_9__get_name;
    CData/*0:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    IData/*31:0*/ __VlefCall_6__get_lsb_pos;
    std::string __VlefCall_5__get_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_n_bits;
    IData/*31:0*/ __VlefCall_2__get_lsb_pos;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk252__DOT__i;
    unnamedblk252__DOT__i = 0;
    IData/*31:0*/ unnamedblk252__DOT__i__Vloopsize;
    unnamedblk252__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk252__DOT__unnamedblk253__DOT__j;
    IData/*31:0*/ offset;
    IData/*31:0*/ idx;
    {
        offset = 0U;
        idx = 0U;
        if (this->__PVT__m_locked) {
            this->__Vfunc_uvm_report_enabled__11__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__11__severity = 2U;
            __Vfunc_uvm_report_enabled__11__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), this->__Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__13__Vfuncout);
            __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__13__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__11____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot add field to locked register model"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x000004bbU);
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == field)) {
            this->__Vfunc_uvm_report_enabled__15__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__15__severity = 3U;
            __Vfunc_uvm_report_enabled__15__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), this->__Vfunc_uvm_report_enabled__15__id, __Vtask_uvm_report_enabled__17__Vfuncout);
            __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__17__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__15____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_fatal__18__line = 0x000004bfU;
                this->__Vtask_uvm_report_fatal__18__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_fatal__18__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__18__message = "Attempting to register NULL field"s;
                this->__Vtask_uvm_report_fatal__18__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__19__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__18__id, this->__Vtask_uvm_report_fatal__18__message, __Vtask_uvm_report_fatal__18__verbosity, this->__Vtask_uvm_report_fatal__18__filename, __Vtask_uvm_report_fatal__18__line);
            }
        }
        VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1218)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__21__Vfuncout);
        offset = __Vtask_get_lsb_pos__21__Vfuncout;
        idx = 0xffffffffU;
        {
            unnamedblk252__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk252__DOT__i, this->__PVT__m_fields.size())) {
                unnamedblk252__DOT__i__Vloopsize = this->__PVT__m_fields.size();
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk252__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1222)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                if ((offset < __VlefCall_2__get_lsb_pos)) {
                    unnamedblk252__DOT__unnamedblk253__DOT__j 
                        = unnamedblk252__DOT__i;
                    this->__PVT__m_fields.insert(unnamedblk252__DOT__unnamedblk253__DOT__j, field);
                    idx = unnamedblk252__DOT__i;
                    goto __Vlabel1;
                }
                if ((unnamedblk252__DOT__i__Vloopsize 
                     <= this->__PVT__m_fields.size())) {
                    unnamedblk252__DOT__i = ((IData)(1U) 
                                             + unnamedblk252__DOT__i);
                }
            }
            __Vlabel1: ;
        }
        if (VL_GTS_III(32, 0U, idx)) {
            this->__PVT__m_fields.push_back(field);
            idx = (this->__PVT__m_fields.size() - (IData)(1U));
        }
        VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1234)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
        this->__PVT__m_n_used_bits = (this->__PVT__m_n_used_bits 
                                      + __VlefCall_3__get_n_bits);
        if ((this->__PVT__m_n_used_bits > this->__PVT__m_n_bits)) {
            this->__Vfunc_uvm_report_enabled__24__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__24__severity = 2U;
            __Vfunc_uvm_report_enabled__24__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__24__verbosity, (IData)(__Vfunc_uvm_report_enabled__24__severity), this->__Vfunc_uvm_report_enabled__24__id, __Vtask_uvm_report_enabled__26__Vfuncout);
            __Vfunc_uvm_report_enabled__24____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__26__Vfuncout;
            __VlefCall_4__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__24____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_4__uvm_report_enabled) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Fields use more bits (%0d) than available in register \"%s\" (%0d)",3
                                                                                , '#',32,this->__PVT__m_n_used_bits
                                                                                , 'S',&(__VlefCall_5__get_name)
                                                                                , '#',32,this->__PVT__m_n_bits) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x000004d8U);
            }
        }
        if (VL_LTS_III(32, 0U, idx)) {
            VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                   (idx 
                                                    - (IData)(1U))), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1245)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
            VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                   (idx 
                                                    - (IData)(1U))), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1246)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
            if (((__VlefCall_6__get_lsb_pos + __VlefCall_7__get_n_bits) 
                 > offset)) {
                this->__Vfunc_uvm_report_enabled__31__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__31__severity = 2U;
                __Vfunc_uvm_report_enabled__31__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__31__verbosity, (IData)(__Vfunc_uvm_report_enabled__31__severity), this->__Vfunc_uvm_report_enabled__31__id, __Vtask_uvm_report_enabled__33__Vfuncout);
                __Vfunc_uvm_report_enabled__31____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__33__Vfuncout;
                __VlefCall_8__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__31____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_8__uvm_report_enabled) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                           (idx 
                                                            - (IData)(1U))), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1249)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                    VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1249)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Field %s overlaps field %s in register \"%s\"",3
                                                                                , 'S',&(__VlefCall_9__get_name)
                                                                                , 'S',&(__VlefCall_10__get_name)
                                                                                , 'S',&(__VlefCall_11__get_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x000004e1U);
                }
            }
        }
        if (VL_LTS_III(32, idx, (this->__PVT__m_fields.size() 
                                 - (IData)(1U)))) {
            VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1253)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
            VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                   ((IData)(1U) 
                                                    + idx)), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1254)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_13__get_lsb_pos);
            if (((offset + __VlefCall_12__get_n_bits) 
                 > __VlefCall_13__get_lsb_pos)) {
                this->__Vfunc_uvm_report_enabled__40__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__40__severity = 2U;
                __Vfunc_uvm_report_enabled__40__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__41__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__40__verbosity, (IData)(__Vfunc_uvm_report_enabled__40__severity), this->__Vfunc_uvm_report_enabled__40__id, __Vtask_uvm_report_enabled__42__Vfuncout);
                __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__42__Vfuncout;
                __VlefCall_14__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_14__uvm_report_enabled) {
                    VL_NULL_CHECK(field, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1258)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                           ((IData)(1U) 
                                                            + idx)), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1258)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_17__get_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Field %s overlaps field %s in register \"%s\"",3
                                                                                , 'S',&(__VlefCall_15__get_name)
                                                                                , 'S',&(__VlefCall_16__get_name)
                                                                                , 'S',&(__VlefCall_17__get_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x000004eaU);
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xlock_modelX(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    {
        if (this->__PVT__m_locked) {
            goto __Vlabel0;
        }
        this->__PVT__m_locked = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        VL_NULL_CHECK(ftdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1284)->__PVT__fname 
            = this->__PVT__m_fname;
        VL_NULL_CHECK(ftdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1285)->__PVT__lineno 
            = this->__PVT__m_lineno;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_frontdoor()"s, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1289)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
        if ((VlNull{} == map_info)) {
            VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1291)->__VnoInFunc_add_reg(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, 0xffffffffffffffffULL, "RW"s, 1U, ftdr);
        } else {
            VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1293)->__PVT__frontdoor 
                = ftdr;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_frontdoor()"s, map);
        if ((VlNull{} == map)) {
            get_frontdoor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1305)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
        get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1306)
            ->__PVT__frontdoor;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_backdoor\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__53__verbosity;
    __Vfunc_uvm_report_enabled__53__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__53__severity;
    __Vfunc_uvm_report_enabled__53__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__53____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__53____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__54__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__55__Vfuncout;
    __Vtask_uvm_report_enabled__55__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__56__verbosity;
    __Vtask_uvm_report_warning__56__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__56__line;
    __Vtask_uvm_report_warning__56__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__57__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_update_threads;
    VL_NULL_CHECK(bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1315)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1316)->__PVT__lineno 
        = lineno;
    __VlefCall_0__has_update_threads = (VlNull{} != this->__PVT__m_backdoor);
    if (__VlefCall_0__has_update_threads) {
        VL_NULL_CHECK(this->__PVT__m_backdoor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1318)->__VnoInFunc_has_update_threads(vlSymsp, __VlefCall_0__has_update_threads);
    }
    if (__VlefCall_0__has_update_threads) {
        this->__Vfunc_uvm_report_enabled__53__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__53__severity = 1U;
        __Vfunc_uvm_report_enabled__53__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__54__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__54__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__53__verbosity, (IData)(__Vfunc_uvm_report_enabled__53__severity), this->__Vfunc_uvm_report_enabled__53__id, __Vtask_uvm_report_enabled__55__Vfuncout);
        __Vfunc_uvm_report_enabled__53____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__55__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__53____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            __Vtask_uvm_report_warning__56__line = 0x00000527U;
            this->__Vtask_uvm_report_warning__56__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_warning__56__verbosity = 0U;
            this->__Vtask_uvm_report_warning__56__message = "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts."s;
            this->__Vtask_uvm_report_warning__56__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__57__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__56__id, this->__Vtask_uvm_report_warning__56__message, __Vtask_uvm_report_warning__56__verbosity, this->__Vtask_uvm_report_warning__56__filename, __Vtask_uvm_report_warning__56__line);
        }
    }
    this->__PVT__m_backdoor = bkdr;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk254__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk254__DOT__bkdr;
    if (((VlNull{} == this->__PVT__m_backdoor) & (IData)(inherited))) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk254__DOT__blk);
        {
            while ((VlNull{} != unnamedblk254__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk254__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1333)->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk254__DOT__bkdr);
                if ((VlNull{} != unnamedblk254__DOT__bkdr)) {
                    this->__PVT__m_backdoor = unnamedblk254__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk254__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1338)->__VnoInFunc_get_parent(vlSymsp, unnamedblk254__DOT__blk);
            }
            __Vlabel0: ;
        }
    }
    get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clear_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clear_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66__verbosity;
    __Vfunc_uvm_report_enabled__66__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__66__severity;
    __Vfunc_uvm_report_enabled__66__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__68__Vfuncout;
    __Vtask_uvm_report_enabled__68__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__69__verbosity;
    __Vtask_uvm_report_warning__69__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__69__line;
    __Vtask_uvm_report_warning__69__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__70__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__exists;
    {
        if (("ALL"s == kind)) {
            this->__PVT__m_hdl_paths_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122, vlProcess, vlSymsp, "hdl_paths"s);
            goto __Vlabel0;
        }
        if ((""s == kind)) {
            if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1356)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            } else {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1358)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1361)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
        if ((1U & (~ (0U != __VlefCall_0__exists)))) {
            this->__Vfunc_uvm_report_enabled__66__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__66__severity = 1U;
            __Vfunc_uvm_report_enabled__66__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__67__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__66__verbosity, (IData)(__Vfunc_uvm_report_enabled__66__severity), this->__Vfunc_uvm_report_enabled__66__id, __Vtask_uvm_report_enabled__68__Vfuncout);
            __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__68__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_warning__69__line = 0x00000552U;
                this->__Vtask_uvm_report_warning__69__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__69__verbosity = 0U;
                this->__Vtask_uvm_report_warning__69__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_warning__69__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__70__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__70__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__69__id, this->__Vtask_uvm_report_warning__69__message, __Vtask_uvm_report_warning__69__verbosity, this->__Vtask_uvm_report_warning__69__filename, __Vtask_uvm_report_warning__69__line);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1366)->__VnoInFunc_delete(vlSymsp, kind);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<Vcsi2_tb_top_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> paths;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1374)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    concat = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
    VL_NULL_CHECK(concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1377)->__VnoInFunc_set(vlSymsp, slices);
    VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1378)->__VnoInFunc_push_back(vlSymsp, concat);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path_slice(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path_slice\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> paths;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1389)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    __VlefLogOr_1 = first;
    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1392)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        __VlefLogOr_1 = (0U == __VlefCall_0__size);
    }
    if (__VlefLogOr_1) {
        concat = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
        VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1394)->__VnoInFunc_push_back(vlSymsp, concat);
    } else {
        VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1397)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
        VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1397)->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                (__VlefCall_2__size 
                                                                                - (IData)(1U)), concat);
    }
    VL_NULL_CHECK(concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1399)->__VnoInFunc_add_path(vlSymsp, name, offset, size);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1408)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        } else {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1410)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
    }
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1413)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path_kinds(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path_kinds\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__87__Vfuncout;
    __Vtask_first__87__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__88__Vfuncout;
    __Vtask_next__88__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_1__next;
    IData/*31:0*/ __VlefCall_0__first;
    std::string kind;
    {
        kind = ""s;
        kinds.clear();
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1422)->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__87__Vfuncout);
        __VlefCall_0__first = __Vtask_first__87__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__first)))) {
            goto __Vlabel0;
        }
        do {
            kinds.push_back(kind);
            VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1426)->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__88__Vfuncout);
            __VlefCall_1__next = __Vtask_next__88__Vfuncout;
        } while ((0U != __VlefCall_1__next));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__92__verbosity;
    __Vfunc_uvm_report_enabled__92__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__92__severity;
    __Vfunc_uvm_report_enabled__92__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__92____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__92____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__93__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__94__Vfuncout;
    __Vtask_uvm_report_enabled__94__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __VlefCall_3__get;
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk255__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> hdl_paths;
    {
        if ((""s == kind)) {
            if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1439)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            } else {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1441)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__92__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__92__severity = 2U;
            __Vfunc_uvm_report_enabled__92__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__92__verbosity, (IData)(__Vfunc_uvm_report_enabled__92__severity), this->__Vfunc_uvm_report_enabled__92__id, __Vtask_uvm_report_enabled__94__Vfuncout);
            __Vfunc_uvm_report_enabled__92____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__94__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__92____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register does not have hdl path defined for abstraction '"s, kind), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x000005a6U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1450)->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
        unnamedblk255__DOT__i = 0U;
        unnamedblk255__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1452)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk255__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1453)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk255__DOT__i, __VlefCall_3__get);
            paths.push_back(__VlefCall_3__get);
            unnamedblk255__DOT__i = ((IData)(1U) + unnamedblk255__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102__verbosity;
    __Vfunc_uvm_report_enabled__102__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__102__severity;
    __Vfunc_uvm_report_enabled__102__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__102____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__103__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__104__Vfuncout;
    __Vtask_uvm_report_enabled__104__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__size;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> unnamedblk256__DOT__hdl_paths;
    VlQueue<std::string> unnamedblk256__DOT__parent_paths;
    IData/*31:0*/ unnamedblk256__DOT__unnamedblk257__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j;
    unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j = 0;
    IData/*31:0*/ unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j__Vloopsize;
    unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__t;
    IData/*31:0*/ unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k;
    unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k = 0;
    IData/*31:0*/ unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k__Vloopsize;
    unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k__Vloopsize = 0;
    {
        if ((""s == kind)) {
            if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1467)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            } else {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1469)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__102__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__102__severity = 2U;
            __Vfunc_uvm_report_enabled__102__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__103__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__103__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__102__verbosity, (IData)(__Vfunc_uvm_report_enabled__102__severity), this->__Vfunc_uvm_report_enabled__102__id, __Vtask_uvm_report_enabled__104__Vfuncout);
            __Vfunc_uvm_report_enabled__102____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__104__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__102____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register "s, __VlefCall_2__get_full_name), " does not have hdl path defined for abstraction '"s), kind), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x000005c2U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1479)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk256__DOT__hdl_paths);
        unnamedblk256__DOT__parent_paths.clear();
        unnamedblk256__DOT__parent_paths.atDefault().clear();
        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1483)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk256__DOT__parent_paths, kind, separator);
        } else {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1485)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk256__DOT__parent_paths, kind, separator);
        }
        unnamedblk256__DOT__unnamedblk257__DOT__i = 0U;
        unnamedblk256__DOT__unnamedblk257__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk256__DOT__hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1487)->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
            if (!(VL_LTS_III(32, unnamedblk256__DOT__unnamedblk257__DOT__i, __VlefCall_3__size))) break;
            VL_NULL_CHECK(unnamedblk256__DOT__hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1488)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk256__DOT__unnamedblk257__DOT__i, unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat);
            unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j, unnamedblk256__DOT__parent_paths.size())) {
                unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j__Vloopsize 
                    = unnamedblk256__DOT__parent_paths.size();
                unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__t 
                    = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k, VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1493)
                                  ->__PVT__slices.size())) {
                    unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1493)
                        ->__PVT__slices.size();
                    if ((""s == VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1494)
                         ->__PVT__slices.at(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k)
                         .__PVT__path)) {
                        VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__t, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1495)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk256__DOT__parent_paths.at(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j)), 0xffffffffU, 0xffffffffU);
                    } else {
                        VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__t, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1497)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk256__DOT__parent_paths.at(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j), separator), VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1497)
                                                                                ->__PVT__slices.at(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1498)
                                                                                ->__PVT__slices.at(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k)
                                                                                .__PVT__offset, VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1499)
                                                                                ->__PVT__slices.at(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k)
                                                                                .__PVT__size);
                    }
                    if ((unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1493)
                         ->__PVT__slices.size())) {
                        unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k 
                            = ((IData)(1U) + unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__unnamedblk261__DOT__k);
                    }
                }
                paths.push_back(unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__unnamedblk260__DOT__t);
                if ((unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j__Vloopsize 
                     <= unnamedblk256__DOT__parent_paths.size())) {
                    unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j 
                        = ((IData)(1U) + unnamedblk256__DOT__unnamedblk257__DOT__unnamedblk258__DOT__unnamedblk259__DOT__j);
                }
            }
            unnamedblk256__DOT__unnamedblk257__DOT__i 
                = ((IData)(1U) + unnamedblk256__DOT__unnamedblk257__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__115__verbosity;
    __Vfunc_uvm_report_enabled__115__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__115__severity;
    __Vfunc_uvm_report_enabled__115__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__115____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__115____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__116__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__117__Vfuncout;
    __Vtask_uvm_report_enabled__117__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
             & (VlNull{} == map))) {
            this->__Vfunc_uvm_report_enabled__115__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__115__severity = 2U;
            __Vfunc_uvm_report_enabled__115__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__116__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__116__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__115__verbosity, (IData)(__Vfunc_uvm_report_enabled__115__severity), this->__Vfunc_uvm_report_enabled__115__id, __Vtask_uvm_report_enabled__117__Vfuncout);
            __Vfunc_uvm_report_enabled__115____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__117__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__115____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_offset requires a non-null map when register '"s, __VlefCall_1__get_full_name), "' belongs to more than one map."s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x000005eeU);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_offset()"s, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1527)->__VnoInFunc_m_set_reg_offset(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, offset, (IData)(unmapped));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> regfile_parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__m_parent = blk_parent;
    this->__PVT__m_regfile_parent = regfile_parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent\n"); );
    // Body
    this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_regfile(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_regfile\n"); );
    // Body
    get_regfile__Vfuncrtn = this->__PVT__m_regfile_parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1562)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__m_parent)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1565)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_2__get_full_name, "."s), __VlefCall_3__get_name);
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map\n"); );
    // Body
    this->__PVT__m_maps.atWrite(map) = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk262__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk262__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk262__DOT__map__Vmore;
    unnamedblk262__DOT__map__Vmore = 0;
    unnamedblk262__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk262__DOT__map__Vnext));
    while (unnamedblk262__DOT__map__Vmore) {
        unnamedblk262__DOT__map = unnamedblk262__DOT__map__Vnext;
        unnamedblk262__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk262__DOT__map__Vnext));
        maps.push_back(unnamedblk262__DOT__map);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps\n"); );
    // Body
    get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk263__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk263__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk263__DOT__l__Vmore;
    unnamedblk263__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk263__DOT__unnamedblk264__DOT__local_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk263__DOT__unnamedblk264__DOT__parent_map;
    {
        is_in_map__Vfuncrtn = 0U;
        if (this->__PVT__m_maps.exists(map)) {
            is_in_map__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk263__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk263__DOT__l__Vnext));
        while (unnamedblk263__DOT__l__Vmore) {
            unnamedblk263__DOT__l = unnamedblk263__DOT__l__Vnext;
            unnamedblk263__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk263__DOT__l__Vnext));
            unnamedblk263__DOT__unnamedblk264__DOT__local_map 
                = unnamedblk263__DOT__l;
            VL_NULL_CHECK(unnamedblk263__DOT__unnamedblk264__DOT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1600)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk263__DOT__unnamedblk264__DOT__parent_map);
            while ((VlNull{} != unnamedblk263__DOT__unnamedblk264__DOT__parent_map)) {
                if ((unnamedblk263__DOT__unnamedblk264__DOT__parent_map 
                     == map)) {
                    is_in_map__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk263__DOT__unnamedblk264__DOT__parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1605)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk263__DOT__unnamedblk264__DOT__parent_map);
            }
        }
        is_in_map__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__133__verbosity;
    __Vfunc_uvm_report_enabled__133__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__133__severity;
    __Vfunc_uvm_report_enabled__133__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__133____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__133____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__134__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__135__Vfuncout;
    __Vtask_uvm_report_enabled__135__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__138__verbosity;
    __Vtask_uvm_report_warning__138__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__138__line;
    __Vtask_uvm_report_warning__138__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__139__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk265__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk265__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk265__DOT__l__Vmore;
    unnamedblk265__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk265__DOT__unnamedblk266__DOT__local_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk265__DOT__unnamedblk266__DOT__parent_map;
    {
        if ((VlNull{} == map)) {
            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, ""s, get_local_map__Vfuncrtn);
            goto __Vlabel0;
        }
        if (this->__PVT__m_maps.exists(map)) {
            get_local_map__Vfuncrtn = map;
            goto __Vlabel0;
        }
        unnamedblk265__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk265__DOT__l__Vnext));
        while (unnamedblk265__DOT__l__Vmore) {
            unnamedblk265__DOT__l = unnamedblk265__DOT__l__Vnext;
            unnamedblk265__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk265__DOT__l__Vnext));
            unnamedblk265__DOT__unnamedblk266__DOT__local_map 
                = unnamedblk265__DOT__l;
            VL_NULL_CHECK(unnamedblk265__DOT__unnamedblk266__DOT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1622)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk265__DOT__unnamedblk266__DOT__parent_map);
            while ((VlNull{} != unnamedblk265__DOT__unnamedblk266__DOT__parent_map)) {
                if ((unnamedblk265__DOT__unnamedblk266__DOT__parent_map 
                     == map)) {
                    get_local_map__Vfuncrtn = unnamedblk265__DOT__unnamedblk266__DOT__local_map;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk265__DOT__unnamedblk266__DOT__parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1627)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk265__DOT__unnamedblk266__DOT__parent_map);
            }
        }
        this->__Vfunc_uvm_report_enabled__133__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__133__severity = 1U;
        __Vfunc_uvm_report_enabled__133__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__134__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__134__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__133__verbosity, (IData)(__Vfunc_uvm_report_enabled__133__severity), this->__Vfunc_uvm_report_enabled__133__id, __Vtask_uvm_report_enabled__135__Vfuncout);
        __Vfunc_uvm_report_enabled__133____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__135__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__133____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1632)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__138__line = 0x00000660U;
            this->__Vtask_uvm_report_warning__138__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_warning__138__verbosity = 0U;
            this->__Vtask_uvm_report_warning__138__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_full_name), "' is not contained within map '"s), __VlefCall_2__get_full_name), "'"s), 
                                                    ((""s 
                                                      == caller)
                                                      ? ""s
                                                      : 
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(" (called from "s, caller), ")"s))));
            this->__Vtask_uvm_report_warning__138__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__139__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__139__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__138__id, this->__Vtask_uvm_report_warning__138__message, __Vtask_uvm_report_warning__138__verbosity, this->__Vtask_uvm_report_warning__138__filename, __Vtask_uvm_report_warning__138__line);
        }
        get_local_map__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141__verbosity;
    __Vfunc_uvm_report_enabled__141__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__141__severity;
    __Vfunc_uvm_report_enabled__141__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__141____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__142__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__143__Vfuncout;
    __Vtask_uvm_report_enabled__143__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__145__verbosity;
    __Vtask_uvm_report_warning__145__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__145__line;
    __Vtask_uvm_report_warning__145__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__146__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk267__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk268__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk268__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk268__DOT__l__Vmore;
    unnamedblk268__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk268__DOT__unnamedblk269__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk268__DOT__unnamedblk269__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk268__DOT__unnamedblk269__DOT__default_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk268__DOT__unnamedblk269__DOT__unnamedblk270__DOT__local_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk271__DOT__map;
    {
        if ((0U == this->__PVT__m_maps.size())) {
            this->__Vfunc_uvm_report_enabled__141__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__141__severity = 1U;
            __Vfunc_uvm_report_enabled__141__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__142__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__142__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__141__verbosity, (IData)(__Vfunc_uvm_report_enabled__141__severity), this->__Vfunc_uvm_report_enabled__141__id, __Vtask_uvm_report_enabled__143__Vfuncout);
            __Vfunc_uvm_report_enabled__141____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__143__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__141____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__145__line = 0x0000066eU;
                this->__Vtask_uvm_report_warning__145__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__145__verbosity = 0U;
                this->__Vtask_uvm_report_warning__145__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_full_name), "' is not registered with any map"s), 
                                                        ((""s 
                                                          == caller)
                                                          ? ""s
                                                          : 
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(" (called from "s, caller), ")"s))));
                this->__Vtask_uvm_report_warning__145__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__146__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__146__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__145__id, this->__Vtask_uvm_report_warning__145__message, __Vtask_uvm_report_warning__145__verbosity, this->__Vtask_uvm_report_warning__145__filename, __Vtask_uvm_report_warning__145__line);
            }
            get_default_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U == this->__PVT__m_maps.size())) {
            std::ignore = this->__PVT__m_maps.first(unnamedblk267__DOT__map);
            get_default_map__Vfuncrtn = unnamedblk267__DOT__map;
            goto __Vlabel0;
        }
        unnamedblk268__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk268__DOT__l__Vnext));
        while (unnamedblk268__DOT__l__Vmore) {
            unnamedblk268__DOT__l = unnamedblk268__DOT__l__Vnext;
            unnamedblk268__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk268__DOT__l__Vnext));
            unnamedblk268__DOT__unnamedblk269__DOT__map 
                = unnamedblk268__DOT__l;
            VL_NULL_CHECK(unnamedblk268__DOT__unnamedblk269__DOT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1660)->__VnoInFunc_get_parent(vlSymsp, unnamedblk268__DOT__unnamedblk269__DOT__blk);
            VL_NULL_CHECK(unnamedblk268__DOT__unnamedblk269__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1661)->__VnoInFunc_get_default_map(vlSymsp, unnamedblk268__DOT__unnamedblk269__DOT__default_map);
            if ((VlNull{} != unnamedblk268__DOT__unnamedblk269__DOT__default_map)) {
                this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk268__DOT__unnamedblk269__DOT__default_map, "get_default_map()"s, unnamedblk268__DOT__unnamedblk269__DOT__unnamedblk270__DOT__local_map);
                if ((VlNull{} != unnamedblk268__DOT__unnamedblk269__DOT__unnamedblk270__DOT__local_map)) {
                    get_default_map__Vfuncrtn = unnamedblk268__DOT__unnamedblk269__DOT__unnamedblk270__DOT__local_map;
                    goto __Vlabel0;
                }
            }
        }
        std::ignore = this->__PVT__m_maps.first(unnamedblk271__DOT__map);
        get_default_map__Vfuncrtn = unnamedblk271__DOT__map;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> info;
    {
        get_rights__Vfuncrtn = ""s;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_rights()"s, map);
        if ((VlNull{} == map)) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1691)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, info);
        get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1692)
            ->__PVT__rights;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__m_parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__155__verbosity;
    __Vfunc_uvm_report_enabled__155__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__155__severity;
    __Vfunc_uvm_report_enabled__155__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__155____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__155____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__156__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__157__Vfuncout;
    __Vtask_uvm_report_enabled__157__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__161__verbosity;
    __Vtask_uvm_report_warning__161__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__161__line;
    __Vtask_uvm_report_warning__161__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__162__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_offset__Vfuncrtn = 0ULL;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_offset()"s, map);
        if ((VlNull{} == map)) {
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1717)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1719)
            ->__PVT__unmapped) {
            this->__Vfunc_uvm_report_enabled__155__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__155__severity = 1U;
            __Vfunc_uvm_report_enabled__155__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__156__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__156__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__155__verbosity, (IData)(__Vfunc_uvm_report_enabled__155__severity), this->__Vfunc_uvm_report_enabled__155__id, __Vtask_uvm_report_enabled__157__Vfuncout);
            __Vfunc_uvm_report_enabled__155____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__157__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__155____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1722)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1722)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                }
                __Vtask_uvm_report_warning__161__line = 0x000006baU;
                this->__Vtask_uvm_report_warning__161__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__161__verbosity = 0U;
                this->__Vtask_uvm_report_warning__161__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__161__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__162__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__162__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__161__id, this->__Vtask_uvm_report_warning__161__message, __Vtask_uvm_report_warning__161__verbosity, this->__Vtask_uvm_report_warning__161__filename, __Vtask_uvm_report_warning__161__line);
            }
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1726)
            ->__PVT__offset;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses\n"); );
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
    IData/*31:0*/ __Vtask_uvm_report_warning__172__verbosity;
    __Vtask_uvm_report_warning__172__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__172__line;
    __Vtask_uvm_report_warning__172__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__173__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__176__Vfuncout;
    __Vtask_get_n_bytes__176__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_addresses__Vfuncrtn = 0U;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_addresses()"s, map);
        if ((VlNull{} == map)) {
            get_addresses__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1744)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1746)
            ->__PVT__unmapped) {
            this->__Vfunc_uvm_report_enabled__166__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__166__severity = 1U;
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
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1749)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1749)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                }
                __Vtask_uvm_report_warning__172__line = 0x000006d5U;
                this->__Vtask_uvm_report_warning__172__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__172__verbosity = 0U;
                this->__Vtask_uvm_report_warning__172__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__172__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__173__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__173__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__172__id, this->__Vtask_uvm_report_warning__172__message, __Vtask_uvm_report_warning__172__verbosity, this->__Vtask_uvm_report_warning__172__filename, __Vtask_uvm_report_warning__172__line);
            }
            get_addresses__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        addr = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1753)
            ->__PVT__addr;
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1754)->__VnoInFunc_get_root_map(vlSymsp, system_map);
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1755)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__176__Vfuncout);
        get_addresses__Vfuncrtn = __Vtask_get_n_bytes__176__Vfuncout;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_addresses__177__Vfuncout;
    __Vtask_get_addresses__177__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlQueue<QData/*63:0*/> addr;
    get_address__Vfuncrtn = 0ULL;
    addr.clear();
    addr.atDefault() = 0;
    this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, map, addr, __Vtask_get_addresses__177__Vfuncout);
    get_address__Vfuncrtn = addr.at(0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + ((this->__PVT__m_n_bits 
                                             - (IData)(1U)) 
                                            >> 3U));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk272__DOT__i;
    unnamedblk272__DOT__i = 0;
    unnamedblk272__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk272__DOT__i, this->__PVT__m_fields.size())) {
        fields.push_back(this->__PVT__m_fields.at(unnamedblk272__DOT__i));
        unnamedblk272__DOT__i = ((IData)(1U) + unnamedblk272__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_field_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_field_by_name\n"); );
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
    IData/*31:0*/ __Vtask_uvm_report_warning__183__verbosity;
    __Vtask_uvm_report_warning__183__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__183__line;
    __Vtask_uvm_report_warning__183__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__184__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk273__DOT__i;
    unnamedblk273__DOT__i = 0;
    IData/*31:0*/ unnamedblk273__DOT__i__Vloopsize;
    unnamedblk273__DOT__i__Vloopsize = 0;
    {
        unnamedblk273__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk273__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk273__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk273__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1802)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_field_by_name__Vfuncrtn = this->__PVT__m_fields.at(unnamedblk273__DOT__i);
                goto __Vlabel0;
            }
            if ((unnamedblk273__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk273__DOT__i = ((IData)(1U) 
                                         + unnamedblk273__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__179__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__179__severity = 1U;
        __Vfunc_uvm_report_enabled__179__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__180__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__180__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__179__verbosity, (IData)(__Vfunc_uvm_report_enabled__179__severity), this->__Vfunc_uvm_report_enabled__179__id, __Vtask_uvm_report_enabled__181__Vfuncout);
        __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__181__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__179____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            __Vtask_uvm_report_warning__183__line = 0x0000070dU;
            this->__Vtask_uvm_report_warning__183__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_warning__183__verbosity = 0U;
            this->__Vtask_uvm_report_warning__183__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate field '"s, name), "' in register '"s), __VlefCall_2__get_name), "'"s));
            this->__Vtask_uvm_report_warning__183__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__184__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__184__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__183__id, this->__Vtask_uvm_report_warning__183__message, __Vtask_uvm_report_warning__183__verbosity, this->__Vtask_uvm_report_warning__183__filename, __Vtask_uvm_report_warning__183__line);
        }
        get_field_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &Xget_fields_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk274__DOT__i;
    unnamedblk274__DOT__i = 0;
    IData/*31:0*/ unnamedblk274__DOT__i__Vloopsize;
    unnamedblk274__DOT__i__Vloopsize = 0;
    std::string __VCase_h19399f4e__0;
    CData/*0:0*/ is_R;
    CData/*0:0*/ is_W;
    {
        Xget_fields_accessX__Vfuncrtn = ""s;
        is_R = 0U;
        is_W = 0U;
        unnamedblk274__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk274__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk274__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk274__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1821)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __VCase_h19399f4e__0);
            if (((("RO"s == __VCase_h19399f4e__0) || 
                  ("RC"s == __VCase_h19399f4e__0)) 
                 || ("RS"s == __VCase_h19399f4e__0))) {
                is_R = 1U;
            } else if ((((("WO"s == __VCase_h19399f4e__0) 
                          || ("WOC"s == __VCase_h19399f4e__0)) 
                         || ("WOS"s == __VCase_h19399f4e__0)) 
                        || ("WO1"s == __VCase_h19399f4e__0))) {
                is_W = 1U;
            } else {
                Xget_fields_accessX__Vfuncrtn = "RW"s;
                goto __Vlabel0;
            }
            if (((IData)(is_R) & (IData)(is_W))) {
                Xget_fields_accessX__Vfuncrtn = "RW"s;
                goto __Vlabel0;
            }
            if ((unnamedblk274__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk274__DOT__i = ((IData)(1U) 
                                         + unnamedblk274__DOT__i);
            }
        }
        if ((1U == (((IData)(is_R) << 1U) | (IData)(is_W)))) {
            Xget_fields_accessX__Vfuncrtn = "WO"s;
            goto __Vlabel0;
        } else if ((2U == (((IData)(is_R) << 1U) | (IData)(is_W)))) {
            Xget_fields_accessX__Vfuncrtn = "RO"s;
            goto __Vlabel0;
        }
        Xget_fields_accessX__Vfuncrtn = "RW"s;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_build_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_build_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vtask_read_by_name__188__Vfuncout;
    __Vtask_read_by_name__188__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read_by_name__188__val;
    __Vtask_read_by_name__188__val = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    build_coverage__Vfuncrtn = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    __Vtask_read_by_name__188__val = build_coverage__Vfuncrtn;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz105__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__188__val, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, __Vtask_read_by_name__188__Vfuncout);
    build_coverage__Vfuncrtn = __Vtask_read_by_name__188__val;
    build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                & models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_coverage\n"); );
    // Body
    this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                | models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_coverage\n"); );
    // Body
    has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                               & models) == models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage\n"); );
    // Body
    {
        set_coverage__Vfuncrtn = 0U;
        if ((0U == is_on)) {
            this->__PVT__m_cover_on = is_on;
            set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
            goto __Vlabel0;
        }
        this->__PVT__m_cover_on = (this->__PVT__m_has_cover 
                                   & is_on);
        set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_coverage\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__has_coverage;
    {
        get_coverage__Vfuncrtn = 0U;
        this->__VnoInFunc_has_coverage(vlSymsp, is_on, __VlefCall_0__has_coverage);
        if ((1U & (~ (IData)(__VlefCall_0__has_coverage)))) {
            get_coverage__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_coverage__Vfuncrtn = ((this->__PVT__m_cover_on 
                                   & is_on) == is_on);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_n_bits;
    IData/*31:0*/ __VlefCall_0__get_lsb_pos;
    IData/*31:0*/ unnamedblk275__DOT__i;
    unnamedblk275__DOT__i = 0;
    IData/*31:0*/ unnamedblk275__DOT__i__Vloopsize;
    unnamedblk275__DOT__i__Vloopsize = 0;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    unnamedblk275__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk275__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk275__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk275__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1928)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_0__get_lsb_pos);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk275__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1929)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk275__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1928)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_0__get_lsb_pos) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                                                - 1ULL)), ""s, 0U);
        if ((unnamedblk275__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk275__DOT__i = ((IData)(1U) + unnamedblk275__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_predict(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_predict\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    predict__Vfuncrtn = 0U;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    rw = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1943)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1944)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1945)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1946)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1947)->__PVT__lineno 
        = lineno;
    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
    predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1949)
                          ->__PVT__status) ? 0U : 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict\n"); );
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
    IData/*31:0*/ __Vtask_uvm_report_warning__199__verbosity;
    __Vtask_uvm_report_warning__199__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__199__line;
    __Vtask_uvm_report_warning__199__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__200__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    IData/*31:0*/ __VlefCall_3__get_n_bits;
    IData/*31:0*/ __VlefCall_2__get_lsb_pos;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk276__DOT__i;
    unnamedblk276__DOT__i = 0;
    IData/*31:0*/ unnamedblk276__DOT__i__Vloopsize;
    unnamedblk276__DOT__i__Vloopsize = 0;
    QData/*63:0*/ reg_value;
    {
        reg_value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1959)
            ->__PVT__value.at(0U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1960)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1961)
            ->__PVT__lineno;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1963)->__PVT__status = 0U;
        if (((IData)(this->__PVT__m_is_busy) & (0U 
                                                == kind))) {
            this->__Vfunc_uvm_report_enabled__195__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__195__severity = 1U;
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
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__199__line = 0x000007afU;
                this->__Vtask_uvm_report_warning__199__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__199__verbosity = 0U;
                this->__Vtask_uvm_report_warning__199__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Trying to predict value of register '"s, __VlefCall_1__get_full_name), "' while it is being accessed"s));
                this->__Vtask_uvm_report_warning__199__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__200__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__199__id, this->__Vtask_uvm_report_warning__199__message, __Vtask_uvm_report_warning__199__verbosity, this->__Vtask_uvm_report_warning__199__filename, __Vtask_uvm_report_warning__199__line);
            }
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1968)->__PVT__status = 1U;
            goto __Vlabel0;
        }
        unnamedblk276__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk276__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk276__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk276__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1973)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk276__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1974)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1973)->__PVT__value.atWrite(0U) 
                = (VL_SHIFTR_QQI(64,64,32, reg_value, __VlefCall_2__get_lsb_pos) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_3__get_n_bits) 
                      - 1ULL));
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk276__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1975)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk276__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1975)->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, 
                                                                                VL_SHIFTR_III(8,8,32, (IData)(be), 
                                                                                (__VlefCall_4__get_lsb_pos 
                                                                                >> 3U)));
            if ((unnamedblk276__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk276__DOT__i = ((IData)(1U) 
                                         + unnamedblk276__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1978)->__PVT__value.atWrite(0U) 
            = reg_value;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_lsb_pos;
    QData/*63:0*/ __VlefCall_0__get;
    IData/*31:0*/ unnamedblk277__DOT__i;
    unnamedblk277__DOT__i = 0;
    IData/*31:0*/ unnamedblk277__DOT__i__Vloopsize;
    unnamedblk277__DOT__i__Vloopsize = 0;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get__Vfuncrtn = 0ULL;
    unnamedblk277__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk277__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk277__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk277__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1995)->__VnoInFunc_get(vlSymsp, ""s, 0U, __VlefCall_0__get);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk277__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 1995)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
        get__Vfuncrtn = (get__Vfuncrtn | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get, __VlefCall_1__get_lsb_pos));
        if ((unnamedblk277__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk277__DOT__i = ((IData)(1U) + unnamedblk277__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_lsb_pos;
    QData/*63:0*/ __VlefCall_0__get_mirrored_value;
    IData/*31:0*/ unnamedblk278__DOT__i;
    unnamedblk278__DOT__i = 0;
    IData/*31:0*/ unnamedblk278__DOT__i__Vloopsize;
    unnamedblk278__DOT__i__Vloopsize = 0;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get_mirrored_value__Vfuncrtn = 0ULL;
    unnamedblk278__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk278__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk278__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk278__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2011)->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __VlefCall_0__get_mirrored_value);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk278__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2011)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
        get_mirrored_value__Vfuncrtn = (get_mirrored_value__Vfuncrtn 
                                        | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get_mirrored_value, __VlefCall_1__get_lsb_pos));
        if ((unnamedblk278__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk278__DOT__i = ((IData)(1U) + unnamedblk278__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__211__Vfuncout;
    __Vtask_try_get__211__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk279__DOT__i;
    unnamedblk279__DOT__i = 0;
    IData/*31:0*/ unnamedblk279__DOT__i__Vloopsize;
    unnamedblk279__DOT__i__Vloopsize = 0;
    unnamedblk279__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk279__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk279__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk279__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2019)->__VnoInFunc_reset(vlSymsp, kind);
        if ((unnamedblk279__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk279__DOT__i = ((IData)(1U) + unnamedblk279__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__m_atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2022)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__211__Vfuncout);
    VL_NULL_CHECK(this->__PVT__m_atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2023)->__VnoInFunc_put(vlSymsp, 1U);
    this->__PVT__m_process = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_lsb_pos;
    QData/*63:0*/ __VlefCall_0__get_reset;
    IData/*31:0*/ unnamedblk280__DOT__i;
    unnamedblk280__DOT__i = 0;
    IData/*31:0*/ unnamedblk280__DOT__i__Vloopsize;
    unnamedblk280__DOT__i__Vloopsize = 0;
    get_reset__Vfuncrtn = 0ULL;
    unnamedblk280__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk280__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk280__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk280__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2036)->__VnoInFunc_get_reset(vlSymsp, kind, __VlefCall_0__get_reset);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk280__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2036)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
        get_reset__Vfuncrtn = (get_reset__Vfuncrtn 
                               | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get_reset, __VlefCall_1__get_lsb_pos));
        if ((unnamedblk280__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk280__DOT__i = ((IData)(1U) + unnamedblk280__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__has_reset;
    IData/*31:0*/ unnamedblk281__DOT__i;
    unnamedblk281__DOT__i = 0;
    IData/*31:0*/ unnamedblk281__DOT__i__Vloopsize;
    unnamedblk281__DOT__i__Vloopsize = 0;
    {
        has_reset__Vfuncrtn = 0U;
        has_reset__Vfuncrtn = 0U;
        unnamedblk281__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk281__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk281__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk281__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2047)->__VnoInFunc_has_reset(vlSymsp, kind, (IData)(__SYM__delete), __VlefCall_0__has_reset);
            has_reset__Vfuncrtn = ((IData)(has_reset__Vfuncrtn) 
                                   | (IData)(__VlefCall_0__has_reset));
            if (((~ (IData)(__SYM__delete)) & (IData)(has_reset__Vfuncrtn))) {
                has_reset__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk281__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk281__DOT__i = ((IData)(1U) 
                                         + unnamedblk281__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_lsb_pos;
    IData/*31:0*/ unnamedblk282__DOT__i;
    unnamedblk282__DOT__i = 0;
    IData/*31:0*/ unnamedblk282__DOT__i__Vloopsize;
    unnamedblk282__DOT__i__Vloopsize = 0;
    unnamedblk282__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk282__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk282__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk282__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2059)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_0__get_lsb_pos);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk282__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2059)->__VnoInFunc_set_reset(vlSymsp, 
                                                                                VL_SHIFTR_QQI(64,64,32, value, __VlefCall_0__get_lsb_pos), kind);
        if ((unnamedblk282__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk282__DOT__i = ((IData)(1U) + unnamedblk282__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__needs_update;
    IData/*31:0*/ unnamedblk283__DOT__i;
    unnamedblk283__DOT__i = 0;
    IData/*31:0*/ unnamedblk283__DOT__i__Vloopsize;
    unnamedblk283__DOT__i__Vloopsize = 0;
    {
        needs_update__Vfuncrtn = 0U;
        needs_update__Vfuncrtn = 0U;
        unnamedblk283__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk283__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk283__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk283__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2073)->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
            if (__VlefCall_0__needs_update) {
                needs_update__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk283__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk283__DOT__i = ((IData)(1U) 
                                         + unnamedblk283__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__222__status;
    __Vtask_write__222__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_2__get_lsb_pos;
    QData/*63:0*/ __VlefCall_1__XupdateX;
    CData/*0:0*/ __VlefCall_0__needs_update;
    IData/*31:0*/ unnamedblk284__DOT__i;
    unnamedblk284__DOT__i = 0;
    IData/*31:0*/ unnamedblk284__DOT__i__Vloopsize;
    unnamedblk284__DOT__i__Vloopsize = 0;
    QData/*63:0*/ upd;
    {
        status = 0U;
        upd = 0ULL;
        status = 0U;
        this->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
        if ((1U & (~ (IData)(__VlefCall_0__needs_update)))) {
            goto __Vlabel0;
        }
        upd = 0ULL;
        unnamedblk284__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk284__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk284__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk284__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2100)->__VnoInFunc_XupdateX(vlSymsp, __VlefCall_1__XupdateX);
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk284__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2100)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
            upd = (upd | VL_SHIFTL_QQI(64,64,32, __VlefCall_1__XupdateX, __VlefCall_2__get_lsb_pos));
            if ((unnamedblk284__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk284__DOT__i = ((IData)(1U) 
                                         + unnamedblk284__DOT__i);
            }
        }
        co_await this->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__222__status, upd, path, map, parent, prior, extension, fname, lineno);
        status = __Vtask_write__222__status;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_set(vlProcess, vlSymsp, value, ""s, 0U);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2127)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this};
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2128)->__PVT__element_kind = 0U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2129)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2130)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2131)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2132)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2133)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2134)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2135)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2136)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2137)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2141)
        ->__PVT__status;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__230__map_info;
    IData/*31:0*/ __Vtask_get_lsb_pos__233__Vfuncout;
    __Vtask_get_lsb_pos__233__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__247__Vfuncout;
    __Vtask_get_lsb_pos__247__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__248__Vfuncout;
    __Vtask_get_n_bits__248__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__272__verbosity;
    __Vfunc_uvm_report_enabled__272__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__272__severity;
    __Vfunc_uvm_report_enabled__272__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__272____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__272____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__273__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__274__Vfuncout;
    __Vtask_uvm_report_enabled__274__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__278__verbosity;
    __Vtask_uvm_report_info__278__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__278__line;
    __Vtask_uvm_report_info__278__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__279__Vfuncout;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_10__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_9__get_backdoor;
    std::string __VlefCond_8;
    std::string __VlefCall_7__get_full_name;
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    CData/*0:0*/ __VlefCall_3__get_auto_predict;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_2__get_sequencer;
    IData/*31:0*/ __VlefCall_1__get_n_bits;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    QData/*63:0*/ pre_write_callbacks__DOT__msk;
    IData/*31:0*/ pre_write_callbacks__DOT__lsb;
    IData/*31:0*/ pre_write_callbacks__DOT__unnamedblk285__DOT__i;
    pre_write_callbacks__DOT__unnamedblk285__DOT__i = 0;
    IData/*31:0*/ pre_write_callbacks__DOT__unnamedblk285__DOT__i__Vloopsize;
    pre_write_callbacks__DOT__unnamedblk285__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38> pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__unnamedblk287__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk288__DOT__cb;
    QData/*63:0*/ unnamedblk289__DOT__final_val;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk289__DOT__bkdr;
    IData/*31:0*/ unnamedblk289__DOT__unnamedblk290__DOT__i;
    unnamedblk289__DOT__unnamedblk290__DOT__i = 0;
    IData/*31:0*/ unnamedblk289__DOT__unnamedblk290__DOT__i__Vloopsize;
    unnamedblk289__DOT__unnamedblk290__DOT__i__Vloopsize = 0;
    QData/*63:0*/ unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__field_val;
    IData/*31:0*/ unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__lsb;
    IData/*31:0*/ unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__sz;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk292__DOT__system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk292__DOT__unnamedblk293__DOT__fd;
    IData/*31:0*/ unnamedblk292__DOT__unnamedblk294__DOT__status;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk295__DOT__cb;
    IData/*31:0*/ unnamedblk296__DOT__i;
    unnamedblk296__DOT__i = 0;
    IData/*31:0*/ unnamedblk296__DOT__i__Vloopsize;
    unnamedblk296__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38> unnamedblk296__DOT__unnamedblk297__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk296__DOT__unnamedblk297__DOT__f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk296__DOT__unnamedblk297__DOT__unnamedblk298__DOT__cb;
    std::string unnamedblk299__DOT__path_s;
    std::string unnamedblk299__DOT__value_s;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi35> cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    QData/*63:0*/ value;
    {
        cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi35, vlSymsp, 
                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this});
        value = 0ULL;
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2156)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2157)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__230__map_info, "write()"s, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__230__map_info;
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2166)->__PVT__value.atWrite(0U) 
            = (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2166)
               ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                        - 1ULL));
        value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2167)
            ->__PVT__value.at(0U);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2169)->__PVT__status = 0U;
        pre_write_callbacks__DOT__msk = 0ULL;
        pre_write_callbacks__DOT__lsb = 0U;
        pre_write_callbacks__DOT__unnamedblk285__DOT__i = 0U;
        while (VL_LTS_III(32, pre_write_callbacks__DOT__unnamedblk285__DOT__i, this->__PVT__m_fields.size())) {
            pre_write_callbacks__DOT__unnamedblk285__DOT__i__Vloopsize 
                = this->__PVT__m_fields.size();
            pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__cbs 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38, vlSymsp, this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk285__DOT__i));
            pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__f 
                = this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk285__DOT__i);
            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2179)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__233__Vfuncout);
            pre_write_callbacks__DOT__lsb = __Vtask_get_lsb_pos__233__Vfuncout;
            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2180)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
            pre_write_callbacks__DOT__msk = VL_SHIFTL_QQI(64,64,32, 
                                                          (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                           - 1ULL), pre_write_callbacks__DOT__lsb);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2181)->__PVT__value.atWrite(0U) 
                = VL_SHIFTR_QQI(64,64,32, (value & pre_write_callbacks__DOT__msk), pre_write_callbacks__DOT__lsb);
            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2182)->__VnoInFunc_pre_write(vlSymsp, rw);
            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2183)->__VnoInFunc_first(vlProcess, vlSymsp, pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__unnamedblk287__DOT__cb);
            while ((VlNull{} != pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__unnamedblk287__DOT__cb)) {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2184)->__PVT__element 
                    = pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__f;
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2185)->__PVT__element_kind = 1U;
                VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__unnamedblk287__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2186)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2183)->__VnoInFunc_next(vlProcess, vlSymsp, pre_write_callbacks__DOT__unnamedblk285__DOT__unnamedblk286__DOT__unnamedblk287__DOT__cb);
            }
            value = ((value & (~ pre_write_callbacks__DOT__msk)) 
                     | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2189)
                                     ->__PVT__value.at(0U), pre_write_callbacks__DOT__lsb));
            if ((pre_write_callbacks__DOT__unnamedblk285__DOT__i__Vloopsize 
                 <= this->__PVT__m_fields.size())) {
                pre_write_callbacks__DOT__unnamedblk285__DOT__i 
                    = ((IData)(1U) + pre_write_callbacks__DOT__unnamedblk285__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2192)->__PVT__element 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this};
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2193)->__PVT__element_kind = 0U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2194)->__PVT__value.atWrite(0U) 
            = value;
        this->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2198)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk288__DOT__cb);
        while ((VlNull{} != unnamedblk288__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk288__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2199)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2198)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk288__DOT__cb);
        }
        if ((0U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2201)
             ->__PVT__status)) {
            this->__PVT__m_write_in_progress = 0U;
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            goto __Vlabel0;
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2210)
             ->__PVT__path)) {
            unnamedblk289__DOT__final_val = 0ULL;
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk289__DOT__bkdr);
            value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2217)
                ->__PVT__value.at(0U);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2220)->__PVT__kind = 0U;
            if ((VlNull{} != unnamedblk289__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk289__DOT__bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2222)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
            }
            if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2226)
                 ->__PVT__status)) {
                this->__PVT__m_write_in_progress = 0U;
                goto __Vlabel0;
            }
            unnamedblk289__DOT__unnamedblk290__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk289__DOT__unnamedblk290__DOT__i, this->__PVT__m_fields.size())) {
                unnamedblk289__DOT__unnamedblk290__DOT__i__Vloopsize 
                    = this->__PVT__m_fields.size();
                unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__field_val = 0ULL;
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk289__DOT__unnamedblk290__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2234)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__247__Vfuncout);
                unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__lsb 
                    = __Vtask_get_lsb_pos__247__Vfuncout;
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk289__DOT__unnamedblk290__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2235)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__248__Vfuncout);
                unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__sz 
                    = __Vtask_get_n_bits__248__Vfuncout;
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk289__DOT__unnamedblk290__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2236)->__VnoInFunc_XpredictX(vlProcess, vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2236)
                                                                                ->__PVT__value.at(0U), unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__sz) 
                                                                                - 1ULL)), 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__sz) 
                                                                                - 1ULL)), VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2238)
                                                                                ->__PVT__local_map, unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__field_val);
                unnamedblk289__DOT__final_val = (unnamedblk289__DOT__final_val 
                                                 | VL_SHIFTL_QQI(64,64,32, unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__field_val, unnamedblk289__DOT__unnamedblk290__DOT__unnamedblk291__DOT__lsb));
                if ((unnamedblk289__DOT__unnamedblk290__DOT__i__Vloopsize 
                     <= this->__PVT__m_fields.size())) {
                    unnamedblk289__DOT__unnamedblk290__DOT__i 
                        = ((IData)(1U) + unnamedblk289__DOT__unnamedblk290__DOT__i);
                }
            }
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2242)->__PVT__kind = 1U;
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2243)->__PVT__value.atWrite(0U) 
                = unnamedblk289__DOT__final_val;
            if ((VlNull{} != unnamedblk289__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk289__DOT__bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2246)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
            }
            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
        } else if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2210)
                    ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2255)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2255)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk292__DOT__system_map);
            this->__PVT__m_is_busy = 1U;
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2260)
                 ->__PVT__frontdoor)) {
                unnamedblk292__DOT__unnamedblk293__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2261)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk292__DOT__unnamedblk293__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2262)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk292__DOT__unnamedblk293__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2263)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk292__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2264)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_2__get_sequencer);
                    VL_NULL_CHECK(unnamedblk292__DOT__unnamedblk293__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2264)->__PVT__sequencer 
                        = __VlefCall_2__get_sequencer;
                }
                co_await VL_NULL_CHECK(unnamedblk292__DOT__unnamedblk293__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2265)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk292__DOT__unnamedblk293__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2265)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2265)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2271)
                                       ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2271)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            }
            this->__PVT__m_is_busy = 0U;
            VL_NULL_CHECK(unnamedblk292__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2277)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_3__get_auto_predict);
            if (__VlefCall_3__get_auto_predict) {
                unnamedblk292__DOT__unnamedblk294__DOT__status = 0U;
                if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2279)
                     ->__PVT__status)) {
                    this->__VnoInFunc_sample(vlSymsp, value, 0xffffffffffffffffULL, 0U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2280)
                                             ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2281)->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2281)
                                                                                ->__PVT__offset, 0U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2281)
                                                                                ->__PVT__map);
                }
                unnamedblk292__DOT__unnamedblk294__DOT__status 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2284)
                    ->__PVT__status;
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2286)->__PVT__status 
                    = unnamedblk292__DOT__unnamedblk294__DOT__status;
            }
        }
        value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2292)
            ->__PVT__value.at(0U);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2295)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk295__DOT__cb);
        while ((VlNull{} != unnamedblk295__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk295__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2296)->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2295)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk295__DOT__cb);
        }
        this->__VnoInFunc_post_write(vlSymsp, rw);
        unnamedblk296__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk296__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk296__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            unnamedblk296__DOT__unnamedblk297__DOT__cbs 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38, vlSymsp, this->__PVT__m_fields.at(unnamedblk296__DOT__i));
            unnamedblk296__DOT__unnamedblk297__DOT__f 
                = this->__PVT__m_fields.at(unnamedblk296__DOT__i);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2304)->__PVT__element 
                = unnamedblk296__DOT__unnamedblk297__DOT__f;
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2305)->__PVT__element_kind = 1U;
            VL_NULL_CHECK(unnamedblk296__DOT__unnamedblk297__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2306)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
            VL_NULL_CHECK(unnamedblk296__DOT__unnamedblk297__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2306)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2306)->__PVT__value.atWrite(0U) 
                = (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_4__get_lsb_pos) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                      - 1ULL));
            VL_NULL_CHECK(unnamedblk296__DOT__unnamedblk297__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2308)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk296__DOT__unnamedblk297__DOT__unnamedblk298__DOT__cb);
            while ((VlNull{} != unnamedblk296__DOT__unnamedblk297__DOT__unnamedblk298__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk296__DOT__unnamedblk297__DOT__unnamedblk298__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2309)->__VnoInFunc_post_write(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk296__DOT__unnamedblk297__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2308)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk296__DOT__unnamedblk297__DOT__unnamedblk298__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk296__DOT__unnamedblk297__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2310)->__VnoInFunc_post_write(vlSymsp, rw);
            if ((unnamedblk296__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk296__DOT__i = ((IData)(1U) 
                                         + unnamedblk296__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2313)->__PVT__value.atWrite(0U) 
            = value;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2314)->__PVT__element 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this};
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2315)->__PVT__element_kind = 0U;
        this->__Vfunc_uvm_report_enabled__272__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__272__severity = 0U;
        __Vfunc_uvm_report_enabled__272__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__273__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__273__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__272__verbosity, (IData)(__Vfunc_uvm_report_enabled__272__severity), this->__Vfunc_uvm_report_enabled__272__id, __Vtask_uvm_report_enabled__274__Vfuncout);
        __Vfunc_uvm_report_enabled__272____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__274__Vfuncout;
        __VlefCall_6__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__272____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_6__uvm_report_enabled) {
            unnamedblk299__DOT__path_s = ""s;
            unnamedblk299__DOT__value_s = ""s;
            if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2320)
                 ->__PVT__path)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2321)
                     ->__PVT__frontdoor)) {
                    __VlefCond_8 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2322)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2322)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                    __VlefCond_8 = VL_CONCATN_NNN("map "s, __VlefCall_7__get_full_name);
                }
                unnamedblk299__DOT__path_s = __VlefCond_8;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_9__get_backdoor);
                if ((VlNull{} != __VlefCall_9__get_backdoor)) {
                    __Vtemp_2[0U] = 0x646f6f72U;
                    __Vtemp_2[1U] = 0x6261636bU;
                    __Vtemp_2[2U] = 0x73657220U;
                    __Vtemp_2[3U] = 0x00000075U;
                } else {
                    __Vtemp_2[0U] = 0x646f6f72U;
                    __Vtemp_2[1U] = 0x6261636bU;
                    __Vtemp_2[2U] = 0x44504920U;
                    __Vtemp_2[3U] = 0U;
                }
                unnamedblk299__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_2);
            }
            VL_SFORMAT_NX(unnamedblk299__DOT__value_s
                          ,"=0x%0h",1, '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2326)
                          ->__PVT__value.at(0U));
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
            __Vtask_uvm_report_info__278__line = 0U;
            this->__Vtask_uvm_report_info__278__filename = ""s;
            __Vtask_uvm_report_info__278__verbosity = 0x0000012cU;
            this->__Vtask_uvm_report_info__278__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Wrote register via "s, unnamedblk299__DOT__path_s), ": "s), __VlefCall_10__get_full_name), unnamedblk299__DOT__value_s));
            this->__Vtask_uvm_report_info__278__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__279__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__279__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__278__id, this->__Vtask_uvm_report_info__278__message, __Vtask_uvm_report_info__278__verbosity, this->__Vtask_uvm_report_info__278__filename, __Vtask_uvm_report_info__278__line);
        }
        this->__PVT__m_write_in_progress = 0U;
        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vtask_XreadX__283__status;
    __Vtask_XreadX__283__status = 0;
    QData/*63:0*/ __Vtask_XreadX__283__value;
    __Vtask_XreadX__283__value = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    status = 0U;
    value = 0ULL;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__283__status, __Vtask_XreadX__283__value, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_XreadX__283__status;
    value = __Vtask_XreadX__283__value;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2370)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this};
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2371)->__PVT__element_kind = 0U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2372)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2373)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2374)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2375)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2376)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2377)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2378)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2379)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2380)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2384)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2385)
        ->__PVT__value.at(0U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__289__map_info;
    CData/*0:0*/ __Vtask_do_check__316__Vfuncout;
    __Vtask_do_check__316__Vfuncout = 0;
    CData/*0:0*/ __Vtask_do_check__326__Vfuncout;
    __Vtask_do_check__326__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__341__verbosity;
    __Vfunc_uvm_report_enabled__341__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__341__severity;
    __Vfunc_uvm_report_enabled__341__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__341____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__341____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__342__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__343__Vfuncout;
    __Vtask_uvm_report_enabled__343__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__347__verbosity;
    __Vtask_uvm_report_info__347__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__347__line;
    __Vtask_uvm_report_info__347__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__348__Vfuncout;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_20__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_19__get_backdoor;
    std::string __VlefCond_18;
    std::string __VlefCall_17__get_full_name;
    CData/*0:0*/ __VlefCall_16__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_15__get_n_bits;
    IData/*31:0*/ __VlefCall_14__get_lsb_pos;
    CData/*0:0*/ __VlefCall_13__get_check_on_read;
    CData/*0:0*/ __VlefCall_12__get_auto_predict;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_11__get_sequencer;
    CData/*0:0*/ __VlefCall_10__get_check_on_read;
    CData/*0:0*/ __VlefCall_9__get_check_on_read;
    IData/*31:0*/ __VlefCall_8__get_lsb_pos;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    IData/*31:0*/ __VlefCall_6__get_lsb_pos;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    IData/*31:0*/ __VlefCall_3__get_n_bits;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_2__backdoor;
    CData/*0:0*/ __VlefCall_1__get_check_on_read;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    IData/*31:0*/ unnamedblk300__DOT__i;
    unnamedblk300__DOT__i = 0;
    IData/*31:0*/ unnamedblk300__DOT__i__Vloopsize;
    unnamedblk300__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38> unnamedblk300__DOT__unnamedblk301__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk300__DOT__unnamedblk301__DOT__f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk300__DOT__unnamedblk301__DOT__unnamedblk302__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk303__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk304__DOT__bkdr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk304__DOT__map;
    QData/*63:0*/ unnamedblk304__DOT__unnamedblk305__DOT__wo_mask;
    IData/*31:0*/ unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i;
    unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i = 0;
    IData/*31:0*/ unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i__Vloopsize;
    unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i__Vloopsize = 0;
    std::string unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc;
    QData/*63:0*/ unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk308__DOT__saved;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk309__DOT__system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk309__DOT__unnamedblk310__DOT__fd;
    IData/*31:0*/ unnamedblk309__DOT__unnamedblk311__DOT__status;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk312__DOT__cb;
    IData/*31:0*/ unnamedblk313__DOT__i;
    unnamedblk313__DOT__i = 0;
    IData/*31:0*/ unnamedblk313__DOT__i__Vloopsize;
    unnamedblk313__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38> unnamedblk313__DOT__unnamedblk314__DOT__cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk313__DOT__unnamedblk314__DOT__f;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__cb;
    std::string unnamedblk316__DOT__path_s;
    std::string unnamedblk316__DOT__value_s;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi35> cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    QData/*63:0*/ value;
    QData/*63:0*/ exp;
    {
        cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi35, vlSymsp, 
                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this});
        value = 0ULL;
        exp = 0ULL;
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2399)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2400)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__289__map_info, "read()"s, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__289__map_info;
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_read_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2407)->__PVT__status = 0U;
        unnamedblk300__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk300__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk300__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            unnamedblk300__DOT__unnamedblk301__DOT__cbs 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38, vlSymsp, this->__PVT__m_fields.at(unnamedblk300__DOT__i));
            unnamedblk300__DOT__unnamedblk301__DOT__f 
                = this->__PVT__m_fields.at(unnamedblk300__DOT__i);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2413)->__PVT__element 
                = unnamedblk300__DOT__unnamedblk301__DOT__f;
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2414)->__PVT__element_kind = 1U;
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk300__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2415)->__VnoInFunc_pre_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk300__DOT__unnamedblk301__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2416)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk300__DOT__unnamedblk301__DOT__unnamedblk302__DOT__cb);
            while ((VlNull{} != unnamedblk300__DOT__unnamedblk301__DOT__unnamedblk302__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk300__DOT__unnamedblk301__DOT__unnamedblk302__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2417)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk300__DOT__unnamedblk301__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2416)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk300__DOT__unnamedblk301__DOT__unnamedblk302__DOT__cb);
            }
            if ((unnamedblk300__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk300__DOT__i = ((IData)(1U) 
                                         + unnamedblk300__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2420)->__PVT__element 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this};
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2421)->__PVT__element_kind = 0U;
        this->__VnoInFunc_pre_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2425)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk303__DOT__cb);
        while ((VlNull{} != unnamedblk303__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk303__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2426)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2425)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk303__DOT__cb);
        }
        if ((0U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2428)
             ->__PVT__status)) {
            this->__PVT__m_read_in_progress = 0U;
            goto __Vlabel0;
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2435)
             ->__PVT__path)) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk304__DOT__bkdr);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, unnamedblk304__DOT__map);
            VL_NULL_CHECK(unnamedblk304__DOT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2442)->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_1__get_check_on_read);
            if (__VlefCall_1__get_check_on_read) {
                this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, exp);
            }
            if ((VlNull{} != unnamedblk304__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk304__DOT__bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2445)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
            }
            value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2449)
                ->__PVT__value.at(0U);
            if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2452)
                 ->__PVT__status)) {
                unnamedblk304__DOT__unnamedblk305__DOT__wo_mask = 0ULL;
                unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_2__backdoor);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2457)->__VnoInFunc_get_access(vlProcess, vlSymsp, __VlefCall_2__backdoor, unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc);
                    if (((((("RC"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc) 
                            | ("WRC"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc)) 
                           | ("WSRC"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc)) 
                          | ("W1SRC"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc)) 
                         | ("W0SRC"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc))) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2463)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2464)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
                        value = (value & (~ VL_SHIFTL_QQI(64,64,32, 
                                                          (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_3__get_n_bits) 
                                                           - 1ULL), __VlefCall_4__get_lsb_pos)));
                    } else if (((((("RS"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc) 
                                   | ("WRS"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc)) 
                                  | ("WCRS"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc)) 
                                 | ("W1CRS"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc)) 
                                | ("W0CRS"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc))) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2471)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2472)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
                        value = (value | VL_SHIFTL_QQI(64,64,32, 
                                                       (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                                                        - 1ULL), __VlefCall_6__get_lsb_pos));
                    } else if ((((("WO"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc) 
                                  | ("WOC"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc)) 
                                 | ("WOS"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc)) 
                                | ("WO1"s == unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__acc))) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2478)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2479)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
                        unnamedblk304__DOT__unnamedblk305__DOT__wo_mask 
                            = (unnamedblk304__DOT__unnamedblk305__DOT__wo_mask 
                               | VL_SHIFTL_QQI(64,64,32, 
                                               (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_7__get_n_bits) 
                                                - 1ULL), __VlefCall_8__get_lsb_pos));
                    }
                    if ((unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i 
                            = ((IData)(1U) + unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__i);
                    }
                }
                if ((value != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2483)
                     ->__PVT__value.at(0U))) {
                    unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk308__DOT__saved = 0ULL;
                    unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk308__DOT__saved 
                        = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2485)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2486)->__PVT__value.atWrite(0U) 
                        = value;
                    if ((VlNull{} != unnamedblk304__DOT__bkdr)) {
                        VL_NULL_CHECK(unnamedblk304__DOT__bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2488)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                    } else {
                        this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                    }
                    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2491)->__PVT__value.atWrite(0U) 
                        = unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk308__DOT__saved;
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2494)->__PVT__value.atWrite(0U) 
                    = (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2494)
                       ->__PVT__value.at(0U) & (~ unnamedblk304__DOT__unnamedblk305__DOT__wo_mask));
                VL_NULL_CHECK(unnamedblk304__DOT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2496)->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_9__get_check_on_read);
                if (((IData)(__VlefCall_9__get_check_on_read) 
                     && (1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2497)
                         ->__PVT__status))) {
                    this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2498)
                                               ->__PVT__value.at(0U), unnamedblk304__DOT__map, __Vtask_do_check__316__Vfuncout);
                }
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
            }
        } else if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2435)
                    ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2508)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2508)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk309__DOT__system_map);
            this->__PVT__m_is_busy = 1U;
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2512)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2512)->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_10__get_check_on_read);
            if (__VlefCall_10__get_check_on_read) {
                this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, exp);
            }
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2515)
                 ->__PVT__frontdoor)) {
                unnamedblk309__DOT__unnamedblk310__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2516)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk309__DOT__unnamedblk310__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2517)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk309__DOT__unnamedblk310__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2518)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk309__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2519)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_11__get_sequencer);
                    VL_NULL_CHECK(unnamedblk309__DOT__unnamedblk310__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2519)->__PVT__sequencer 
                        = __VlefCall_11__get_sequencer;
                }
                co_await VL_NULL_CHECK(unnamedblk309__DOT__unnamedblk310__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2520)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk309__DOT__unnamedblk310__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2520)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2520)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2525)
                                       ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2525)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            }
            this->__PVT__m_is_busy = 0U;
            VL_NULL_CHECK(unnamedblk309__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2530)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_12__get_auto_predict);
            if (__VlefCall_12__get_auto_predict) {
                unnamedblk309__DOT__unnamedblk311__DOT__status = 0U;
                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2532)
                              ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2532)->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_13__get_check_on_read);
                if (((IData)(__VlefCall_13__get_check_on_read) 
                     && (1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2533)
                         ->__PVT__status))) {
                    this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2534)
                                               ->__PVT__value.at(0U), unnamedblk309__DOT__system_map, __Vtask_do_check__326__Vfuncout);
                }
                if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2537)
                     ->__PVT__status)) {
                    this->__VnoInFunc_sample(vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2538)
                                             ->__PVT__value.at(0U), 0xffffffffffffffffULL, 1U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2538)
                                             ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2539)->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2539)
                                                                                ->__PVT__offset, 1U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2539)
                                                                                ->__PVT__map);
                }
                unnamedblk309__DOT__unnamedblk311__DOT__status 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2542)
                    ->__PVT__status;
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2544)->__PVT__status 
                    = unnamedblk309__DOT__unnamedblk311__DOT__status;
            }
        }
        value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2550)
            ->__PVT__value.at(0U);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2553)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk312__DOT__cb);
        while ((VlNull{} != unnamedblk312__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk312__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2554)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2553)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk312__DOT__cb);
        }
        this->__VnoInFunc_post_read(vlSymsp, rw);
        unnamedblk313__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk313__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk313__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            unnamedblk313__DOT__unnamedblk314__DOT__cbs 
                = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38, vlSymsp, this->__PVT__m_fields.at(unnamedblk313__DOT__i));
            unnamedblk313__DOT__unnamedblk314__DOT__f 
                = this->__PVT__m_fields.at(unnamedblk313__DOT__i);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2562)->__PVT__element 
                = unnamedblk313__DOT__unnamedblk314__DOT__f;
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2563)->__PVT__element_kind = 1U;
            VL_NULL_CHECK(unnamedblk313__DOT__unnamedblk314__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2564)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_14__get_lsb_pos);
            VL_NULL_CHECK(unnamedblk313__DOT__unnamedblk314__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2564)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_15__get_n_bits);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2564)->__PVT__value.atWrite(0U) 
                = (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_14__get_lsb_pos) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_15__get_n_bits) 
                      - 1ULL));
            VL_NULL_CHECK(unnamedblk313__DOT__unnamedblk314__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2566)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__cb);
            while ((VlNull{} != unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2567)->__VnoInFunc_post_read(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk313__DOT__unnamedblk314__DOT__cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2566)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk313__DOT__unnamedblk314__DOT__f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2568)->__VnoInFunc_post_read(vlSymsp, rw);
            if ((unnamedblk313__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk313__DOT__i = ((IData)(1U) 
                                         + unnamedblk313__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2571)->__PVT__value.atWrite(0U) 
            = value;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2572)->__PVT__element 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this};
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2573)->__PVT__element_kind = 0U;
        this->__Vfunc_uvm_report_enabled__341__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__341__severity = 0U;
        __Vfunc_uvm_report_enabled__341__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__342__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__342__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__341__verbosity, (IData)(__Vfunc_uvm_report_enabled__341__severity), this->__Vfunc_uvm_report_enabled__341__id, __Vtask_uvm_report_enabled__343__Vfuncout);
        __Vfunc_uvm_report_enabled__341____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__343__Vfuncout;
        __VlefCall_16__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__341____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_16__uvm_report_enabled) {
            unnamedblk316__DOT__path_s = ""s;
            unnamedblk316__DOT__value_s = ""s;
            if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2578)
                 ->__PVT__path)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2579)
                     ->__PVT__frontdoor)) {
                    __VlefCond_18 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2580)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2580)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    __VlefCond_18 = VL_CONCATN_NNN("map "s, __VlefCall_17__get_full_name);
                }
                unnamedblk316__DOT__path_s = __VlefCond_18;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_19__get_backdoor);
                if ((VlNull{} != __VlefCall_19__get_backdoor)) {
                    __Vtemp_2[0U] = 0x646f6f72U;
                    __Vtemp_2[1U] = 0x6261636bU;
                    __Vtemp_2[2U] = 0x73657220U;
                    __Vtemp_2[3U] = 0x00000075U;
                } else {
                    __Vtemp_2[0U] = 0x646f6f72U;
                    __Vtemp_2[1U] = 0x6261636bU;
                    __Vtemp_2[2U] = 0x44504920U;
                    __Vtemp_2[3U] = 0U;
                }
                unnamedblk316__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_2);
            }
            VL_SFORMAT_NX(unnamedblk316__DOT__value_s
                          ,"=%0h",1, '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2584)
                          ->__PVT__value.at(0U));
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
            __Vtask_uvm_report_info__347__line = 0U;
            this->__Vtask_uvm_report_info__347__filename = ""s;
            __Vtask_uvm_report_info__347__verbosity = 0x0000012cU;
            this->__Vtask_uvm_report_info__347__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Read  register via "s, unnamedblk316__DOT__path_s), ": "s), __VlefCall_20__get_full_name), unnamedblk316__DOT__value_s));
            this->__Vtask_uvm_report_info__347__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__348__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__348__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__347__id, this->__Vtask_uvm_report_info__347__message, __Vtask_uvm_report_info__347__verbosity, this->__Vtask_uvm_report_info__347__filename, __Vtask_uvm_report_info__347__line);
        }
        this->__PVT__m_read_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__353__verbosity;
    __Vfunc_uvm_report_enabled__353__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__353__severity;
    __Vfunc_uvm_report_enabled__353__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__353____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__353____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__354__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__355__Vfuncout;
    __Vtask_uvm_report_enabled__355__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__357__verbosity;
    __Vtask_uvm_report_warning__357__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__357__line;
    __Vtask_uvm_report_warning__357__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__358__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__363__verbosity;
    __Vfunc_uvm_report_enabled__363__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__363__severity;
    __Vfunc_uvm_report_enabled__363__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__363____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__363____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__364__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__365__Vfuncout;
    __Vtask_uvm_report_enabled__365__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__370__verbosity;
    __Vfunc_uvm_report_enabled__370__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__370__severity;
    __Vfunc_uvm_report_enabled__370__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__370____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__370____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__371__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__372__Vfuncout;
    __Vtask_uvm_report_enabled__372__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    CData/*0:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_type_name;
    CData/*0:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_type_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_7__get_local_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_6__backdoor;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_3;
    CData/*0:0*/ __VlefCall_2__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_1__get_backdoor;
    IData/*31:0*/ __VlefCall_0__get_default_path;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        if ((3U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2602)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2603)->__VnoInFunc_get_default_path(vlSymsp, __VlefCall_0__get_default_path);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2603)->__PVT__path 
                = __VlefCall_0__get_default_path;
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2605)
             ->__PVT__path)) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_1__get_backdoor);
            __VlefLogAnd_3 = (VlNull{} == __VlefCall_1__get_backdoor);
            if (__VlefLogAnd_3) {
                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_2__has_hdl_path);
                __VlefLogAnd_3 = (1U & (~ (IData)(__VlefCall_2__has_hdl_path)));
            }
            if (__VlefLogAnd_3) {
                this->__Vfunc_uvm_report_enabled__353__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__353__severity = 1U;
                __Vfunc_uvm_report_enabled__353__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__354__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__354__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__353__verbosity, (IData)(__Vfunc_uvm_report_enabled__353__severity), this->__Vfunc_uvm_report_enabled__353__id, __Vtask_uvm_report_enabled__355__Vfuncout);
                __Vfunc_uvm_report_enabled__353____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__355__Vfuncout;
                __VlefCall_4__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__353____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_4__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    __Vtask_uvm_report_warning__357__line = 0x00000a31U;
                    this->__Vtask_uvm_report_warning__357__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__357__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__357__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for register '"s, __VlefCall_5__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__357__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__358__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vfunc_get__358__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__357__id, this->__Vtask_uvm_report_warning__357__message, __Vtask_uvm_report_warning__357__verbosity, this->__Vtask_uvm_report_warning__357__filename, __Vtask_uvm_report_warning__357__line);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2610)->__PVT__path = 0U;
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_6__backdoor);
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2613)->__PVT__map 
                    = __VlefCall_6__backdoor;
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2617)
             ->__PVT__path)) {
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2619)
                                            ->__PVT__map, caller, __VlefCall_7__get_local_map);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2619)->__PVT__local_map 
                = __VlefCall_7__get_local_map;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2621)
                 ->__PVT__local_map)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                this->__Vfunc_uvm_report_enabled__363__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                __Vfunc_uvm_report_enabled__363__severity = 2U;
                __Vfunc_uvm_report_enabled__363__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__364__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__364__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__363__verbosity, (IData)(__Vfunc_uvm_report_enabled__363__severity), this->__Vfunc_uvm_report_enabled__363__id, __Vtask_uvm_report_enabled__365__Vfuncout);
                __Vfunc_uvm_report_enabled__363____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__365__Vfuncout;
                __VlefCall_9__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__363____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_9__uvm_report_enabled) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2624)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2624)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No transactor available to physically access register on map '"s, __VlefCall_11__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x00000a40U);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2625)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2629)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2629)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
            if (((VlNull{} == VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2631)
                  ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2631)
                 ->__PVT__unmapped)) {
                this->__Vfunc_uvm_report_enabled__370__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__370__severity = 2U;
                __Vfunc_uvm_report_enabled__370__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__371__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__371__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__370__verbosity, (IData)(__Vfunc_uvm_report_enabled__370__severity), this->__Vfunc_uvm_report_enabled__370__id, __Vtask_uvm_report_enabled__372__Vfuncout);
                __Vfunc_uvm_report_enabled__370____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__372__Vfuncout;
                __VlefCall_12__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__370____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_12__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2635)
                         ->__PVT__map)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2635)
                                      ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2635)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    } else {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2635)
                                      ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2635)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    }
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_13__get_full_name), "' unmapped in map '"s), __VlefCall_14__get_full_name), "' and does not have a user-defined frontdoor"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x00000a4bU);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2636)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2640)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2641)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2641)
                    ->__PVT__local_map;
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_busy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy\n"); );
    // Body
    is_busy__Vfuncrtn = this->__PVT__m_is_busy;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ busy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX\n"); );
    // Body
    this->__PVT__m_is_busy = busy;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xis_locked_by_fieldX(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &Xis_locked_by_fieldX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xis_locked_by_fieldX\n"); );
    // Body
    Xis_locked_by_fieldX__Vfuncrtn = this->__PVT__m_is_locked_by_field;
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_deposit_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, const VlWide<32>/*1023:0*/ &value, IData/*31:0*/ &uvm_hdl_deposit__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__378__verbosity;
    __Vfunc_uvm_report_enabled__378__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__378__severity;
    __Vfunc_uvm_report_enabled__378__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__378____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__378____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__379__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__380__Vfuncout;
    __Vtask_uvm_report_enabled__380__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__381__verbosity;
    __Vtask_uvm_report_info__381__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__381__line;
    __Vtask_uvm_report_info__381__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__382__Vfuncout;
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_hdl_deposit;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_deposit;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk317__DOT__i;
    unnamedblk317__DOT__i = 0;
    IData/*31:0*/ unnamedblk317__DOT__i__Vloopsize;
    unnamedblk317__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j;
    unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j = 0;
    IData/*31:0*/ unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j__Vloopsize;
    unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j__Vloopsize = 0;
    QData/*63:0*/ unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__unnamedblk320__DOT__slice;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    CData/*0:0*/ ok;
    paths.clear();
    ok = 1U;
    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2673)
                                                           ->__PVT__bd_kind), "."s);
    unnamedblk317__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk317__DOT__i, paths.size())) {
        unnamedblk317__DOT__i__Vloopsize = paths.size();
        unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat 
            = paths.at(unnamedblk317__DOT__i);
        unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j, VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2676)
                          ->__PVT__slices.size())) {
            unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j__Vloopsize 
                = VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2676)
                ->__PVT__slices.size();
            {
                this->__Vfunc_uvm_report_enabled__378__id = "RegMem"s;
                __Vfunc_uvm_report_enabled__378__severity = 0U;
                __Vfunc_uvm_report_enabled__378__verbosity = 0x000001f4U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__379__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__379__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__378__verbosity, (IData)(__Vfunc_uvm_report_enabled__378__severity), this->__Vfunc_uvm_report_enabled__378__id, __Vtask_uvm_report_enabled__380__Vfuncout);
                __Vfunc_uvm_report_enabled__378____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__380__Vfuncout;
                __VlefCall_0__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__378____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_0__uvm_report_enabled) {
                    __Vtask_uvm_report_info__381__line = 0x00000a76U;
                    this->__Vtask_uvm_report_info__381__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_info__381__verbosity = 0x000001f4U;
                    this->__Vtask_uvm_report_info__381__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("backdoor_write to "s, VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2678)
                                                            ->__PVT__slices.at(unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j)
                                                            .__PVT__path));
                    this->__Vtask_uvm_report_info__381__id = "RegMem"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__382__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vfunc_get__382__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__381__id, this->__Vtask_uvm_report_info__381__message, __Vtask_uvm_report_info__381__verbosity, this->__Vtask_uvm_report_info__381__filename, __Vtask_uvm_report_info__381__line);
                }
                if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2680)
                               ->__PVT__slices.at(unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j)
                               .__PVT__offset)) {
                    __Vtemp_1[0U] = (IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2681)
                                            ->__PVT__value.at(0U));
                    __Vtemp_1[1U] = (IData)((VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2681)
                                             ->__PVT__value.at(0U) 
                                             >> 0x00000020U));
                    __Vtemp_1[2U] = 0U;
                    __Vtemp_1[3U] = 0U;
                    __Vtemp_1[4U] = 0U;
                    __Vtemp_1[5U] = 0U;
                    __Vtemp_1[6U] = 0U;
                    __Vtemp_1[7U] = 0U;
                    __Vtemp_1[8U] = 0U;
                    __Vtemp_1[9U] = 0U;
                    __Vtemp_1[10U] = 0U;
                    __Vtemp_1[11U] = 0U;
                    __Vtemp_1[12U] = 0U;
                    __Vtemp_1[13U] = 0U;
                    __Vtemp_1[14U] = 0U;
                    __Vtemp_1[15U] = 0U;
                    __Vtemp_1[16U] = 0U;
                    __Vtemp_1[17U] = 0U;
                    __Vtemp_1[18U] = 0U;
                    __Vtemp_1[19U] = 0U;
                    __Vtemp_1[20U] = 0U;
                    __Vtemp_1[21U] = 0U;
                    __Vtemp_1[22U] = 0U;
                    __Vtemp_1[23U] = 0U;
                    __Vtemp_1[24U] = 0U;
                    __Vtemp_1[25U] = 0U;
                    __Vtemp_1[26U] = 0U;
                    __Vtemp_1[27U] = 0U;
                    __Vtemp_1[28U] = 0U;
                    __Vtemp_1[29U] = 0U;
                    __Vtemp_1[30U] = 0U;
                    __Vtemp_1[31U] = 0U;
                    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_deposit_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_reg), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 0x00000a79U, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2681)
                                                                                ->__PVT__slices.at(unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j)
                                                                                .__PVT__path), __Vtemp_1, __VlefCall_1__uvm_hdl_deposit);
                    ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_deposit);
                    goto __Vlabel0;
                }
                unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__unnamedblk320__DOT__slice = 0ULL;
                unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__unnamedblk320__DOT__slice 
                    = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2686)
                                    ->__PVT__value.at(0U), VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2686)
                                    ->__PVT__slices.at(unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j)
                                    .__PVT__offset);
                unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__unnamedblk320__DOT__slice 
                    = (unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__unnamedblk320__DOT__slice 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2687)
                                        ->__PVT__slices.at(unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j)
                                        .__PVT__size) 
                          - 1ULL));
                __Vtemp_2[0U] = (IData)(unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__unnamedblk320__DOT__slice);
                __Vtemp_2[1U] = (IData)((unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__unnamedblk320__DOT__slice 
                                         >> 0x00000020U));
                __Vtemp_2[2U] = 0U;
                __Vtemp_2[3U] = 0U;
                __Vtemp_2[4U] = 0U;
                __Vtemp_2[5U] = 0U;
                __Vtemp_2[6U] = 0U;
                __Vtemp_2[7U] = 0U;
                __Vtemp_2[8U] = 0U;
                __Vtemp_2[9U] = 0U;
                __Vtemp_2[10U] = 0U;
                __Vtemp_2[11U] = 0U;
                __Vtemp_2[12U] = 0U;
                __Vtemp_2[13U] = 0U;
                __Vtemp_2[14U] = 0U;
                __Vtemp_2[15U] = 0U;
                __Vtemp_2[16U] = 0U;
                __Vtemp_2[17U] = 0U;
                __Vtemp_2[18U] = 0U;
                __Vtemp_2[19U] = 0U;
                __Vtemp_2[20U] = 0U;
                __Vtemp_2[21U] = 0U;
                __Vtemp_2[22U] = 0U;
                __Vtemp_2[23U] = 0U;
                __Vtemp_2[24U] = 0U;
                __Vtemp_2[25U] = 0U;
                __Vtemp_2[26U] = 0U;
                __Vtemp_2[27U] = 0U;
                __Vtemp_2[28U] = 0U;
                __Vtemp_2[29U] = 0U;
                __Vtemp_2[30U] = 0U;
                __Vtemp_2[31U] = 0U;
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_deposit_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_reg), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 0x00000a80U, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2688)
                                                                                ->__PVT__slices.at(unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j)
                                                                                .__PVT__path), __Vtemp_2, __VlefCall_2__uvm_hdl_deposit);
                ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_deposit);
                __Vlabel0: ;
            }
            if ((unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j__Vloopsize 
                 <= VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2676)
                 ->__PVT__slices.size())) {
                unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j 
                    = ((IData)(1U) + unnamedblk317__DOT__unnamedblk318__DOT__unnamedblk319__DOT__j);
            }
        }
        if ((unnamedblk317__DOT__i__Vloopsize <= paths.size())) {
            unnamedblk317__DOT__i = ((IData)(1U) + unnamedblk317__DOT__i);
        }
    }
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2692)->__PVT__status 
        = ((IData)(ok) ? 0U : 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__backdoor_read_func;
    this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __VlefCall_0__backdoor_read_func);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2699)->__PVT__status 
        = __VlefCall_0__backdoor_read_func;
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, VlWide<32>/*1023:0*/ &value, IData/*31:0*/ &uvm_hdl_read__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__388__verbosity;
    __Vfunc_uvm_report_enabled__388__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__388__severity;
    __Vfunc_uvm_report_enabled__388__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__388____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__388____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__389__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__390__Vfuncout;
    __Vtask_uvm_report_enabled__390__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__391__verbosity;
    __Vtask_uvm_report_info__391__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__391__line;
    __Vtask_uvm_report_info__391__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__392__Vfuncout;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__394__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__394__value);
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__395__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__395__value);
    IData/*31:0*/ __Vfunc_uvm_report_enabled__396__verbosity;
    __Vfunc_uvm_report_enabled__396__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__396__severity;
    __Vfunc_uvm_report_enabled__396__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__396____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__396____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__397__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__398__Vfuncout;
    __Vtask_uvm_report_enabled__398__Vfuncout = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__400__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i;
    __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i__Vloopsize;
    __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i__Vloopsize = 0;
    Vcsi2_tb_top_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__unnamedblk220__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__unnamedblk220__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__unnamedblk220__DOT__slice.__PVT__size = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__401__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i;
    __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i__Vloopsize;
    __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i__Vloopsize = 0;
    Vcsi2_tb_top_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__unnamedblk220__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__unnamedblk220__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__unnamedblk220__DOT__slice.__PVT__size = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__403__verbosity;
    __Vfunc_uvm_report_enabled__403__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__403__severity;
    __Vfunc_uvm_report_enabled__403__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__403____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__403____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__404__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__405__Vfuncout;
    __Vtask_uvm_report_enabled__405__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__406__verbosity;
    __Vtask_uvm_report_info__406__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__406__line;
    __Vtask_uvm_report_info__406__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__407__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__uvm_hdl_concat2string;
    std::string __VlefCall_5__uvm_hdl_concat2string;
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_hdl_read;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk321__DOT__i;
    unnamedblk321__DOT__i = 0;
    IData/*31:0*/ unnamedblk321__DOT__i__Vloopsize;
    unnamedblk321__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j;
    unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j = 0;
    IData/*31:0*/ unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j__Vloopsize;
    unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j__Vloopsize = 0;
    QData/*63:0*/ unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__slice;
    IData/*31:0*/ unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__k;
    IData/*31:0*/ unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    QData/*63:0*/ val;
    CData/*0:0*/ ok;
    {
        backdoor_read_func__Vfuncrtn = 0U;
        paths.clear();
        val = 0ULL;
        ok = 1U;
        this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                            VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2709)
                                                               ->__PVT__bd_kind), "."s);
        unnamedblk321__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk321__DOT__i, paths.size())) {
            unnamedblk321__DOT__i__Vloopsize = paths.size();
            unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat 
                = paths.at(unnamedblk321__DOT__i);
            val = 0ULL;
            unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j, VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2713)
                              ->__PVT__slices.size())) {
                unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2713)
                    ->__PVT__slices.size();
                {
                    this->__Vfunc_uvm_report_enabled__388__id = "RegMem"s;
                    __Vfunc_uvm_report_enabled__388__severity = 0U;
                    __Vfunc_uvm_report_enabled__388__verbosity = 0x000001f4U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__389__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__389__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__388__verbosity, (IData)(__Vfunc_uvm_report_enabled__388__severity), this->__Vfunc_uvm_report_enabled__388__id, __Vtask_uvm_report_enabled__390__Vfuncout);
                    __Vfunc_uvm_report_enabled__388____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__390__Vfuncout;
                    __VlefCall_0__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__388____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_0__uvm_report_enabled) {
                        __Vtask_uvm_report_info__391__line = 0x00000a9bU;
                        this->__Vtask_uvm_report_info__391__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__391__verbosity = 0x000001f4U;
                        this->__Vtask_uvm_report_info__391__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("backdoor_read from %s "s, VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2715)
                                                                ->__PVT__slices.at(unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j)
                                                                .__PVT__path));
                        this->__Vtask_uvm_report_info__391__id = "RegMem"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__392__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vfunc_get__392__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__391__id, this->__Vtask_uvm_report_info__391__message, __Vtask_uvm_report_info__391__verbosity, this->__Vtask_uvm_report_info__391__filename, __Vtask_uvm_report_info__391__line);
                    }
                    if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2717)
                                   ->__PVT__slices.at(unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j)
                                   .__PVT__offset)) {
                        Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_reg), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 0x00000a9eU, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2718)
                                                                                ->__PVT__slices.at(unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j)
                                                                                .__PVT__path), __Vfunc_uvm_hdl_read__394__value, __VlefCall_1__uvm_hdl_read);
                        val = (((QData)((IData)(__Vfunc_uvm_hdl_read__394__value[1U])) 
                                << 0x00000020U) | (QData)((IData)(__Vfunc_uvm_hdl_read__394__value[0U])));
                        ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_read);
                        goto __Vlabel1;
                    }
                    unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__slice = 0ULL;
                    unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__k 
                        = VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2723)
                        ->__PVT__slices.at(unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j)
                        .__PVT__offset;
                    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_reg), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 0x00000aa5U, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2725)
                                                                                ->__PVT__slices.at(unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j)
                                                                                .__PVT__path), __Vfunc_uvm_hdl_read__395__value, __VlefCall_2__uvm_hdl_read);
                    unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__slice 
                        = (((QData)((IData)(__Vfunc_uvm_hdl_read__395__value[1U])) 
                            << 0x00000020U) | (QData)((IData)(__Vfunc_uvm_hdl_read__395__value[0U])));
                    ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_read);
                    unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2727)
                        ->__PVT__slices.at(unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j)
                        .__PVT__size;
                    while (VL_LTS_III(32, 0U, unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                        __Vincrement1 = unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__k;
                        unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__k 
                            = ((IData)(1U) + unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__k);
                        val = (((~ (1ULL << (0x0000003fU 
                                             & __Vincrement1))) 
                                & val) | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__slice)))) 
                                          << (0x0000003fU 
                                              & __Vincrement1)));
                        unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__slice 
                            = (unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__slice 
                               >> 1U);
                        unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__unnamedblk1_1__DOT____Vrepeat0 
                            = (unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__unnamedblk324__DOT__unnamedblk1_1__DOT____Vrepeat0 
                               - (IData)(1U));
                    }
                    __Vlabel1: ;
                }
                if ((unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk321__DOT__unnamedblk322__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2713)
                     ->__PVT__slices.size())) {
                    unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j 
                        = ((IData)(1U) + unnamedblk321__DOT__unnamedblk322__DOT__unnamedblk323__DOT__j);
                }
            }
            val = (val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                          - 1ULL));
            if ((0U == unnamedblk321__DOT__i)) {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2737)->__PVT__value.atWrite(0U) 
                    = val;
            }
            if ((val != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2739)
                 ->__PVT__value.at(0U))) {
                this->__Vfunc_uvm_report_enabled__396__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__396__severity = 2U;
                __Vfunc_uvm_report_enabled__396__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__397__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__397__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__396__verbosity, (IData)(__Vfunc_uvm_report_enabled__396__severity), this->__Vfunc_uvm_report_enabled__396__id, __Vtask_uvm_report_enabled__398__Vfuncout);
                __Vfunc_uvm_report_enabled__396____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__398__Vfuncout;
                __VlefCall_3__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__396____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_3__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    __Vfunc_uvm_hdl_concat2string__400__concat 
                        = paths.at(0U);
                    __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i = 0U;
                    __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i__Vloopsize = 0;
                    {
                        __VlefCall_5__uvm_hdl_concat2string = ""s;
                        this->__Vfunc_uvm_hdl_concat2string__400__image = "{"s;
                        if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__400__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 390)
                               ->__PVT__slices.size()) 
                              && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__400__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 391)
                                  ->__PVT__slices.at(0U)
                                  .__PVT__offset)) 
                             && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__400__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 392)
                                 ->__PVT__slices.at(0U)
                                 .__PVT__size))) {
                            __VlefCall_5__uvm_hdl_concat2string 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__400__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 393)
                                ->__PVT__slices.at(0U)
                                .__PVT__path;
                            goto __Vlabel2;
                        }
                        __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i = 0U;
                        while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__400__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                          ->__PVT__slices.size())) {
                            __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i__Vloopsize 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__400__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                ->__PVT__slices.size();
                            __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__unnamedblk220__DOT__slice 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__400__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 396)
                                ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i);
                            this->__Vfunc_uvm_hdl_concat2string__400__image 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__400__image, 
                                                                VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                 .__PVT__path);
                            if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                            .__PVT__offset)) {
                                this->__Vfunc_uvm_hdl_concat2string__400__image 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__400__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                                                .__PVT__size) );
                            }
                            if ((__Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i__Vloopsize 
                                 <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__400__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                 ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vfunc_uvm_hdl_concat2string__400__unnamedblk219__DOT__i);
                            }
                        }
                        this->__Vfunc_uvm_hdl_concat2string__400__image 
                            = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__400__image, "}"s);
                        __VlefCall_5__uvm_hdl_concat2string 
                            = this->__Vfunc_uvm_hdl_concat2string__400__image;
                        __Vlabel2: ;
                    }
                    __Vfunc_uvm_hdl_concat2string__401__concat 
                        = paths.at(unnamedblk321__DOT__i);
                    __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i = 0U;
                    __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i__Vloopsize = 0;
                    {
                        __VlefCall_6__uvm_hdl_concat2string = ""s;
                        this->__Vfunc_uvm_hdl_concat2string__401__image = "{"s;
                        if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__401__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 390)
                               ->__PVT__slices.size()) 
                              && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__401__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 391)
                                  ->__PVT__slices.at(0U)
                                  .__PVT__offset)) 
                             && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__401__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 392)
                                 ->__PVT__slices.at(0U)
                                 .__PVT__size))) {
                            __VlefCall_6__uvm_hdl_concat2string 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__401__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 393)
                                ->__PVT__slices.at(0U)
                                .__PVT__path;
                            goto __Vlabel3;
                        }
                        __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i = 0U;
                        while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__401__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                          ->__PVT__slices.size())) {
                            __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i__Vloopsize 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__401__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                ->__PVT__slices.size();
                            __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__unnamedblk220__DOT__slice 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__401__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 396)
                                ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i);
                            this->__Vfunc_uvm_hdl_concat2string__401__image 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__401__image, 
                                                                VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                 .__PVT__path);
                            if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                            .__PVT__offset)) {
                                this->__Vfunc_uvm_hdl_concat2string__401__image 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__401__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                                                .__PVT__size) );
                            }
                            if ((__Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i__Vloopsize 
                                 <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__401__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                 ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vfunc_uvm_hdl_concat2string__401__unnamedblk219__DOT__i);
                            }
                        }
                        this->__Vfunc_uvm_hdl_concat2string__401__image 
                            = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__401__image, "}"s);
                        __VlefCall_6__uvm_hdl_concat2string 
                            = this->__Vfunc_uvm_hdl_concat2string__401__image;
                        __Vlabel3: ;
                    }
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Backdoor read of register %s with multiple HDL copies: values are not the same: %0h at path '%s', and %0h at path '%s'. Returning first value.",5
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2743)
                                                                                ->__PVT__value.at(0U)
                                                                                , 'S',&(__VlefCall_5__uvm_hdl_concat2string)
                                                                                , '#',64,val
                                                                                , 'S',&(__VlefCall_6__uvm_hdl_concat2string)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x00000ab7U);
                }
                backdoor_read_func__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            this->__Vfunc_uvm_report_enabled__403__id = "RegMem"s;
            __Vfunc_uvm_report_enabled__403__severity = 0U;
            __Vfunc_uvm_report_enabled__403__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__404__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__403__verbosity, (IData)(__Vfunc_uvm_report_enabled__403__severity), this->__Vfunc_uvm_report_enabled__403__id, __Vtask_uvm_report_enabled__405__Vfuncout);
            __Vfunc_uvm_report_enabled__403____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__405__Vfuncout;
            __VlefCall_7__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__403____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_7__uvm_report_enabled) {
                __Vtask_uvm_report_info__406__line = 0x00000abbU;
                this->__Vtask_uvm_report_info__406__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_info__406__verbosity = 0x000001f4U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__406__message
                              ,"returned backdoor value 0x%0x",1
                              , '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2747)
                              ->__PVT__value.at(0U));
                this->__Vtask_uvm_report_info__406__id = "RegMem"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__407__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vfunc_get__407__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__406__id, this->__Vtask_uvm_report_info__406__message, __Vtask_uvm_report_info__406__verbosity, this->__Vtask_uvm_report_info__406__filename, __Vtask_uvm_report_info__406__line);
            }
            if ((unnamedblk321__DOT__i__Vloopsize <= paths.size())) {
                unnamedblk321__DOT__i = ((IData)(1U) 
                                         + unnamedblk321__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2751)->__PVT__status 
            = ((IData)(ok) ? 0U : 1U);
        backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2752)
            ->__PVT__status;
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__411__verbosity;
    __Vfunc_uvm_report_enabled__411__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__411__severity;
    __Vfunc_uvm_report_enabled__411__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__411____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__411____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__412__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__413__Vfuncout;
    __Vtask_uvm_report_enabled__413__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__421__verbosity;
    __Vfunc_uvm_report_enabled__421__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__421__severity;
    __Vfunc_uvm_report_enabled__421__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__421____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__421____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__422__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__423__Vfuncout;
    __Vtask_uvm_report_enabled__423__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__425__verbosity;
    __Vtask_uvm_report_info__425__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__425__line;
    __Vtask_uvm_report_info__425__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__426__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        status = 0U;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            this->__Vfunc_uvm_report_enabled__411__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__411__severity = 2U;
            __Vfunc_uvm_report_enabled__411__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__412__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__412__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__411__verbosity, (IData)(__Vfunc_uvm_report_enabled__411__severity), this->__Vfunc_uvm_report_enabled__411__id, __Vtask_uvm_report_enabled__413__Vfuncout);
            __Vfunc_uvm_report_enabled__411____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__413__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__411____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No backdoor access available to poke register '"s, __VlefCall_3__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x00000ad7U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2785)->__PVT__element 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this};
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2786)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2787)->__PVT__element_kind = 0U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2788)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2789)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2790)->__PVT__value.atWrite(0U) 
            = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                        - 1ULL));
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2791)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2792)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2793)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2794)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2797)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2801)
            ->__PVT__status;
        this->__Vfunc_uvm_report_enabled__421__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__421__severity = 0U;
        __Vfunc_uvm_report_enabled__421__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__422__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__422__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__421__verbosity, (IData)(__Vfunc_uvm_report_enabled__421__severity), this->__Vfunc_uvm_report_enabled__421__id, __Vtask_uvm_report_enabled__423__Vfuncout);
        __Vfunc_uvm_report_enabled__421____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__423__Vfuncout;
        __VlefCall_5__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__421____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_5__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__425__line = 0x00000af4U;
            this->__Vtask_uvm_report_info__425__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_info__425__verbosity = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__425__message
                          ,"Poked register \"%s\": 'h%h",2
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,value);
            this->__Vtask_uvm_report_info__425__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__426__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__426__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__425__id, this->__Vtask_uvm_report_info__425__message, __Vtask_uvm_report_info__425__verbosity, this->__Vtask_uvm_report_info__425__filename, __Vtask_uvm_report_info__425__line);
        }
        this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
        if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__432__verbosity;
    __Vfunc_uvm_report_enabled__432__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__432__severity;
    __Vfunc_uvm_report_enabled__432__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__432____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__432____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__433__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__434__Vfuncout;
    __Vtask_uvm_report_enabled__434__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__442__verbosity;
    __Vfunc_uvm_report_enabled__442__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__442__severity;
    __Vfunc_uvm_report_enabled__442__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__442____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__442____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__443__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__444__Vfuncout;
    __Vtask_uvm_report_enabled__444__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__446__verbosity;
    __Vtask_uvm_report_info__446__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__446__line;
    __Vtask_uvm_report_info__446__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__447__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        status = 0U;
        value = 0ULL;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            this->__Vfunc_uvm_report_enabled__432__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__432__severity = 2U;
            __Vfunc_uvm_report_enabled__432__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__433__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__433__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__432__verbosity, (IData)(__Vfunc_uvm_report_enabled__432__severity), this->__Vfunc_uvm_report_enabled__432__id, __Vtask_uvm_report_enabled__434__Vfuncout);
            __Vfunc_uvm_report_enabled__432____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__434__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__432____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("No backdoor access available to peek register \"%s\"",1
                                                                                , 'S',&(__VlefCall_3__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x00000b10U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2842)->__PVT__element 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>{this};
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2843)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2844)->__PVT__element_kind = 0U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2845)->__PVT__kind = 0U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2846)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2847)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2848)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2849)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2850)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2853)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2857)
            ->__PVT__status;
        value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2858)
            ->__PVT__value.at(0U);
        this->__Vfunc_uvm_report_enabled__442__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__442__severity = 0U;
        __Vfunc_uvm_report_enabled__442__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__443__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__443__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__442__verbosity, (IData)(__Vfunc_uvm_report_enabled__442__severity), this->__Vfunc_uvm_report_enabled__442__id, __Vtask_uvm_report_enabled__444__Vfuncout);
        __Vfunc_uvm_report_enabled__442____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__444__Vfuncout;
        __VlefCall_5__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__442____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_5__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__446__line = 0x00000b2dU;
            this->__Vtask_uvm_report_info__446__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_info__446__verbosity = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__446__message
                          ,"Peeked register \"%s\": 'h%h",2
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,value);
            this->__Vtask_uvm_report_info__446__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__447__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__447__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__446__id, this->__Vtask_uvm_report_info__446__message, __Vtask_uvm_report_info__446__verbosity, this->__Vtask_uvm_report_info__446__filename, __Vtask_uvm_report_info__446__line);
        }
        this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
        if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ expected, QData/*63:0*/ actual, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &do_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__455__verbosity;
    __Vfunc_uvm_report_enabled__455__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__455__severity;
    __Vfunc_uvm_report_enabled__455__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__455____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__455____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__456__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__457__Vfuncout;
    __Vtask_uvm_report_enabled__457__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__465__verbosity;
    __Vfunc_uvm_report_enabled__465__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__465__severity;
    __Vfunc_uvm_report_enabled__465__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__465____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__465____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__466__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__467__Vfuncout;
    __Vtask_uvm_report_enabled__467__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__475__verbosity;
    __Vtask_uvm_report_info__475__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__475__line;
    __Vtask_uvm_report_info__475__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__476__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_16__get_n_bits;
    IData/*31:0*/ __VlefCall_15__get_n_bits;
    IData/*31:0*/ __VlefCall_14__get_lsb_pos;
    IData/*31:0*/ __VlefCall_13__get_n_bits;
    IData/*31:0*/ __VlefCall_12__get_lsb_pos;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_name;
    CData/*0:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__get_lsb_pos;
    IData/*31:0*/ __VlefCall_7__get_lsb_pos;
    IData/*31:0*/ __VlefCall_6__get_n_bits;
    IData/*31:0*/ __VlefCall_5__get_compare;
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__get_lsb_pos;
    IData/*31:0*/ __VlefCall_1__get_n_bits;
    IData/*31:0*/ __VlefCall_0__get_compare;
    IData/*31:0*/ unnamedblk325__DOT__i;
    unnamedblk325__DOT__i = 0;
    IData/*31:0*/ unnamedblk325__DOT__i__Vloopsize;
    unnamedblk325__DOT__i__Vloopsize = 0;
    std::string unnamedblk325__DOT__unnamedblk326__DOT__acc;
    IData/*31:0*/ unnamedblk327__DOT__i;
    unnamedblk327__DOT__i = 0;
    IData/*31:0*/ unnamedblk327__DOT__i__Vloopsize;
    unnamedblk327__DOT__i__Vloopsize = 0;
    std::string unnamedblk327__DOT__unnamedblk328__DOT__acc;
    QData/*63:0*/ unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__mask;
    QData/*63:0*/ unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__val;
    QData/*63:0*/ unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__exp;
    QData/*63:0*/ dc;
    {
        do_check__Vfuncrtn = 0U;
        dc = 0ULL;
        unnamedblk325__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk325__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk325__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2878)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, unnamedblk325__DOT__unnamedblk326__DOT__acc);
            unnamedblk325__DOT__unnamedblk326__DOT__acc 
                = VL_SUBSTR_N(unnamedblk325__DOT__unnamedblk326__DOT__acc,0U,1U);
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2880)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_0__get_compare);
            if (((0U == __VlefCall_0__get_compare) 
                 || ("WO"s == unnamedblk325__DOT__unnamedblk326__DOT__acc))) {
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2882)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2883)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                dc = (dc | VL_SHIFTL_QQI(64,64,32, 
                                         (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                          - 1ULL), __VlefCall_2__get_lsb_pos));
            }
            if ((unnamedblk325__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk325__DOT__i = ((IData)(1U) 
                                         + unnamedblk325__DOT__i);
            }
        }
        if (((actual | dc) == (expected | dc))) {
            do_check__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__Vfunc_uvm_report_enabled__455__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__455__severity = 2U;
        __Vfunc_uvm_report_enabled__455__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__456__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__456__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__455__verbosity, (IData)(__Vfunc_uvm_report_enabled__455__severity), this->__Vfunc_uvm_report_enabled__455__id, __Vtask_uvm_report_enabled__457__Vfuncout);
        __Vfunc_uvm_report_enabled__455____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__457__Vfuncout;
        __VlefCall_3__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__455____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_3__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Register \"%s\" value read from DUT (0x%h) does not match mirrored value (0x%h)",3
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , '#',64,actual
                                                                                , '#',64,expected) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s, 0x00000b4aU);
        }
        unnamedblk327__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk327__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk327__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2893)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, unnamedblk327__DOT__unnamedblk328__DOT__acc);
            unnamedblk327__DOT__unnamedblk328__DOT__acc 
                = VL_SUBSTR_N(unnamedblk327__DOT__unnamedblk328__DOT__acc,0U,1U);
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2895)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_5__get_compare);
            if ((1U & (~ ((0U == __VlefCall_5__get_compare) 
                          || ("WO"s == unnamedblk327__DOT__unnamedblk328__DOT__acc))))) {
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2897)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_6__get_n_bits);
                unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__mask 
                    = (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_6__get_n_bits) 
                       - 1ULL);
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2898)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_7__get_lsb_pos);
                unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__val 
                    = (VL_SHIFTR_QQI(64,64,32, actual, __VlefCall_7__get_lsb_pos) 
                       & unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__mask);
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2899)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
                unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__exp 
                    = (VL_SHIFTR_QQI(64,64,32, expected, __VlefCall_8__get_lsb_pos) 
                       & unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__mask);
                if ((unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__val 
                     != unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__exp)) {
                    this->__Vfunc_uvm_report_enabled__465__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__465__severity = 0U;
                    __Vfunc_uvm_report_enabled__465__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__466__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__466__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__465__verbosity, (IData)(__Vfunc_uvm_report_enabled__465__severity), this->__Vfunc_uvm_report_enabled__465__id, __Vtask_uvm_report_enabled__467__Vfuncout);
                    __Vfunc_uvm_report_enabled__465____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__467__Vfuncout;
                    __VlefCall_9__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__465____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_9__uvm_report_enabled) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2909)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2909)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_12__get_lsb_pos);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2909)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_13__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2909)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_14__get_lsb_pos);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2909)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_15__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2909)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_16__get_n_bits);
                        __Vtask_uvm_report_info__475__line = 0x00000b5dU;
                        this->__Vtask_uvm_report_info__475__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__475__verbosity = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__475__message
                                      ,"Field %s (%s[%0d:%0d]) mismatch read=%0d'h%0h mirrored=%0d'h%0h ",8
                                      , 'S',&(__VlefCall_10__get_name)
                                      , 'S',&(__VlefCall_11__get_full_name)
                                      , '#',32,((__VlefCall_12__get_lsb_pos 
                                                 + __VlefCall_13__get_n_bits) 
                                                - (IData)(1U))
                                      , '#',32,__VlefCall_14__get_lsb_pos
                                      , '#',32,__VlefCall_15__get_n_bits
                                      , '#',64,unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__val
                                      , '#',32,__VlefCall_16__get_n_bits
                                      , '#',64,unnamedblk327__DOT__unnamedblk328__DOT__unnamedblk329__DOT__exp);
                        this->__Vtask_uvm_report_info__475__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__476__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vfunc_get__476__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__475__id, this->__Vtask_uvm_report_info__475__message, __Vtask_uvm_report_info__475__verbosity, this->__Vtask_uvm_report_info__475__filename, __Vtask_uvm_report_info__475__line);
                    }
                }
            }
            if ((unnamedblk327__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk327__DOT__i = ((IData)(1U) 
                                         + unnamedblk327__DOT__i);
            }
        }
        do_check__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror\n"); );
    // Locals
    IData/*31:0*/ __Vtask_XreadX__485__status;
    __Vtask_XreadX__485__status = 0;
    QData/*63:0*/ __Vtask_XreadX__485__value;
    __Vtask_XreadX__485__value = 0;
    CData/*0:0*/ __Vtask_do_check__487__Vfuncout;
    __Vtask_do_check__487__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    QData/*63:0*/ v;
    QData/*63:0*/ exp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    {
        status = 0U;
        v = 0ULL;
        exp = 0ULL;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2939)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        __VlefCall_0__has_hdl_path = (1U == path);
        if (__VlefCall_0__has_hdl_path) {
            __VlefCall_0__has_hdl_path = (VlNull{} 
                                          != bkdr);
            if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_0__has_hdl_path);
            }
        }
        if (__VlefCall_0__has_hdl_path) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, map);
        } else {
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "read()"s, map);
        }
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        if ((1U == check)) {
            this->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, exp);
        }
        co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__485__status, __Vtask_XreadX__485__value, path, map, parent, prior, extension, fname, lineno);
        status = __Vtask_XreadX__485__status;
        v = __Vtask_XreadX__485__value;
        if ((1U == status)) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            goto __Vlabel0;
        }
        if ((1U == check)) {
            this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, v, map, __Vtask_do_check__487__Vfuncout);
        }
        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__491__Vfuncout;
    __Vtask_try_get__491__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> m_reg_process;
    {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, m_reg_process);
        if (on) {
            if ((m_reg_process == this->__PVT__m_process)) {
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(this->__PVT__m_atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2975)->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
            this->__PVT__m_process = m_reg_process;
        } else {
            VL_NULL_CHECK(this->__PVT__m_atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2980)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__491__Vfuncout);
            VL_NULL_CHECK(this->__PVT__m_atomic, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 2981)->__VnoInFunc_put(vlSymsp, 1U);
            this->__PVT__m_process = VlNull{};
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__convert2string;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    std::string __VlefCall_4__get_full_name;
    QData/*63:0*/ __VlefCall_3__get_base_addr;
    QData/*63:0*/ __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__get_n_bytes;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk330__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk330__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk330__DOT__map__Vmore;
    unnamedblk330__DOT__map__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk330__DOT__unnamedblk331__DOT__parent_map;
    IData/*31:0*/ unnamedblk330__DOT__unnamedblk331__DOT__offset;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__this_map;
    IData/*31:0*/ unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__unnamedblk333__DOT__e;
    IData/*31:0*/ unnamedblk334__DOT__i;
    unnamedblk334__DOT__i = 0;
    IData/*31:0*/ unnamedblk334__DOT__i__Vloopsize;
    unnamedblk334__DOT__i__Vloopsize = 0;
    convert2string__Vfuncrtn = ""s;
    std::string res_str;
    std::string prefix;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_1__get_n_bytes);
    this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_2__get);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"Register %s -- %0d bytes, mirror value:'h%h",3
                  , 'S',&(__VlefCall_0__get_full_name)
                  , '#',32,__VlefCall_1__get_n_bytes
                  , '#',64,__VlefCall_2__get);
    convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                 ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                 : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
    unnamedblk330__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk330__DOT__map__Vnext));
    while (unnamedblk330__DOT__map__Vmore) {
        unnamedblk330__DOT__map = unnamedblk330__DOT__map__Vnext;
        unnamedblk330__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk330__DOT__map__Vnext));
        unnamedblk330__DOT__unnamedblk331__DOT__parent_map 
            = unnamedblk330__DOT__map;
        unnamedblk330__DOT__unnamedblk331__DOT__offset = 0U;
        while ((VlNull{} != unnamedblk330__DOT__unnamedblk331__DOT__parent_map)) {
            unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__this_map 
                = unnamedblk330__DOT__unnamedblk331__DOT__parent_map;
            VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3012)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk330__DOT__unnamedblk331__DOT__parent_map);
            if ((VlNull{} == unnamedblk330__DOT__unnamedblk331__DOT__parent_map)) {
                VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3013)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_3__get_base_addr);
            } else {
                VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3014)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__this_map, __VlefCall_3__get_base_addr);
            }
            unnamedblk330__DOT__unnamedblk331__DOT__offset 
                = (IData)(__VlefCall_3__get_base_addr);
            prefix = VL_CONCATN_NNN(prefix, "  "s);
            VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3017)->__VnoInFunc_get_endian(vlSymsp, 1U, unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__unnamedblk333__DOT__e);
            VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3020)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3020)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_5__get_n_bytes);
            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name79
                [(7U & unnamedblk330__DOT__unnamedblk331__DOT__unnamedblk332__DOT__unnamedblk333__DOT__e)];
            VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMapped in '%s' -- %d bytes, %s, offset 'h%0h\n",5
                          , 'S',&(prefix), 'S',&(__VlefCall_4__get_full_name)
                          , '#',32,__VlefCall_5__get_n_bytes
                          , 'S',&(__Vtemp_1), '#',32,unnamedblk330__DOT__unnamedblk331__DOT__offset);
        }
    }
    prefix = "  "s;
    unnamedblk334__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk334__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk334__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk334__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3028)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_6__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_6__convert2string));
        if ((unnamedblk334__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk334__DOT__i = ((IData)(1U) + unnamedblk334__DOT__i);
        }
    }
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__convert2string;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk335__DOT__i;
    unnamedblk335__DOT__i = 0;
    IData/*31:0*/ unnamedblk335__DOT__i__Vloopsize;
    unnamedblk335__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> f;
    f.clear();
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_fields(vlSymsp, f);
    unnamedblk335__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk335__DOT__i, f.size())) {
        unnamedblk335__DOT__i__Vloopsize = f.size();
        VL_NULL_CHECK(f.at(unnamedblk335__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3053)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        VL_NULL_CHECK(f.at(unnamedblk335__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3053)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(f.at(unnamedblk335__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3053)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh", 3053)->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__convert2string), 0x2eU);
        if ((unnamedblk335__DOT__i__Vloopsize <= f.size())) {
            unnamedblk335__DOT__i = ((IData)(1U) + unnamedblk335__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__509__verbosity;
    __Vfunc_uvm_report_enabled__509__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__509__severity;
    __Vfunc_uvm_report_enabled__509__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__509____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__509____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__510__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__511__Vfuncout;
    __Vtask_uvm_report_enabled__511__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__512__verbosity;
    __Vtask_uvm_report_fatal__512__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__512__line;
    __Vtask_uvm_report_fatal__512__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__513__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__509__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__509__severity = 3U;
    __Vfunc_uvm_report_enabled__509__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__510__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__510__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__509__verbosity, (IData)(__Vfunc_uvm_report_enabled__509__severity), this->__Vfunc_uvm_report_enabled__509__id, __Vtask_uvm_report_enabled__511__Vfuncout);
    __Vfunc_uvm_report_enabled__509____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__511__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__509____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__512__line = 0x00000bf5U;
        this->__Vtask_uvm_report_fatal__512__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_fatal__512__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__512__message = "RegModel registers cannot be cloned"s;
        this->__Vtask_uvm_report_fatal__512__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__513__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__513__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__512__id, this->__Vtask_uvm_report_fatal__512__message, __Vtask_uvm_report_fatal__512__verbosity, this->__Vtask_uvm_report_fatal__512__filename, __Vtask_uvm_report_fatal__512__line);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__515__verbosity;
    __Vfunc_uvm_report_enabled__515__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__515__severity;
    __Vfunc_uvm_report_enabled__515__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__515____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__515____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__516__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__517__Vfuncout;
    __Vtask_uvm_report_enabled__517__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__518__verbosity;
    __Vtask_uvm_report_fatal__518__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__518__line;
    __Vtask_uvm_report_fatal__518__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__519__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__515__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__515__severity = 3U;
    __Vfunc_uvm_report_enabled__515__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__516__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__516__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__515__verbosity, (IData)(__Vfunc_uvm_report_enabled__515__severity), this->__Vfunc_uvm_report_enabled__515__id, __Vtask_uvm_report_enabled__517__Vfuncout);
    __Vfunc_uvm_report_enabled__515____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__517__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__515____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__518__line = 0x00000bfcU;
        this->__Vtask_uvm_report_fatal__518__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_fatal__518__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__518__message = "RegModel registers cannot be copied"s;
        this->__Vtask_uvm_report_fatal__518__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__519__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__519__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__518__id, this->__Vtask_uvm_report_fatal__518__message, __Vtask_uvm_report_fatal__518__verbosity, this->__Vtask_uvm_report_fatal__518__filename, __Vtask_uvm_report_fatal__518__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__521__verbosity;
    __Vfunc_uvm_report_enabled__521__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__521__severity;
    __Vfunc_uvm_report_enabled__521__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__521____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__521____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__522__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__523__Vfuncout;
    __Vtask_uvm_report_enabled__523__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__524__verbosity;
    __Vtask_uvm_report_warning__524__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__524__line;
    __Vtask_uvm_report_warning__524__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__525__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__521__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__521__severity = 1U;
    __Vfunc_uvm_report_enabled__521__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__522__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__522__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__521__verbosity, (IData)(__Vfunc_uvm_report_enabled__521__severity), this->__Vfunc_uvm_report_enabled__521__id, __Vtask_uvm_report_enabled__523__Vfuncout);
    __Vfunc_uvm_report_enabled__521____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__523__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__521____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__524__line = 0x00000c04U;
        this->__Vtask_uvm_report_warning__524__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_warning__524__verbosity = 0U;
        this->__Vtask_uvm_report_warning__524__message = "RegModel registers cannot be compared"s;
        this->__Vtask_uvm_report_warning__524__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__525__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__525__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__524__id, this->__Vtask_uvm_report_warning__524__message, __Vtask_uvm_report_warning__524__verbosity, this->__Vtask_uvm_report_warning__524__filename, __Vtask_uvm_report_warning__524__line);
    }
    do_compare__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__527__verbosity;
    __Vfunc_uvm_report_enabled__527__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__527__severity;
    __Vfunc_uvm_report_enabled__527__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__527____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__527____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__528__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__529__Vfuncout;
    __Vtask_uvm_report_enabled__529__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__530__verbosity;
    __Vtask_uvm_report_warning__530__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__530__line;
    __Vtask_uvm_report_warning__530__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__531__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__527__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__527__severity = 1U;
    __Vfunc_uvm_report_enabled__527__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__528__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__528__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__527__verbosity, (IData)(__Vfunc_uvm_report_enabled__527__severity), this->__Vfunc_uvm_report_enabled__527__id, __Vtask_uvm_report_enabled__529__Vfuncout);
    __Vfunc_uvm_report_enabled__527____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__529__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__527____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__530__line = 0x00000c0cU;
        this->__Vtask_uvm_report_warning__530__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_warning__530__verbosity = 0U;
        this->__Vtask_uvm_report_warning__530__message = "RegModel registers cannot be packed"s;
        this->__Vtask_uvm_report_warning__530__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__531__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__531__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__530__id, this->__Vtask_uvm_report_warning__530__message, __Vtask_uvm_report_warning__530__verbosity, this->__Vtask_uvm_report_warning__530__filename, __Vtask_uvm_report_warning__530__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__533__verbosity;
    __Vfunc_uvm_report_enabled__533__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__533__severity;
    __Vfunc_uvm_report_enabled__533__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__533____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__533____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__534__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__535__Vfuncout;
    __Vtask_uvm_report_enabled__535__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__536__verbosity;
    __Vtask_uvm_report_warning__536__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__536__line;
    __Vtask_uvm_report_warning__536__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__537__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__533__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__533__severity = 1U;
    __Vfunc_uvm_report_enabled__533__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__534__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__534__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__533__verbosity, (IData)(__Vfunc_uvm_report_enabled__533__severity), this->__Vfunc_uvm_report_enabled__533__id, __Vtask_uvm_report_enabled__535__Vfuncout);
    __Vfunc_uvm_report_enabled__533____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__535__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__533____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__536__line = 0x00000c13U;
        this->__Vtask_uvm_report_warning__536__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_warning__536__verbosity = 0U;
        this->__Vtask_uvm_report_warning__536__message = "RegModel registers cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__536__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__537__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__537__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__536__id, this->__Vtask_uvm_report_warning__536__message, __Vtask_uvm_report_warning__536__verbosity, this->__Vtask_uvm_report_warning__536__filename, __Vtask_uvm_report_warning__536__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
    __PVT__m_n_bits = 0;
    __PVT__m_n_used_bits = 0;
    __PVT__m_maps.atDefault() = 0;
    __PVT__m_has_cover = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_lineno = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_update_in_progress = 0;
    __PVT__m_is_busy = 0;
    __PVT__m_is_locked_by_field = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg::~\n"); );
}
