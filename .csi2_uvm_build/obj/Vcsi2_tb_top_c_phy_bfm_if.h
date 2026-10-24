// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_C_PHY_BFM_IF_H_
#define VERILATED_VCSI2_TB_TOP_C_PHY_BFM_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_c_phy_bfm_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bfm_clk;
    CData/*0:0*/ rst_n;
    CData/*0:0*/ rxwordclkhs;
    CData/*0:0*/ cphy_rxwordclkhs;
    CData/*0:0*/ rxclkesc;
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
    CData/*0:0*/ turnrequest;
    CData/*0:0*/ turndisable;
    CData/*0:0*/ forcerxmode;
    CData/*0:0*/ enable;
    CData/*0:0*/ rxalp_lpselect;
    CData/*1:0*/ rxdatawidthhs;
    CData/*2:0*/ alpwakestate;
    CData/*3:0*/ __PVT__bfm_state;
    CData/*3:0*/ __PVT__last_status;
    CData/*3:0*/ __PVT__active_segment_mask;
    CData/*0:0*/ __PVT__rtl_sync_workaround;
    CData/*0:0*/ __PVT__rtl_ulps_polarity_workaround;
    CData/*0:0*/ __PVT__rtl_eot_workaround;
    CData/*0:0*/ __PVT__pending_sot_on_first_word;
    IData/*31:0*/ lane_configuration;
    IData/*31:0*/ mode_selection;
    QData/*63:0*/ rxdatahs;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*0:0*/ __PVT__PROGRAMMABLE_PREAMBLE_EN = 0U;
    static constexpr CData/*2:0*/ __PVT__DEFAULT_SYNC_TYPE = 3U;
    static constexpr IData/*31:0*/ __PVT__ENABLE_TIMEOUT = 0x00000064U;
    static constexpr IData/*31:0*/ __PVT__BFM_CLK_PERIOD_NS = 0x0000000aU;
    static constexpr IData/*31:0*/ __PVT__T3_PREPARE_NS = 0x00000026U;
    static constexpr IData/*31:0*/ __PVT__UI_PER_WORD = 7U;
    static constexpr IData/*31:0*/ __PVT__T3_PREBEGIN_UI = 7U;
    static constexpr IData/*31:0*/ __PVT__T3_PROGSEQ_UI = 0x0000000eU;
    static constexpr IData/*31:0*/ __PVT__T3_PREEND_UI = 7U;
    static constexpr IData/*31:0*/ __PVT__T3_POST_UI = 7U;
    static constexpr IData/*31:0*/ __PVT__T3_ACTIVE_PROGSEQ_UI = 0U;
    static constexpr IData/*31:0*/ __PVT__T3_PREAMBLE_UI = 0x0000000eU;
    static constexpr IData/*31:0*/ __PVT__PREAMBLE_WORD_CYCLES = 2U;
    static constexpr IData/*31:0*/ __PVT__POST_WORD_CYCLES = 1U;
    static constexpr IData/*31:0*/ __PVT__PREPARE_WORD_CYCLES = 4U;

    // CONSTRUCTORS
    Vcsi2_tb_top_c_phy_bfm_if();
    ~Vcsi2_tb_top_c_phy_bfm_if();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_c_phy_bfm_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    VlCoroutine __VnoInFunc_drive_hs_word_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ data_word, CData/*0:0*/ last_word, CData/*3:0*/ segment_mask);
    VlCoroutine __VnoInFunc_drive_post_and_eot_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_drive_rtl_inter_header_sync_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*2:0*/ sync_type, CData/*3:0*/ segment_mask);
    VlCoroutine __VnoInFunc_drive_sync_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*2:0*/ sync_type, CData/*0:0*/ initial_sync, CData/*3:0*/ segment_mask);
    VlCoroutine __VnoInFunc_finish_without_eot_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_start_hs_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &started);
};


#endif  // guard
