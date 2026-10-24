// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_> imp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if_mask = 0x000001ffU;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_imp"s;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_get_next_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_next_item__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__1__t);
    t = __Vtask_get_next_item__1__t;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_try_next_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_next_item__2__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__2__t);
    t = __Vtask_try_next_item__2__t;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_item_done(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_item_done(vlSymsp, t);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_wait_for_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_has_do_available(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_put_response(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_put_response\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__7__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_get(vlSymsp, __Vtask_get__7__t);
    t = __Vtask_get__7__t;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__8__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__8__t);
    t = __Vtask_peek__8__t;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 81)->__VnoInFunc_put(vlSymsp, t);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42::~\n"); );
}
