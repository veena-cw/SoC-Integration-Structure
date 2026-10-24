// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz64_TBz64::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::new\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtask_get_config_int__2__value;
    VL_ZERO_W(4096, __Vtask_get_config_int__2__value);
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    CData/*0:0*/ __VlefCall_0__get_config_int;
    IData/*31:0*/ tmp;
    /*super.new*/;
    tmp = 0U;
    this->__PVT__m_port_type = port_type;
    this->__PVT__m_min_size = min_size;
    this->__PVT__m_max_size = max_size;
    this->__PVT__m_comp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz90, vlProcess, vlSymsp, name, parent, 
                                 VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83>{this});
    VL_EXTENDS_WI(4096,32, __Vtask_get_config_int__2__value, tmp);
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 243)->__VnoInFunc_get_config_int(vlProcess, vlSymsp, "check_connection_relationships"s, __Vtask_get_config_int__2__value, __VlefCall_0__get_config_int);
    tmp = __Vtask_get_config_int__2__value[0U];
    if ((1U & (~ (IData)(__VlefCall_0__get_config_int)))) {
        VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 244)->__VnoInFunc_set_report_id_action(vlSymsp, "Connection Warning"s, 0U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 254)->__VnoInFunc_get_name(vlSymsp, get_name__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 263)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, get_full_name__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_parent\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 272)->__VnoInFunc_get_parent(vlSymsp, get_parent__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_comp(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_comp\n"); );
    // Body
    get_comp__Vfuncrtn = this->__PVT__m_comp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = ""s;
    if ((0U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "port"s;
    } else if ((1U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "export"s;
    } else if ((2U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "implementation"s;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_max_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_max_size\n"); );
    // Body
    max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_min_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_min_size\n"); );
    // Body
    min_size__Vfuncrtn = this->__PVT__m_min_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_is_unbounded(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_is_unbounded\n"); );
    // Body
    is_unbounded__Vfuncrtn = (0xffffffffU == this->__PVT__m_max_size);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_is_port(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = (0U == this->__PVT__m_port_type);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_is_export(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = (1U == this->__PVT__m_port_type);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_is_imp(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = (2U == this->__PVT__m_port_type);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_imp_list.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_set_if(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_set_if\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_get_if(vlProcess, vlSymsp, index, this->__PVT__m_if);
    if ((VlNull{} != this->__PVT__m_if)) {
        this->__PVT__m_def_index = index;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_m_get_if_mask(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_m_get_if_mask\n"); );
    // Body
    m_get_if_mask__Vfuncrtn = this->__PVT__m_if_mask;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_set_default_index(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_set_default_index\n"); );
    // Body
    this->__PVT__m_def_index = index;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_connect(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> provider) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_connect\n"); );
    // Locals
    CData/*0:0*/ __Vtask_m_check_relationship__28__Vfuncout;
    __Vtask_m_check_relationship__28__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_13__get_full_name;
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_full_name;
    CData/*0:0*/ __VlefCall_10__is_export;
    std::string __VlefCall_9__get_full_name;
    CData/*0:0*/ __VlefCall_8__is_imp;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__get_state;
    IData/*31:0*/ __VlefCall_0__get_state;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, top);
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 433)->__VnoInFunc_get_state(vlSymsp, __VlefCall_0__get_state);
        __VlefLogOr_2 = (0x00000010U == __VlefCall_0__get_state);
        if ((1U & (~ (IData)(__VlefLogOr_2)))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 434)->__VnoInFunc_get_state(vlSymsp, __VlefCall_1__get_state);
            __VlefLogOr_2 = (0x00000100U == __VlefCall_1__get_state);
        }
        if (__VlefLogOr_2) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 435)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Late Connection"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Attempt to connect "s, __VlefCall_3__get_full_name), " (of type "s), __VlefCall_4__get_type_name), ") at or after end_of_elaboration phase.  Ignoring."s)), 0x000000c8U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == provider)) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 442)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, "Cannot connect to null port handle"s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((provider == VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83>{this})) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 448)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, "Cannot connect a port instance to itself"s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((provider == VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83>{this})) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 454)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, "Cannot connect a port instance to itself"s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (((VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 459)
              ->__PVT__m_if_mask & this->__PVT__m_if_mask) 
             != this->__PVT__m_if_mask)) {
            VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 461)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 462)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 460)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_5__get_full_name, " (of type "s), __VlefCall_6__get_type_name), ") does not provide the complete interface required of this port (type "s), __VlefCall_7__get_type_name), ")"s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_imp(vlSymsp, __VlefCall_8__is_imp);
        if (__VlefCall_8__is_imp) {
            VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 472)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 470)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("Cannot call an imp port's connect method. An imp is connected only to the component passed in its constructor. (You attempted to bind this imp to %s)",1
                                                                                , 'S',&(__VlefCall_9__get_full_name)) , 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_export(vlSymsp, __VlefCall_10__is_export);
        if (__VlefCall_10__is_export) {
            VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 477)->__VnoInFunc_is_port(vlSymsp, __VlefCall_10__is_export);
        }
        if (__VlefCall_10__is_export) {
            VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 480)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 478)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("Cannot connect exports to ports Try calling port.connect(export) instead. (You attempted to bind this export to %s).",1
                                                                                , 'S',&(__VlefCall_11__get_full_name)) , 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_check_relationship(vlProcess, vlSymsp, provider, __Vtask_m_check_relationship__28__Vfuncout);
        VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 486)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
        this->__PVT__m_provided_by.atWrite(__VlefCall_12__get_full_name) 
            = provider;
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
        VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 487)->__PVT__m_provided_to.atWrite(__VlefCall_13__get_full_name) 
            = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83>{this};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_debug_connected_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_debug_connected_to\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_type_name;
    CData/*0:0*/ __VlefLogOr_5;
    IData/*31:0*/ __VlefCall_4__get_state;
    IData/*31:0*/ __VlefCall_3__get_state;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_type_name;
    std::string unnamedblk1__DOT__nm;
    std::string unnamedblk1__DOT__nm__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__nm__Vmore;
    unnamedblk1__DOT__nm__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> unnamedblk2__DOT__top;
    std::string unnamedblk3__DOT__nm;
    std::string unnamedblk3__DOT__nm__Vnext;
    CData/*0:0*/ unnamedblk3__DOT__nm__Vmore;
    unnamedblk3__DOT__nm__Vmore = 0;
    IData/*31:0*/ sz;
    IData/*31:0*/ num;
    IData/*31:0*/ curr_num;
    std::string s_sz;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> port;
    {
        sz = 0U;
        num = 0U;
        curr_num = 0U;
        s_sz = ""s;
        if (VL_GTS_III(32, 0U, level)) {
            level = 0U;
        }
        if ((0U == level)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent = "  "s;
        }
        if (((0xffffffffU != max_level) & VL_GTES_III(32, level, max_level))) {
            goto __Vlabel0;
        }
        num = this->__PVT__m_provided_by.size();
        if ((0U != this->__PVT__m_provided_by.size())) {
            unnamedblk1__DOT__nm__Vmore = (0U != this->__PVT__m_provided_by.first(unnamedblk1__DOT__nm__Vnext));
            while (unnamedblk1__DOT__nm__Vmore) {
                unnamedblk1__DOT__nm = unnamedblk1__DOT__nm__Vnext;
                unnamedblk1__DOT__nm__Vmore = (0U != this->__PVT__m_provided_by.next(unnamedblk1__DOT__nm__Vnext));
                curr_num = ((IData)(1U) + curr_num);
                port = this->__PVT__m_provided_by.at(unnamedblk1__DOT__nm);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), "  | \n"s);
                VL_NULL_CHECK(port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 520)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), "  |_"s), unnamedblk1__DOT__nm), " ("s), __VlefCall_0__get_type_name), ")\n"s);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent 
                    = ((VL_LTS_III(32, 1U, num) & (curr_num 
                                                   != num))
                        ? VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent, "  | "s)
                        : VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent, "    "s));
                VL_NULL_CHECK(port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 522)->__VnoInFunc_debug_connected_to(vlSymsp, 
                                                                                ((IData)(1U) 
                                                                                + level), max_level);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent 
                    = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent,0U,
                                  ((VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent) 
                                    - (IData)(4U)) 
                                   - (IData)(1U)));
            }
        }
        if ((0U == level)) {
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("This port's fanout network:\n\n  "s, __VlefCall_1__get_full_name), " ("s), __VlefCall_2__get_type_name), ")\n"s), vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save), "\n"s);
            }
            if ((0U == this->__PVT__m_imp_list.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__top);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 533)->__VnoInFunc_get_state(vlSymsp, __VlefCall_3__get_state);
                __VlefLogOr_5 = (0x00000010U == __VlefCall_3__get_state);
                if ((1U & (~ (IData)(__VlefLogOr_5)))) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 534)->__VnoInFunc_get_state(vlSymsp, __VlefCall_4__get_state);
                    __VlefLogOr_5 = (0x00000100U == __VlefCall_4__get_state);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = ((IData)(__VlefLogOr_5) ? VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Connected implementations: none\n"s)
                        : VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Connected implementations: not resolved until end-of-elab\n"s));
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Resolved implementation list:\n"s);
                unnamedblk3__DOT__nm__Vmore = (0U != this->__PVT__m_imp_list.first(unnamedblk3__DOT__nm__Vnext));
                while (unnamedblk3__DOT__nm__Vmore) {
                    unnamedblk3__DOT__nm = unnamedblk3__DOT__nm__Vnext;
                    unnamedblk3__DOT__nm__Vmore = (0U 
                                                   != this->__PVT__m_imp_list.next(unnamedblk3__DOT__nm__Vnext));
                    port = this->__PVT__m_imp_list.at(unnamedblk3__DOT__nm);
                    VL_SFORMAT_NX(s_sz,"%0d",1, '~',32,sz);
                    VL_NULL_CHECK(port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 545)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), s_sz), ": "s), unnamedblk3__DOT__nm), " ("s), __VlefCall_6__get_type_name), ")\n"s);
                    sz = ((IData)(1U) + sz);
                }
            }
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 549)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "debug_connected_to"s, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_connected_to__Vstatic__save, 0x000000c8U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_debug_provided_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_debug_provided_to\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_type_name;
    std::string unnamedblk4__DOT__nm;
    std::string unnamedblk4__DOT__nm__Vnext;
    CData/*0:0*/ unnamedblk4__DOT__nm__Vmore;
    unnamedblk4__DOT__nm__Vmore = 0;
    IData/*31:0*/ num;
    IData/*31:0*/ curr_num;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> port;
    {
        num = 0U;
        curr_num = 0U;
        if (VL_GTS_III(32, 0U, level)) {
            level = 0U;
        }
        if ((0U == level)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent = "  "s;
        }
        if (((0xffffffffU != max_level) & VL_GTS_III(32, level, max_level))) {
            goto __Vlabel0;
        }
        num = this->__PVT__m_provided_to.size();
        if ((0U != num)) {
            unnamedblk4__DOT__nm__Vmore = (0U != this->__PVT__m_provided_to.first(unnamedblk4__DOT__nm__Vnext));
            while (unnamedblk4__DOT__nm__Vmore) {
                unnamedblk4__DOT__nm = unnamedblk4__DOT__nm__Vnext;
                unnamedblk4__DOT__nm__Vmore = (0U != this->__PVT__m_provided_to.next(unnamedblk4__DOT__nm__Vnext));
                curr_num = ((IData)(1U) + curr_num);
                port = this->__PVT__m_provided_to.at(unnamedblk4__DOT__nm);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "  | \n"s);
                VL_NULL_CHECK(port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 581)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "  |_"s), unnamedblk4__DOT__nm), " ("s), __VlefCall_0__get_type_name), ")\n"s);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent 
                    = ((VL_LTS_III(32, 1U, num) & (curr_num 
                                                   != num))
                        ? VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent, "  | "s)
                        : VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent, "    "s));
                VL_NULL_CHECK(port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 583)->__VnoInFunc_debug_provided_to(vlSymsp, 
                                                                                ((IData)(1U) 
                                                                                + level), max_level);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent 
                    = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent,0U,
                                  ((VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent) 
                                    - (IData)(4U)) 
                                   - (IData)(1U)));
            }
        }
        if ((0U == level)) {
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("This port's fanin network:\n\n  "s, __VlefCall_1__get_full_name), " ("s), __VlefCall_2__get_type_name), ")\n"s), vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save), "\n"s);
            }
            if ((0U == this->__PVT__m_provided_to.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "This port has not been bound\n"s);
            }
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 594)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "debug_provided_to"s, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.__PVT__debug_provided_to__Vstatic__save, 0x000000c8U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_connected_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_connected_to\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base> __VlefCall_0__get_comp;
    std::string unnamedblk5__DOT__name;
    std::string unnamedblk5__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk5__DOT__name__Vmore;
    unnamedblk5__DOT__name__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> port;
    list.clear();
    unnamedblk5__DOT__name__Vmore = (0U != this->__PVT__m_provided_by.first(unnamedblk5__DOT__name__Vnext));
    while (unnamedblk5__DOT__name__Vmore) {
        unnamedblk5__DOT__name = unnamedblk5__DOT__name__Vnext;
        unnamedblk5__DOT__name__Vmore = (0U != this->__PVT__m_provided_by.next(unnamedblk5__DOT__name__Vnext));
        port = this->__PVT__m_provided_by.at(unnamedblk5__DOT__name);
        VL_NULL_CHECK(port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 608)->__VnoInFunc_get_comp(vlSymsp, __VlefCall_0__get_comp);
        list.atWrite(unnamedblk5__DOT__name) = __VlefCall_0__get_comp;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_provided_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_provided_to\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base> __VlefCall_0__get_comp;
    std::string unnamedblk6__DOT__name;
    std::string unnamedblk6__DOT__name__Vnext;
    CData/*0:0*/ unnamedblk6__DOT__name__Vmore;
    unnamedblk6__DOT__name__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> port;
    list.clear();
    unnamedblk6__DOT__name__Vmore = (0U != this->__PVT__m_provided_to.first(unnamedblk6__DOT__name__Vnext));
    while (unnamedblk6__DOT__name__Vmore) {
        unnamedblk6__DOT__name = unnamedblk6__DOT__name__Vnext;
        unnamedblk6__DOT__name__Vmore = (0U != this->__PVT__m_provided_to.next(unnamedblk6__DOT__name__Vnext));
        port = this->__PVT__m_provided_to.at(unnamedblk6__DOT__name);
        VL_NULL_CHECK(port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 621)->__VnoInFunc_get_comp(vlSymsp, __VlefCall_0__get_comp);
        list.atWrite(unnamedblk6__DOT__name) = __VlefCall_0__get_comp;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_m_check_relationship\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_11__get_type_name;
    std::string __VlefCall_10__get_full_name;
    CData/*0:0*/ __VlefCall_9__is_export;
    CData/*0:0*/ __VlefCall_8__is_export;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__is_export;
    CData/*0:0*/ __VlefCall_4__is_port;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__is_port;
    std::string __VlefCall_0__get_type_name;
    std::string s;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> from;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> from_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> to_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> from_gparent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> to_gparent;
    {
        m_check_relationship__Vfuncrtn = 0U;
        s = ""s;
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        if (("uvm_analysis_port"s == __VlefCall_0__get_type_name)) {
            m_check_relationship__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        from = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83>{this};
        this->__VnoInFunc_get_parent(vlSymsp, from_parent);
        VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 647)->__VnoInFunc_get_parent(vlSymsp, to_parent);
        if (((VlNull{} == from_parent) | (VlNull{} 
                                          == to_parent))) {
            m_check_relationship__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(from_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 653)->__VnoInFunc_get_parent(vlSymsp, from_gparent);
        VL_NULL_CHECK(to_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 654)->__VnoInFunc_get_parent(vlSymsp, to_gparent);
        VL_NULL_CHECK(from, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 658)->__VnoInFunc_is_port(vlSymsp, __VlefCall_1__is_port);
        if (__VlefCall_1__is_port) {
            VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 658)->__VnoInFunc_is_port(vlSymsp, __VlefCall_1__is_port);
        }
        if (((IData)(__VlefCall_1__is_port) && (from_gparent 
                                                != to_parent))) {
            VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 659)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 660)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(__VlefCall_2__get_full_name, " (of type "s), __VlefCall_3__get_type_name), ") is not up one level of hierarchy from this port. "s), "A port-to-port connection takes the form "s), "child_component.child_port.connect(parent_port)"s);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 664)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U);
            m_check_relationship__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            VL_NULL_CHECK(from, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 671)->__VnoInFunc_is_port(vlSymsp, __VlefCall_4__is_port);
            if (__VlefCall_4__is_port) {
                VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 671)->__VnoInFunc_is_export(vlSymsp, __VlefCall_5__is_export);
                if ((1U & (~ (IData)(__VlefCall_5__is_export)))) {
                    VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 671)->__VnoInFunc_is_imp(vlSymsp, __VlefCall_5__is_export);
                }
                __VlefCall_4__is_port = __VlefCall_5__is_export;
            }
            if (((IData)(__VlefCall_4__is_port) && 
                 (from_gparent != to_gparent))) {
                VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 673)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 674)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
                s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_6__get_full_name, " (of type "s), __VlefCall_7__get_type_name), ") is not at the same level of hierarchy as this port. "s), "A port-to-export connection takes the form "s), "component1.port.connect(component2.export)"s);
                VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 678)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U);
                m_check_relationship__Vfuncrtn = 0U;
                goto __Vlabel0;
            } else {
                VL_NULL_CHECK(from, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 685)->__VnoInFunc_is_export(vlSymsp, __VlefCall_8__is_export);
                if (__VlefCall_8__is_export) {
                    VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 685)->__VnoInFunc_is_export(vlSymsp, __VlefCall_9__is_export);
                    if ((1U & (~ (IData)(__VlefCall_9__is_export)))) {
                        VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 685)->__VnoInFunc_is_imp(vlSymsp, __VlefCall_9__is_export);
                    }
                    __VlefCall_8__is_export = __VlefCall_9__is_export;
                }
                if (((IData)(__VlefCall_8__is_export) 
                     && (from_parent != to_gparent))) {
                    VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 687)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 688)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_10__get_full_name, " (of type "s), __VlefCall_11__get_type_name), ") is not down one level of hierarchy from this export. "s), "An export-to-export or export-to-imp connection takes the form "s), "parent_export.connect(child_component.child_export)"s);
                    VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 692)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Warning"s, s, 0U, ""s, 0U);
                    m_check_relationship__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
            }
        }
        m_check_relationship__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_m_add_list(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> provider) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_m_add_list\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk7__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> imp;
    unnamedblk7__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 708)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk7__DOT__i, __VlefCall_0__size))) break;
        VL_NULL_CHECK(provider, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 709)->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk7__DOT__i, imp);
        VL_NULL_CHECK(imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 710)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        if ((! this->__PVT__m_imp_list.exists(__VlefCall_1__get_full_name))) {
            VL_NULL_CHECK(imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 711)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__PVT__m_imp_list.atWrite(__VlefCall_2__get_full_name) 
                = imp;
        }
        unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_resolve_bindings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_11__size;
    IData/*31:0*/ __VlefCall_10__max_size;
    IData/*31:0*/ __VlefCall_9__size;
    IData/*31:0*/ __VlefCall_8__max_size;
    IData/*31:0*/ __VlefCall_7__size;
    IData/*31:0*/ __VlefCall_6__max_size;
    IData/*31:0*/ __VlefCall_5__min_size;
    IData/*31:0*/ __VlefCall_4__size;
    IData/*31:0*/ __VlefCall_3__min_size;
    IData/*31:0*/ __VlefCall_2__size;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__is_imp;
    std::string unnamedblk8__DOT__nm;
    std::string unnamedblk8__DOT__nm__Vnext;
    CData/*0:0*/ unnamedblk8__DOT__nm__Vmore;
    unnamedblk8__DOT__nm__Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> unnamedblk8__DOT__unnamedblk9__DOT__port;
    {
        if (this->__PVT__m_resolved) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_imp(vlSymsp, __VlefCall_0__is_imp);
        if (__VlefCall_0__is_imp) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__PVT__m_imp_list.atWrite(__VlefCall_1__get_full_name) 
                = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83>{this};
        } else {
            unnamedblk8__DOT__nm__Vmore = (0U != this->__PVT__m_provided_by.first(unnamedblk8__DOT__nm__Vnext));
            while (unnamedblk8__DOT__nm__Vmore) {
                unnamedblk8__DOT__nm = unnamedblk8__DOT__nm__Vnext;
                unnamedblk8__DOT__nm__Vmore = (0U != this->__PVT__m_provided_by.next(unnamedblk8__DOT__nm__Vnext));
                unnamedblk8__DOT__unnamedblk9__DOT__port 
                    = this->__PVT__m_provided_by.at(unnamedblk8__DOT__nm);
                VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 739)->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
                this->__VnoInFunc_m_add_list(vlProcess, vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__port);
            }
        }
        this->__PVT__m_resolved = 1U;
        this->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
        this->__VnoInFunc_min_size(vlSymsp, __VlefCall_3__min_size);
        if (VL_LTS_III(32, __VlefCall_2__size, __VlefCall_3__min_size)) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_4__size);
            this->__VnoInFunc_min_size(vlSymsp, __VlefCall_5__min_size);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 747)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("connection count of %0d does not meet required minimum of %0d",2
                                                                                , '~',32,__VlefCall_4__size
                                                                                , '~',32,__VlefCall_5__min_size) , 0U, ""s, 0U);
        }
        this->__VnoInFunc_max_size(vlSymsp, __VlefCall_6__max_size);
        this->__VnoInFunc_size(vlSymsp, __VlefCall_7__size);
        this->__VnoInFunc_max_size(vlSymsp, __VlefCall_8__max_size);
        if (((0xffffffffU != __VlefCall_6__max_size) 
             & VL_GTS_III(32, __VlefCall_7__size, __VlefCall_8__max_size))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_9__size);
            this->__VnoInFunc_max_size(vlSymsp, __VlefCall_10__max_size);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 753)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "Connection Error"s, VL_SFORMATF_N_NX("connection count of %0d exceeds maximum of %0d",2
                                                                                , '~',32,__VlefCall_9__size
                                                                                , '~',32,__VlefCall_10__max_size) , 0U, ""s, 0U);
        }
        this->__VnoInFunc_size(vlSymsp, __VlefCall_11__size);
        if ((0U != __VlefCall_11__size)) {
            this->__VnoInFunc_set_if(vlProcess, vlSymsp, 0U);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_if(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83> &get_if__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::__VnoInFunc_get_if\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    std::string unnamedblk10__DOT__nm;
    std::string unnamedblk10__DOT__nm__Vnext;
    CData/*0:0*/ unnamedblk10__DOT__nm__Vmore;
    unnamedblk10__DOT__nm__Vmore = 0;
    std::string s;
    {
        s = ""s;
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 774)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "get_if"s, "Port size is zero; cannot get interface at any index"s, 0U, ""s, 0U);
            get_if__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
        if ((VL_GTS_III(32, 0U, index) | VL_GTES_III(32, index, __VlefCall_1__size))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            VL_SFORMAT_NX(s,"Index %0d out of range [0,%0d]",2
                          , '~',32,index, '~',32,(__VlefCall_2__size 
                                                  - (IData)(1U)));
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 780)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Connection Error"s, s, 0U, ""s, 0U);
            get_if__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        unnamedblk10__DOT__nm__Vmore = (0U != this->__PVT__m_imp_list.first(unnamedblk10__DOT__nm__Vnext));
        while (unnamedblk10__DOT__nm__Vmore) {
            unnamedblk10__DOT__nm = unnamedblk10__DOT__nm__Vnext;
            unnamedblk10__DOT__nm__Vmore = (0U != this->__PVT__m_imp_list.next(unnamedblk10__DOT__nm__Vnext));
            if ((0U == index)) {
                get_if__Vfuncrtn = this->__PVT__m_imp_list
                    .at(unnamedblk10__DOT__nm);
                goto __Vlabel0;
            }
            index = (index - (IData)(1U));
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_if_mask = 0;
    __PVT__m_def_index = 0;
    __PVT__m_port_type = 0;
    __PVT__m_min_size = 0;
    __PVT__m_max_size = 0;
    __PVT__m_resolved = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83::~\n"); );
}
