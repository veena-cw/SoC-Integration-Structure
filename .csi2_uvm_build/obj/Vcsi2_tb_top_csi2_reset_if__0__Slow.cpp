// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_csi2_reset_if___eval_static__TOP__csi2_tb_top__DOT__rst_vif(Vcsi2_tb_top_csi2_reset_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_reset_if___eval_static__TOP__csi2_tb_top__DOT__rst_vif\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_n = 0U;
    vlSelfRef.drv_cb__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.__Vclocking_prev__drv_cb__DOT__rst_n 
        = vlSelfRef.drv_cb__DOT__rst_n;
}

VL_ATTR_COLD void Vcsi2_tb_top_csi2_reset_if___ctor_var_reset(Vcsi2_tb_top_csi2_reset_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_reset_if___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->drv_cb__DOT__rst_n = 0;
    vlSelf->__Vclocking_prev__drv_cb__DOT__rst_n = 0;
}
