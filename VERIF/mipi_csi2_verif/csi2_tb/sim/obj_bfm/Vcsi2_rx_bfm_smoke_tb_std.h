// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#ifndef VERILATED_VCSI2_RX_BFM_SMOKE_TB_STD_H_
#define VERILATED_VCSI2_RX_BFM_SMOKE_TB_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcsi2_rx_bfm_smoke_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_rx_bfm_smoke_tb_std final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_rx_bfm_smoke_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_rx_bfm_smoke_tb_std();
    ~Vcsi2_rx_bfm_smoke_tb_std();
    void ctor(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_rx_bfm_smoke_tb_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
