// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_axi_write_if___act_sequent__TOP__csi2_tb_top__DOT__axi_vif__0(Vcsi2_tb_top_csi2_axi_write_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_axi_write_if___act_sequent__TOP__csi2_tb_top__DOT__axi_vif__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__bvalid = vlSelfRef.bvalid;
}

void Vcsi2_tb_top_csi2_axi_write_if___act_sequent__TOP__csi2_tb_top__DOT__axi_vif__1(Vcsi2_tb_top_csi2_axi_write_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_axi_write_if___act_sequent__TOP__csi2_tb_top__DOT__axi_vif__1\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mon_cb__DOT__wready = 1U;
    vlSelfRef.mon_cb__DOT__awready = 1U;
    vlSelfRef.mon_cb__DOT__bready = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__bready;
    vlSelfRef.mon_cb__DOT__bvalid = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT__axi_vif__bvalid;
    vlSelfRef.mon_cb__DOT__wstrb = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wstrb;
    vlSelfRef.mon_cb__DOT__wdata = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wdata;
    vlSelfRef.mon_cb__DOT__wlast = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT__axi_vif__wlast;
    vlSelfRef.mon_cb__DOT__wvalid = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wvalid;
    vlSelfRef.mon_cb__DOT__awburst = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awburst;
    vlSelfRef.mon_cb__DOT__awsize = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awsize;
    vlSelfRef.mon_cb__DOT__awlen = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awlen;
    vlSelfRef.mon_cb__DOT__awaddr = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awaddr;
    vlSelfRef.mon_cb__DOT__awid = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awid;
    vlSelfRef.mon_cb__DOT__awvalid = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awvalid;
    vlSelfRef.mon_cb__DOT__areset_n = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT__rst_vif__rst_n;
}

void Vcsi2_tb_top_csi2_axi_write_if___nba_sequent__TOP__csi2_tb_top__DOT__axi_vif__0(Vcsi2_tb_top_csi2_axi_write_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_axi_write_if___nba_sequent__TOP__csi2_tb_top__DOT__axi_vif__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bvalid = vlSelfRef.__Vdly__bvalid;
}

void Vcsi2_tb_top_csi2_axi_write_if___obs_sequent__TOP__csi2_tb_top__DOT__axi_vif__0(Vcsi2_tb_top_csi2_axi_write_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_axi_write_if___obs_sequent__TOP__csi2_tb_top__DOT__axi_vif__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->fireEvent(vlSelfRef.mon_cb);
}
