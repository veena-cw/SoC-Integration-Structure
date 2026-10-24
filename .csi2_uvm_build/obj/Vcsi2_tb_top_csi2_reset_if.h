// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_CSI2_RESET_IF_H_
#define VERILATED_VCSI2_TB_TOP_CSI2_RESET_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_csi2_reset_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ rst_n;
    CData/*0:0*/ drv_cb__DOT__rst_n;
    CData/*0:0*/ __Vclocking_prev__drv_cb__DOT__rst_n;
    VlAssignableEvent drv_cb;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_csi2_reset_if();
    ~Vcsi2_tb_top_csi2_reset_if();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_csi2_reset_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
