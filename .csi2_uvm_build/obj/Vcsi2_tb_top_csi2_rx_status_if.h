// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_CSI2_RX_STATUS_IF_H_
#define VERILATED_VCSI2_TB_TOP_CSI2_RX_STATUS_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_csi2_rx_status_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bfm_clk;
    CData/*0:0*/ aclk;
    CData/*5:0*/ dtype;
    CData/*0:0*/ lane_err;
    CData/*0:0*/ llp_err_vld;
    CData/*2:0*/ llp_err;
    CData/*0:0*/ rx_cb__DOT__rx_pixel_dvalid;
    CData/*0:0*/ rx_cb__DOT__rst_n;
    CData/*0:0*/ axi_cb__DOT__axi_fifo_rd_vld;
    CData/*0:0*/ axi_cb__DOT__data_length_vld;
    CData/*0:0*/ axi_cb__DOT__axi_full;
    CData/*0:0*/ axi_cb__DOT__axi_wr_en;
    CData/*0:0*/ axi_cb__DOT__rst_n;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__rx_pixel_dvalid;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__data_length_vld;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_full;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT__dut__DOT__axim_inst__DOT__axi_wr_en;
    VlAssignableEvent rx_cb;
    VlAssignableEvent axi_cb;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_csi2_rx_status_if();
    ~Vcsi2_tb_top_csi2_rx_status_if();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_csi2_rx_status_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
