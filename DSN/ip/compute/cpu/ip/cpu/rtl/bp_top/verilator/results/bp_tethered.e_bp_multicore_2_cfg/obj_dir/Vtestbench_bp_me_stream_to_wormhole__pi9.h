// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_ME_STREAM_TO_WORMHOLE__PI9_H_
#define VERILATED_VTESTBENCH_BP_ME_STREAM_TO_WORMHOLE__PI9_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35;


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_me_stream_to_wormhole__pi9 final : public VerilatedModule {
  public:
    // CELLS
    Vtestbench_bsg_parallel_in_serial_out_passthrough__pi35* __PVT__hdr_piso;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(pr_v_i,0,0);
    VL_OUT8(pr_ready_and_o,0,0);
    VL_IN8(dst_cord_i,2,0);
    VL_IN8(dst_cid_i,2,0);
    VL_OUT8(link_v_o,0,0);
    VL_IN8(link_ready_and_i,0,0);
    CData/*0:0*/ __PVT__piso_v_li;
    CData/*0:0*/ __Vcellinp__wh_data_reg__en_i;
    CData/*0:0*/ __Vcellinp__stream_control__link_accept_i;
    CData/*3:0*/ __PVT__encode__DOT__msg_len_li;
    CData/*0:0*/ __PVT__wh_data_v_reg__DOT__data_r;
    CData/*0:0*/ __PVT__stream_control__DOT__state_n;
    CData/*0:0*/ __PVT__stream_control__DOT__state_r;
    CData/*0:0*/ __PVT__stream_control__DOT__set_counter;
    CData/*0:0*/ stream_control__DOT____Vcellinp__data_flit_counter__down_i;
    CData/*3:0*/ __PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    CData/*3:0*/ __PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
    CData/*3:0*/ __PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    CData/*3:0*/ __PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    VL_INW(pr_hdr_i,65,0,3);
    VL_INW(pr_data_i,127,0,4);
    VL_OUTW(link_data_o,127,0,4);
    VlWide<4>/*127:0*/ __PVT__wh_data_reg__DOT__data_r;
    VlWide<4>/*127:0*/ __PVT__encode__DOT__wh_header_cast_o;

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
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__encode__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__encode__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__encode__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_me_stream_to_wormhole__pi9(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_me_stream_to_wormhole__pi9();
    VL_UNCOPYABLE(Vtestbench_bp_me_stream_to_wormhole__pi9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
