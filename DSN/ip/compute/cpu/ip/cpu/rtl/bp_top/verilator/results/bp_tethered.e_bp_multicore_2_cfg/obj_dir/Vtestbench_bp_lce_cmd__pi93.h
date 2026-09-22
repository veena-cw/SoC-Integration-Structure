// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_LCE_CMD__PI93_H_
#define VERILATED_VTESTBENCH_BP_LCE_CMD__PI93_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtestbench_bp_me_stream_pump_in__pi70;


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_lce_cmd__pi93 final : public VerilatedModule {
  public:
    // CELLS
    Vtestbench_bp_me_stream_pump_in__pi70* __PVT__cmd_pump_in;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__reset_i,0,0);
        VL_IN8(__PVT__lce_id_i,2,0);
        VL_IN8(__PVT__lce_mode_i,1,0);
        VL_OUT8(__PVT__cache_init_done_o,0,0);
        VL_OUT8(__PVT__sync_done_o,0,0);
        VL_OUT8(__PVT__tag_mem_pkt_v_o,0,0);
        VL_IN8(__PVT__tag_mem_pkt_yumi_i,0,0);
        VL_OUT8(__PVT__data_mem_pkt_v_o,0,0);
        VL_IN8(__PVT__data_mem_pkt_yumi_i,0,0);
        VL_OUT8(__PVT__stat_mem_pkt_v_o,0,0);
        VL_IN8(__PVT__stat_mem_pkt_yumi_i,0,0);
        VL_OUT8(__PVT__cache_req_id_o,0,0);
        VL_OUT8(__PVT__cache_req_critical_o,0,0);
        VL_OUT8(__PVT__cache_req_last_o,0,0);
        VL_OUT8(__PVT__credit_return_o,0,0);
        VL_OUT8(__PVT__cache_req_done_o,0,0);
        VL_IN8(__PVT__lce_cmd_v_i,0,0);
        VL_OUT8(__PVT__lce_cmd_ready_and_o,0,0);
        VL_OUT8(__PVT__lce_fill_v_o,0,0);
        VL_IN8(__PVT__lce_fill_ready_and_i,0,0);
        VL_OUT8(__PVT__lce_resp_v_o,0,0);
        VL_IN8(__PVT__lce_resp_ready_and_i,0,0);
        CData/*3:0*/ __PVT__state_n;
        CData/*3:0*/ __PVT__state_r;
        CData/*0:0*/ __PVT__fsm_cmd_yumi_lo;
        CData/*0:0*/ __PVT__fsm_fill_v_lo;
        CData/*0:0*/ __PVT__fsm_fill_ready_then_li;
        CData/*0:0*/ __PVT__fsm_fill_last_lo;
        CData/*0:0*/ __PVT__fsm_resp_v_lo;
        CData/*0:0*/ __PVT__fsm_resp_ready_then_li;
        CData/*0:0*/ __PVT__fsm_resp_last_lo;
        CData/*1:0*/ __PVT__dirty_data_select;
        CData/*0:0*/ __PVT__cnt_inc;
        CData/*0:0*/ __PVT__cnt_clear;
        CData/*6:0*/ __PVT__cnt_r;
        CData/*0:0*/ __VdfgTmp_h462b05e0__0;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__msg_v_lo;
        CData/*1:0*/ __PVT__fill_pump_out__DOT__stream_size;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__cnt_up;
        CData/*0:0*/ fill_pump_out__DOT____VdfgExtracted_hd82698c1__5;
        CData/*0:0*/ fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n;
        CData/*0:0*/ __PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r;
        CData/*1:0*/ __PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li;
        CData/*1:0*/ __PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
        CData/*1:0*/ __PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__msg_v_lo;
        CData/*1:0*/ __PVT__resp_pump_out__DOT__stream_size;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__cnt_up;
        CData/*0:0*/ resp_pump_out__DOT____VdfgExtracted_hd82698c1__6;
        CData/*0:0*/ resp_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n;
        CData/*0:0*/ __PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r;
    };
    struct {
        CData/*1:0*/ __PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li;
        CData/*1:0*/ __PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
        CData/*1:0*/ __PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo;
        CData/*0:0*/ __PVT__dirty_data_reg__DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__sync_done_reg__DOT__data_r;
        VL_OUT16(__PVT__stat_mem_pkt_o,10,0);
        VL_IN16(__PVT__stat_mem_i,14,0);
        SData/*10:0*/ __PVT__stat_mem_pkt_cast_o;
        SData/*14:0*/ __PVT__dirty_stat_r;
        SData/*14:0*/ __PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r;
        VL_IN(__PVT__tag_mem_i,22,0);
        VL_OUTW(__PVT__data_mem_pkt_o,142,0,5);
        VL_INW(__PVT__data_mem_i,511,0,16);
        VL_INW(__PVT__lce_cmd_header_i,74,0,3);
        VL_INW(__PVT__lce_cmd_data_i,127,0,4);
        VL_OUTW(__PVT__lce_fill_header_o,74,0,3);
        VL_OUTW(__PVT__lce_fill_data_o,127,0,4);
        VL_OUTW(__PVT__lce_resp_data_o,127,0,4);
        VlWide<4>/*127:0*/ __PVT__fsm_fill_data_lo;
        VlWide<4>/*127:0*/ __PVT__fsm_resp_data_lo;
        VlWide<4>/*127:0*/ __PVT__dirty_data_selected;
        VlWide<3>/*74:0*/ __PVT__fsm_cmd_header_reg__DOT__data_r;
        VlWide<7>/*202:0*/ fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o;
        VlWide<6>/*187:0*/ resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o;
        VlWide<16>/*511:0*/ __PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r;
        IData/*22:0*/ __PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r;
        VL_OUT64(__PVT__tag_mem_pkt_o,34,0);
        VL_OUT64(__PVT__lce_resp_header_o,59,0);
        VlWide<5>/*142:0*/ __PVT__data_mem_pkt_cast_o;
        QData/*34:0*/ __PVT__tag_mem_pkt_cast_o;
        VlWide<3>/*74:0*/ __PVT__fsm_fill_header_lo;
        QData/*59:0*/ __PVT__fsm_resp_header_lo;
        QData/*39:0*/ __PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask;
        QData/*39:0*/ __PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr;
        QData/*39:0*/ __PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask;
        QData/*39:0*/ __PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr;
        VlUnpacked<VlWide<7>/*202:0*/, 2> __PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<VlWide<6>/*187:0*/, 2> __PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;
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
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__gearbox__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__gearbox__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__gearbox__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__pump_control__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__pump_control__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__fill_pump_out__DOT__pump_control__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__gearbox__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__gearbox__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__gearbox__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__pump_control__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__pump_control__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__resp_pump_out__DOT__pump_control__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_lce_cmd__pi93(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_lce_cmd__pi93();
    VL_UNCOPYABLE(Vtestbench_bp_lce_cmd__pi93);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
