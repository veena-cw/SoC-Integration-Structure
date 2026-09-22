// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_PARALLEL_IN_SERIAL_OUT_PASSTHROUGH__PI35_H_
#define VERILATED_VTESTBENCH_BSG_PARALLEL_IN_SERIAL_OUT_PASSTHROUGH__PI35_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__reset_i,0,0);
    VL_IN8(__PVT__v_i,0,0);
    VL_OUT8(__PVT__ready_and_o,0,0);
    VL_OUT8(__PVT__v_o,0,0);
    VL_IN8(__PVT__ready_and_i,0,0);
    VL_INW(__PVT__data_i,127,0,4);
    VL_OUTW(__PVT__data_o,127,0,4);
    VlWide<4>/*127:0*/ __PVT__initial_data_reg__DOT__data_r;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35();
    VL_UNCOPYABLE(Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
