// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___eval_initial__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___eval_initial__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lane_configuration = 2U;
    vlSelfRef.mode_selection = 0U;
    vlSelfRef.active_segment_mask = 0x0fU;
    vlSelfRef.rtl_sync_workaround = 1U;
    vlSelfRef.rtl_ulps_polarity_workaround = 1U;
    vlSelfRef.rtl_eot_workaround = 1U;
    vlSelfRef.last_status = 0U;
    vlSelfRef.bfm_state = 0U;
    vlSelfRef.pending_sot_on_first_word = 0U;
    vlSelfRef.direction = 1U;
    vlSelfRef.stopstate = 1U;
    vlSelfRef.rxactivehs = 0U;
    vlSelfRef.ulpsactivenot = 0U;
    vlSelfRef.rx_lane_sts_reg7 = 0U;
    vlSelfRef.rx_lane_sts_reg4 = 0U;
    vlSelfRef.rxvalidhs = 0U;
    vlSelfRef.rxsynchs = 0U;
    vlSelfRef.rxinvalidcodehs = 0U;
    vlSelfRef.rxdatahs = 0ULL;
    vlSelfRef.rxsynctypehs0 = 0U;
    vlSelfRef.rxsynctypehs1 = 0U;
    vlSelfRef.rxsynctypehs2 = 0U;
    vlSelfRef.rxsynctypehs3 = 0U;
    vlSelfRef.rxcalibrationprehs = 0U;
    vlSelfRef.rxcalibrationformat = 0U;
    vlSelfRef.rxerrcalhs = 0U;
    vlSelfRef.rxalpvalidhs = 0U;
    vlSelfRef.rxalpcode0 = 0U;
    vlSelfRef.rxalpcode1 = 0U;
    vlSelfRef.rxalpcode2 = 0U;
    vlSelfRef.rxalpcode3 = 0U;
    vlSelfRef.rxalpnibble0 = 0U;
    vlSelfRef.rxalpnibble1 = 0U;
    vlSelfRef.rxalpnibble2 = 0U;
    vlSelfRef.rxalpnibble3 = 0U;
    vlSelfRef.rxlpdtesc = 0U;
    vlSelfRef.rxulpsesc = 0U;
    vlSelfRef.rxvalidesc = 0U;
    vlSelfRef.rxtriggeresc = 0U;
    vlSelfRef.rxdataesc = 0U;
    vlSelfRef.errsoths = 0U;
    vlSelfRef.errsotsynchs = 0U;
    vlSelfRef.erresc = 0U;
    vlSelfRef.errsyncesc = 0U;
    vlSelfRef.errcontrol = 0U;
    vlSelfRef.errcontentionlp0 = 0U;
    vlSelfRef.errcontentionlp1 = 0U;
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___act_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___act_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((~ (IData)(vlSelfRef.rxactivehs)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.rxalpvalidhs)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((IData)(vlSelfRef.rxactivehs) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.rxvalidhs)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.stopstate) 
                                                | (IData)(vlSymsp->TOP.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err));
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_sequent__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_sequent__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.rst_n) & (~ (IData)(vlSelfRef.rtl_sync_workaround))) 
         & (0U != (IData)(vlSelfRef.rxsynchs)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((((IData)(vlSelfRef.rxvalidhs) 
                               & (IData)(vlSelfRef.rxsynchs)) 
                              != (IData)(vlSelfRef.rxsynchs))))) {
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:664: Assertion failed in %m: C-PHY BFM: Sync asserted without matching Valid segments\n",3, 'M',vlSymsp->name(),"csi2_rx_bfm_smoke_tb.phy_bfm", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("c_phy_bfm_if.sv", 664, "");
            }
        }
    }
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_sequent__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__1(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_sequent__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__1\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__5__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__5__Vfuncout = 0;
    // Body
    vlSelfRef.rxerrcalhs = 0U;
    vlSelfRef.rxcalibrationprehs = 0U;
    vlSelfRef.rxdatahs = 0ULL;
    vlSelfRef.rxalpnibble0 = 0U;
    vlSelfRef.rxinvalidcodehs = 0U;
    vlSelfRef.rxalpnibble2 = 0U;
    vlSelfRef.rxsynctypehs0 = 0U;
    vlSelfRef.bfm_state = 0U;
    vlSelfRef.rxsynctypehs1 = 0U;
    vlSelfRef.pending_sot_on_first_word = 0U;
    vlSelfRef.rxsynctypehs2 = 0U;
    vlSelfRef.direction = 1U;
    vlSelfRef.rxalpcode0 = 0U;
    vlSelfRef.rxsynctypehs3 = 0U;
    vlSelfRef.rxalpcode1 = 0U;
    vlSelfRef.rx_lane_sts_reg4 = 0U;
    vlSelfRef.rxalpcode2 = 0U;
    vlSelfRef.rxalpcode3 = 0U;
    vlSelfRef.rxcalibrationformat = 0U;
    vlSelfRef.rxdataesc = 0U;
    vlSelfRef.rxalpnibble1 = 0U;
    vlSelfRef.rxalpnibble3 = 0U;
    vlSelfRef.rxvalidesc = 0U;
    vlSelfRef.rxsynchs = 0U;
    vlSelfRef.rx_lane_sts_reg7 = 0U;
    vlSelfRef.rxlpdtesc = 0U;
    vlSelfRef.rxulpsesc = 0U;
    vlSelfRef.rxtriggeresc = 0U;
    vlSelfRef.rxalpvalidhs = 0U;
    vlSelfRef.stopstate = 1U;
    __Vfunc_normal_ulpsactivenot_value__5__Vfuncout 
        = (1U & (~ (IData)(vlSelfRef.rtl_ulps_polarity_workaround)));
    vlSelfRef.ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__5__Vfuncout;
    vlSelfRef.rxvalidhs = 0U;
    vlSelfRef.errcontentionlp1 = 0U;
    vlSelfRef.erresc = 0U;
    vlSelfRef.errsyncesc = 0U;
    vlSelfRef.errcontrol = 0U;
    vlSelfRef.errcontentionlp0 = 0U;
    vlSelfRef.errsoths = 0U;
    vlSelfRef.errsotsynchs = 0U;
    vlSelfRef.rxactivehs = 0U;
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((~ (IData)(vlSelfRef.rxactivehs)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.rxalpvalidhs)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((IData)(vlSelfRef.rxactivehs) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.rxvalidhs)));
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__1(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___nba_comb__TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm__1\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.stopstate) 
                                                | (IData)(vlSymsp->TOP.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err));
}

std::string VL_TO_STRING(const Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
