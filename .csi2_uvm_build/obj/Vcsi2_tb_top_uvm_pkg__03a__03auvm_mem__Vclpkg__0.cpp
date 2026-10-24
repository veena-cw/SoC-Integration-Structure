// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::new\n"); );
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
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    this->__PVT__m_locked = 0U;
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
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' cannot have 0 bits"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x000003afU);
        }
        n_bits = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_backdoor = VlNull{};
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure\n"); );
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
    IData/*31:0*/ __Vtask_uvm_report_fatal__11__verbosity;
    __Vtask_uvm_report_fatal__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__11__line;
    __Vtask_uvm_report_fatal__11__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__12__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__14____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__16__Vfuncout;
    __Vtask_uvm_report_enabled__16__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> unnamedblk379__DOT__cfg;
    if ((VlNull{} == parent)) {
        this->__Vfunc_uvm_report_enabled__8__id = "REG/NULL_PARENT"s;
        __Vfunc_uvm_report_enabled__8__severity = 3U;
        __Vfunc_uvm_report_enabled__8__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __Vtask_uvm_report_enabled__10__Vfuncout);
        __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__10__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__8____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            __Vtask_uvm_report_fatal__11__line = 0x000003c5U;
            this->__Vtask_uvm_report_fatal__11__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_fatal__11__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__11__message = "configure: parent argument is null"s;
            this->__Vtask_uvm_report_fatal__11__id = "REG/NULL_PARENT"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__11__id, this->__Vtask_uvm_report_fatal__11__message, __Vtask_uvm_report_fatal__11__verbosity, this->__Vtask_uvm_report_fatal__11__filename, __Vtask_uvm_report_fatal__11__line);
        }
    }
    this->__PVT__m_parent = parent;
    if ((("RW"s != this->__PVT__m_access) & ("RO"s 
                                             != this->__PVT__m_access))) {
        this->__Vfunc_uvm_report_enabled__14__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__14__severity = 2U;
        __Vfunc_uvm_report_enabled__14__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), this->__Vfunc_uvm_report_enabled__14__id, __Vtask_uvm_report_enabled__16__Vfuncout);
        __Vfunc_uvm_report_enabled__14____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__16__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__14____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_2__get_full_name), "' can only be RW or RO"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x000003caU);
        }
        this->__PVT__m_access = "RW"s;
    }
    unnamedblk379__DOT__cfg = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg, vlSymsp);
    VL_NULL_CHECK(unnamedblk379__DOT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 977)->__PVT__n_bytes 
        = ((IData)(1U) + ((this->__PVT__m_n_bits - (IData)(1U)) 
                          >> 3U));
    VL_NULL_CHECK(unnamedblk379__DOT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 978)->__PVT__start_offset = 0ULL;
    VL_NULL_CHECK(unnamedblk379__DOT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 979)->__PVT__end_offset 
        = (this->__PVT__m_size - 1ULL);
    VL_NULL_CHECK(unnamedblk379__DOT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 981)->__PVT__mode = 0U;
    VL_NULL_CHECK(unnamedblk379__DOT__cfg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 982)->__PVT__locality = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    this->__PVT__mam = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam, vlSymsp, 
                              VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), unnamedblk379__DOT__cfg, 
                              VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this});
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 987)->__VnoInFunc_add_mem(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this});
    if ((""s != hdl_path)) {
        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__verbosity;
    __Vfunc_uvm_report_enabled__24__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__24__severity;
    __Vfunc_uvm_report_enabled__24__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__24____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__26__Vfuncout;
    __Vtask_uvm_report_enabled__26__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
             & (VlNull{} == map))) {
            this->__Vfunc_uvm_report_enabled__24__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__24__severity = 2U;
            __Vfunc_uvm_report_enabled__24__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__24__verbosity, (IData)(__Vfunc_uvm_report_enabled__24__severity), this->__Vfunc_uvm_report_enabled__24__id, __Vtask_uvm_report_enabled__26__Vfuncout);
            __Vfunc_uvm_report_enabled__24____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__26__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__24____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_offset requires a non-null map when memory '"s, __VlefCall_1__get_full_name), "' belongs to more than one map."s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x000003ebU);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_offset()"s, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1012)->__VnoInFunc_m_set_mem_offset(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this}, offset, (IData)(unmapped));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map\n"); );
    // Body
    this->__PVT__m_maps.atWrite(map) = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    this->__PVT__m_locked = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__m_parent)) {
            this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1036)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__m_parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps\n"); );
    // Body
    get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk380__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk380__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk380__DOT__map__Vmore;
    unnamedblk380__DOT__map__Vmore = 0;
    unnamedblk380__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk380__DOT__map__Vnext));
    while (unnamedblk380__DOT__map__Vmore) {
        unnamedblk380__DOT__map = unnamedblk380__DOT__map__Vnext;
        unnamedblk380__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk380__DOT__map__Vnext));
        maps.push_back(unnamedblk380__DOT__map);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk381__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk381__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk381__DOT__l__Vmore;
    unnamedblk381__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk381__DOT__unnamedblk382__DOT__local_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk381__DOT__unnamedblk382__DOT__parent_map;
    {
        is_in_map__Vfuncrtn = 0U;
        if (this->__PVT__m_maps.exists(map)) {
            is_in_map__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk381__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk381__DOT__l__Vnext));
        while (unnamedblk381__DOT__l__Vmore) {
            unnamedblk381__DOT__l = unnamedblk381__DOT__l__Vnext;
            unnamedblk381__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk381__DOT__l__Vnext));
            unnamedblk381__DOT__unnamedblk382__DOT__local_map 
                = unnamedblk381__DOT__l;
            VL_NULL_CHECK(unnamedblk381__DOT__unnamedblk382__DOT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1070)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk381__DOT__unnamedblk382__DOT__parent_map);
            while ((VlNull{} != unnamedblk381__DOT__unnamedblk382__DOT__parent_map)) {
                if ((unnamedblk381__DOT__unnamedblk382__DOT__parent_map 
                     == map)) {
                    is_in_map__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk381__DOT__unnamedblk382__DOT__parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1075)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk381__DOT__unnamedblk382__DOT__parent_map);
            }
        }
        is_in_map__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__39__verbosity;
    __Vfunc_uvm_report_enabled__39__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__39__severity;
    __Vfunc_uvm_report_enabled__39__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__39____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__39____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__40__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__41__Vfuncout;
    __Vtask_uvm_report_enabled__41__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__44__verbosity;
    __Vtask_uvm_report_warning__44__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__44__line;
    __Vtask_uvm_report_warning__44__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__45__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk383__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk383__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk383__DOT__l__Vmore;
    unnamedblk383__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk383__DOT__unnamedblk384__DOT__local_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk383__DOT__unnamedblk384__DOT__parent_map;
    {
        if ((VlNull{} == map)) {
            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, ""s, get_local_map__Vfuncrtn);
            goto __Vlabel0;
        }
        if (this->__PVT__m_maps.exists(map)) {
            get_local_map__Vfuncrtn = map;
            goto __Vlabel0;
        }
        unnamedblk383__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk383__DOT__l__Vnext));
        while (unnamedblk383__DOT__l__Vmore) {
            unnamedblk383__DOT__l = unnamedblk383__DOT__l__Vnext;
            unnamedblk383__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk383__DOT__l__Vnext));
            unnamedblk383__DOT__unnamedblk384__DOT__local_map 
                = unnamedblk383__DOT__l;
            VL_NULL_CHECK(unnamedblk383__DOT__unnamedblk384__DOT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1091)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk383__DOT__unnamedblk384__DOT__parent_map);
            while ((VlNull{} != unnamedblk383__DOT__unnamedblk384__DOT__parent_map)) {
                if ((unnamedblk383__DOT__unnamedblk384__DOT__parent_map 
                     == map)) {
                    get_local_map__Vfuncrtn = unnamedblk383__DOT__unnamedblk384__DOT__local_map;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk383__DOT__unnamedblk384__DOT__parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1096)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk383__DOT__unnamedblk384__DOT__parent_map);
            }
        }
        this->__Vfunc_uvm_report_enabled__39__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__39__severity = 1U;
        __Vfunc_uvm_report_enabled__39__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__40__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__40__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__39__verbosity, (IData)(__Vfunc_uvm_report_enabled__39__severity), this->__Vfunc_uvm_report_enabled__39__id, __Vtask_uvm_report_enabled__41__Vfuncout);
        __Vfunc_uvm_report_enabled__39____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__41__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__39____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1101)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__44__line = 0x0000044dU;
            this->__Vtask_uvm_report_warning__44__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__44__verbosity = 0U;
            this->__Vtask_uvm_report_warning__44__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' is not contained within map '"s), __VlefCall_2__get_full_name), "'"s), 
                                                    ((""s 
                                                      == caller)
                                                      ? ""s
                                                      : 
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(" (called from "s, caller), ")"s))));
            this->__Vtask_uvm_report_warning__44__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__45__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__44__id, this->__Vtask_uvm_report_warning__44__message, __Vtask_uvm_report_warning__44__verbosity, this->__Vtask_uvm_report_warning__44__filename, __Vtask_uvm_report_warning__44__line);
        }
        get_local_map__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__47__verbosity;
    __Vfunc_uvm_report_enabled__47__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__47__severity;
    __Vfunc_uvm_report_enabled__47__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__47____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__47____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__48__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__49__Vfuncout;
    __Vtask_uvm_report_enabled__49__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__51__verbosity;
    __Vtask_uvm_report_warning__51__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__51__line;
    __Vtask_uvm_report_warning__51__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__52__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk385__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk385__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk385__DOT__l__Vmore;
    unnamedblk385__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk385__DOT__unnamedblk386__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk385__DOT__unnamedblk386__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk385__DOT__unnamedblk386__DOT__default_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__local_map;
    {
        if ((0U == this->__PVT__m_maps.size())) {
            this->__Vfunc_uvm_report_enabled__47__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__47__severity = 1U;
            __Vfunc_uvm_report_enabled__47__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__48__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__47__verbosity, (IData)(__Vfunc_uvm_report_enabled__47__severity), this->__Vfunc_uvm_report_enabled__47__id, __Vtask_uvm_report_enabled__49__Vfuncout);
            __Vfunc_uvm_report_enabled__47____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__49__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__47____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__51__line = 0x0000045aU;
                this->__Vtask_uvm_report_warning__51__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__51__verbosity = 0U;
                this->__Vtask_uvm_report_warning__51__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' is not registered with any map"s), 
                                                        ((""s 
                                                          == caller)
                                                          ? ""s
                                                          : 
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(" (called from "s, caller), ")"s))));
                this->__Vtask_uvm_report_warning__51__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__52__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__51__id, this->__Vtask_uvm_report_warning__51__message, __Vtask_uvm_report_warning__51__verbosity, this->__Vtask_uvm_report_warning__51__filename, __Vtask_uvm_report_warning__51__line);
            }
            get_default_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U == this->__PVT__m_maps.size())) {
            std::ignore = this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        }
        unnamedblk385__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk385__DOT__l__Vnext));
        while (unnamedblk385__DOT__l__Vmore) {
            unnamedblk385__DOT__l = unnamedblk385__DOT__l__Vnext;
            unnamedblk385__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk385__DOT__l__Vnext));
            unnamedblk385__DOT__unnamedblk386__DOT__map 
                = unnamedblk385__DOT__l;
            VL_NULL_CHECK(unnamedblk385__DOT__unnamedblk386__DOT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1126)->__VnoInFunc_get_parent(vlSymsp, unnamedblk385__DOT__unnamedblk386__DOT__blk);
            VL_NULL_CHECK(unnamedblk385__DOT__unnamedblk386__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1127)->__VnoInFunc_get_default_map(vlSymsp, unnamedblk385__DOT__unnamedblk386__DOT__default_map);
            if ((VlNull{} != unnamedblk385__DOT__unnamedblk386__DOT__default_map)) {
                this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk385__DOT__unnamedblk386__DOT__default_map, ""s, unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__local_map);
                if ((VlNull{} != unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__local_map)) {
                    get_default_map__Vfuncrtn = unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__local_map;
                    goto __Vlabel0;
                }
            }
        }
        std::ignore = this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__60____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__61__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__62__Vfuncout;
    __Vtask_uvm_report_enabled__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66__verbosity;
    __Vfunc_uvm_report_enabled__66__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__66__severity;
    __Vfunc_uvm_report_enabled__66__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__68__Vfuncout;
    __Vtask_uvm_report_enabled__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__71__verbosity;
    __Vfunc_uvm_report_enabled__71__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__71__severity;
    __Vfunc_uvm_report_enabled__71__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__71____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__71____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__72__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__73__Vfuncout;
    __Vtask_uvm_report_enabled__73__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__77__verbosity;
    __Vfunc_uvm_report_enabled__77__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__77__severity;
    __Vfunc_uvm_report_enabled__77__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__77____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__77____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__78__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__79__Vfuncout;
    __Vtask_uvm_report_enabled__79__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
    __Vfunc_uvm_report_enabled__82__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
    __Vfunc_uvm_report_enabled__82__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__82____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__83__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__84__Vfuncout;
    __Vtask_uvm_report_enabled__84__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_13__get_full_name;
    std::string __VlefCall_12__get_full_name;
    CData/*0:0*/ __VlefCall_11__uvm_report_enabled;
    std::string __VlefCall_10__get_full_name;
    CData/*0:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_full_name;
    std::string __VlefCall_7__get_full_name;
    CData/*0:0*/ __VlefCall_6__uvm_report_enabled;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__get_n_maps;
    std::string __VCase_h50aa3c7f__0;
    {
        get_access__Vfuncrtn = ""s;
        get_access__Vfuncrtn = this->__PVT__m_access;
        this->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_0__get_n_maps);
        if ((1U == __VlefCall_0__get_n_maps)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_access()"s, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VCase_h50aa3c7f__0);
        if ((1U & (~ ("RW"s == __VCase_h50aa3c7f__0)))) {
            if (("RO"s == __VCase_h50aa3c7f__0)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("RO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "RO"s;
                } else if (("WO"s == get_access__Vfuncrtn)) {
                    this->__Vfunc_uvm_report_enabled__60__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__60__severity = 2U;
                    __Vfunc_uvm_report_enabled__60__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__61__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), this->__Vfunc_uvm_report_enabled__60__id, __Vtask_uvm_report_enabled__62__Vfuncout);
                    __Vfunc_uvm_report_enabled__60____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__62__Vfuncout;
                    __VlefCall_1__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__60____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_1__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1162)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("WO memory '"s, __VlefCall_2__get_full_name), "' restricted to RO in map '"s), __VlefCall_3__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000048aU);
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__66__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__66__severity = 2U;
                    __Vfunc_uvm_report_enabled__66__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__67__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__66__verbosity, (IData)(__Vfunc_uvm_report_enabled__66__severity), this->__Vfunc_uvm_report_enabled__66__id, __Vtask_uvm_report_enabled__68__Vfuncout);
                    __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__68__Vfuncout;
                    __VlefCall_4__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__66____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_4__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_5__get_full_name), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000048dU);
                    }
                }
            } else if (("WO"s == __VCase_h50aa3c7f__0)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("WO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "WO"s;
                } else if (("RO"s == get_access__Vfuncrtn)) {
                    this->__Vfunc_uvm_report_enabled__71__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__71__severity = 2U;
                    __Vfunc_uvm_report_enabled__71__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__72__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__71__verbosity, (IData)(__Vfunc_uvm_report_enabled__71__severity), this->__Vfunc_uvm_report_enabled__71__id, __Vtask_uvm_report_enabled__73__Vfuncout);
                    __Vfunc_uvm_report_enabled__71____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__73__Vfuncout;
                    __VlefCall_6__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__71____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_6__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1173)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("RO memory '"s, __VlefCall_7__get_full_name), "' restricted to WO in map '"s), __VlefCall_8__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x00000495U);
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__77__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__77__severity = 2U;
                    __Vfunc_uvm_report_enabled__77__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__78__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__78__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__77__verbosity, (IData)(__Vfunc_uvm_report_enabled__77__severity), this->__Vfunc_uvm_report_enabled__77__id, __Vtask_uvm_report_enabled__79__Vfuncout);
                    __Vfunc_uvm_report_enabled__77____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__79__Vfuncout;
                    __VlefCall_9__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__77____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_9__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_10__get_full_name), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x00000498U);
                    }
                }
            } else {
                this->__Vfunc_uvm_report_enabled__82__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__82__severity = 2U;
                __Vfunc_uvm_report_enabled__82__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__83__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), this->__Vfunc_uvm_report_enabled__82__id, __Vtask_uvm_report_enabled__84__Vfuncout);
                __Vfunc_uvm_report_enabled__82____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__84__Vfuncout;
                __VlefCall_11__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__82____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_11__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                    VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1180)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Shared memory '"s, __VlefCall_12__get_full_name), "' is not shared in map '"s), __VlefCall_13__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000049cU);
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> info;
    {
        get_rights__Vfuncrtn = ""s;
        if (VL_GTES_III(32, 1U, this->__PVT__m_maps.size())) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_rights()"s, map);
        if ((VlNull{} == map)) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1201)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, info);
        get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1202)
            ->__PVT__rights;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset\n"); );
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
    IData/*31:0*/ __Vtask_uvm_report_warning__98__verbosity;
    __Vtask_uvm_report_warning__98__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__98__line;
    __Vtask_uvm_report_warning__98__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__99__Vfuncout;
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
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1220)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1222)
            ->__PVT__unmapped) {
            this->__Vfunc_uvm_report_enabled__92__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__92__severity = 1U;
            __Vfunc_uvm_report_enabled__92__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__92__verbosity, (IData)(__Vfunc_uvm_report_enabled__92__severity), this->__Vfunc_uvm_report_enabled__92__id, __Vtask_uvm_report_enabled__94__Vfuncout);
            __Vfunc_uvm_report_enabled__92____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__94__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__92____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1225)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1225)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                }
                __Vtask_uvm_report_warning__98__line = 0x000004c9U;
                this->__Vtask_uvm_report_warning__98__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__98__verbosity = 0U;
                this->__Vtask_uvm_report_warning__98__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__98__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__99__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__98__id, this->__Vtask_uvm_report_warning__98__message, __Vtask_uvm_report_warning__98__verbosity, this->__Vtask_uvm_report_warning__98__filename, __Vtask_uvm_report_warning__98__line);
            }
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1229)
            ->__PVT__offset;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk388__DOT__vreg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk388__DOT__vreg__Vnext;
    CData/*0:0*/ unnamedblk388__DOT__vreg__Vmore;
    unnamedblk388__DOT__vreg__Vmore = 0;
    unnamedblk388__DOT__vreg__Vmore = (0U != this->__PVT__m_vregs.first(unnamedblk388__DOT__vreg__Vnext));
    while (unnamedblk388__DOT__vreg__Vmore) {
        unnamedblk388__DOT__vreg = unnamedblk388__DOT__vreg__Vnext;
        unnamedblk388__DOT__vreg__Vmore = (0U != this->__PVT__m_vregs.next(unnamedblk388__DOT__vreg__Vnext));
        regs.push_back(unnamedblk388__DOT__vreg);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk389__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk389__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk389__DOT__l__Vmore;
    unnamedblk389__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk389__DOT__unnamedblk390__DOT__vreg;
    unnamedblk389__DOT__l__Vmore = (0U != this->__PVT__m_vregs.first(unnamedblk389__DOT__l__Vnext));
    while (unnamedblk389__DOT__l__Vmore) {
        unnamedblk389__DOT__l = unnamedblk389__DOT__l__Vnext;
        unnamedblk389__DOT__l__Vmore = (0U != this->__PVT__m_vregs.next(unnamedblk389__DOT__l__Vnext));
        unnamedblk389__DOT__unnamedblk390__DOT__vreg 
            = unnamedblk389__DOT__l;
        VL_NULL_CHECK(unnamedblk389__DOT__unnamedblk390__DOT__vreg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1250)->__VnoInFunc_get_fields(vlSymsp, fields);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__104__verbosity;
    __Vfunc_uvm_report_enabled__104__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__104__severity;
    __Vfunc_uvm_report_enabled__104__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__104____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__104____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__105__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__106__Vfuncout;
    __Vtask_uvm_report_enabled__106__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__108__verbosity;
    __Vtask_uvm_report_warning__108__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__108__line;
    __Vtask_uvm_report_warning__108__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__109__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk391__DOT__i;
    unnamedblk391__DOT__i = 0;
    IData/*31:0*/ unnamedblk391__DOT__i__Vloopsize;
    unnamedblk391__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> vfields;
    {
        vfields.clear();
        this->__VnoInFunc_get_virtual_fields(vlSymsp, vfields);
        unnamedblk391__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk391__DOT__i, vfields.size())) {
            unnamedblk391__DOT__i__Vloopsize = vfields.size();
            VL_NULL_CHECK(vfields.at(unnamedblk391__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1264)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_vfield_by_name__Vfuncrtn = vfields.at(unnamedblk391__DOT__i);
                goto __Vlabel0;
            }
            if ((unnamedblk391__DOT__i__Vloopsize <= vfields.size())) {
                unnamedblk391__DOT__i = ((IData)(1U) 
                                         + unnamedblk391__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__104__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__104__severity = 1U;
        __Vfunc_uvm_report_enabled__104__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__105__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__104__verbosity, (IData)(__Vfunc_uvm_report_enabled__104__severity), this->__Vfunc_uvm_report_enabled__104__id, __Vtask_uvm_report_enabled__106__Vfuncout);
        __Vfunc_uvm_report_enabled__104____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__106__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__104____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__108__line = 0x000004f4U;
            this->__Vtask_uvm_report_warning__108__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__108__verbosity = 0U;
            this->__Vtask_uvm_report_warning__108__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual field '"s, name), "' in memory '"s), __VlefCall_2__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__108__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__109__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__109__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__108__id, this->__Vtask_uvm_report_warning__108__message, __Vtask_uvm_report_warning__108__verbosity, this->__Vtask_uvm_report_warning__108__filename, __Vtask_uvm_report_warning__108__line);
        }
        get_vfield_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__112__verbosity;
    __Vfunc_uvm_report_enabled__112__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__112__severity;
    __Vfunc_uvm_report_enabled__112__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__112____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__112____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__113__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__114__Vfuncout;
    __Vtask_uvm_report_enabled__114__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__116__verbosity;
    __Vtask_uvm_report_warning__116__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__116__line;
    __Vtask_uvm_report_warning__116__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__117__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk392__DOT__l;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk392__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk392__DOT__l__Vmore;
    unnamedblk392__DOT__l__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> unnamedblk392__DOT__unnamedblk393__DOT__vreg;
    {
        unnamedblk392__DOT__l__Vmore = (0U != this->__PVT__m_vregs.first(unnamedblk392__DOT__l__Vnext));
        while (unnamedblk392__DOT__l__Vmore) {
            unnamedblk392__DOT__l = unnamedblk392__DOT__l__Vnext;
            unnamedblk392__DOT__l__Vmore = (0U != this->__PVT__m_vregs.next(unnamedblk392__DOT__l__Vnext));
            unnamedblk392__DOT__unnamedblk393__DOT__vreg 
                = unnamedblk392__DOT__l;
            VL_NULL_CHECK(unnamedblk392__DOT__unnamedblk393__DOT__vreg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1280)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_vreg_by_name__Vfuncrtn = unnamedblk392__DOT__unnamedblk393__DOT__vreg;
                goto __Vlabel0;
            }
        }
        this->__Vfunc_uvm_report_enabled__112__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__112__severity = 1U;
        __Vfunc_uvm_report_enabled__112__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__113__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__113__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__112__verbosity, (IData)(__Vfunc_uvm_report_enabled__112__severity), this->__Vfunc_uvm_report_enabled__112__id, __Vtask_uvm_report_enabled__114__Vfuncout);
        __Vfunc_uvm_report_enabled__112____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__114__Vfuncout;
        __VlefCall_1__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__112____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_1__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__116__line = 0x00000505U;
            this->__Vtask_uvm_report_warning__116__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__116__verbosity = 0U;
            this->__Vtask_uvm_report_warning__116__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual register '"s, name), "' in memory '"s), __VlefCall_2__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__116__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__117__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__116__id, this->__Vtask_uvm_report_warning__116__message, __Vtask_uvm_report_warning__116__verbosity, this->__Vtask_uvm_report_warning__116__filename, __Vtask_uvm_report_warning__116__line);
        }
        get_vreg_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__119__verbosity;
    __Vfunc_uvm_report_enabled__119__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__119__severity;
    __Vfunc_uvm_report_enabled__119__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__119____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__119____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__120__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__121__Vfuncout;
    __Vtask_uvm_report_enabled__121__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__119__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__119__severity = 2U;
    __Vfunc_uvm_report_enabled__119__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__120__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__120__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__119__verbosity, (IData)(__Vfunc_uvm_report_enabled__119__severity), this->__Vfunc_uvm_report_enabled__119__id, __Vtask_uvm_report_enabled__121__Vfuncout);
    __Vfunc_uvm_report_enabled__119____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__121__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__119____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_mem::get_vreg_by_offset() not yet implemented"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000050fU);
    }
    get_vreg_by_offset__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125__verbosity;
    __Vfunc_uvm_report_enabled__125__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__125__severity;
    __Vfunc_uvm_report_enabled__125__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__125____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__126__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__127__Vfuncout;
    __Vtask_uvm_report_enabled__127__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__131__verbosity;
    __Vtask_uvm_report_warning__131__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__131__line;
    __Vtask_uvm_report_warning__131__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__132__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__134__Vfuncout;
    __Vtask_get_n_bytes__134__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk394__DOT__i;
    unnamedblk394__DOT__i = 0;
    IData/*31:0*/ unnamedblk394__DOT__i__Vloopsize;
    unnamedblk394__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_addresses__Vfuncrtn = 0U;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_addresses()"s, map);
        if ((VlNull{} == map)) {
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1316)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1318)
            ->__PVT__unmapped) {
            this->__Vfunc_uvm_report_enabled__125__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__125__severity = 1U;
            __Vfunc_uvm_report_enabled__125__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__126__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__125__verbosity, (IData)(__Vfunc_uvm_report_enabled__125__severity), this->__Vfunc_uvm_report_enabled__125__id, __Vtask_uvm_report_enabled__127__Vfuncout);
            __Vfunc_uvm_report_enabled__125____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__127__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__125____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1321)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1321)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                }
                __Vtask_uvm_report_warning__131__line = 0x00000529U;
                this->__Vtask_uvm_report_warning__131__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__131__verbosity = 0U;
                this->__Vtask_uvm_report_warning__131__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__131__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__132__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__132__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__131__id, this->__Vtask_uvm_report_warning__131__message, __Vtask_uvm_report_warning__131__verbosity, this->__Vtask_uvm_report_warning__131__filename, __Vtask_uvm_report_warning__131__line);
            }
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        addr = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1325)
            ->__PVT__addr;
        unnamedblk394__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk394__DOT__i, addr.size())) {
            unnamedblk394__DOT__i__Vloopsize = addr.size();
            addr.atWrite(unnamedblk394__DOT__i) = (addr.at(unnamedblk394__DOT__i) 
                                                   + 
                                                   ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1328)
                                                                    ->__PVT__mem_range[0U])) 
                                                    * offset));
            if ((unnamedblk394__DOT__i__Vloopsize <= addr.size())) {
                unnamedblk394__DOT__i = ((IData)(1U) 
                                         + unnamedblk394__DOT__i);
            }
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1330)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__134__Vfuncout);
        get_addresses__Vfuncrtn = __Vtask_get_n_bytes__134__Vfuncout;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_addresses__135__Vfuncout;
    __Vtask_get_addresses__135__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlQueue<QData/*63:0*/> addr;
    get_address__Vfuncrtn = 0ULL;
    addr.clear();
    addr.atDefault() = 0;
    this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, offset, map, addr, __Vtask_get_addresses__135__Vfuncout);
    get_address__Vfuncrtn = addr.at(0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size\n"); );
    // Body
    get_size__Vfuncrtn = this->__PVT__m_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + ((this->__PVT__m_n_bits 
                                             - (IData)(1U)) 
                                            >> 3U));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vtask_read_by_name__137__Vfuncout;
    __Vtask_read_by_name__137__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read_by_name__137__val;
    __Vtask_read_by_name__137__val = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    build_coverage__Vfuncrtn = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    __Vtask_read_by_name__137__val = build_coverage__Vfuncrtn;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz105__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__137__val, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this}, __Vtask_read_by_name__137__Vfuncout);
    build_coverage__Vfuncrtn = __Vtask_read_by_name__137__val;
    build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                & models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage\n"); );
    // Body
    this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                | models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage\n"); );
    // Body
    has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                               & models) == models);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage\n"); );
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage\n"); );
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

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1447)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1448)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1449)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1450)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1451)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1452)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1453)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1454)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1455)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1456)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1457)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1458)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1462)
        ->__PVT__status;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1482)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1483)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1484)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1485)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1486)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1487)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1488)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1489)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1490)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1491)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1492)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1493)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1497)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1498)
        ->__PVT__value.at(0U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1518)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1519)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1520)->__PVT__kind = 3U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1521)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1522)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1523)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1524)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1525)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1526)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1527)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1528)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1529)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1533)
        ->__PVT__status;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1553)->__PVT__element 
        = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1554)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1555)->__PVT__kind = 2U;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1556)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1557)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1558)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1559)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1560)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1561)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1562)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1563)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1564)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1568)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1569)
        ->__PVT__value;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__152__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__171__verbosity;
    __Vfunc_uvm_report_enabled__171__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__171__severity;
    __Vfunc_uvm_report_enabled__171__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__171____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__171____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__172__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__173__Vfuncout;
    __Vtask_uvm_report_enabled__173__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__177__verbosity;
    __Vtask_uvm_report_info__177__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__177__line;
    __Vtask_uvm_report_info__177__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__178__Vfuncout;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_6__get_backdoor;
    std::string __VlefCond_5;
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_access;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_1__get_sequencer;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk395__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk396__DOT__system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk396__DOT__unnamedblk397__DOT__fd;
    QData/*63:0*/ unnamedblk396__DOT__unnamedblk398__DOT__idx;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk399__DOT__bkdr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk400__DOT__cb;
    std::string unnamedblk401__DOT__path_s;
    std::string unnamedblk401__DOT__value_s;
    std::string unnamedblk401__DOT__pre_s;
    std::string unnamedblk401__DOT__range_s;
    IData/*31:0*/ unnamedblk401__DOT__unnamedblk402__DOT__i;
    unnamedblk401__DOT__unnamedblk402__DOT__i = 0;
    IData/*31:0*/ unnamedblk401__DOT__unnamedblk402__DOT__i__Vloopsize;
    unnamedblk401__DOT__unnamedblk402__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi37> cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi37, vlSymsp, 
                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1581)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1582)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__152__map_info, "burst_write()"s, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__152__map_info;
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1589)->__PVT__status = 0U;
        this->__VnoInFunc_pre_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1593)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk395__DOT__cb);
        while ((VlNull{} != unnamedblk395__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk395__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1594)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1593)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk395__DOT__cb);
        }
        if ((0U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1596)
             ->__PVT__status)) {
            this->__PVT__m_write_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1602)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1605)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1607)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1607)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk396__DOT__system_map);
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1609)
                 ->__PVT__frontdoor)) {
                unnamedblk396__DOT__unnamedblk397__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1610)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk396__DOT__unnamedblk397__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1611)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk396__DOT__unnamedblk397__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1612)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk396__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1613)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_1__get_sequencer);
                    VL_NULL_CHECK(unnamedblk396__DOT__unnamedblk397__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1613)->__PVT__sequencer 
                        = __VlefCall_1__get_sequencer;
                }
                co_await VL_NULL_CHECK(unnamedblk396__DOT__unnamedblk397__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1614)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk396__DOT__unnamedblk397__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1614)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1614)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1617)
                                       ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1617)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            }
            if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1620)
                 ->__PVT__status)) {
                unnamedblk396__DOT__unnamedblk398__DOT__idx = 0ULL;
                unnamedblk396__DOT__unnamedblk398__DOT__idx 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1621)
                    ->__PVT__offset;
                while ((unnamedblk396__DOT__unnamedblk398__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1622)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1622)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1624)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk396__DOT__unnamedblk398__DOT__idx), 0U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1624)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1625)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1625)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1626)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk396__DOT__unnamedblk398__DOT__idx)), 0U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1627)
                                                                                ->__PVT__map);
                    unnamedblk396__DOT__unnamedblk398__DOT__idx 
                        = (1ULL + unnamedblk396__DOT__unnamedblk398__DOT__idx);
                }
            }
        } else {
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1634)
                                         ->__PVT__map, __VlefCall_2__get_access);
            if (("RW"s == __VlefCall_2__get_access)) {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk399__DOT__bkdr);
                if ((VlNull{} != unnamedblk399__DOT__bkdr)) {
                    VL_NULL_CHECK(unnamedblk399__DOT__bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1637)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                } else {
                    this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                }
            } else {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1642)->__PVT__status = 0U;
            }
        }
        this->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk400__DOT__cb);
        while ((VlNull{} != unnamedblk400__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk400__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1648)->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk400__DOT__cb);
        }
        this->__Vfunc_uvm_report_enabled__171__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__171__severity = 0U;
        __Vfunc_uvm_report_enabled__171__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__172__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__172__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__171__verbosity, (IData)(__Vfunc_uvm_report_enabled__171__severity), this->__Vfunc_uvm_report_enabled__171__id, __Vtask_uvm_report_enabled__173__Vfuncout);
        __Vfunc_uvm_report_enabled__171____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__173__Vfuncout;
        __VlefCall_3__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__171____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_3__uvm_report_enabled) {
            unnamedblk401__DOT__path_s = ""s;
            unnamedblk401__DOT__value_s = ""s;
            unnamedblk401__DOT__pre_s = ""s;
            unnamedblk401__DOT__range_s = ""s;
            if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1653)
                 ->__PVT__path)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1654)
                     ->__PVT__frontdoor)) {
                    __VlefCond_5 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1655)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1655)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    __VlefCond_5 = VL_CONCATN_NNN("map "s, __VlefCall_4__get_full_name);
                }
                unnamedblk401__DOT__path_s = __VlefCond_5;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_6__get_backdoor);
                if ((VlNull{} != __VlefCall_6__get_backdoor)) {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x73657220U;
                    __Vtemp_1[3U] = 0x00000075U;
                } else {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x44504920U;
                    __Vtemp_1[3U] = 0U;
                }
                unnamedblk401__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
            }
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1659)
                           ->__PVT__value.size())) {
                unnamedblk401__DOT__value_s = "='{"s;
                unnamedblk401__DOT__pre_s = "Burst "s;
                unnamedblk401__DOT__unnamedblk402__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk401__DOT__unnamedblk402__DOT__i, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1662)
                                  ->__PVT__value.size())) {
                    unnamedblk401__DOT__unnamedblk402__DOT__i__Vloopsize 
                        = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1662)
                        ->__PVT__value.size();
                    unnamedblk401__DOT__value_s = VL_CONCATN_NNN(unnamedblk401__DOT__value_s, VL_SFORMATF_N_NX("%0h,",1
                                                                                , '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1663)
                                                                                ->__PVT__value.at(unnamedblk401__DOT__unnamedblk402__DOT__i)) );
                    if ((unnamedblk401__DOT__unnamedblk402__DOT__i__Vloopsize 
                         <= VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1662)
                         ->__PVT__value.size())) {
                        unnamedblk401__DOT__unnamedblk402__DOT__i 
                            = ((IData)(1U) + unnamedblk401__DOT__unnamedblk402__DOT__i);
                    }
                }
                unnamedblk401__DOT__value_s = VL_PUTC_N(unnamedblk401__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk401__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                VL_SFORMAT_NX(unnamedblk401__DOT__range_s
                              ,"[%0d:%0d]",2, '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1665)
                              ->__PVT__offset, '#',64,
                              (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1665)
                               ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1665)
                                                                 ->__PVT__value.size()))));
            } else {
                VL_SFORMAT_NX(unnamedblk401__DOT__value_s
                              ,"=%0h",1, '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1668)
                              ->__PVT__value.at(0U));
                VL_SFORMAT_NX(unnamedblk401__DOT__range_s
                              ,"[%0d]",1, '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1669)
                              ->__PVT__offset);
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            __Vtask_uvm_report_info__177__line = 0U;
            this->__Vtask_uvm_report_info__177__filename = ""s;
            __Vtask_uvm_report_info__177__verbosity = 0x0000012cU;
            this->__Vtask_uvm_report_info__177__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk401__DOT__pre_s, "Wrote memory via "s), unnamedblk401__DOT__path_s), ": "s), __VlefCall_7__get_full_name), unnamedblk401__DOT__range_s), unnamedblk401__DOT__value_s));
            this->__Vtask_uvm_report_info__177__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__178__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__178__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__177__id, this->__Vtask_uvm_report_info__177__message, __Vtask_uvm_report_info__177__verbosity, this->__Vtask_uvm_report_info__177__filename, __Vtask_uvm_report_info__177__line);
        }
        this->__PVT__m_write_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__181__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__199__verbosity;
    __Vfunc_uvm_report_enabled__199__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__199__severity;
    __Vfunc_uvm_report_enabled__199__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__199____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__199____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__200__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__201__Vfuncout;
    __Vtask_uvm_report_enabled__201__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__205__verbosity;
    __Vtask_uvm_report_info__205__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__205__line;
    __Vtask_uvm_report_info__205__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__206__Vfuncout;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_5__get_backdoor;
    std::string __VlefCond_4;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_1__get_sequencer;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk403__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk404__DOT__system_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk404__DOT__unnamedblk405__DOT__fd;
    QData/*63:0*/ unnamedblk404__DOT__unnamedblk406__DOT__idx;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk407__DOT__bkdr;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk408__DOT__cb;
    std::string unnamedblk409__DOT__path_s;
    std::string unnamedblk409__DOT__value_s;
    std::string unnamedblk409__DOT__pre_s;
    std::string unnamedblk409__DOT__range_s;
    IData/*31:0*/ unnamedblk409__DOT__unnamedblk410__DOT__i;
    unnamedblk409__DOT__unnamedblk410__DOT__i = 0;
    IData/*31:0*/ unnamedblk409__DOT__unnamedblk410__DOT__i__Vloopsize;
    unnamedblk409__DOT__unnamedblk410__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi37> cbs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi37, vlSymsp, 
                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1688)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1689)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__181__map_info, "burst_read()"s, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__181__map_info;
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_read_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1696)->__PVT__status = 0U;
        this->__VnoInFunc_pre_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1700)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk403__DOT__cb);
        while ((VlNull{} != unnamedblk403__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk403__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1701)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1700)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk403__DOT__cb);
        }
        if ((0U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1703)
             ->__PVT__status)) {
            this->__PVT__m_read_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1709)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1712)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1714)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1714)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk404__DOT__system_map);
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1716)
                 ->__PVT__frontdoor)) {
                unnamedblk404__DOT__unnamedblk405__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1717)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk404__DOT__unnamedblk405__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1718)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk404__DOT__unnamedblk405__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1719)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk404__DOT__system_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1720)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_1__get_sequencer);
                    VL_NULL_CHECK(unnamedblk404__DOT__unnamedblk405__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1720)->__PVT__sequencer 
                        = __VlefCall_1__get_sequencer;
                }
                co_await VL_NULL_CHECK(unnamedblk404__DOT__unnamedblk405__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1721)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk404__DOT__unnamedblk405__DOT__fd, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1721)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1721)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1724)
                                       ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1724)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            }
            if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1727)
                 ->__PVT__status)) {
                unnamedblk404__DOT__unnamedblk406__DOT__idx = 0ULL;
                unnamedblk404__DOT__unnamedblk406__DOT__idx 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1728)
                    ->__PVT__offset;
                while ((unnamedblk404__DOT__unnamedblk406__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1729)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1729)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1731)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk404__DOT__unnamedblk406__DOT__idx), 1U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1731)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1732)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1732)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1733)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk404__DOT__unnamedblk406__DOT__idx)), 1U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1734)
                                                                                ->__PVT__map);
                    unnamedblk404__DOT__unnamedblk406__DOT__idx 
                        = (1ULL + unnamedblk404__DOT__unnamedblk406__DOT__idx);
                }
            }
        } else {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk407__DOT__bkdr);
            if ((VlNull{} != unnamedblk407__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk407__DOT__bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1742)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
            }
        }
        this->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1749)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk408__DOT__cb);
        while ((VlNull{} != unnamedblk408__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk408__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1750)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1749)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk408__DOT__cb);
        }
        this->__Vfunc_uvm_report_enabled__199__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__199__severity = 0U;
        __Vfunc_uvm_report_enabled__199__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__200__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__199__verbosity, (IData)(__Vfunc_uvm_report_enabled__199__severity), this->__Vfunc_uvm_report_enabled__199__id, __Vtask_uvm_report_enabled__201__Vfuncout);
        __Vfunc_uvm_report_enabled__199____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__201__Vfuncout;
        __VlefCall_2__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__199____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_2__uvm_report_enabled) {
            unnamedblk409__DOT__path_s = ""s;
            unnamedblk409__DOT__value_s = ""s;
            unnamedblk409__DOT__pre_s = ""s;
            unnamedblk409__DOT__range_s = ""s;
            if ((0U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1755)
                 ->__PVT__path)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1756)
                     ->__PVT__frontdoor)) {
                    __VlefCond_4 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1757)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1757)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __VlefCond_4 = VL_CONCATN_NNN("map "s, __VlefCall_3__get_full_name);
                }
                unnamedblk409__DOT__path_s = __VlefCond_4;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_5__get_backdoor);
                if ((VlNull{} != __VlefCall_5__get_backdoor)) {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x73657220U;
                    __Vtemp_1[3U] = 0x00000075U;
                } else {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x44504920U;
                    __Vtemp_1[3U] = 0U;
                }
                unnamedblk409__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
            }
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1761)
                           ->__PVT__value.size())) {
                unnamedblk409__DOT__value_s = "='{"s;
                unnamedblk409__DOT__pre_s = "Burst "s;
                unnamedblk409__DOT__unnamedblk410__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk409__DOT__unnamedblk410__DOT__i, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1764)
                                  ->__PVT__value.size())) {
                    unnamedblk409__DOT__unnamedblk410__DOT__i__Vloopsize 
                        = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1764)
                        ->__PVT__value.size();
                    unnamedblk409__DOT__value_s = VL_CONCATN_NNN(unnamedblk409__DOT__value_s, VL_SFORMATF_N_NX("%0h,",1
                                                                                , '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1765)
                                                                                ->__PVT__value.at(unnamedblk409__DOT__unnamedblk410__DOT__i)) );
                    if ((unnamedblk409__DOT__unnamedblk410__DOT__i__Vloopsize 
                         <= VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1764)
                         ->__PVT__value.size())) {
                        unnamedblk409__DOT__unnamedblk410__DOT__i 
                            = ((IData)(1U) + unnamedblk409__DOT__unnamedblk410__DOT__i);
                    }
                }
                unnamedblk409__DOT__value_s = VL_PUTC_N(unnamedblk409__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk409__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                VL_SFORMAT_NX(unnamedblk409__DOT__range_s
                              ,"[%0d:%0d]",2, '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1767)
                              ->__PVT__offset, '#',64,
                              (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1767)
                               ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1767)
                                                                 ->__PVT__value.size()))));
            } else {
                VL_SFORMAT_NX(unnamedblk409__DOT__value_s
                              ,"=%0h",1, '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1770)
                              ->__PVT__value.at(0U));
                VL_SFORMAT_NX(unnamedblk409__DOT__range_s
                              ,"[%0d]",1, '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1771)
                              ->__PVT__offset);
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__205__line = 0U;
            this->__Vtask_uvm_report_info__205__filename = ""s;
            __Vtask_uvm_report_info__205__verbosity = 0x0000012cU;
            this->__Vtask_uvm_report_info__205__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk409__DOT__pre_s, "Read memory via "s), unnamedblk409__DOT__path_s), ": "s), __VlefCall_6__get_full_name), unnamedblk409__DOT__range_s), unnamedblk409__DOT__value_s));
            this->__Vtask_uvm_report_info__205__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__206__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__206__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__205__id, this->__Vtask_uvm_report_info__205__message, __Vtask_uvm_report_info__205__verbosity, this->__Vtask_uvm_report_info__205__filename, __Vtask_uvm_report_info__205__line);
        }
        this->__PVT__m_read_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__217__verbosity;
    __Vfunc_uvm_report_enabled__217__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__217__severity;
    __Vfunc_uvm_report_enabled__217__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__217____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__217____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__218__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__219__Vfuncout;
    __Vtask_uvm_report_enabled__219__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__221__verbosity;
    __Vtask_uvm_report_warning__221__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__221__line;
    __Vtask_uvm_report_warning__221__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__222__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__227__verbosity;
    __Vfunc_uvm_report_enabled__227__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__227__severity;
    __Vfunc_uvm_report_enabled__227__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__227____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__227____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__228__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__229__Vfuncout;
    __Vtask_uvm_report_enabled__229__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__234__verbosity;
    __Vfunc_uvm_report_enabled__234__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__234__severity;
    __Vfunc_uvm_report_enabled__234__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__234____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__234____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__235__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__236__Vfuncout;
    __Vtask_uvm_report_enabled__236__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__242__verbosity;
    __Vfunc_uvm_report_enabled__242__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__242__severity;
    __Vfunc_uvm_report_enabled__242__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__243__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__244__Vfuncout;
    __Vtask_uvm_report_enabled__244__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__248__verbosity;
    __Vfunc_uvm_report_enabled__248__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__248__severity;
    __Vfunc_uvm_report_enabled__248__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__248____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__248____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__249__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__250__Vfuncout;
    __Vtask_uvm_report_enabled__250__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_23__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_22__get_n_bytes;
    IData/*31:0*/ __VlefCall_21__get_n_bits;
    CData/*0:0*/ __VlefCall_20__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_19__get_n_bytes;
    IData/*31:0*/ __VlefCall_18__get_n_bits;
    std::string __VlefCall_17__get_full_name;
    std::string __VlefCall_16__get_full_name;
    CData/*0:0*/ __VlefCall_15__uvm_report_enabled;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_type_name;
    CData/*0:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_type_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_10__get_local_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_9__backdoor;
    std::string __VlefCall_8__get_full_name;
    CData/*0:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_6;
    CData/*0:0*/ __VlefCall_5__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_4__get_backdoor;
    IData/*31:0*/ __VlefCall_3__get_default_path;
    std::string __VlefCall_2__get_type_name;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        if ((VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1789)
             ->__PVT__offset >= this->__PVT__m_size)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            this->__Vfunc_uvm_report_enabled__209__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
            __Vfunc_uvm_report_enabled__209__severity = 2U;
            __Vfunc_uvm_report_enabled__209__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__210__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__210__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__209__verbosity, (IData)(__Vfunc_uvm_report_enabled__209__severity), this->__Vfunc_uvm_report_enabled__209__id, __Vtask_uvm_report_enabled__211__Vfuncout);
            __Vfunc_uvm_report_enabled__209____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__211__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__209____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), VL_SFORMATF_N_NX("Offset 'h%0h exceeds size of memory, 'h%0h",2
                                                                                , '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1792)
                                                                                ->__PVT__offset
                                                                                , '#',64,this->__PVT__m_size) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x00000700U);
            }
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1793)->__PVT__status = 1U;
            Xcheck_accessX__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((3U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1797)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1798)->__VnoInFunc_get_default_path(vlSymsp, __VlefCall_3__get_default_path);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1798)->__PVT__path 
                = __VlefCall_3__get_default_path;
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1800)
             ->__PVT__path)) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_4__get_backdoor);
            __VlefLogAnd_6 = (VlNull{} == __VlefCall_4__get_backdoor);
            if (__VlefLogAnd_6) {
                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_5__has_hdl_path);
                __VlefLogAnd_6 = (1U & (~ (IData)(__VlefCall_5__has_hdl_path)));
            }
            if (__VlefLogAnd_6) {
                this->__Vfunc_uvm_report_enabled__217__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__217__severity = 1U;
                __Vfunc_uvm_report_enabled__217__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__218__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__218__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__217__verbosity, (IData)(__Vfunc_uvm_report_enabled__217__severity), this->__Vfunc_uvm_report_enabled__217__id, __Vtask_uvm_report_enabled__219__Vfuncout);
                __Vfunc_uvm_report_enabled__217____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__219__Vfuncout;
                __VlefCall_7__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__217____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_7__uvm_report_enabled) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                    __Vtask_uvm_report_warning__221__line = 0x0000070cU;
                    this->__Vtask_uvm_report_warning__221__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_warning__221__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__221__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for memory '"s, __VlefCall_8__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__221__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__222__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vfunc_get__222__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__221__id, this->__Vtask_uvm_report_warning__221__message, __Vtask_uvm_report_warning__221__verbosity, this->__Vtask_uvm_report_warning__221__filename, __Vtask_uvm_report_warning__221__line);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1805)->__PVT__path = 0U;
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_9__backdoor);
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1808)->__PVT__map 
                    = __VlefCall_9__backdoor;
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1811)
             ->__PVT__path)) {
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1813)
                                            ->__PVT__map, caller, __VlefCall_10__get_local_map);
            VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1813)->__PVT__local_map 
                = __VlefCall_10__get_local_map;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1815)
                 ->__PVT__local_map)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                this->__Vfunc_uvm_report_enabled__227__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_11__get_type_name);
                __Vfunc_uvm_report_enabled__227__severity = 2U;
                __Vfunc_uvm_report_enabled__227__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__228__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vfunc_get__228__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__227__verbosity, (IData)(__Vfunc_uvm_report_enabled__227__severity), this->__Vfunc_uvm_report_enabled__227__id, __Vtask_uvm_report_enabled__229__Vfuncout);
                __Vfunc_uvm_report_enabled__227____VlefCall_0__uvm_report_enabled 
                    = __Vtask_uvm_report_enabled__229__Vfuncout;
                __VlefCall_12__uvm_report_enabled = 
                    (1U & __Vfunc_uvm_report_enabled__227____VlefCall_0__uvm_report_enabled);
                if (__VlefCall_12__uvm_report_enabled) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1818)
                                  ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1818)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_13__get_type_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, __VlefCall_14__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000071aU);
                }
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1819)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1823)
                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1823)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
            if ((VlNull{} == VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1825)
                 ->__PVT__frontdoor)) {
                if (VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1827)
                    ->__PVT__unmapped) {
                    this->__Vfunc_uvm_report_enabled__234__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__234__severity = 2U;
                    __Vfunc_uvm_report_enabled__234__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__235__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__235__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__234__verbosity, (IData)(__Vfunc_uvm_report_enabled__234__severity), this->__Vfunc_uvm_report_enabled__234__id, __Vtask_uvm_report_enabled__236__Vfuncout);
                    __Vfunc_uvm_report_enabled__234____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__236__Vfuncout;
                    __VlefCall_15__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__234____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_15__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1830)
                                      ->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1830)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_16__get_full_name), "' unmapped in map '"s), __VlefCall_17__get_full_name), "' and does not have a user-defined frontdoor"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x00000726U);
                    }
                    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1831)->__PVT__status = 1U;
                    Xcheck_accessX__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1835)
                               ->__PVT__value.size())) {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_18__get_n_bits);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1836)
                                  ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1836)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_19__get_n_bytes);
                    if ((__VlefCall_18__get_n_bits 
                         > (__VlefCall_19__get_n_bytes 
                            << 3U))) {
                        this->__Vfunc_uvm_report_enabled__242__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__242__severity = 2U;
                        __Vfunc_uvm_report_enabled__242__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__243__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vfunc_get__243__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__242__verbosity, (IData)(__Vfunc_uvm_report_enabled__242__severity), this->__Vfunc_uvm_report_enabled__242__id, __Vtask_uvm_report_enabled__244__Vfuncout);
                        __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled 
                            = __Vtask_uvm_report_enabled__244__Vfuncout;
                        __VlefCall_20__uvm_report_enabled 
                            = (1U & __Vfunc_uvm_report_enabled__242____VlefCall_0__uvm_report_enabled);
                        if (__VlefCall_20__uvm_report_enabled) {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_21__get_n_bits);
                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1839)
                                          ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1839)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_22__get_n_bytes);
                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Cannot burst a %0d-bit memory through a narrower data path (%0d bytes)",2
                                                                                , '#',32,__VlefCall_21__get_n_bits
                                                                                , '#',32,
                                                                                (__VlefCall_22__get_n_bytes 
                                                                                << 3U)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000072fU);
                        }
                        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1840)->__PVT__status = 1U;
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                    if (((VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1843)
                          ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1843)
                                                            ->__PVT__value.size()))) 
                         > this->__PVT__m_size)) {
                        this->__Vfunc_uvm_report_enabled__248__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__248__severity = 2U;
                        __Vfunc_uvm_report_enabled__248__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__249__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vfunc_get__249__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__248__verbosity, (IData)(__Vfunc_uvm_report_enabled__248__severity), this->__Vfunc_uvm_report_enabled__248__id, __Vtask_uvm_report_enabled__250__Vfuncout);
                        __Vfunc_uvm_report_enabled__248____VlefCall_0__uvm_report_enabled 
                            = __Vtask_uvm_report_enabled__250__Vfuncout;
                        __VlefCall_23__uvm_report_enabled 
                            = (1U & __Vfunc_uvm_report_enabled__248____VlefCall_0__uvm_report_enabled);
                        if (__VlefCall_23__uvm_report_enabled) {
                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Burst of size 'd%0d starting at offset 'd%0d exceeds size of memory, 'd%0d",3
                                                                                , '~',32,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1846)
                                                                                ->__PVT__value.size()
                                                                                , '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1846)
                                                                                ->__PVT__offset
                                                                                , '#',64,this->__PVT__m_size) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x00000736U);
                        }
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                }
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1852)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1853)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1853)
                    ->__PVT__local_map;
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__254__verbosity;
    __Vfunc_uvm_report_enabled__254__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__254__severity;
    __Vfunc_uvm_report_enabled__254__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__254____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__254____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__255__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__256__Vfuncout;
    __Vtask_uvm_report_enabled__256__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263__verbosity;
    __Vfunc_uvm_report_enabled__263__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__263__severity;
    __Vfunc_uvm_report_enabled__263__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__263____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__264__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__265__Vfuncout;
    __Vtask_uvm_report_enabled__265__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__267__verbosity;
    __Vtask_uvm_report_info__267__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__267__line;
    __Vtask_uvm_report_info__267__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__268__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
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
            this->__Vfunc_uvm_report_enabled__254__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__254__severity = 2U;
            __Vfunc_uvm_report_enabled__254__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__255__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__255__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__254__verbosity, (IData)(__Vfunc_uvm_report_enabled__254__severity), this->__Vfunc_uvm_report_enabled__254__id, __Vtask_uvm_report_enabled__256__Vfuncout);
            __Vfunc_uvm_report_enabled__254____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__256__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__254____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No backdoor access available in memory '"s, __VlefCall_3__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000075aU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1889)->__PVT__element 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1890)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1891)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1892)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1893)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1894)->__PVT__value.atWrite(0U) 
            = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                        - 1ULL));
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1895)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1896)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1897)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1898)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1899)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1902)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1906)
            ->__PVT__status;
        this->__Vfunc_uvm_report_enabled__263__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__263__severity = 0U;
        __Vfunc_uvm_report_enabled__263__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__264__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__264__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__263__verbosity, (IData)(__Vfunc_uvm_report_enabled__263__severity), this->__Vfunc_uvm_report_enabled__263__id, __Vtask_uvm_report_enabled__265__Vfuncout);
        __Vfunc_uvm_report_enabled__263____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__265__Vfuncout;
        __VlefCall_5__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__263____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_5__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__267__line = 0x00000775U;
            this->__Vtask_uvm_report_info__267__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__267__verbosity = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__267__message
                          ,"Poked memory '%s[%0d]' with value 'h%h",3
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,offset, '#',64,value);
            this->__Vtask_uvm_report_info__267__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__268__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__268__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__267__id, this->__Vtask_uvm_report_info__267__message, __Vtask_uvm_report_info__267__verbosity, this->__Vtask_uvm_report_info__267__filename, __Vtask_uvm_report_info__267__line);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__272__verbosity;
    __Vfunc_uvm_report_enabled__272__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__272__severity;
    __Vfunc_uvm_report_enabled__272__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__272____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__272____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__273__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__274__Vfuncout;
    __Vtask_uvm_report_enabled__274__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__281__verbosity;
    __Vfunc_uvm_report_enabled__281__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__281__severity;
    __Vfunc_uvm_report_enabled__281__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__281____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__281____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__282__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__283__Vfuncout;
    __Vtask_uvm_report_enabled__283__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__285__verbosity;
    __Vtask_uvm_report_info__285__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__285__line;
    __Vtask_uvm_report_info__285__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__286__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
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
            this->__Vfunc_uvm_report_enabled__272__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__272__severity = 2U;
            __Vfunc_uvm_report_enabled__272__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__273__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__273__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__272__verbosity, (IData)(__Vfunc_uvm_report_enabled__272__severity), this->__Vfunc_uvm_report_enabled__272__id, __Vtask_uvm_report_enabled__274__Vfuncout);
            __Vfunc_uvm_report_enabled__272____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__274__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__272____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No backdoor access available in memory '"s, __VlefCall_3__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000078cU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1939)->__PVT__element 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1940)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1941)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1942)->__PVT__kind = 0U;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1943)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1944)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1945)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1946)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1947)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1948)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1951)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1955)
            ->__PVT__status;
        value = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1956)
            ->__PVT__value.at(0U);
        this->__Vfunc_uvm_report_enabled__281__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__281__severity = 0U;
        __Vfunc_uvm_report_enabled__281__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__282__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__282__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__281__verbosity, (IData)(__Vfunc_uvm_report_enabled__281__severity), this->__Vfunc_uvm_report_enabled__281__id, __Vtask_uvm_report_enabled__283__Vfuncout);
        __Vfunc_uvm_report_enabled__281____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__283__Vfuncout;
        __VlefCall_5__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__281____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_5__uvm_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__285__line = 0x000007a7U;
            this->__Vtask_uvm_report_info__285__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__285__verbosity = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__285__message
                          ,"Peeked memory '%s[%0d]' has value 'h%h",3
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,offset, '#',64,value);
            this->__Vtask_uvm_report_info__285__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__286__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__286__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__285__id, this->__Vtask_uvm_report_info__285__message, __Vtask_uvm_report_info__285__verbosity, this->__Vtask_uvm_report_info__285__filename, __Vtask_uvm_report_info__285__line);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__289__verbosity;
    __Vfunc_uvm_report_enabled__289__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__289__severity;
    __Vfunc_uvm_report_enabled__289__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__289____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__289____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__290__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__291__Vfuncout;
    __Vtask_uvm_report_enabled__291__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_frontdoor()"s, map);
        if ((VlNull{} == map)) {
            this->__Vfunc_uvm_report_enabled__289__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__289__severity = 2U;
            __Vfunc_uvm_report_enabled__289__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__290__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__290__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__289__verbosity, (IData)(__Vfunc_uvm_report_enabled__289__severity), this->__Vfunc_uvm_report_enabled__289__id, __Vtask_uvm_report_enabled__291__Vfuncout);
            __Vfunc_uvm_report_enabled__289____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__291__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__289____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1981)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' not found in map '"s), __VlefCall_2__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x000007bdU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1985)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 1986)->__PVT__frontdoor 
            = ftdr;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__297__verbosity;
    __Vfunc_uvm_report_enabled__297__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__297__severity;
    __Vfunc_uvm_report_enabled__297__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__297____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__297____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__298__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__299__Vfuncout;
    __Vtask_uvm_report_enabled__299__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_frontdoor()"s, map);
        if ((VlNull{} == map)) {
            this->__Vfunc_uvm_report_enabled__297__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__297__severity = 2U;
            __Vfunc_uvm_report_enabled__297__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__298__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__298__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__297__verbosity, (IData)(__Vfunc_uvm_report_enabled__297__severity), this->__Vfunc_uvm_report_enabled__297__id, __Vtask_uvm_report_enabled__299__Vfuncout);
            __Vfunc_uvm_report_enabled__297____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__299__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__297____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2000)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' not found in map '"s), __VlefCall_2__get_full_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x000007d0U);
            }
            get_frontdoor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2004)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2005)
            ->__PVT__frontdoor;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    this->__PVT__m_backdoor = bkdr;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk411__DOT__blk;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk411__DOT__bkdr;
    if (((VlNull{} == this->__PVT__m_backdoor) & (IData)(inherited))) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk411__DOT__blk);
        {
            while ((VlNull{} != unnamedblk411__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk411__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2033)->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk411__DOT__bkdr);
                if ((VlNull{} != unnamedblk411__DOT__bkdr)) {
                    this->__PVT__m_backdoor = unnamedblk411__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk411__DOT__blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2038)->__VnoInFunc_get_parent(vlSymsp, unnamedblk411__DOT__blk);
            }
            __Vlabel0: ;
        }
    }
    get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

