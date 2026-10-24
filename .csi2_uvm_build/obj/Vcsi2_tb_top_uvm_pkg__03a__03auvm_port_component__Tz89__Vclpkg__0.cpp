// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz81> port) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    if ((VlNull{} == port)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Bad usage"s, "Null handle to port"s, 0U, ""s, 0U);
    }
    this->__PVT__m_port = port;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_get_type_name\n"); );
    // Body
    {
        get_type_name__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__m_port)) {
            get_type_name__Vfuncrtn = "uvm_port_component"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 121)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_resolve_bindings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 125)->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_get_port(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz81> &get_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_get_port\n"); );
    // Body
    get_port__Vfuncrtn = this->__PVT__m_port;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_get_connected_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_get_connected_to\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 137)->__VnoInFunc_get_connected_to(vlSymsp, list);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_get_provided_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_get_provided_to\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 141)->__VnoInFunc_get_provided_to(vlSymsp, list);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_is_port(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 145)->__VnoInFunc_is_port(vlSymsp, is_port__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_is_export(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 149)->__VnoInFunc_is_export(vlSymsp, is_export__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_is_imp(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_port_base.svh", 153)->__VnoInFunc_is_imp(vlSymsp, is_imp__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz89::~\n"); );
}
