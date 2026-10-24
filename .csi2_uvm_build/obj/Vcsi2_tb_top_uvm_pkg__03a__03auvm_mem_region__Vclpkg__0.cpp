// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::init(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, QData/*63:0*/ end_offset, IData/*31:0*/ len, IData/*31:0*/ n_bytes, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__Xstart_offsetX = start_offset;
    this->__PVT__Xend_offsetX = end_offset;
    this->__PVT__len = len;
    this->__PVT__n_bytes = n_bytes;
    this->__PVT__parent = parent;
    this->__PVT__XvregX = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_start_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_start_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_start_offset\n"); );
    // Body
    get_start_offset__Vfuncrtn = this->__PVT__Xstart_offsetX;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_end_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_end_offset\n"); );
    // Body
    get_end_offset__Vfuncrtn = this->__PVT__Xend_offsetX;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_len(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_len__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_len\n"); );
    // Body
    get_len__Vfuncrtn = this->__PVT__len;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = this->__PVT__n_bytes;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_convert2string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_convert2string\n"); );
    // Body
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"['h%h:'h%h]",2
                  , '#',64,this->__PVT__Xstart_offsetX
                  , '#',64,this->__PVT__Xend_offsetX);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_release_region(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_release_region\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 639)->__VnoInFunc_release_region(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_memory(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_memory\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 644)->__VnoInFunc_get_memory(vlSymsp, get_memory__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_virtual_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_virtual_registers__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    get_virtual_registers__Vfuncrtn = this->__PVT__XvregX;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__5__Vfuncout;
    __Vtask_uvm_report_enabled__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__7____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__12__status;
    __Vtask_write__12__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 834)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__3__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__3__severity = 2U;
            __Vfunc_uvm_report_enabled__3__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __Vtask_uvm_report_enabled__5__Vfuncout);
            __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__5__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot use uvm_mem_region::write() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x00000347U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to write to an offset outside of the allocated region (%0d > %0d)",2
                                                                                , '#',64,offset
                                                                                , '#',32,this->__PVT__len) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x0000034fU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 852)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__12__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_write__12__status;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_read\n"); );
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
    IData/*31:0*/ __Vtask_read__23__status;
    __Vtask_read__23__status = 0;
    QData/*63:0*/ __Vtask_read__23__value;
    __Vtask_read__23__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value = 0ULL;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 867)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot use uvm_mem_region::read() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x00000368U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to read from an offset outside of the allocated region (%0d > %0d)",2
                                                                                , '#',64,offset
                                                                                , '#',32,this->__PVT__len) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x00000370U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 885)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__23__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), __Vtask_read__23__value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_read__23__status;
        value = __Vtask_read__23__value;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
    __Vfunc_uvm_report_enabled__25__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
    __Vfunc_uvm_report_enabled__25__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__25____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__27__Vfuncout;
    __Vtask_uvm_report_enabled__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__29____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__31__Vfuncout;
    __Vtask_uvm_report_enabled__31__Vfuncout = 0;
    IData/*31:0*/ __Vtask_burst_write__34__status;
    __Vtask_burst_write__34__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 900)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__25__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__25__severity = 2U;
            __Vfunc_uvm_report_enabled__25__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), this->__Vfunc_uvm_report_enabled__25__id, __Vtask_uvm_report_enabled__27__Vfuncout);
            __Vfunc_uvm_report_enabled__25____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__27__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__25____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot use uvm_mem_region::burst_write() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x00000389U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if (((offset + (QData)((IData)(value.size()))) 
             > (QData)((IData)(this->__PVT__len)))) {
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to burst-write to an offset outside of the allocated region (burst to [%0d:%0d] > mem_size %0d)",3
                                                                                , '#',64,offset
                                                                                , '#',64,
                                                                                (offset 
                                                                                + (QData)((IData)(value.size())))
                                                                                , '#',32,this->__PVT__len) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x00000391U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 918)->__VnoInFunc_burst_write(vlSymsp, __Vtask_burst_write__34__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_burst_write__34__status;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__verbosity;
    __Vfunc_uvm_report_enabled__36__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__36__severity;
    __Vfunc_uvm_report_enabled__36__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__37__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__38__Vfuncout;
    __Vtask_uvm_report_enabled__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40__verbosity;
    __Vfunc_uvm_report_enabled__40__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__40__severity;
    __Vfunc_uvm_report_enabled__40__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__40____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__41__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__42__Vfuncout;
    __Vtask_uvm_report_enabled__42__Vfuncout = 0;
    IData/*31:0*/ __Vtask_burst_read__45__status;
    __Vtask_burst_read__45__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value.clear();
        value.atDefault() = 0;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 934)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__36__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__36__severity = 2U;
            __Vfunc_uvm_report_enabled__36__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__37__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__36__verbosity, (IData)(__Vfunc_uvm_report_enabled__36__severity), this->__Vfunc_uvm_report_enabled__36__id, __Vtask_uvm_report_enabled__38__Vfuncout);
            __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__38__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__36____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot use uvm_mem_region::burst_read() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000003abU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if (((offset + (QData)((IData)(value.size()))) 
             > (QData)((IData)(this->__PVT__len)))) {
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to burst-read to an offset outside of the allocated region (burst to [%0d:%0d] > mem_size %0d)",3
                                                                                , '#',64,offset
                                                                                , '#',64,
                                                                                (offset 
                                                                                + (QData)((IData)(value.size())))
                                                                                , '#',32,this->__PVT__len) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000003b3U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 952)->__VnoInFunc_burst_read(vlSymsp, __Vtask_burst_read__45__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_burst_read__45__status;
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_poke\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
    __Vfunc_uvm_report_enabled__51__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
    __Vfunc_uvm_report_enabled__51__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__51____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__52__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__53__Vfuncout;
    __Vtask_uvm_report_enabled__53__Vfuncout = 0;
    IData/*31:0*/ __Vtask_poke__56__status;
    __Vtask_poke__56__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 965)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__47__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__47__severity = 2U;
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot use uvm_mem_region::poke() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000003caU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            this->__Vfunc_uvm_report_enabled__51__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__51__severity = 2U;
            __Vfunc_uvm_report_enabled__51__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__52__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), this->__Vfunc_uvm_report_enabled__51__id, __Vtask_uvm_report_enabled__53__Vfuncout);
            __Vfunc_uvm_report_enabled__51____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__53__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__51____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to poke to an offset outside of the allocated region (%0d > %0d)",2
                                                                                , '#',64,offset
                                                                                , '#',32,this->__PVT__len) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000003d2U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 983)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__56__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), value, ""s, parent, extension, ""s, 0U);
        status = __Vtask_poke__56__status;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__58__verbosity;
    __Vfunc_uvm_report_enabled__58__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__58__severity;
    __Vfunc_uvm_report_enabled__58__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__58____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__58____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__59__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__60__Vfuncout;
    __Vtask_uvm_report_enabled__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62__verbosity;
    __Vfunc_uvm_report_enabled__62__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__62__severity;
    __Vfunc_uvm_report_enabled__62__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__62____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__63__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__64__Vfuncout;
    __Vtask_uvm_report_enabled__64__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__67__status;
    __Vtask_peek__67__status = 0;
    QData/*63:0*/ __Vtask_peek__67__value;
    __Vtask_peek__67__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    CData/*0:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value = 0ULL;
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 994)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__58__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__58__severity = 2U;
            __Vfunc_uvm_report_enabled__58__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__59__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__58__verbosity, (IData)(__Vfunc_uvm_report_enabled__58__severity), this->__Vfunc_uvm_report_enabled__58__id, __Vtask_uvm_report_enabled__60__Vfuncout);
            __Vfunc_uvm_report_enabled__58____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__60__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__58____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Cannot use uvm_mem_region::peek() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000003e7U);
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            this->__Vfunc_uvm_report_enabled__62__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__62__severity = 2U;
            __Vfunc_uvm_report_enabled__62__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__63__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__62__verbosity, (IData)(__Vfunc_uvm_report_enabled__62__severity), this->__Vfunc_uvm_report_enabled__62__id, __Vtask_uvm_report_enabled__64__Vfuncout);
            __Vfunc_uvm_report_enabled__62____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__64__Vfuncout;
            __VlefCall_1__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__62____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_1__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Attempting to peek from an offset outside of the allocated region (%0d > %0d)",2
                                                                                , '#',64,offset
                                                                                , '#',32,this->__PVT__len) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh"s, 0x000003efU);
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 1012)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__67__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), __Vtask_peek__67__value, ""s, parent, extension, ""s, 0U);
        status = __Vtask_peek__67__status;
        value = __Vtask_peek__67__value;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__Xstart_offsetX = 0;
    __PVT__Xend_offsetX = 0;
    __PVT__len = 0;
    __PVT__n_bytes = 0;
    __PVT__lineno = 0;
}
