// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_MEM_1RW_SYNC__PI178_H_
#define VERILATED_VTESTBENCH_BSG_MEM_1RW_SYNC__PI178_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_mem_1rw_sync__pi178 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__reset_i,0,0);
    VL_IN8(__PVT__data_i,7,0);
    VL_IN8(__PVT__v_i,0,0);
    VL_IN8(__PVT__w_i,0,0);
    VL_OUT8(__PVT__data_o,7,0);
    CData/*0:0*/ __PVT__synth__DOT__nz__DOT__read_en;
    CData/*7:0*/ __PVT__synth__DOT__nz__DOT__data_out;
    CData/*0:0*/ __PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
    CData/*7:0*/ __PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
    VL_IN16(__PVT__addr_i,9,0);
    SData/*9:0*/ __PVT__synth__DOT__nz__DOT__addr_r;
    VlUnpacked<CData/*7:0*/, 1024> __PVT__synth__DOT__nz__DOT__mem;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_mem_1rw_sync__pi178(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_mem_1rw_sync__pi178();
    VL_UNCOPYABLE(Vtestbench_bsg_mem_1rw_sync__pi178);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
