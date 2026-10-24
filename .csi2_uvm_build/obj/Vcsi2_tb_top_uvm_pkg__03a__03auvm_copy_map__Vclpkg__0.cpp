// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::__VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__m_map.atWrite(key) = obj;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::__VnoInFunc_get\n"); );
    // Body
    {
        if (this->__PVT__m_map.exists(key)) {
            get__Vfuncrtn = this->__PVT__m_map.at(key);
            goto __Vlabel0;
        }
        get__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::__VnoInFunc_clear(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::__VnoInFunc_clear\n"); );
    // Body
    this->__PVT__m_map.clear();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::__VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> v) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::__VnoInFunc_delete\n"); );
    // Body
    this->__PVT__m_map.erase(v);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
