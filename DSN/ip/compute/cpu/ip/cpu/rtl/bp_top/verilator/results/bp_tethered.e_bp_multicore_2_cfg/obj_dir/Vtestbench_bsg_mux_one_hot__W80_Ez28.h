// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_MUX_ONE_HOT__W80_EZ28_H_
#define VERILATED_VTESTBENCH_BSG_MUX_ONE_HOT__W80_EZ28_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_mux_one_hot__W80_Ez28 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__sel_one_hot_i,1,0);
    VL_INW(__PVT__data_i,255,0,8);
    VL_OUTW(__PVT__data_o,127,0,4);

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_mux_one_hot__W80_Ez28(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_mux_one_hot__W80_Ez28();
    VL_UNCOPYABLE(Vtestbench_bsg_mux_one_hot__W80_Ez28);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
