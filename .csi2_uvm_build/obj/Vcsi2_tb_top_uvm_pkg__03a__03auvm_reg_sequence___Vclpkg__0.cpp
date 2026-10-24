// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__Tz137> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz137__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__Tz137> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz137__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_, vlProcess, vlSymsp, "uvm_reg_sequence_inst"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 59)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 59)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__parent_select = 0U;
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__14__t;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__16__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> unnamedblk2__DOT__reg_item;
    if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NO_SEQR"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NO_SEQR"s, "Sequence executing as translation sequence, but is not associated with a sequencer (m_sequencer == null)"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x00000086U);
        }
    }
    if ((VlNull{} == this->__PVT__reg_seqr)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "REG_XLATE_NO_SEQR"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 140)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "REG_XLATE_NO_SEQR"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Executing RegModel translation sequence on sequencer "s, __VlefCall_2__get_full_name), "' does not have an upstream sequencer defined. "s), "Execution of register items available only via direct calls to 'do_rw_access'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x0000008cU);
        }
        co_await vlSymsp->TOP.__VdlySched.waitForever(
                                                      vlProcess, 
                                                      "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 
                                                      141);
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "REG_XLATE_SEQ_START"s, __VlefCall_3__uvm_report_enabled);
    if ((0U != __VlefCall_3__uvm_report_enabled)) {
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 145)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "REG_XLATE_SEQ_START"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("Starting RegModel translation sequence on sequencer "s, __VlefCall_4__get_full_name), "'"s)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x00000091U);
    }
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 148)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__14__t);
        unnamedblk2__DOT__reg_item = __Vtask_peek__14__t;
        co_await this->__VnoInFunc_do_reg_item(vlProcess, vlSymsp, unnamedblk2__DOT__reg_item);
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 150)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__16__t);
        unnamedblk2__DOT__reg_item = __Vtask_get__16__t;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 
                                                151);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_do_reg_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_do_reg_item\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_3__convert2string;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: m_sequencer is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x000000acU);
        }
    }
    if ((VlNull{} == this->__PVT__adapter)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: adapter handle is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x000000aeU);
        }
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "DO_RW_ACCESS"s, __VlefCall_2__uvm_report_enabled);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 176)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_3__convert2string);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DO_RW_ACCESS"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Doing transaction: "s, __VlefCall_3__convert2string)), 0x0000012cU, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x000000b0U);
    }
    if ((0U == this->__PVT__parent_select)) {
        this->__PVT__upstream_parent = VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 179)
            ->__PVT__parent;
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 180)->__PVT__parent 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this};
    }
    if ((1U == VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 183)
         ->__PVT__kind)) {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 184)
                               ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 184)->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    } else {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 186)
                               ->__PVT__local_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 186)->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    }
    if ((0U == this->__PVT__parent_select)) {
        VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 189)->__PVT__parent 
            = this->__PVT__upstream_parent;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_write_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_write_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__28__status;
    __Vtask_write__28__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x000000e7U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 233)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__28__status, value, path, map, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__28__status;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_read_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_read_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_read__31__status;
    __Vtask_read__31__status = 0;
    QData/*63:0*/ __Vtask_read__31__value;
    __Vtask_read__31__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x00000103U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 261)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__31__status, __Vtask_read__31__value, path, map, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__31__status;
        value = __Vtask_read__31__value;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_poke_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_poke_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_poke__34__status;
    __Vtask_poke__34__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x0000011eU);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 288)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__34__status, value, kind, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, extension, fname, lineno);
        status = __Vtask_poke__34__status;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_peek_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_peek_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__37__status;
    __Vtask_peek__37__status = 0;
    QData/*63:0*/ __Vtask_peek__37__value;
    __Vtask_peek__37__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x00000138U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 314)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__37__status, __Vtask_peek__37__value, kind, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, extension, fname, lineno);
        status = __Vtask_peek__37__status;
        value = __Vtask_peek__37__value;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_update_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_update_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_update__40__status;
    __Vtask_update__40__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x00000153U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 341)->__VnoInFunc_update(vlSymsp, __Vtask_update__40__status, path, map, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_update__40__status;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_mirror_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_mirror_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__43__status;
    __Vtask_mirror__43__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x0000016fU);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 369)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__43__status, check, path, map, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_mirror__43__status;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_write_mem(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_write_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__46__status;
    __Vtask_write__46__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x0000018cU);
        }
    } else {
        co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 398)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__46__status, offset, value, path, map, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__46__status;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_read_mem(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_read_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_read__49__status;
    __Vtask_read__49__status = 0;
    QData/*63:0*/ __Vtask_read__49__value;
    __Vtask_read__49__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x000001a9U);
        }
    } else {
        co_await VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 427)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__49__status, offset, __Vtask_read__49__value, path, map, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__49__status;
        value = __Vtask_read__49__value;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_poke_mem(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_poke_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_poke__52__status;
    __Vtask_poke__52__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x000001c5U);
        }
    } else {
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 455)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__52__status, offset, value, kind, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, extension, fname, lineno);
        status = __Vtask_poke__52__status;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_peek_mem(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_peek_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__55__status;
    __Vtask_peek__55__status = 0;
    QData/*63:0*/ __Vtask_peek__55__value;
    __Vtask_peek__55__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh"s, 0x000001e0U);
        }
    } else {
        VL_NULL_CHECK(mem, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_sequence.svh", 482)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__55__status, offset, __Vtask_peek__55__value, kind, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_>{this}, extension, fname, lineno);
        status = __Vtask_peek__55__status;
        value = __Vtask_peek__55__value;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_put_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::~\n"); );
}
