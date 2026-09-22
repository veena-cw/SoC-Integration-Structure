// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_ME_STREAM_PUMP_IN__PI72_H_
#define VERILATED_VTESTBENCH_BP_ME_STREAM_PUMP_IN__PI72_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_me_stream_pump_in__pi72 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__reset_i,0,0);
    VL_IN8(__PVT__msg_v_i,0,0);
    VL_OUT8(__PVT__msg_ready_and_o,0,0);
    VL_OUT8(__PVT__fsm_v_o,0,0);
    VL_IN8(__PVT__fsm_yumi_i,0,0);
    VL_OUT8(__PVT__fsm_new_o,0,0);
    VL_OUT8(__PVT__fsm_critical_o,0,0);
    VL_OUT8(__PVT__fsm_last_o,0,0);
    CData/*1:0*/ __PVT__stream_size;
    CData/*0:0*/ __VdfgExtracted_h5933db0c__2;
    CData/*0:0*/ gearbox__DOT____Vcellinp__fifo__yumi_i;
    CData/*0:0*/ __PVT__gearbox__DOT__fifo__DOT__enq_i;
    CData/*0:0*/ __PVT__gearbox__DOT__fifo__DOT__head_r;
    CData/*0:0*/ __PVT__gearbox__DOT__fifo__DOT__tail_r;
    CData/*0:0*/ __PVT__gearbox__DOT__fifo__DOT__empty_r;
    CData/*0:0*/ __PVT__gearbox__DOT__fifo__DOT__full_r;
    CData/*0:0*/ __PVT__pump_control__DOT__nz__DOT__state_n;
    CData/*0:0*/ __PVT__pump_control__DOT__nz__DOT__state_r;
    CData/*1:0*/ __PVT__pump_control__DOT__nz__DOT__size_li;
    CData/*1:0*/ __PVT__pump_control__DOT__nz__DOT__cnt_r;
    CData/*1:0*/ __PVT__pump_control__DOT__nz__DOT__cnt_lo;
    VL_INW(__PVT__msg_data_i,127,0,4);
    VL_OUTW(__PVT__fsm_data_o,127,0,4);
    VlWide<6>/*191:0*/ gearbox__DOT____Vcellout__fifo__data_o;
    VL_IN64(__PVT__msg_header_i,63,0);
    VL_OUT64(__PVT__fsm_header_o,63,0);
    VL_OUT64(__PVT__fsm_addr_o,39,0);
    QData/*39:0*/ __PVT__pump_control__DOT__nz__DOT__addr_mask;
    QData/*39:0*/ __PVT__pump_control__DOT__nz__DOT__base_addr;
    VlUnpacked<VlWide<6>/*191:0*/, 2> __PVT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;

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
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__gearbox__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__gearbox__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__gearbox__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__pump_control__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__pump_control__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__pump_control__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_me_stream_pump_in__pi72(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_me_stream_pump_in__pi72();
    VL_UNCOPYABLE(Vtestbench_bp_me_stream_pump_in__pi72);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
