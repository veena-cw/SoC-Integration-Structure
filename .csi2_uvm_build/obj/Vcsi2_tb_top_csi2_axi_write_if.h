// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_CSI2_AXI_WRITE_IF_H_
#define VERILATED_VCSI2_TB_TOP_CSI2_AXI_WRITE_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_csi2_axi_write_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ aclk;
    CData/*0:0*/ wlast;
    CData/*0:0*/ bvalid;
    CData/*0:0*/ mon_cb__DOT__bready;
    CData/*0:0*/ mon_cb__DOT__bvalid;
    CData/*6:0*/ mon_cb__DOT__wstrb;
    CData/*0:0*/ mon_cb__DOT__wlast;
    CData/*0:0*/ mon_cb__DOT__wready;
    CData/*0:0*/ mon_cb__DOT__wvalid;
    CData/*1:0*/ mon_cb__DOT__awburst;
    CData/*2:0*/ mon_cb__DOT__awsize;
    CData/*7:0*/ mon_cb__DOT__awlen;
    CData/*0:0*/ mon_cb__DOT__awready;
    CData/*0:0*/ mon_cb__DOT__awvalid;
    CData/*0:0*/ mon_cb__DOT__areset_n;
    CData/*0:0*/ __Vdly__bvalid;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__bready;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT__axi_vif__bvalid;
    CData/*6:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wstrb;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT__axi_vif__wlast;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wvalid;
    CData/*1:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awburst;
    CData/*2:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awsize;
    CData/*7:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awlen;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awvalid;
    CData/*0:0*/ __Vsampled_TOP__csi2_tb_top__DOT__rst_vif__rst_n;
    IData/*31:0*/ mon_cb__DOT__awaddr;
    IData/*31:0*/ mon_cb__DOT__awid;
    IData/*31:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awaddr;
    IData/*31:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__awid;
    QData/*63:0*/ mon_cb__DOT__wdata;
    QData/*63:0*/ __Vsampled_TOP__csi2_tb_top__DOT____Vcellout__dut__wdata;
    VlAssignableEvent mon_cb;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_csi2_axi_write_if();
    ~Vcsi2_tb_top_csi2_axi_write_if();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_csi2_axi_write_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
