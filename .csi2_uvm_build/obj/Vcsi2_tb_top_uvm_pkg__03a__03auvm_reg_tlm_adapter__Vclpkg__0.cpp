// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi57> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi57__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi57> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi57__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, "uvm_reg_tlm_adapter"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 172)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_tlm_adapter"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 172)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, const Vcsi2_tb_top_uvm_reg_bus_op__struct__0 &rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_streaming_width;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk2__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    IData/*31:0*/ nbytes;
    QData/*63:0*/ addr;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi44__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "tlm_gp"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), gp);
    nbytes = ((IData)(1U) + VL_DIVS_III(32, (rw.__PVT__n_bits 
                                             - (IData)(1U)), (IData)(8U)));
    addr = rw.__PVT__addr;
    if ((1U == rw.__PVT__kind)) {
        VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 189)->__VnoInFunc_set_command(vlSymsp, 1U);
    } else {
        VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 191)->__VnoInFunc_set_command(vlSymsp, 0U);
    }
    VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 193)->__VnoInFunc_set_address(vlSymsp, addr);
    VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 195)->__PVT__m_byte_enable.renew(nbytes);
    VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 197)->__VnoInFunc_set_streaming_width(vlSymsp, nbytes);
    VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 199)->__VnoInFunc_get_streaming_width(vlSymsp, __VlefCall_1__get_streaming_width);
    VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 199)->__PVT__m_data.renew(__VlefCall_1__get_streaming_width);
    unnamedblk2__DOT__i = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, nbytes)) {
        VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 202)->__PVT__m_data.atWrite(unnamedblk2__DOT__i) 
            = (0x000000ffU & (IData)((rw.__PVT__data 
                                      >> (0x0000003fU 
                                          & VL_MULS_III(32, (IData)(8U), unnamedblk2__DOT__i)))));
        VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 203)->__PVT__m_byte_enable.atWrite(unnamedblk2__DOT__i) 
            = (VL_GTS_III(32, unnamedblk2__DOT__i, nbytes)
                ? 0U : (1U & (rw.__PVT__byte_en >> 
                              (7U & unnamedblk2__DOT__i))));
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
    reg2bus__Vfuncrtn = gp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> bus_item, Vcsi2_tb_top_uvm_reg_bus_op__struct__0 &rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__13____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__15__Vfuncout;
    __Vtask_uvm_report_enabled__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__16__verbosity;
    __Vtask_uvm_report_fatal__16__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__16__line;
    __Vtask_uvm_report_fatal__16__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__17__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__verbosity;
    __Vfunc_uvm_report_enabled__19__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__19__severity;
    __Vfunc_uvm_report_enabled__19__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__19____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__20__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__21__Vfuncout;
    __Vtask_uvm_report_enabled__21__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_5__is_response_ok;
    QData/*63:0*/ __VlefCall_4__get_address;
    IData/*31:0*/ __VlefCall_3__get_command;
    CData/*0:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i__Vloopsize;
    unnamedblk3__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__i__Vloopsize;
    unnamedblk4__DOT__i__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    {
        if ((VlNull{} == bus_item)) {
            this->__Vfunc_uvm_report_enabled__13__id = "REG/NULL_ITEM"s;
            __Vfunc_uvm_report_enabled__13__severity = 3U;
            __Vfunc_uvm_report_enabled__13__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__15__Vfuncout);
            __Vfunc_uvm_report_enabled__13____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__15__Vfuncout;
            __VlefCall_0__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__13____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_0__uvm_report_enabled) {
                __Vtask_uvm_report_fatal__16__line = 0x000000dfU;
                this->__Vtask_uvm_report_fatal__16__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh"s;
                __Vtask_uvm_report_fatal__16__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__16__message = "bus2reg: bus_item argument is null"s;
                this->__Vtask_uvm_report_fatal__16__id = "REG/NULL_ITEM"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vfunc_get__17__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__16__id, this->__Vtask_uvm_report_fatal__16__message, __Vtask_uvm_report_fatal__16__verbosity, this->__Vtask_uvm_report_fatal__16__filename, __Vtask_uvm_report_fatal__16__line);
            }
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(bus_item, gp);
        if ((! __VlefExpr_1)) {
            this->__Vfunc_uvm_report_enabled__19__id = "WRONG_TYPE"s;
            __Vfunc_uvm_report_enabled__19__severity = 2U;
            __Vfunc_uvm_report_enabled__19__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__19__verbosity, (IData)(__Vfunc_uvm_report_enabled__19__severity), this->__Vfunc_uvm_report_enabled__19__id, __Vtask_uvm_report_enabled__21__Vfuncout);
            __Vfunc_uvm_report_enabled__19____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__21__Vfuncout;
            __VlefCall_2__uvm_report_enabled = (1U 
                                                & __Vfunc_uvm_report_enabled__19____VlefCall_0__uvm_report_enabled);
            if (__VlefCall_2__uvm_report_enabled) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "WRONG_TYPE"s, "Provided bus_item is not of type uvm_tlm_gp"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh"s, 0x000000e2U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 230)->__VnoInFunc_get_command(vlSymsp, __VlefCall_3__get_command);
        rw.__PVT__kind = ((1U == __VlefCall_3__get_command)
                           ? 1U : 0U);
        VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 235)->__VnoInFunc_get_address(vlSymsp, __VlefCall_4__get_address);
        rw.__PVT__addr = __VlefCall_4__get_address;
        rw.__PVT__byte_en = 0U;
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 238)
                          ->__PVT__m_byte_enable.size())) {
            unnamedblk3__DOT__i__Vloopsize = VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 238)
                ->__PVT__m_byte_enable.size();
            rw.__PVT__byte_en = (((~ ((IData)(1U) << 
                                      (7U & unnamedblk3__DOT__i))) 
                                  & rw.__PVT__byte_en) 
                                 | (0x00ffU & ((1U 
                                                & VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 239)
                                                ->__PVT__m_byte_enable.at(unnamedblk3__DOT__i)) 
                                               << (7U 
                                                   & unnamedblk3__DOT__i))));
            if ((unnamedblk3__DOT__i__Vloopsize <= VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 238)
                 ->__PVT__m_byte_enable.size())) {
                unnamedblk3__DOT__i = ((IData)(1U) 
                                       + unnamedblk3__DOT__i);
            }
        }
        rw.__PVT__data = 0ULL;
        unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__i, VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 242)
                          ->__PVT__m_data.size())) {
            unnamedblk4__DOT__i__Vloopsize = VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 242)
                ->__PVT__m_data.size();
            rw.__PVT__data = (((~ (0x00000000000000ffULL 
                                   << (0x0000003fU 
                                       & VL_MULS_III(32, (IData)(8U), unnamedblk4__DOT__i)))) 
                               & rw.__PVT__data) | 
                              ((QData)((IData)(VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 243)
                                               ->__PVT__m_data.at(unnamedblk4__DOT__i))) 
                               << (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk4__DOT__i))));
            if ((unnamedblk4__DOT__i__Vloopsize <= VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 242)
                 ->__PVT__m_data.size())) {
                unnamedblk4__DOT__i = ((IData)(1U) 
                                       + unnamedblk4__DOT__i);
            }
        }
        VL_NULL_CHECK(gp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_adapter.svh", 245)->__VnoInFunc_is_response_ok(vlSymsp, __VlefCall_5__is_response_ok);
        rw.__PVT__status = ((IData)(__VlefCall_5__is_response_ok)
                             ? 0U : 1U);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_tlm_adapter::~\n"); );
}
