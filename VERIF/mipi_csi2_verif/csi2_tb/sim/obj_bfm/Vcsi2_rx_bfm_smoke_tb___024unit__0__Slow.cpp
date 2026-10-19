// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb___024unit___ctor_var_reset(Vcsi2_rx_bfm_smoke_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb___024unit___ctor_var_reset\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorOff = 0;
}
