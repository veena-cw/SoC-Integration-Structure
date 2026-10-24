// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132> imp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz145::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz145::__PVT__m_if_mask = 0x00000011U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_put_imp"s;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::__VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::__VnoInFunc_put\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 97)->__VnoInFunc_put(vlSymsp, t);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::__VnoInFunc_try_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::__VnoInFunc_try_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 97)->__VnoInFunc_try_put(vlProcess, vlSymsp, t, try_put__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::__VnoInFunc_can_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::__VnoInFunc_can_put\n"); );
    // Body
    can_put__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 97)->__VnoInFunc_can_put(vlSymsp, can_put__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146::~\n"); );
}
