// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_MUX_ONE_HOT__WC2_E1_H_
#define VERILATED_VTESTBENCH_BSG_MUX_ONE_HOT__WC2_E1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_mux_one_hot__Wc2_E1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__sel_one_hot_i,0,0);
    VL_INW(__PVT__data_i,193,0,7);
    VL_OUTW(__PVT__data_o,193,0,7);

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_mux_one_hot__Wc2_E1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_mux_one_hot__Wc2_E1();
    VL_UNCOPYABLE(Vtestbench_bsg_mux_one_hot__Wc2_E1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
