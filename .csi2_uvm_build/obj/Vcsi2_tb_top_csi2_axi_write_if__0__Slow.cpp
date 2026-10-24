// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_csi2_axi_write_if___ctor_var_reset(Vcsi2_tb_top_csi2_axi_write_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_axi_write_if___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10553736683680568397ull);
    vlSelf->wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8447900327780902047ull);
    vlSelf->bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14655036748745407948ull);
    vlSelf->mon_cb__DOT__bready = 0;
    vlSelf->mon_cb__DOT__bvalid = 0;
    vlSelf->mon_cb__DOT__wstrb = 0;
    vlSelf->mon_cb__DOT__wdata = 0;
    vlSelf->mon_cb__DOT__wlast = 0;
    vlSelf->mon_cb__DOT__wready = 0;
    vlSelf->mon_cb__DOT__wvalid = 0;
    vlSelf->mon_cb__DOT__awburst = 0;
    vlSelf->mon_cb__DOT__awsize = 0;
    vlSelf->mon_cb__DOT__awlen = 0;
    vlSelf->mon_cb__DOT__awaddr = 0;
    vlSelf->mon_cb__DOT__awid = 0;
    vlSelf->mon_cb__DOT__awready = 0;
    vlSelf->mon_cb__DOT__awvalid = 0;
    vlSelf->mon_cb__DOT__areset_n = 0;
    vlSelf->__Vdly__bvalid = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__bready = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT__axi_vif__bvalid = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wstrb = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wdata = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT__axi_vif__wlast = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wvalid = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awburst = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awsize = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awlen = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awaddr = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awid = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awvalid = 0;
    vlSelf->__Vsampled_TOP__csi2_tb_top__DOT__rst_vif__rst_n = 0;
}
