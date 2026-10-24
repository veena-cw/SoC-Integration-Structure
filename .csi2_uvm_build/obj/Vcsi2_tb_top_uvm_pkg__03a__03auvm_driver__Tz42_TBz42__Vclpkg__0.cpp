// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__seq_item_port = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi28, vlProcess, vlSymsp, "seq_item_port"s, 
                                        VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42>{this}, 0U, 1U);
    this->__PVT__rsp_port = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz42, vlProcess, vlSymsp, "rsp_port"s, 
                                   VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42>{this});
    this->__PVT__seq_item_prod_if = this->__PVT__seq_item_port;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_driver #(REQ,RSP)"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver__Tz42_TBz42::~\n"); );
}
