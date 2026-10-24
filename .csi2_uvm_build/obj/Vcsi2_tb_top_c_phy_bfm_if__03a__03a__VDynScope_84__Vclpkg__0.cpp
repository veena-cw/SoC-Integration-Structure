// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_c_phy_bfm_if__03a__03a__VDynScope_84::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__send_sync_type = VL_SCOPED_RAND_RESET_I(3, 329228693075669321ULL, 8514050928723270617ull);
    __PVT__packet_words.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 329228693075669321ULL, 12577342239724842479ull);
    __PVT__send_eot = 0;
}
