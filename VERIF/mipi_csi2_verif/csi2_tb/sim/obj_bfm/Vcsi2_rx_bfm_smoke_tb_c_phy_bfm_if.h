// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#ifndef VERILATED_VCSI2_RX_BFM_SMOKE_TB_C_PHY_BFM_IF_H_
#define VERILATED_VCSI2_RX_BFM_SMOKE_TB_C_PHY_BFM_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcsi2_rx_bfm_smoke_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bfm_clk;
    CData/*0:0*/ rst_n;
    CData/*0:0*/ rxactivehs;
    CData/*0:0*/ direction;
    CData/*0:0*/ stopstate;
    CData/*0:0*/ ulpsactivenot;
    CData/*0:0*/ rx_lane_sts_reg7;
    CData/*0:0*/ rx_lane_sts_reg4;
    CData/*3:0*/ rxinvalidcodehs;
    CData/*3:0*/ rxvalidhs;
    CData/*3:0*/ rxsynchs;
    CData/*2:0*/ rxsynctypehs0;
    CData/*2:0*/ rxsynctypehs1;
    CData/*2:0*/ rxsynctypehs2;
    CData/*2:0*/ rxsynctypehs3;
    CData/*0:0*/ rxcalibrationprehs;
    CData/*0:0*/ rxerrcalhs;
    CData/*1:0*/ rxcalibrationformat;
    CData/*3:0*/ rxalpvalidhs;
    CData/*3:0*/ rxalpcode0;
    CData/*3:0*/ rxalpcode1;
    CData/*3:0*/ rxalpcode2;
    CData/*3:0*/ rxalpcode3;
    CData/*3:0*/ rxalpnibble0;
    CData/*3:0*/ rxalpnibble1;
    CData/*3:0*/ rxalpnibble2;
    CData/*3:0*/ rxalpnibble3;
    CData/*0:0*/ rxlpdtesc;
    CData/*0:0*/ rxulpsesc;
    CData/*0:0*/ rxvalidesc;
    CData/*3:0*/ rxtriggeresc;
    CData/*7:0*/ rxdataesc;
    CData/*0:0*/ errsoths;
    CData/*0:0*/ errsotsynchs;
    CData/*0:0*/ erresc;
    CData/*0:0*/ errsyncesc;
    CData/*0:0*/ errcontrol;
    CData/*0:0*/ errcontentionlp0;
    CData/*0:0*/ errcontentionlp1;
    CData/*3:0*/ bfm_state;
    CData/*3:0*/ last_status;
    CData/*3:0*/ active_segment_mask;
    CData/*0:0*/ rtl_sync_workaround;
    CData/*0:0*/ rtl_ulps_polarity_workaround;
    CData/*0:0*/ rtl_eot_workaround;
    CData/*0:0*/ pending_sot_on_first_word;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    IData/*31:0*/ lane_configuration;
    IData/*31:0*/ mode_selection;
    QData/*63:0*/ rxdatahs;

    // INTERNAL VARIABLES
    Vcsi2_rx_bfm_smoke_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if();
    ~Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if();
    void ctor(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* obj);

#endif  // guard
