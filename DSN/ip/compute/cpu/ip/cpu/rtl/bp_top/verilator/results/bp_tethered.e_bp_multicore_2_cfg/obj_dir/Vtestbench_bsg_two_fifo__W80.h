// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_TWO_FIFO__W80_H_
#define VERILATED_VTESTBENCH_BSG_TWO_FIFO__W80_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_two_fifo__W80 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_OUT8(ready_param_o,0,0);
    VL_IN8(v_i,0,0);
    VL_OUT8(v_o,0,0);
    VL_IN8(yumi_i,0,0);
    CData/*0:0*/ __PVT__enq_i;
    CData/*0:0*/ __PVT__head_r;
    CData/*0:0*/ __PVT__tail_r;
    CData/*0:0*/ __PVT__empty_r;
    CData/*0:0*/ __PVT__full_r;
    VL_INW(data_i,127,0,4);
    VL_OUTW(data_o,127,0,4);
    VlUnpacked<VlWide<4>/*127:0*/, 2> __PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_two_fifo__W80(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_two_fifo__W80();
    VL_UNCOPYABLE(Vtestbench_bsg_two_fifo__W80);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
