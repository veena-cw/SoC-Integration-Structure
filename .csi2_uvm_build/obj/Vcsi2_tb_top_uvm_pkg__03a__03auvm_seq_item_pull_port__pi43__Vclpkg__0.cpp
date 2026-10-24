// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::init(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if_mask = 0x000001ffU;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_get_next_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_next_item__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__1__t);
    t = __Vtask_get_next_item__1__t;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_try_next_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_next_item__2__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__2__t);
    t = __Vtask_try_next_item__2__t;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_item_done(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_item_done(vlSymsp, t);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_wait_for_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_wait_for_sequences(vlSymsp);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_has_do_available(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_put_response(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_put_response(vlSymsp, t);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__7__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_get(vlSymsp, __Vtask_get__7__t);
    t = __Vtask_get__7__t;
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__8__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__8__t);
    t = __Vtask_peek__8__t;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134::__PVT__m_if, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm1/uvm_sqr_connections.svh", 45)->__VnoInFunc_put(vlSymsp, t);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43::~\n"); );
}
