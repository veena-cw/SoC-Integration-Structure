// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi45> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi45__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36> unnamedblk1__DOT__iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk1__DOT__cb;
    this->__VnoInFunc_pre_read(vlSymsp, rw);
    unnamedblk1__DOT__iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36, vlSymsp, 
                                    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk1__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 61)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk1__DOT__cb);
    while ((VlNull{} != unnamedblk1__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk1__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 61)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk1__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 61)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk1__DOT__cb);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk2__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36> unnamedblk3__DOT__iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk3__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36> iter;
    iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36, vlSymsp, 
                  VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 74)->__VnoInFunc_last(vlProcess, vlSymsp, unnamedblk2__DOT__cb);
    while ((VlNull{} != unnamedblk2__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk2__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 75)->__VnoInFunc_decode(vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 75)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 74)->__VnoInFunc_prev(vlProcess, vlSymsp, unnamedblk2__DOT__cb);
    }
    unnamedblk3__DOT__iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36, vlSymsp, 
                                    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk3__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 76)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk3__DOT__cb);
    while ((VlNull{} != unnamedblk3__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk3__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 76)->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk3__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 76)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk3__DOT__cb);
    }
    this->__VnoInFunc_post_read(vlSymsp, rw);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36> unnamedblk4__DOT__iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk4__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk5__DOT__cb;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36> iter;
    iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36, vlSymsp, 
                  VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    this->__VnoInFunc_pre_write(vlSymsp, rw);
    unnamedblk4__DOT__iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36, vlSymsp, 
                                    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk4__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 91)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk4__DOT__cb);
    while ((VlNull{} != unnamedblk4__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk4__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 91)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk4__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 91)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk4__DOT__cb);
    }
    VL_NULL_CHECK(iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 92)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk5__DOT__cb);
    while ((VlNull{} != unnamedblk5__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk5__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 93)->__VnoInFunc_encode(vlSymsp, VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 93)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 92)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk5__DOT__cb);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36> unnamedblk6__DOT__iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk6__DOT__cb;
    unnamedblk6__DOT__iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi36, vlSymsp, 
                                    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk6__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 105)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk6__DOT__cb);
    while ((VlNull{} != unnamedblk6__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk6__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 105)->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk6__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 105)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk6__DOT__cb);
    }
    this->__VnoInFunc_post_write(vlSymsp, rw);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi45> __Vfunc_get__29__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi45__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__29__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__29__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor, vlProcess, vlSymsp, ""s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 230)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_backdoor"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk7__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 230)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk7__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> field, CData/*0:0*/ &is_auto_updated__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated\n"); );
    // Body
    is_auto_updated__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
    __Vfunc_uvm_report_enabled__34__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
    __Vfunc_uvm_report_enabled__34__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__34____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
    __Vtask_uvm_report_enabled__36__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__37__verbosity;
    __Vtask_uvm_report_fatal__37__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__37__line;
    __Vtask_uvm_report_fatal__37__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__38__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__34__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__34__severity = 3U;
    __Vfunc_uvm_report_enabled__34__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__35__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), this->__Vfunc_uvm_report_enabled__34__id, __Vtask_uvm_report_enabled__36__Vfuncout);
    __Vfunc_uvm_report_enabled__34____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__36__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__34____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__37__line = 0x000000fcU;
        this->__Vtask_uvm_report_fatal__37__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh"s;
        __Vtask_uvm_report_fatal__37__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__37__message = "uvm_reg_backdoor::wait_for_change() method has not been overloaded"s;
        this->__Vtask_uvm_report_fatal__37__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__38__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__37__id, this->__Vtask_uvm_report_fatal__37__message, __Vtask_uvm_report_fatal__37__verbosity, this->__Vtask_uvm_report_fatal__37__filename, __Vtask_uvm_report_fatal__37__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_40> __VDynScope_start_update_thread_0;
    __VDynScope_start_update_thread_0 = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_40, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 258)->__PVT__element 
        = element;
    {
        if (this->__PVT__m_update_thread.exists(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 260)
                                                ->__PVT__element)) {
            this->__VnoInFunc_kill_update_thread(vlSymsp, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 261)
                                                 ->__PVT__element);
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 263)
                                       ->__PVT__element, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 263)
                                       ->__PVT__rg);
        if ((! __VlefExpr_0)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_start_update_thread____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp, __VDynScope_start_update_thread_0);
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_40> __VDynScope_start_update_thread_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_40> __Vtask___VforkTask_0__42____VDynScope_start_update_thread_0;
    IData/*31:0*/ __Vtask___VforkTask_0__42____VlefCall_5__get_n_bits;
    __Vtask___VforkTask_0__42____VlefCall_5__get_n_bits = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__42____VlefCall_4__get_lsb_pos;
    __Vtask___VforkTask_0__42____VlefCall_4__get_lsb_pos = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__42____VlefCall_3__is_auto_updated;
    __Vtask___VforkTask_0__42____VlefCall_3__is_auto_updated = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__42____VlefCall_1__uvm_report_enabled;
    __Vtask___VforkTask_0__42____VlefCall_1__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __Vtask___VforkTask_0__42____VlefCall_0__self;
    QData/*63:0*/ __Vtask___VforkTask_0__42__unnamedblk222__DOT__val;
    __Vtask___VforkTask_0__42__unnamedblk222__DOT__val = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item;
    IData/*31:0*/ __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i;
    __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i__Vloopsize;
    __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> __Vtask___VforkTask_0__42__fields;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __Vfunc_self__43__Vfuncout;
    CData/*0:0*/ __Vfunc_uvm_report_enabled__47__Vfuncout;
    __Vfunc_uvm_report_enabled__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__47__verbosity;
    __Vfunc_uvm_report_enabled__47__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__47__severity;
    __Vfunc_uvm_report_enabled__47__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__47____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__47____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__48__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__49__Vfuncout;
    __Vtask_uvm_report_enabled__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_auto_updated__52__Vfuncout;
    __Vfunc_is_auto_updated__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__53__Vfuncout;
    __Vtask_get_lsb_pos__53__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__54__Vfuncout;
    __Vtask_get_n_bits__54__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__42____VDynScope_start_update_thread_0 
        = __VDynScope_start_update_thread_0;
    __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i = 0U;
    __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i__Vloopsize = 0;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 
                                            266);
    __Vtask___VforkTask_0__42__fields.clear();
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__43__Vfuncout);
    __Vtask___VforkTask_0__42____VlefCall_0__self = __Vfunc_self__43__Vfuncout;
    this->__PVT__m_update_thread.atWrite(VL_NULL_CHECK(__Vtask___VforkTask_0__42____VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 273)
                                         ->__PVT__element) 
        = __Vtask___VforkTask_0__42____VlefCall_0__self;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__42____VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 276)
                  ->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 276)->__VnoInFunc_get_fields(vlSymsp, __Vtask___VforkTask_0__42__fields);
    while (true) {
        __Vtask___VforkTask_0__42__unnamedblk222__DOT__val = 0ULL;
        __Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item 
            = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, "bd_r_item"s);
        VL_NULL_CHECK(__Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 281)->__PVT__element 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__42____VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 281)
            ->__PVT__rg;
        VL_NULL_CHECK(__Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 282)->__PVT__element_kind = 0U;
        this->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item);
        __Vtask___VforkTask_0__42__unnamedblk222__DOT__val 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 284)
            ->__PVT__value.at(0U);
        if ((0U != VL_NULL_CHECK(__Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 285)
             ->__PVT__status)) {
            this->__Vfunc_uvm_report_enabled__47__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__47__severity = 2U;
            __Vfunc_uvm_report_enabled__47__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vfunc_get__48__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__47__verbosity, (IData)(__Vfunc_uvm_report_enabled__47__severity), this->__Vfunc_uvm_report_enabled__47__id, __Vtask_uvm_report_enabled__49__Vfuncout);
            __Vfunc_uvm_report_enabled__47____VlefCall_0__uvm_report_enabled 
                = __Vtask_uvm_report_enabled__49__Vfuncout;
            __Vfunc_uvm_report_enabled__47__Vfuncout 
                = (1U & __Vfunc_uvm_report_enabled__47____VlefCall_0__uvm_report_enabled);
            __Vtask___VforkTask_0__42____VlefCall_1__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__47__Vfuncout;
            if (__Vtask___VforkTask_0__42____VlefCall_1__uvm_report_enabled) {
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__42____VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 287)
                              ->__PVT__rg, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 287)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__50__Vfuncout);
                this->__Vtask___VforkTask_0__42____VlefCall_2__get_name 
                    = this->__Vtask_get_name__50__Vfuncout;
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Backdoor read of register '%s' failed.",1
                                                                                , 'S',&(this->__Vtask___VforkTask_0__42____VlefCall_2__get_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh"s, 0x0000011fU);
            }
        }
        __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i, __Vtask___VforkTask_0__42__fields.size())) {
            __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i__Vloopsize 
                = __Vtask___VforkTask_0__42__fields.size();
            this->__VnoInFunc_is_auto_updated(vlSymsp, __Vtask___VforkTask_0__42__fields.at(__Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i), __Vfunc_is_auto_updated__52__Vfuncout);
            __Vtask___VforkTask_0__42____VlefCall_3__is_auto_updated 
                = __Vfunc_is_auto_updated__52__Vfuncout;
            if (__Vtask___VforkTask_0__42____VlefCall_3__is_auto_updated) {
                VL_NULL_CHECK(__Vtask___VforkTask_0__42__fields.at(__Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 291)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__53__Vfuncout);
                __Vtask___VforkTask_0__42____VlefCall_4__get_lsb_pos 
                    = __Vtask_get_lsb_pos__53__Vfuncout;
                VL_NULL_CHECK(__Vtask___VforkTask_0__42__fields.at(__Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 292)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__54__Vfuncout);
                __Vtask___VforkTask_0__42____VlefCall_5__get_n_bits 
                    = __Vtask_get_n_bits__54__Vfuncout;
                VL_NULL_CHECK(__Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 291)->__PVT__value.atWrite(0U) 
                    = (VL_SHIFTR_QQI(64,64,32, __Vtask___VforkTask_0__42__unnamedblk222__DOT__val, __Vtask___VforkTask_0__42____VlefCall_4__get_lsb_pos) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vtask___VforkTask_0__42____VlefCall_5__get_n_bits) 
                          - 1ULL));
                VL_NULL_CHECK(__Vtask___VforkTask_0__42__fields.at(__Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 293)->__VnoInFunc_do_predict(vlProcess, vlSymsp, __Vtask___VforkTask_0__42__unnamedblk222__DOT__r_item, 0U, 0xffU);
            }
            if ((__Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i__Vloopsize 
                 <= __Vtask___VforkTask_0__42__fields.size())) {
                __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i 
                    = ((IData)(1U) + __Vtask___VforkTask_0__42__unnamedblk222__DOT__unnamedblk223__DOT__i);
            }
        }
        this->__VnoInFunc_wait_for_change(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__42____VDynScope_start_update_thread_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 296)
                                          ->__PVT__element);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread\n"); );
    // Body
    if (this->__PVT__m_update_thread.exists(element)) {
        VL_NULL_CHECK(this->__PVT__m_update_thread.at(element), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 311)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_update_thread.erase(element);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_update_threads__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads\n"); );
    // Body
    has_update_threads__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__m_update_thread.size());
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write\n"); );
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
    IData/*31:0*/ __Vtask_uvm_report_fatal__61__verbosity;
    __Vtask_uvm_report_fatal__61__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__61__line;
    __Vtask_uvm_report_fatal__61__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__62__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__58__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__58__severity = 3U;
    __Vfunc_uvm_report_enabled__58__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__59__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__58__verbosity, (IData)(__Vfunc_uvm_report_enabled__58__severity), this->__Vfunc_uvm_report_enabled__58__id, __Vtask_uvm_report_enabled__60__Vfuncout);
    __Vfunc_uvm_report_enabled__58____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__60__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__58____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        __Vtask_uvm_report_fatal__61__line = 0x00000149U;
        this->__Vtask_uvm_report_fatal__61__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh"s;
        __Vtask_uvm_report_fatal__61__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__61__message = "uvm_reg_backdoor::write() method has not been overloaded"s;
        this->__Vtask_uvm_report_fatal__61__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__62__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__61__id, this->__Vtask_uvm_report_fatal__61__message, __Vtask_uvm_report_fatal__61__verbosity, this->__Vtask_uvm_report_fatal__61__filename, __Vtask_uvm_report_fatal__61__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_do_pre_read(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_read_func(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_do_post_read(vlProcess, vlSymsp, rw);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func\n"); );
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
        __Vtask_uvm_report_fatal__70__line = 0x00000159U;
        this->__Vtask_uvm_report_fatal__70__filename = "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh"s;
        __Vtask_uvm_report_fatal__70__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__70__message = "uvm_reg_backdoor::read_func() method has not been overloaded"s;
        this->__Vtask_uvm_report_fatal__70__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vfunc_get__71__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 193)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__70__id, this->__Vtask_uvm_report_fatal__70__message, __Vtask_uvm_report_fatal__70__verbosity, this->__Vtask_uvm_report_fatal__70__filename, __Vtask_uvm_report_fatal__70__line);
    }
    VL_NULL_CHECK(rw, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_backdoor.svh", 346)->__PVT__status = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor::~\n"); );
}
