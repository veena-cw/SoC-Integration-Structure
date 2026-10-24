// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_on_auditing(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_on_auditing\n"); );
    // Body
    this->__PVT__auditing = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_off_auditing(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_off_auditing\n"); );
    // Body
    this->__PVT__auditing = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_is_auditing(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auditing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_is_auditing\n"); );
    // Body
    is_auditing__Vfuncrtn = this->__PVT__auditing;
}
