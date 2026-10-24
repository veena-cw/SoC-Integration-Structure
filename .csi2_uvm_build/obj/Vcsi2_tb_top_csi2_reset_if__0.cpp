// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_reset_if___obs_sequent__TOP__csi2_tb_top__DOT__rst_vif__0(Vcsi2_tb_top_csi2_reset_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_reset_if___obs_sequent__TOP__csi2_tb_top__DOT__rst_vif__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->fireEvent(vlSelfRef.drv_cb);
}

void Vcsi2_tb_top_csi2_reset_if___react_sequent__TOP__csi2_tb_top__DOT__rst_vif__0(Vcsi2_tb_top_csi2_reset_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_csi2_reset_if___react_sequent__TOP__csi2_tb_top__DOT__rst_vif__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.__Vclocking_prev__drv_cb__DOT__rst_n) 
          != (IData)(vlSelfRef.drv_cb__DOT__rst_n)) 
         & vlSelfRef.drv_cb.isTriggered())) {
        vlSelfRef.rst_n = vlSelfRef.drv_cb__DOT__rst_n;
        vlSelfRef.__Vclocking_prev__drv_cb__DOT__rst_n 
            = vlSelfRef.drv_cb__DOT__rst_n;
    }
}
