// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__put_export = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz38_TBz96, vlProcess, vlSymsp, "put_export"s, 
                                     VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38>{this});
    this->__PVT__blocking_put_export = this->__PVT__put_export;
    this->__PVT__nonblocking_put_export = this->__PVT__put_export;
    this->__PVT__get_peek_export = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz38_TBz96, vlProcess, vlSymsp, "get_peek_export"s, 
                                          VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38>{this});
    this->__PVT__blocking_get_peek_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_get_peek_export = this->__PVT__get_peek_export;
    this->__PVT__blocking_get_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_get_export = this->__PVT__get_peek_export;
    this->__PVT__get_export = this->__PVT__get_peek_export;
    this->__PVT__blocking_peek_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_peek_export = this->__PVT__get_peek_export;
    this->__PVT__peek_export = this->__PVT__get_peek_export;
    this->__PVT__put_ap = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz38, vlProcess, vlSymsp, "put_ap"s, 
                                 VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38>{this});
    this->__PVT__get_ap = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz38, vlProcess, vlSymsp, "get_ap"s, 
                                 VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_build(vlProcess, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_flush(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_flush\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "flush"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_size\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    size__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "size"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    size__Vfuncrtn = 0U;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "put"s, "fifo channel task not implemented"s, 0U, ""s, 0U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "get"s, "fifo channel task not implemented"s, 0U, ""s, 0U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_peek(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_peek\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "peek"s, "fifo channel task not implemented"s, 0U, ""s, 0U);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_try_put(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_try_put\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    try_put__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_try_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_try_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    try_get__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    try_get__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_try_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_try_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_peek__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    try_peek__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_can_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_can_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_put__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    can_put__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_can_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_can_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_get__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    can_get__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_can_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_can_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_peek__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    can_peek__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_ok_to_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_ok_to_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    ok_to_put__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_ok_to_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_ok_to_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    ok_to_get__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_ok_to_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_ok_to_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    ok_to_peek__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_is_empty(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_is_empty\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    is_empty__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "is_empty"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    is_empty__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_is_full(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_is_full\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    is_full__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "is_full"s, "fifo channel function not implemented"s, 0x00000064U, ""s, 0U);
    is_full__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_used(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_used\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    used__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "used"s, "fifo channel function not implemented"s, 0U, ""s, 0U);
    used__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz38::~\n"); );
}
