// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1::init(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1::_ctor_var_reset(Vcsi2_rx_bfm_smoke_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__send_sync_type = VL_SCOPED_RAND_RESET_I(3, 2787743187231340809ULL, 8514050928723270617ull);
    __PVT__packet_words.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 2787743187231340809ULL, 12577342239724842479ull);
    __PVT__send_eot = 0;
}

std::string Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1::to_string_middle\n"); );
    // Body
    std::string out;
    out += "started:" + VL_TO_STRING(__PVT__started);
    out += ", send_sync_type:" + VL_TO_STRING(__PVT__send_sync_type);
    out += ", packet_words:" + VL_TO_STRING(__PVT__packet_words);
    out += ", send_eot:" + VL_TO_STRING(__PVT__send_eot);
    out += ", compl:" + VL_TO_STRING(__PVT__compl);
    return (out);
}
