// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_MUX_ONE_HOT__W40_E8_H_
#define VERILATED_VTESTBENCH_BSG_MUX_ONE_HOT__W40_E8_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_mux_one_hot__W40_E8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sel_one_hot_i,7,0);
    VL_INW(data_i,511,0,16);
    VL_OUT64(data_o,63,0);

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_mux_one_hot__W40_E8(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_mux_one_hot__W40_E8();
    VL_UNCOPYABLE(Vtestbench_bsg_mux_one_hot__W40_E8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
