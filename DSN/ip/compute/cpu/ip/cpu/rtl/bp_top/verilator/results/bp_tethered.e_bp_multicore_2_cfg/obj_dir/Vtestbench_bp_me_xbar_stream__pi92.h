// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_ME_XBAR_STREAM__PI92_H_
#define VERILATED_VTESTBENCH_BP_ME_XBAR_STREAM__PI92_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_me_xbar_stream__pi92 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__reset_i,0,0);
        VL_IN8(__PVT__msg_v_i,1,0);
        VL_OUT8(__PVT__msg_ready_and_o,1,0);
        VL_IN8(__PVT__msg_dst_i,1,0);
        VL_OUT8(__PVT__msg_v_o,0,0);
        VL_IN8(__PVT__msg_ready_and_i,0,0);
        CData/*0:0*/ __PVT__sink_comb__BRA__0__KET____DOT__msg_last_lo;
        CData/*0:0*/ __Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i;
        CData/*0:0*/ __PVT__cbc__DOT__rr_yumi_li;
        CData/*1:0*/ __PVT__cbc__DOT__rr_yumi_lo;
        CData/*1:0*/ __PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li;
        CData/*0:0*/ cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__req_words_reg__en_i;
        CData/*1:0*/ cbc__DOT____Vcellout__rr__BRA__0__KET____DOT__rr0__grants_o;
        CData/*1:0*/ __PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r;
        CData/*0:0*/ __PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r;
        CData/*3:0*/ __PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect;
        CData/*0:0*/ cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0;
        SData/*11:0*/ __PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t;
        CData/*3:0*/ __PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
        CData/*3:0*/ __PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
        CData/*0:0*/ __PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i;
        CData/*0:0*/ __PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r;
        CData/*0:0*/ __PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r;
        CData/*0:0*/ __PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r;
        CData/*0:0*/ __PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r;
        CData/*0:0*/ __PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i;
        CData/*0:0*/ __PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r;
        CData/*0:0*/ __PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r;
        CData/*0:0*/ __PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r;
        CData/*0:0*/ __PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r;
        CData/*0:0*/ __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_n;
        CData/*0:0*/ __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r;
        CData/*1:0*/ __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__size_li;
        CData/*1:0*/ __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__first_cnt;
        CData/*1:0*/ __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
        CData/*1:0*/ __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_lo;
        CData/*2:0*/ sink_comb__BRA__0__KET____DOT__pump_control__DOT____VdfgTmp_he38ce85f__0;
        CData/*0:0*/ __VdfgTmp_h0f22199c__0;
        CData/*0:0*/ __VdfgTmp_h181011a8__0;
        CData/*0:0*/ __VdfgTmp_h772747fa__0;
        CData/*0:0*/ __VdfgTmp_hb091bc19__0;
        CData/*0:0*/ __VdfgTmp_hb00358d1__0;
        CData/*0:0*/ __VdfgTmp_h6ab5e676__0;
        CData/*0:0*/ __VdfgTmp_h65376864__0;
        CData/*0:0*/ __VdfgTmp_h6772542c__0;
        CData/*0:0*/ __VdfgTmp_h655ffdd5__0;
        CData/*0:0*/ __VdfgTmp_hb1592d1c__0;
        CData/*0:0*/ __VdfgTmp_h4e50f6e4__0;
        CData/*0:0*/ __VdfgTmp_h6b5371e2__0;
        CData/*0:0*/ __VdfgTmp_h4b367f8f__0;
        CData/*0:0*/ __VdfgTmp_h236ea017__0;
        CData/*0:0*/ __VdfgTmp_h2267af31__0;
        CData/*0:0*/ __VdfgTmp_h391c95c8__0;
        CData/*0:0*/ __VdfgTmp_h3c815295__0;
        CData/*0:0*/ __VdfgTmp_h179353b2__0;
        CData/*0:0*/ __VdfgTmp_h67660178__0;
        CData/*0:0*/ __VdfgTmp_h38c69c30__0;
        CData/*0:0*/ __VdfgTmp_h23e3760f__0;
        CData/*0:0*/ __VdfgTmp_h3b03126d__0;
        CData/*0:0*/ __VdfgTmp_h1a1658dd__0;
        CData/*0:0*/ __VdfgTmp_h3c16aee6__0;
        CData/*0:0*/ __VdfgTmp_h1735aa7f__0;
        CData/*0:0*/ __VdfgTmp_h2da58882__0;
    };
    struct {
        CData/*0:0*/ __VdfgTmp_h2ea526fe__0;
        CData/*0:0*/ __VdfgTmp_h386a06d0__0;
        CData/*0:0*/ __VdfgTmp_h2c8f4ee5__0;
        CData/*0:0*/ __VdfgTmp_h69abeb5d__0;
        CData/*0:0*/ __VdfgTmp_h54a5a87f__0;
        CData/*0:0*/ __VdfgTmp_h3e15e606__0;
        CData/*0:0*/ __VdfgTmp_h3f574305__0;
        CData/*0:0*/ __VdfgTmp_h85d105d3__0;
        CData/*0:0*/ __VdfgTmp_h80a867da__0;
        CData/*0:0*/ __VdfgTmp_h6bf30d0d__0;
        CData/*0:0*/ __VdfgTmp_h6ea59ccb__0;
        CData/*0:0*/ __VdfgTmp_h8679115c__0;
        CData/*0:0*/ __VdfgTmp_h6d46a861__0;
        CData/*0:0*/ __VdfgTmp_h11eb6ad7__0;
        CData/*3:0*/ __VdfgTmp_h7e835fde__0;
        VL_INW(__PVT__msg_header_i,149,0,5);
        VL_INW(__PVT__msg_data_i,255,0,8);
        VL_OUTW(__PVT__msg_header_o,74,0,3);
        VL_OUTW(__PVT__msg_data_o,127,0,4);
        VlWide<7>/*202:0*/ __Vcellout__cb__o;
        VlWide<7>/*203:0*/ __Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o;
        VlWide<7>/*203:0*/ __Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o;
        VlUnpacked<VlWide<7>/*203:0*/, 2> __PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<VlWide<7>/*203:0*/, 2> __PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;
    };

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
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_me_xbar_stream__pi92(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_me_xbar_stream__pi92();
    VL_UNCOPYABLE(Vtestbench_bp_me_xbar_stream__pi92);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