extern const VlWide<32>/*1023:0*/ Vcsi2_tb_top__ConstPool__CONST_hd6b7ba52_0;
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, VlWide<32>/*1023:0*/ &value, IData/*31:0*/ &uvm_hdl_read__Vfuncrtn);
extern const VlWide<32>/*1023:0*/ Vcsi2_tb_top__ConstPool__CONST_h2ae7f32a_0;

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__308__verbosity;
    __Vfunc_uvm_report_enabled__308__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__308__severity;
    __Vfunc_uvm_report_enabled__308__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__308____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__308____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__309__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__310__Vfuncout;
    __Vtask_uvm_report_enabled__310__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__311__verbosity;
    __Vtask_uvm_report_info__311__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__311__line;
    __Vtask_uvm_report_info__311__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__312__Vfuncout;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__314__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__314__value);
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__315__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__315__value);
    IData/*31:0*/ __Vfunc_uvm_report_enabled__316__verbosity;
    __Vfunc_uvm_report_enabled__316__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__316__severity;
    __Vfunc_uvm_report_enabled__316__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__316____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__316____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__317__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__318__Vfuncout;
    __Vtask_uvm_report_enabled__318__Vfuncout = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__320__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i;
    __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i__Vloopsize;
    __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i__Vloopsize = 0;
    Vcsi2_tb_top_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__unnamedblk220__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__unnamedblk220__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__unnamedblk220__DOT__slice.__PVT__size = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__321__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i;
    __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i__Vloopsize;
    __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i__Vloopsize = 0;
    Vcsi2_tb_top_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__unnamedblk220__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__unnamedblk220__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__unnamedblk220__DOT__slice.__PVT__size = 0;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__uvm_hdl_concat2string;
    std::string __VlefCall_5__uvm_hdl_concat2string;
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_hdl_read;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk412__DOT__mem_idx;
    unnamedblk412__DOT__mem_idx = 0;
    IData/*31:0*/ unnamedblk412__DOT__mem_idx__Vloopsize;
    unnamedblk412__DOT__mem_idx__Vloopsize = 0;
    std::string unnamedblk412__DOT__unnamedblk413__DOT__idx;
    IData/*31:0*/ unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i;
    unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i = 0;
    IData/*31:0*/ unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i__Vloopsize;
    unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j;
    unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j = 0;
    IData/*31:0*/ unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j__Vloopsize;
    unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j__Vloopsize = 0;
    std::string unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__hdl_path;
    QData/*63:0*/ unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__slice;
    IData/*31:0*/ unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__k;
    IData/*31:0*/ unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    VlWide<32>/*1023:0*/ val;
    CData/*0:0*/ ok;
    {
        backdoor_read_func__Vfuncrtn = 0U;
        paths.clear();
        VL_ZERO_W(1024, val);
        ok = 1U;
        this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                            VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2054)
                                                               ->__PVT__bd_kind), "."s);
        unnamedblk412__DOT__mem_idx = 0U;
        while (VL_LTS_III(32, unnamedblk412__DOT__mem_idx, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2056)
                          ->__PVT__value.size())) {
            unnamedblk412__DOT__mem_idx__Vloopsize 
                = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2056)
                ->__PVT__value.size();
            unnamedblk412__DOT__unnamedblk413__DOT__idx = ""s;
            VL_SFORMAT_NX(unnamedblk412__DOT__unnamedblk413__DOT__idx
                          ,"%0d",1, '~',32,((IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2058)
                                                    ->__PVT__offset) 
                                            + unnamedblk412__DOT__mem_idx));
            unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i, paths.size())) {
                unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i__Vloopsize 
                    = paths.size();
                unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat 
                    = paths.at(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i);
                VL_ASSIGN_W(1024, val, Vcsi2_tb_top__ConstPool__CONST_hd6b7ba52_0);
                unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j, VL_NULL_CHECK(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2062)
                                  ->__PVT__slices.size())) {
                    unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2062)
                        ->__PVT__slices.size();
                    {
                        unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__hdl_path 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(VL_NULL_CHECK(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2063)
                                                                           ->__PVT__slices.at(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j)
                                                                           .__PVT__path, "["s), unnamedblk412__DOT__unnamedblk413__DOT__idx), "]"s);
                        this->__Vfunc_uvm_report_enabled__308__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__308__severity = 0U;
                        __Vfunc_uvm_report_enabled__308__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__309__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vfunc_get__309__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__308__verbosity, (IData)(__Vfunc_uvm_report_enabled__308__severity), this->__Vfunc_uvm_report_enabled__308__id, __Vtask_uvm_report_enabled__310__Vfuncout);
                        __Vfunc_uvm_report_enabled__308____VlefCall_0__uvm_report_enabled 
                            = __Vtask_uvm_report_enabled__310__Vfuncout;
                        __VlefCall_0__uvm_report_enabled 
                            = (1U & __Vfunc_uvm_report_enabled__308____VlefCall_0__uvm_report_enabled);
                        if (__VlefCall_0__uvm_report_enabled) {
                            __Vtask_uvm_report_info__311__line = 0x00000811U;
                            this->__Vtask_uvm_report_info__311__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_info__311__verbosity = 0x000001f4U;
                            this->__Vtask_uvm_report_info__311__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("backdoor_read from "s, unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__hdl_path));
                            this->__Vtask_uvm_report_info__311__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__312__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vfunc_get__312__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__311__id, this->__Vtask_uvm_report_info__311__message, __Vtask_uvm_report_info__311__verbosity, this->__Vtask_uvm_report_info__311__filename, __Vtask_uvm_report_info__311__line);
                        }
                        if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2067)
                                       ->__PVT__slices.at(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j)
                                       .__PVT__offset)) {
                            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_mem), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 0x00000814U, unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__hdl_path, __Vfunc_uvm_hdl_read__314__value, __VlefCall_1__uvm_hdl_read);
                            val[0U] = __Vfunc_uvm_hdl_read__314__value[0U];
                            val[1U] = __Vfunc_uvm_hdl_read__314__value[1U];
                            val[2U] = __Vfunc_uvm_hdl_read__314__value[2U];
                            val[3U] = __Vfunc_uvm_hdl_read__314__value[3U];
                            val[4U] = __Vfunc_uvm_hdl_read__314__value[4U];
                            val[5U] = __Vfunc_uvm_hdl_read__314__value[5U];
                            val[6U] = __Vfunc_uvm_hdl_read__314__value[6U];
                            val[7U] = __Vfunc_uvm_hdl_read__314__value[7U];
                            val[8U] = __Vfunc_uvm_hdl_read__314__value[8U];
                            val[9U] = __Vfunc_uvm_hdl_read__314__value[9U];
                            val[10U] = __Vfunc_uvm_hdl_read__314__value[10U];
                            val[11U] = __Vfunc_uvm_hdl_read__314__value[11U];
                            val[12U] = __Vfunc_uvm_hdl_read__314__value[12U];
                            val[13U] = __Vfunc_uvm_hdl_read__314__value[13U];
                            val[14U] = __Vfunc_uvm_hdl_read__314__value[14U];
                            val[15U] = __Vfunc_uvm_hdl_read__314__value[15U];
                            val[16U] = __Vfunc_uvm_hdl_read__314__value[16U];
                            val[17U] = __Vfunc_uvm_hdl_read__314__value[17U];
                            val[18U] = __Vfunc_uvm_hdl_read__314__value[18U];
                            val[19U] = __Vfunc_uvm_hdl_read__314__value[19U];
                            val[20U] = __Vfunc_uvm_hdl_read__314__value[20U];
                            val[21U] = __Vfunc_uvm_hdl_read__314__value[21U];
                            val[22U] = __Vfunc_uvm_hdl_read__314__value[22U];
                            val[23U] = __Vfunc_uvm_hdl_read__314__value[23U];
                            val[24U] = __Vfunc_uvm_hdl_read__314__value[24U];
                            val[25U] = __Vfunc_uvm_hdl_read__314__value[25U];
                            val[26U] = __Vfunc_uvm_hdl_read__314__value[26U];
                            val[27U] = __Vfunc_uvm_hdl_read__314__value[27U];
                            val[28U] = __Vfunc_uvm_hdl_read__314__value[28U];
                            val[29U] = __Vfunc_uvm_hdl_read__314__value[29U];
                            val[30U] = __Vfunc_uvm_hdl_read__314__value[30U];
                            val[31U] = __Vfunc_uvm_hdl_read__314__value[31U];
                            ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_read);
                            goto __Vlabel1;
                        }
                        unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__slice = 0ULL;
                        unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__k 
                            = VL_NULL_CHECK(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2073)
                            ->__PVT__slices.at(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j)
                            .__PVT__offset;
                        Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_mem), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 0x0000081aU, unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__hdl_path, __Vfunc_uvm_hdl_read__315__value, __VlefCall_2__uvm_hdl_read);
                        unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__slice 
                            = (((QData)((IData)(__Vfunc_uvm_hdl_read__315__value[1U])) 
                                << 0x00000020U) | (QData)((IData)(__Vfunc_uvm_hdl_read__315__value[0U])));
                        ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_read);
                        unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__unnamedblk1_1__DOT____Vrepeat0 
                            = VL_NULL_CHECK(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2075)
                            ->__PVT__slices.at(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j)
                            .__PVT__size;
                        while (VL_LTS_III(32, 0U, unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                            __Vincrement1 = unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__k;
                            unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__k 
                                = ((IData)(1U) + unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__k);
                            val[(0x0000001fU & (__Vincrement1 
                                                >> 5U))] 
                                = (((~ ((IData)(1U) 
                                        << (0x0000001fU 
                                            & __Vincrement1))) 
                                    & val[(0x0000001fU 
                                           & (__Vincrement1 
                                              >> 5U))]) 
                                   | ((1U & (IData)(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__slice)) 
                                      << (0x0000001fU 
                                          & __Vincrement1)));
                            unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__slice 
                                = (unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__slice 
                                   >> 1U);
                            unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                = (unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                   - (IData)(1U));
                        }
                        __Vlabel1: ;
                    }
                    if ((unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2062)
                         ->__PVT__slices.size())) {
                        unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j 
                            = ((IData)(1U) + unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__unnamedblk416__DOT__j);
                    }
                }
                VL_SHIFTL_WWI(1024,1024,32, __Vtemp_2, Vcsi2_tb_top__ConstPool__CONST_h2ae7f32a_0, this->__PVT__m_n_bits);
                VL_SUB_W(32, __Vtemp_3, __Vtemp_2, Vcsi2_tb_top__ConstPool__CONST_h2ae7f32a_0);
                val[0U] = (val[0U] & __Vtemp_3[0U]);
                val[1U] = (val[1U] & __Vtemp_3[1U]);
                val[2U] = (val[2U] & __Vtemp_3[2U]);
                val[3U] = (val[3U] & __Vtemp_3[3U]);
                val[4U] = (val[4U] & __Vtemp_3[4U]);
                val[5U] = (val[5U] & __Vtemp_3[5U]);
                val[6U] = (val[6U] & __Vtemp_3[6U]);
                val[7U] = (val[7U] & __Vtemp_3[7U]);
                val[8U] = (val[8U] & __Vtemp_3[8U]);
                val[9U] = (val[9U] & __Vtemp_3[9U]);
                val[10U] = (val[10U] & __Vtemp_3[10U]);
                val[11U] = (val[11U] & __Vtemp_3[11U]);
                val[12U] = (val[12U] & __Vtemp_3[12U]);
                val[13U] = (val[13U] & __Vtemp_3[13U]);
                val[14U] = (val[14U] & __Vtemp_3[14U]);
                val[15U] = (val[15U] & __Vtemp_3[15U]);
                val[16U] = (val[16U] & __Vtemp_3[16U]);
                val[17U] = (val[17U] & __Vtemp_3[17U]);
                val[18U] = (val[18U] & __Vtemp_3[18U]);
                val[19U] = (val[19U] & __Vtemp_3[19U]);
                val[20U] = (val[20U] & __Vtemp_3[20U]);
                val[21U] = (val[21U] & __Vtemp_3[21U]);
                val[22U] = (val[22U] & __Vtemp_3[22U]);
                val[23U] = (val[23U] & __Vtemp_3[23U]);
                val[24U] = (val[24U] & __Vtemp_3[24U]);
                val[25U] = (val[25U] & __Vtemp_3[25U]);
                val[26U] = (val[26U] & __Vtemp_3[26U]);
                val[27U] = (val[27U] & __Vtemp_3[27U]);
                val[28U] = (val[28U] & __Vtemp_3[28U]);
                val[29U] = (val[29U] & __Vtemp_3[29U]);
                val[30U] = (val[30U] & __Vtemp_3[30U]);
                val[31U] = (val[31U] & __Vtemp_3[31U]);
                if ((0U == unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i)) {
                    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2085)->__PVT__value.atWrite(unnamedblk412__DOT__mem_idx) 
                        = (((QData)((IData)(val[1U])) 
                            << 0x00000020U) | (QData)((IData)(val[0U])));
                }
                if ((0U != ((((((((((((((((((((((((
                                                   ((((((((val[0U] 
                                                           ^ (IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2087)
                                                                     ->__PVT__value.at(unnamedblk412__DOT__mem_idx))) 
                                                          | (val[1U] 
                                                             ^ (IData)(
                                                                       (VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2087)
                                                                        ->__PVT__value.at(unnamedblk412__DOT__mem_idx) 
                                                                        >> 0x00000020U)))) 
                                                         | val[2U]) 
                                                        | val[3U]) 
                                                       | val[4U]) 
                                                      | val[5U]) 
                                                     | val[6U]) 
                                                    | val[7U]) 
                                                   | val[8U]) 
                                                  | val[9U]) 
                                                 | val[10U]) 
                                                | val[11U]) 
                                               | val[12U]) 
                                              | val[13U]) 
                                             | val[14U]) 
                                            | val[15U]) 
                                           | val[16U]) 
                                          | val[17U]) 
                                         | val[18U]) 
                                        | val[19U]) 
                                       | val[20U]) 
                                      | val[21U]) | val[22U]) 
                                    | val[23U]) | val[24U]) 
                                  | val[25U]) | val[26U]) 
                                | val[27U]) | val[28U]) 
                              | val[29U]) | val[30U]) 
                            | val[31U]))) {
                    this->__Vfunc_uvm_report_enabled__316__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__316__severity = 2U;
                    __Vfunc_uvm_report_enabled__316__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__317__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__317__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__316__verbosity, (IData)(__Vfunc_uvm_report_enabled__316__severity), this->__Vfunc_uvm_report_enabled__316__id, __Vtask_uvm_report_enabled__318__Vfuncout);
                    __Vfunc_uvm_report_enabled__316____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__318__Vfuncout;
                    __VlefCall_3__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__316____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_3__uvm_report_enabled) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        __Vfunc_uvm_hdl_concat2string__320__concat 
                            = paths.at(0U);
                        __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i = 0U;
                        __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i__Vloopsize = 0;
                        {
                            __VlefCall_5__uvm_hdl_concat2string = ""s;
                            this->__Vfunc_uvm_hdl_concat2string__320__image = "{"s;
                            if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__320__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 390)
                                   ->__PVT__slices.size()) 
                                  && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__320__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 391)
                                      ->__PVT__slices.at(0U)
                                      .__PVT__offset)) 
                                 && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__320__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 392)
                                     ->__PVT__slices.at(0U)
                                     .__PVT__size))) {
                                __VlefCall_5__uvm_hdl_concat2string 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__320__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 393)
                                    ->__PVT__slices.at(0U)
                                    .__PVT__path;
                                goto __Vlabel2;
                            }
                            __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i = 0U;
                            while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__320__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                              ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i__Vloopsize 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__320__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                    ->__PVT__slices.size();
                                __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__unnamedblk220__DOT__slice 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__320__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 396)
                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i);
                                this->__Vfunc_uvm_hdl_concat2string__320__image 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__320__image, 
                                                                    VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                     .__PVT__path);
                                if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                .__PVT__offset)) {
                                    this->__Vfunc_uvm_hdl_concat2string__320__image 
                                        = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__320__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                                                .__PVT__size) );
                                }
                                if ((__Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i__Vloopsize 
                                     <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__320__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                     ->__PVT__slices.size())) {
                                    __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i 
                                        = ((IData)(1U) 
                                           + __Vfunc_uvm_hdl_concat2string__320__unnamedblk219__DOT__i);
                                }
                            }
                            this->__Vfunc_uvm_hdl_concat2string__320__image 
                                = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__320__image, "}"s);
                            __VlefCall_5__uvm_hdl_concat2string 
                                = this->__Vfunc_uvm_hdl_concat2string__320__image;
                            __Vlabel2: ;
                        }
                        __Vfunc_uvm_hdl_concat2string__321__concat 
                            = paths.at(unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i);
                        __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i = 0U;
                        __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i__Vloopsize = 0;
                        {
                            __VlefCall_6__uvm_hdl_concat2string = ""s;
                            this->__Vfunc_uvm_hdl_concat2string__321__image = "{"s;
                            if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__321__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 390)
                                   ->__PVT__slices.size()) 
                                  && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__321__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 391)
                                      ->__PVT__slices.at(0U)
                                      .__PVT__offset)) 
                                 && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__321__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 392)
                                     ->__PVT__slices.at(0U)
                                     .__PVT__size))) {
                                __VlefCall_6__uvm_hdl_concat2string 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__321__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 393)
                                    ->__PVT__slices.at(0U)
                                    .__PVT__path;
                                goto __Vlabel3;
                            }
                            __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i = 0U;
                            while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__321__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                              ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i__Vloopsize 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__321__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                    ->__PVT__slices.size();
                                __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__unnamedblk220__DOT__slice 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__321__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 396)
                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i);
                                this->__Vfunc_uvm_hdl_concat2string__321__image 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__321__image, 
                                                                    VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                     .__PVT__path);
                                if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                .__PVT__offset)) {
                                    this->__Vfunc_uvm_hdl_concat2string__321__image 
                                        = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__321__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__unnamedblk220__DOT__slice
                                                                                .__PVT__size) );
                                }
                                if ((__Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i__Vloopsize 
                                     <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__321__concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_model.svh", 395)
                                     ->__PVT__slices.size())) {
                                    __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i 
                                        = ((IData)(1U) 
                                           + __Vfunc_uvm_hdl_concat2string__321__unnamedblk219__DOT__i);
                                }
                            }
                            this->__Vfunc_uvm_hdl_concat2string__321__image 
                                = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__321__image, "}"s);
                            __VlefCall_6__uvm_hdl_concat2string 
                                = this->__Vfunc_uvm_hdl_concat2string__321__image;
                            __Vlabel3: ;
                        }
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Backdoor read of register %s with multiple HDL copies: values are not the same: %0h at path '%s', and %0h at path '%s'. Returning first value.",5
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , '#',64,VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2090)
                                                                                ->__PVT__value.at(unnamedblk412__DOT__mem_idx)
                                                                                , 'S',&(__VlefCall_5__uvm_hdl_concat2string)
                                                                                , '#',1024,val.data()
                                                                                , 'S',&(__VlefCall_6__uvm_hdl_concat2string)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x0000082aU);
                    }
                    backdoor_read_func__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                if ((unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i__Vloopsize 
                     <= paths.size())) {
                    unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i 
                        = ((IData)(1U) + unnamedblk412__DOT__unnamedblk413__DOT__unnamedblk414__DOT__i);
                }
            }
            if ((unnamedblk412__DOT__mem_idx__Vloopsize 
                 <= VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2056)
                 ->__PVT__value.size())) {
                unnamedblk412__DOT__mem_idx = ((IData)(1U) 
                                               + unnamedblk412__DOT__mem_idx);
            }
        }
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2096)->__PVT__status 
            = ((IData)(ok) ? 0U : 1U);
        backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2098)
            ->__PVT__status;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__backdoor_read_func;
    this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __VlefCall_0__backdoor_read_func);
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2105)->__PVT__status 
        = __VlefCall_0__backdoor_read_func;
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_deposit_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, const VlWide<32>/*1023:0*/ &value, IData/*31:0*/ &uvm_hdl_deposit__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__325__verbosity;
    __Vfunc_uvm_report_enabled__325__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__325__severity;
    __Vfunc_uvm_report_enabled__325__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__325____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__325____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__326__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__327__Vfuncout;
    __Vtask_uvm_report_enabled__327__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__328__verbosity;
    __Vtask_uvm_report_info__328__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__328__line;
    __Vtask_uvm_report_info__328__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__329__Vfuncout;
    std::string __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_hdl_deposit;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_deposit;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk419__DOT__mem_idx;
    unnamedblk419__DOT__mem_idx = 0;
    IData/*31:0*/ unnamedblk419__DOT__mem_idx__Vloopsize;
    unnamedblk419__DOT__mem_idx__Vloopsize = 0;
    std::string unnamedblk419__DOT__unnamedblk420__DOT__idx;
    IData/*31:0*/ unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i;
    unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i = 0;
    IData/*31:0*/ unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i__Vloopsize;
    unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j;
    unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j = 0;
    IData/*31:0*/ unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j__Vloopsize;
    unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j__Vloopsize = 0;
    QData/*63:0*/ unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__unnamedblk424__DOT__slice;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    CData/*0:0*/ ok;
    paths.clear();
    ok = 1U;
    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2117)
                                                           ->__PVT__bd_kind), "."s);
    unnamedblk419__DOT__mem_idx = 0U;
    while (VL_LTS_III(32, unnamedblk419__DOT__mem_idx, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2119)
                      ->__PVT__value.size())) {
        unnamedblk419__DOT__mem_idx__Vloopsize = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2119)
            ->__PVT__value.size();
        unnamedblk419__DOT__unnamedblk420__DOT__idx = ""s;
        VL_SFORMAT_NX(unnamedblk419__DOT__unnamedblk420__DOT__idx
                      ,"%0d",1, '~',32,((IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2121)
                                                ->__PVT__offset) 
                                        + unnamedblk419__DOT__mem_idx));
        unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i, paths.size())) {
            unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i__Vloopsize 
                = paths.size();
            unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat 
                = paths.at(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i);
            unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j, VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2124)
                              ->__PVT__slices.size())) {
                unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2124)
                    ->__PVT__slices.size();
                {
                    this->__Vfunc_uvm_report_enabled__325__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__325__severity = 0U;
                    __Vfunc_uvm_report_enabled__325__verbosity = 0x000001f4U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__326__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vfunc_get__326__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__325__verbosity, (IData)(__Vfunc_uvm_report_enabled__325__severity), this->__Vfunc_uvm_report_enabled__325__id, __Vtask_uvm_report_enabled__327__Vfuncout);
                    __Vfunc_uvm_report_enabled__325____VlefCall_0__uvm_report_enabled 
                        = __Vtask_uvm_report_enabled__327__Vfuncout;
                    __VlefCall_0__uvm_report_enabled 
                        = (1U & __Vfunc_uvm_report_enabled__325____VlefCall_0__uvm_report_enabled);
                    if (__VlefCall_0__uvm_report_enabled) {
                        __Vtask_uvm_report_info__328__line = 0x0000084dU;
                        this->__Vtask_uvm_report_info__328__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_info__328__verbosity = 0x000001f4U;
                        __Vtemp_1 = VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2125)
                            ->__PVT__slices.at(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j)
                            .__PVT__path;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__328__message
                                      ,"backdoor_write to %s ",1
                                      , 'S',&(__Vtemp_1));
                        this->__Vtask_uvm_report_info__328__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__329__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vfunc_get__329__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__328__id, this->__Vtask_uvm_report_info__328__message, __Vtask_uvm_report_info__328__verbosity, this->__Vtask_uvm_report_info__328__filename, __Vtask_uvm_report_info__328__line);
                    }
                    if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2127)
                                   ->__PVT__slices.at(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j)
                                   .__PVT__offset)) {
                        __Vtemp_2[0U] = (IData)(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2128)
                                                ->__PVT__value.at(unnamedblk419__DOT__mem_idx));
                        __Vtemp_2[1U] = (IData)((VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2128)
                                                 ->__PVT__value.at(unnamedblk419__DOT__mem_idx) 
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
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_mem), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 0x00000850U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2128)
                                                                                ->__PVT__slices.at(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j)
                                                                                .__PVT__path, "["s), unnamedblk419__DOT__unnamedblk420__DOT__idx), "]"s)), __Vtemp_2, __VlefCall_1__uvm_hdl_deposit);
                        ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_deposit);
                        goto __Vlabel0;
                    }
                    unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__unnamedblk424__DOT__slice = 0ULL;
                    unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__unnamedblk424__DOT__slice 
                        = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2133)
                                        ->__PVT__value.at(unnamedblk419__DOT__mem_idx), VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2133)
                                        ->__PVT__slices.at(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j)
                                        .__PVT__offset);
                    unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__unnamedblk424__DOT__slice 
                        = (unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__unnamedblk424__DOT__slice 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2134)
                                            ->__PVT__slices.at(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j)
                                            .__PVT__size) 
                              - 1ULL));
                    __Vtemp_3[0U] = (IData)(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__unnamedblk424__DOT__slice);
                    __Vtemp_3[1U] = (IData)((unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__unnamedblk424__DOT__slice 
                                             >> 0x00000020U));
                    __Vtemp_3[2U] = 0U;
                    __Vtemp_3[3U] = 0U;
                    __Vtemp_3[4U] = 0U;
                    __Vtemp_3[5U] = 0U;
                    __Vtemp_3[6U] = 0U;
                    __Vtemp_3[7U] = 0U;
                    __Vtemp_3[8U] = 0U;
                    __Vtemp_3[9U] = 0U;
                    __Vtemp_3[10U] = 0U;
                    __Vtemp_3[11U] = 0U;
                    __Vtemp_3[12U] = 0U;
                    __Vtemp_3[13U] = 0U;
                    __Vtemp_3[14U] = 0U;
                    __Vtemp_3[15U] = 0U;
                    __Vtemp_3[16U] = 0U;
                    __Vtemp_3[17U] = 0U;
                    __Vtemp_3[18U] = 0U;
                    __Vtemp_3[19U] = 0U;
                    __Vtemp_3[20U] = 0U;
                    __Vtemp_3[21U] = 0U;
                    __Vtemp_3[22U] = 0U;
                    __Vtemp_3[23U] = 0U;
                    __Vtemp_3[24U] = 0U;
                    __Vtemp_3[25U] = 0U;
                    __Vtemp_3[26U] = 0U;
                    __Vtemp_3[27U] = 0U;
                    __Vtemp_3[28U] = 0U;
                    __Vtemp_3[29U] = 0U;
                    __Vtemp_3[30U] = 0U;
                    __Vtemp_3[31U] = 0U;
                    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_deposit_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_mem), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 0x00000857U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2135)
                                                                                ->__PVT__slices.at(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j)
                                                                                .__PVT__path, "["s), unnamedblk419__DOT__unnamedblk420__DOT__idx), "]"s)), __Vtemp_3, __VlefCall_2__uvm_hdl_deposit);
                    ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_deposit);
                    __Vlabel0: ;
                }
                if ((unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2124)
                     ->__PVT__slices.size())) {
                    unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j 
                        = ((IData)(1U) + unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__unnamedblk422__DOT__unnamedblk423__DOT__j);
                }
            }
            if ((unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i__Vloopsize 
                 <= paths.size())) {
                unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i 
                    = ((IData)(1U) + unnamedblk419__DOT__unnamedblk420__DOT__unnamedblk421__DOT__i);
            }
        }
        if ((unnamedblk419__DOT__mem_idx__Vloopsize 
             <= VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2119)
             ->__PVT__value.size())) {
            unnamedblk419__DOT__mem_idx = ((IData)(1U) 
                                           + unnamedblk419__DOT__mem_idx);
        }
    }
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2140)->__PVT__status 
        = ((IData)(ok) ? 0U : 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__336__verbosity;
    __Vfunc_uvm_report_enabled__336__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__336__severity;
    __Vfunc_uvm_report_enabled__336__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__336____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__336____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__337__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__338__Vfuncout;
    __Vtask_uvm_report_enabled__338__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__339__verbosity;
    __Vtask_uvm_report_warning__339__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__339__line;
    __Vtask_uvm_report_warning__339__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__340__Vfuncout;
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
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2155)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2157)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
        if ((1U & (~ (0U != __VlefCall_0__exists)))) {
            this->__Vfunc_uvm_report_enabled__336__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__336__severity = 1U;
            __Vfunc_uvm_report_enabled__336__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__337__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__337__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__336__verbosity, (IData)(__Vfunc_uvm_report_enabled__336__severity), this->__Vfunc_uvm_report_enabled__336__id, __Vtask_uvm_report_enabled__338__Vfuncout);
            __Vfunc_uvm_report_enabled__336____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__338__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__336____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                __Vtask_uvm_report_warning__339__line = 0x0000086eU;
                this->__Vtask_uvm_report_warning__339__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__339__verbosity = 0U;
                this->__Vtask_uvm_report_warning__339__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_warning__339__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__340__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vfunc_get__340__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__339__id, this->__Vtask_uvm_report_warning__339__message, __Vtask_uvm_report_warning__339__verbosity, this->__Vtask_uvm_report_warning__339__filename, __Vtask_uvm_report_warning__339__line);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2162)->__VnoInFunc_delete(vlSymsp, kind);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<Vcsi2_tb_top_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> paths;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2169)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    concat = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
    VL_NULL_CHECK(concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2172)->__VnoInFunc_set(vlSymsp, slices);
    VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2173)->__VnoInFunc_push_back(vlSymsp, concat);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> paths;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2184)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    __VlefLogOr_1 = first;
    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2187)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        __VlefLogOr_1 = (0U == __VlefCall_0__size);
    }
    if (__VlefLogOr_1) {
        concat = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
        VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2189)->__VnoInFunc_push_back(vlSymsp, concat);
    } else {
        VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2192)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
        VL_NULL_CHECK(paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2192)->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                (__VlefCall_2__size 
                                                                                - (IData)(1U)), concat);
    }
    VL_NULL_CHECK(concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2194)->__VnoInFunc_add_path(vlSymsp, name, offset, size);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2202)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2204)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__358__verbosity;
    __Vfunc_uvm_report_enabled__358__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__358__severity;
    __Vfunc_uvm_report_enabled__358__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__358____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__358____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__359__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__360__Vfuncout;
    __Vtask_uvm_report_enabled__360__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk425__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk425__DOT__unnamedblk426__DOT__t;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> hdl_paths;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2216)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__358__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__358__severity = 2U;
            __Vfunc_uvm_report_enabled__358__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__359__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__359__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__358__verbosity, (IData)(__Vfunc_uvm_report_enabled__358__severity), this->__Vfunc_uvm_report_enabled__358__id, __Vtask_uvm_report_enabled__360__Vfuncout);
            __Vfunc_uvm_report_enabled__358____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__360__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__358____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x000008acU);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2224)->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
        unnamedblk425__DOT__i = 0U;
        unnamedblk425__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2226)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk425__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2227)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk425__DOT__i, unnamedblk425__DOT__unnamedblk426__DOT__t);
            paths.push_back(unnamedblk425__DOT__unnamedblk426__DOT__t);
            unnamedblk425__DOT__i = ((IData)(1U) + unnamedblk425__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__365__Vfuncout;
    __Vtask_first__365__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__366__Vfuncout;
    __Vtask_next__366__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_1__next;
    IData/*31:0*/ __VlefCall_0__first;
    std::string kind;
    {
        kind = ""s;
        kinds.clear();
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2239)->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__365__Vfuncout);
        __VlefCall_0__first = __Vtask_first__365__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__first)))) {
            goto __Vlabel0;
        }
        do {
            kinds.push_back(kind);
            VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2243)->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__366__Vfuncout);
            __VlefCall_1__next = __Vtask_next__366__Vfuncout;
        } while ((0U != __VlefCall_1__next));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__369__verbosity;
    __Vfunc_uvm_report_enabled__369__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__369__severity;
    __Vfunc_uvm_report_enabled__369__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__369____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__369____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__370__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__371__Vfuncout;
    __Vtask_uvm_report_enabled__371__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> unnamedblk427__DOT__hdl_paths;
    VlQueue<std::string> unnamedblk427__DOT__parent_paths;
    IData/*31:0*/ unnamedblk427__DOT__unnamedblk428__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j;
    unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j = 0;
    IData/*31:0*/ unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j__Vloopsize;
    unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__t;
    IData/*31:0*/ unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k;
    unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k = 0;
    IData/*31:0*/ unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k__Vloopsize;
    unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k__Vloopsize = 0;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2253)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__369__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__369__severity = 2U;
            __Vfunc_uvm_report_enabled__369__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__370__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__370__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__369__verbosity, (IData)(__Vfunc_uvm_report_enabled__369__severity), this->__Vfunc_uvm_report_enabled__369__id, __Vtask_uvm_report_enabled__371__Vfuncout);
            __Vfunc_uvm_report_enabled__369____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__371__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__369____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s, 0x000008d1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2262)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk427__DOT__hdl_paths);
        unnamedblk427__DOT__parent_paths.clear();
        unnamedblk427__DOT__parent_paths.atDefault().clear();
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2265)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk427__DOT__parent_paths, kind, separator);
        unnamedblk427__DOT__unnamedblk428__DOT__i = 0U;
        unnamedblk427__DOT__unnamedblk428__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk427__DOT__hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2267)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk427__DOT__unnamedblk428__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(unnamedblk427__DOT__hdl_paths, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2268)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk427__DOT__unnamedblk428__DOT__i, unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat);
            unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j, unnamedblk427__DOT__parent_paths.size())) {
                unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j__Vloopsize 
                    = unnamedblk427__DOT__parent_paths.size();
                unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__t 
                    = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k, VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2273)
                                  ->__PVT__slices.size())) {
                    unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2273)
                        ->__PVT__slices.size();
                    if ((""s == VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2274)
                         ->__PVT__slices.at(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k)
                         .__PVT__path)) {
                        VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__t, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2275)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk427__DOT__parent_paths.at(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j)), 0xffffffffU, 0xffffffffU);
                    } else {
                        VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__t, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2277)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk427__DOT__parent_paths.at(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j), separator), VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2277)
                                                                                ->__PVT__slices.at(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2278)
                                                                                ->__PVT__slices.at(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k)
                                                                                .__PVT__offset, VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2279)
                                                                                ->__PVT__slices.at(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k)
                                                                                .__PVT__size);
                    }
                    if ((unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__hdl_concat, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2273)
                         ->__PVT__slices.size())) {
                        unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k 
                            = ((IData)(1U) + unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__k);
                    }
                }
                paths.push_back(unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__unnamedblk431__DOT__t);
                if ((unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j__Vloopsize 
                     <= unnamedblk427__DOT__parent_paths.size())) {
                    unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j 
                        = ((IData)(1U) + unnamedblk427__DOT__unnamedblk428__DOT__unnamedblk429__DOT__unnamedblk430__DOT__j);
                }
            }
            unnamedblk427__DOT__unnamedblk428__DOT__i 
                = ((IData)(1U) + unnamedblk427__DOT__unnamedblk428__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__m_parent = parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent\n"); );
    // Body
    this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__get_access;
    QData/*63:0*/ __VlefCall_6__get_size;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    std::string __VlefCall_4__get_full_name;
    QData/*63:0*/ __VlefCall_3__get_base_addr;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    QData/*63:0*/ __VlefCall_1__get_size;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk433__DOT__map__Vmore;
    unnamedblk433__DOT__map__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__parent_map;
    IData/*31:0*/ unnamedblk433__DOT__unnamedblk434__DOT__offset;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map;
    IData/*31:0*/ unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__endian_name;
    convert2string__Vfuncrtn = ""s;
    std::string res_str;
    std::string prefix;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMemory %s -- %0dx%0d bits",4
                  , 'S',&(prefix), 'S',&(__VlefCall_0__get_full_name)
                  , '#',64,__VlefCall_1__get_size, '#',32,__VlefCall_2__get_n_bits);
    convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                 ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                 : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
    unnamedblk433__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk433__DOT__map__Vnext));
    while (unnamedblk433__DOT__map__Vmore) {
        unnamedblk433__DOT__map = unnamedblk433__DOT__map__Vnext;
        unnamedblk433__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk433__DOT__map__Vnext));
        unnamedblk433__DOT__unnamedblk434__DOT__parent_map 
            = unnamedblk433__DOT__map;
        unnamedblk433__DOT__unnamedblk434__DOT__offset = 0U;
        while ((VlNull{} != unnamedblk433__DOT__unnamedblk434__DOT__parent_map)) {
            unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map 
                = unnamedblk433__DOT__unnamedblk434__DOT__parent_map;
            unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__endian_name = 0U;
            VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2322)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__parent_map);
            VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2323)->__VnoInFunc_get_endian(vlSymsp, 1U, unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__endian_name);
            if ((VlNull{} == unnamedblk433__DOT__unnamedblk434__DOT__parent_map)) {
                VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2325)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_3__get_base_addr);
            } else {
                VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__parent_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2326)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map, __VlefCall_3__get_base_addr);
            }
            unnamedblk433__DOT__unnamedblk434__DOT__offset 
                = (IData)(__VlefCall_3__get_base_addr);
            prefix = VL_CONCATN_NNN(prefix, "  "s);
            VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2329)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2329)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_5__get_n_bytes);
            this->__VnoInFunc_get_size(vlSymsp, __VlefCall_6__get_size);
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__this_map, __VlefCall_7__get_access);
            __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name79
                [(7U & unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__endian_name)];
            VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMapped in '%s' -- buswidth %0d bytes, %s, offset 'h%0h, size 'h%0h, %s\n",7
                          , 'S',&(prefix), 'S',&(__VlefCall_4__get_full_name)
                          , '#',32,__VlefCall_5__get_n_bytes
                          , 'S',&(__Vtemp_1), '#',32,unnamedblk433__DOT__unnamedblk434__DOT__offset
                          , '#',64,__VlefCall_6__get_size
                          , 'S',&(__VlefCall_7__get_access));
        }
    }
    prefix = "  "s;
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing write method"s);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_1__get_size;
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    __Vtemp_1[0U] = __VlefCall_0__get_n_bits;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2353)->__VnoInFunc_print_int(vlSymsp, "n_bits"s, __Vtemp_1, 0x00000020U, 0x03000000U, 0x2eU, ""s);
    this->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
    __Vtemp_2[0U] = (IData)(__VlefCall_1__get_size);
    __Vtemp_2[1U] = (IData)((__VlefCall_1__get_size 
                             >> 0x00000020U));
    __Vilp2 = 2U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vtemp_2[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh", 2354)->__VnoInFunc_print_int(vlSymsp, "size"s, __Vtemp_2, 0x00000020U, 0x03000000U, 0x2eU, ""s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__397__verbosity;
    __Vfunc_uvm_report_enabled__397__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__397__severity;
    __Vfunc_uvm_report_enabled__397__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__397____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__397____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__398__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__399__Vfuncout;
    __Vtask_uvm_report_enabled__399__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__400__verbosity;
    __Vtask_uvm_report_fatal__400__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__400__line;
    __Vtask_uvm_report_fatal__400__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__401__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__397__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__397__severity = 3U;
    __Vfunc_uvm_report_enabled__397__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__398__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__398__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__397__verbosity, (IData)(__Vfunc_uvm_report_enabled__397__severity), this->__Vfunc_uvm_report_enabled__397__id, __Vtask_uvm_report_enabled__399__Vfuncout);
    __Vfunc_uvm_report_enabled__397____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__399__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__397____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__400__line = 0x00000939U;
        this->__Vtask_uvm_report_fatal__400__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_fatal__400__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__400__message = "RegModel memories cannot be cloned"s;
        this->__Vtask_uvm_report_fatal__400__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__401__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__401__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__400__id, this->__Vtask_uvm_report_fatal__400__message, __Vtask_uvm_report_fatal__400__verbosity, this->__Vtask_uvm_report_fatal__400__filename, __Vtask_uvm_report_fatal__400__line);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__403__verbosity;
    __Vfunc_uvm_report_enabled__403__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__403__severity;
    __Vfunc_uvm_report_enabled__403__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__403____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__403____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__404__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__405__Vfuncout;
    __Vtask_uvm_report_enabled__405__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__406__verbosity;
    __Vtask_uvm_report_fatal__406__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__406__line;
    __Vtask_uvm_report_fatal__406__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__407__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__403__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__403__severity = 3U;
    __Vfunc_uvm_report_enabled__403__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__404__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__403__verbosity, (IData)(__Vfunc_uvm_report_enabled__403__severity), this->__Vfunc_uvm_report_enabled__403__id, __Vtask_uvm_report_enabled__405__Vfuncout);
    __Vfunc_uvm_report_enabled__403____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__405__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__403____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__406__line = 0x00000940U;
        this->__Vtask_uvm_report_fatal__406__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_fatal__406__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__406__message = "RegModel memories cannot be copied"s;
        this->__Vtask_uvm_report_fatal__406__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__407__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__407__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__406__id, this->__Vtask_uvm_report_fatal__406__message, __Vtask_uvm_report_fatal__406__verbosity, this->__Vtask_uvm_report_fatal__406__filename, __Vtask_uvm_report_fatal__406__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__409__verbosity;
    __Vfunc_uvm_report_enabled__409__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__409__severity;
    __Vfunc_uvm_report_enabled__409__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__409____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__409____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__410__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__411__Vfuncout;
    __Vtask_uvm_report_enabled__411__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__412__verbosity;
    __Vtask_uvm_report_warning__412__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__412__line;
    __Vtask_uvm_report_warning__412__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__413__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__409__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__409__severity = 1U;
    __Vfunc_uvm_report_enabled__409__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__410__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__410__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__409__verbosity, (IData)(__Vfunc_uvm_report_enabled__409__severity), this->__Vfunc_uvm_report_enabled__409__id, __Vtask_uvm_report_enabled__411__Vfuncout);
    __Vfunc_uvm_report_enabled__409____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__411__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__409____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__412__line = 0x00000948U;
        this->__Vtask_uvm_report_warning__412__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__412__verbosity = 0U;
        this->__Vtask_uvm_report_warning__412__message = "RegModel memories cannot be compared"s;
        this->__Vtask_uvm_report_warning__412__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__413__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__413__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__412__id, this->__Vtask_uvm_report_warning__412__message, __Vtask_uvm_report_warning__412__verbosity, this->__Vtask_uvm_report_warning__412__filename, __Vtask_uvm_report_warning__412__line);
    }
    do_compare__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__415__verbosity;
    __Vfunc_uvm_report_enabled__415__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__415__severity;
    __Vfunc_uvm_report_enabled__415__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__415____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__415____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__416__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__417__Vfuncout;
    __Vtask_uvm_report_enabled__417__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__418__verbosity;
    __Vtask_uvm_report_warning__418__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__418__line;
    __Vtask_uvm_report_warning__418__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__419__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__415__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__415__severity = 1U;
    __Vfunc_uvm_report_enabled__415__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__416__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__416__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__415__verbosity, (IData)(__Vfunc_uvm_report_enabled__415__severity), this->__Vfunc_uvm_report_enabled__415__id, __Vtask_uvm_report_enabled__417__Vfuncout);
    __Vfunc_uvm_report_enabled__415____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__417__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__415____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__418__line = 0x00000950U;
        this->__Vtask_uvm_report_warning__418__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__418__verbosity = 0U;
        this->__Vtask_uvm_report_warning__418__message = "RegModel memories cannot be packed"s;
        this->__Vtask_uvm_report_warning__418__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__419__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__419__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__418__id, this->__Vtask_uvm_report_warning__418__message, __Vtask_uvm_report_warning__418__verbosity, this->__Vtask_uvm_report_warning__418__filename, __Vtask_uvm_report_warning__418__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__421__verbosity;
    __Vfunc_uvm_report_enabled__421__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__421__severity;
    __Vfunc_uvm_report_enabled__421__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__421____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__421____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__422__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__423__Vfuncout;
    __Vtask_uvm_report_enabled__423__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__424__verbosity;
    __Vtask_uvm_report_warning__424__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__424__line;
    __Vtask_uvm_report_warning__424__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__425__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__421__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__421__severity = 1U;
    __Vfunc_uvm_report_enabled__421__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__422__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__422__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__421__verbosity, (IData)(__Vfunc_uvm_report_enabled__421__severity), this->__Vfunc_uvm_report_enabled__421__id, __Vtask_uvm_report_enabled__423__Vfuncout);
    __Vfunc_uvm_report_enabled__421____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__423__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__421____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_warning__424__line = 0x00000957U;
        this->__Vtask_uvm_report_warning__424__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__424__verbosity = 0U;
        this->__Vtask_uvm_report_warning__424__message = "RegModel memories cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__424__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__425__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__425__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__424__id, this->__Vtask_uvm_report_warning__424__message, __Vtask_uvm_report_warning__424__verbosity, this->__Vtask_uvm_report_warning__424__filename, __Vtask_uvm_report_warning__424__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX\n"); );
    // Body
    this->__PVT__m_vregs.atWrite(vreg) = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX\n"); );
    // Body
    if (this->__PVT__m_vregs.exists(vreg)) {
        this->__PVT__m_vregs.erase(vreg);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_size = 0;
    __PVT__m_maps.atDefault() = 0;
    __PVT__m_n_bits = 0;
    __PVT__m_is_powered_down = 0;
    __PVT__m_has_cover = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_lineno = 0;
    __PVT__m_vregs.atDefault() = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem::~\n"); );
}
