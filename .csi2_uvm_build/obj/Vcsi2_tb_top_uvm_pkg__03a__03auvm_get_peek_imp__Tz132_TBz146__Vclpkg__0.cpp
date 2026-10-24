// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132> imp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz145::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz145::__PVT__m_if_mask = 0x00000066U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_get_peek_imp"s;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_get(vlSymsp, __Vtask_get__1__t);
    t = __Vtask_get__1__t;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__2__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__2__t);
    t = __Vtask_peek__2__t;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_try_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_try_get\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_get__3__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_try_get(vlProcess, vlSymsp, __Vtask_try_get__3__t, try_get__Vfuncrtn);
    t = __Vtask_try_get__3__t;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_can_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_can_get\n"); );
    // Body
    can_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_can_get(vlSymsp, can_get__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_try_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_try_peek\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_peek__5__t;
    // Body
    try_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__5__t, try_peek__Vfuncrtn);
    t = __Vtask_try_peek__5__t;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_can_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::__VnoInFunc_can_peek\n"); );
    // Body
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_imps.svh", 151)->__VnoInFunc_can_peek(vlSymsp, can_peek__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146::~\n"); );
}
