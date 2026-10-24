// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_raised(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_raised\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_dropped(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_dropped\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_all_dropped(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_all_dropped\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::~\n"); );
}
