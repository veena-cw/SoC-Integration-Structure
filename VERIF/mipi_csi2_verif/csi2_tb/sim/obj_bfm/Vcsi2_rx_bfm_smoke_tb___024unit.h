// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#ifndef VERILATED_VCSI2_RX_BFM_SMOKE_TB___024UNIT_H_
#define VERILATED_VCSI2_RX_BFM_SMOKE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcsi2_rx_bfm_smoke_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_rx_bfm_smoke_tb___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vcsi2_rx_bfm_smoke_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_rx_bfm_smoke_tb___024unit();
    ~Vcsi2_rx_bfm_smoke_tb___024unit();
    void ctor(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_rx_bfm_smoke_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
