// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_rx_status_if___act_sequent__TOP__csi2_tb_top__DOT__status_vif__0(Vcsi2_tb_top_csi2_rx_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_rx_status_if___act_sequent__TOP__csi2_tb_top__DOT__status_vif__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axi_cb__DOT__axi_fifo_rd_vld = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld;
    vlSelfRef.axi_cb__DOT__data_length_vld = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld;
    vlSelfRef.axi_cb__DOT__axi_full = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full;
    vlSelfRef.axi_cb__DOT__axi_wr_en = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en;
    vlSelfRef.axi_cb__DOT__rst_n = vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT__rst_vif__rst_n;
}

void Vcsi2_tb_top_csi2_rx_status_if___act_sequent__TOP__csi2_tb_top__DOT__status_vif__1(Vcsi2_tb_top_csi2_rx_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_rx_status_if___act_sequent__TOP__csi2_tb_top__DOT__status_vif__1\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rx_cb__DOT__rx_pixel_dvalid = vlSelfRef.__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid;
    vlSelfRef.rx_cb__DOT__rst_n = vlSymsp->TOP__csi2_tb_top__DOT__axi_vif.__Vsampled_TOP__csi2_tb_top__DOT__rst_vif__rst_n;
}

void Vcsi2_tb_top_csi2_rx_status_if___obs_sequent__TOP__csi2_tb_top__DOT__status_vif__0(Vcsi2_tb_top_csi2_rx_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_rx_status_if___obs_sequent__TOP__csi2_tb_top__DOT__status_vif__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->fireEvent(vlSelfRef.axi_cb);
}

void Vcsi2_tb_top_csi2_rx_status_if___obs_sequent__TOP__csi2_tb_top__DOT__status_vif__1(Vcsi2_tb_top_csi2_rx_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_rx_status_if___obs_sequent__TOP__csi2_tb_top__DOT__status_vif__1\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->fireEvent(vlSelfRef.rx_cb);
}
