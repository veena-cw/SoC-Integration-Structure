// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_csi2_rx_status_if___ctor_var_reset(Vcsi2_tb_top_csi2_rx_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_rx_status_if___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->bfm_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15766707203206967501ull);
    vlSelf->aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10553736683680568397ull);
    vlSelf->dtype = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17161213621925647246ull);
    vlSelf->lane_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3547965083551796602ull);
    vlSelf->llp_err_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10500993149036541120ull);
    vlSelf->llp_err = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17072920872053856409ull);
    vlSelf->rx_cb__DOT__rx_pixel_dvalid = 0;
    vlSelf->rx_cb__DOT__rst_n = 0;
    vlSelf->axi_cb__DOT__axi_fifo_rd_vld = 0;
    vlSelf->axi_cb__DOT__data_length_vld = 0;
    vlSelf->axi_cb__DOT__axi_full = 0;
    vlSelf->axi_cb__DOT__axi_wr_en = 0;
    vlSelf->axi_cb__DOT__rst_n = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en = 0;
}
