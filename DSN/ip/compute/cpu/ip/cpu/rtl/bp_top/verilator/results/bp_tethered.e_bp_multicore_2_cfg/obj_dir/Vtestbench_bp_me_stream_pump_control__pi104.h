// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_ME_STREAM_PUMP_CONTROL__PI104_H_
#define VERILATED_VTESTBENCH_BP_ME_STREAM_PUMP_CONTROL__PI104_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_me_stream_pump_control__pi104 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__reset_i,0,0);
    VL_IN8(__PVT__ack_i,0,0);
    VL_OUT8(__PVT__first_o,0,0);
    VL_OUT8(__PVT__critical_o,0,0);
    VL_OUT8(__PVT__last_o,0,0);
    CData/*0:0*/ __PVT__nz__DOT__state_n;
    CData/*0:0*/ __PVT__nz__DOT__state_r;
    CData/*1:0*/ __PVT__nz__DOT__size_li;
    CData/*1:0*/ __PVT__nz__DOT__cnt_r;
    CData/*1:0*/ __PVT__nz__DOT__cnt_lo;
    VL_INW(__PVT__header_i,65,0,3);
    VL_OUT64(__PVT__addr_o,39,0);

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_me_stream_pump_control__pi104(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_me_stream_pump_control__pi104();
    VL_UNCOPYABLE(Vtestbench_bp_me_stream_pump_control__pi104);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
