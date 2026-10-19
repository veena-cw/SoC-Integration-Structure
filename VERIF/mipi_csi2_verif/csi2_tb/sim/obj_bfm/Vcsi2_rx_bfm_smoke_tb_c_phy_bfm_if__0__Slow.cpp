// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

VL_ATTR_COLD void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___ctor_var_reset(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___ctor_var_reset\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->bfm_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15766707203206967501ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->lane_configuration = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13350821782813974494ull);
    vlSelf->mode_selection = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17602593560658115966ull);
    vlSelf->rxactivehs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5450494148801597401ull);
    vlSelf->direction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10905674612737387863ull);
    vlSelf->stopstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4121393783175470841ull);
    vlSelf->ulpsactivenot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15347668796012909948ull);
    vlSelf->rx_lane_sts_reg7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9592930184752605316ull);
    vlSelf->rx_lane_sts_reg4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10892125621962079448ull);
    vlSelf->rxdatahs = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8171573535113427412ull);
    vlSelf->rxinvalidcodehs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14036086893956411961ull);
    vlSelf->rxvalidhs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5115435040267972904ull);
    vlSelf->rxsynchs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18098825652320884387ull);
    vlSelf->rxsynctypehs0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9785280822123271440ull);
    vlSelf->rxsynctypehs1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14819218096067922860ull);
    vlSelf->rxsynctypehs2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7710573761400115442ull);
    vlSelf->rxsynctypehs3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2809506632624054174ull);
    vlSelf->rxcalibrationprehs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12891561742968370646ull);
    vlSelf->rxerrcalhs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 52170645621603871ull);
    vlSelf->rxcalibrationformat = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17434443183182555916ull);
    vlSelf->rxalpvalidhs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1401920222520283897ull);
    vlSelf->rxalpcode0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3814471028301024270ull);
    vlSelf->rxalpcode1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7725755714992955764ull);
    vlSelf->rxalpcode2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6887505302795402353ull);
    vlSelf->rxalpcode3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11714790796299408362ull);
    vlSelf->rxalpnibble0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6624171433448866390ull);
    vlSelf->rxalpnibble1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8878285853767089481ull);
    vlSelf->rxalpnibble2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14631122136776906448ull);
    vlSelf->rxalpnibble3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10513588466421183919ull);
    vlSelf->rxlpdtesc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18213439722402770070ull);
    vlSelf->rxulpsesc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17424677198072082796ull);
    vlSelf->rxvalidesc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8528782160998627113ull);
    vlSelf->rxtriggeresc = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9139934422468904765ull);
    vlSelf->rxdataesc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16504896353597450126ull);
    vlSelf->errsoths = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7267396912849912643ull);
    vlSelf->errsotsynchs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5160014666534357329ull);
    vlSelf->erresc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 300517245799736799ull);
    vlSelf->errsyncesc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1567793540789357919ull);
    vlSelf->errcontrol = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6045718364927775960ull);
    vlSelf->errcontentionlp0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8615911967525253428ull);
    vlSelf->errcontentionlp1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15122226742401653100ull);
    vlSelf->bfm_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16483177502514282313ull);
    vlSelf->last_status = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2367043895076395369ull);
    vlSelf->active_segment_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13592773449367046744ull);
    vlSelf->rtl_sync_workaround = 0;
    vlSelf->rtl_ulps_polarity_workaround = 0;
    vlSelf->rtl_eot_workaround = 0;
    vlSelf->pending_sot_on_first_word = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
}
