// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_get_connected_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_get_connected_to\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_get_provided_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_get_provided_to\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_port(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_export(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_imp(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_build(vlProcess, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_do_task_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_do_task_phase\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base::~\n"); );
}
