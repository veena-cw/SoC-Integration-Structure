// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108__Vclpkg::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108::new\n"); );
    // Body
    /*super.new*/;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz108::~\n"); );
}
