// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_IO_TILE_NODE__BZ1_H_
#define VERILATED_VTESTBENCH_BP_IO_TILE_NODE__BZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtestbench_bp_me_stream_pump_in__pi70;
class Vtestbench_bp_me_stream_pump_in__pi72;
class Vtestbench_bp_me_stream_pump_in__pi74;
class Vtestbench_bp_me_stream_pump_out__pi69;
class Vtestbench_bp_me_stream_pump_out__pi73;
class Vtestbench_bp_me_stream_pump_out__pi75;
class Vtestbench_bp_me_stream_to_wormhole__pi10;
class Vtestbench_bp_me_stream_to_wormhole__pi18;
class Vtestbench_bp_me_stream_to_wormhole__pi24;
class Vtestbench_bp_me_stream_to_wormhole__pi9;
class Vtestbench_bsg_two_fifo__W80;
class Vtestbench_bsg_wormhole_router__pi31;
class Vtestbench_bsg_wormhole_router__pi33;


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_io_tile_node__Bz1 final : public VerilatedModule {
  public:
    // CELLS
    Vtestbench_bp_me_stream_to_wormhole__pi18* __PVT__io_tile__DOT__lce_req_stream_to_wh;
    Vtestbench_bp_me_stream_to_wormhole__pi24* __PVT__io_tile__DOT__lce_cmd_stream_to_wh;
    Vtestbench_bp_me_stream_to_wormhole__pi9* __PVT__io_tile__DOT__mem_fwd_stream_to_wormhole;
    Vtestbench_bp_me_stream_to_wormhole__pi10* __PVT__io_tile__DOT__mem_rev_stream_to_wormhole;
    Vtestbench_bp_me_stream_pump_out__pi69* __PVT__io_tile__DOT__lce_link__DOT__req_pump_out;
    Vtestbench_bp_me_stream_pump_in__pi70* __PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in;
    Vtestbench_bp_me_stream_pump_in__pi72* __PVT__io_tile__DOT__io_cce__DOT__req_pump_in;
    Vtestbench_bp_me_stream_pump_out__pi73* __PVT__io_tile__DOT__io_cce__DOT__fwd_pump_out;
    Vtestbench_bp_me_stream_pump_in__pi74* __PVT__io_tile__DOT__io_cce__DOT__rev_pump_in;
    Vtestbench_bp_me_stream_pump_out__pi75* __PVT__io_tile__DOT__io_cce__DOT__cmd_pump_out;
    Vtestbench_bsg_two_fifo__W80* __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo;
    Vtestbench_bsg_two_fifo__W80* __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo;
    Vtestbench_bsg_two_fifo__W80* __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo;
    Vtestbench_bsg_two_fifo__W80* __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo;
    Vtestbench_bsg_wormhole_router__pi31* __PVT__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router;
    Vtestbench_bsg_wormhole_router__pi31* __PVT__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router;
    Vtestbench_bsg_wormhole_router__pi33* __PVT__io_socket__DOT__routers__BRA__0__KET____DOT__router;
    Vtestbench_bsg_wormhole_router__pi33* __PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(core_clk_i,0,0);
        VL_IN8(core_reset_i,0,0);
        VL_IN8(coh_clk_i,0,0);
        VL_IN8(coh_reset_i,0,0);
        VL_IN8(mem_clk_i,0,0);
        VL_IN8(mem_reset_i,0,0);
        VL_IN8(my_did_i,2,0);
        VL_IN8(host_did_i,2,0);
        VL_IN8(my_cord_i,3,0);
        CData/*0:0*/ __PVT__io_tile__DOT__mem_fwd_v_li;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_req_dst_cord_lo;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_cmd_v_li;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_cmd_dst_cord_lo;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_req_v_li;
        CData/*0:0*/ __PVT__io_tile__DOT__mem_rev_v_li;
        CData/*0:0*/ __PVT__io_tile__DOT__reset_r;
        CData/*2:0*/ __PVT__io_tile__DOT__cce_id_li;
        CData/*2:0*/ __PVT__io_tile__DOT__lce_id_li;
        CData/*0:0*/ io_tile__DOT____Vcellout__lce_req_wh_to_stream__link_ready_and_o;
        CData/*0:0*/ io_tile__DOT____Vcellout__lce_cmd_wh_to_stream__link_ready_and_o;
        CData/*0:0*/ io_tile__DOT____Vcellout__mem_fwd_wormhole_to_stream__link_ready_and_o;
        CData/*0:0*/ io_tile__DOT____Vcellout__mem_rev_wormhole_to_stream__link_ready_and_o;
        CData/*2:0*/ __PVT__io_tile__DOT__id_map__DOT__lce_id1_o;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fsm_rev_last_lo;
        CData/*2:0*/ __PVT__io_tile__DOT__lce_link__DOT__cce_id_lo;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__msg_yumi_lo;
        CData/*1:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__stream_size;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up;
        CData/*0:0*/ io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0;
        CData/*0:0*/ io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__enq_i;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_n;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r;
        CData/*1:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__size_li;
        CData/*1:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r;
        CData/*1:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_lo;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__msg_v_lo;
        CData/*1:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__stream_size;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up;
        CData/*0:0*/ io_tile__DOT__lce_link__DOT__rev_pump_out__DOT____VdfgExtracted_hd82698c1__1;
        CData/*0:0*/ io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_n;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r;
        CData/*1:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__size_li;
        CData/*1:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
        CData/*1:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo;
        CData/*0:0*/ __PVT__io_tile__DOT__io_cce__DOT__fsm_req_yumi_li;
        CData/*0:0*/ __PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_v_li;
        CData/*0:0*/ __PVT__io_tile__DOT__io_cce__DOT__fsm_rev_yumi_li;
        CData/*0:0*/ __PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_v_li;
    };
    struct {
        CData/*0:0*/ io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_n;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__set_counter;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        CData/*0:0*/ io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r;
        CData/*0:0*/ __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
        CData/*3:0*/ __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        CData/*0:0*/ io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i;
        CData/*0:0*/ __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_n;
        CData/*0:0*/ __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r;
        CData/*0:0*/ __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__set_counter;
        CData/*3:0*/ __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
        CData/*3:0*/ __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        CData/*3:0*/ __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
        CData/*3:0*/ __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        CData/*0:0*/ io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i;
        CData/*0:0*/ __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_n;
        CData/*0:0*/ __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r;
        CData/*0:0*/ __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__set_counter;
        CData/*3:0*/ __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
        CData/*3:0*/ __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        CData/*3:0*/ __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
        CData/*3:0*/ __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        VL_INW(coh_lce_req_link_i,519,0,17);
        VL_OUTW(coh_lce_req_link_o,519,0,17);
        VL_INW(coh_lce_cmd_link_i,519,0,17);
        VL_OUTW(coh_lce_cmd_link_o,519,0,17);
        VL_INW(mem_fwd_link_i,259,0,9);
        VL_OUTW(mem_fwd_link_o,259,0,9);
        VL_INW(mem_rev_link_i,259,0,9);
        VL_OUTW(mem_rev_link_o,259,0,9);
        VlWide<5>/*129:0*/ __Vcellout__io_tile__mem_rev_link_o;
        VlWide<5>/*129:0*/ __Vcellout__io_tile__mem_fwd_link_o;
        VlWide<5>/*129:0*/ __Vcellout__io_tile__lce_cmd_link_o;
        VlWide<5>/*129:0*/ __Vcellout__io_tile__lce_req_link_o;
        VlWide<7>/*193:0*/ io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o;
        VlWide<7>/*193:0*/ io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o;
        VlWide<21>/*649:0*/ io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i;
        VlWide<21>/*649:0*/ io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i;
        VlWide<13>/*389:0*/ io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i;
        VlWide<13>/*389:0*/ io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i;
        QData/*63:0*/ __PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li;
        VlWide<3>/*65:0*/ __PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li;
        QData/*39:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__addr_mask;
        QData/*39:0*/ __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr;
        QData/*39:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask;
        QData/*39:0*/ __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr;
        VlWide<3>/*65:0*/ __PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li;
        VlWide<3>/*74:0*/ __PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_header_li;
        VlUnpacked<VlWide<7>/*193:0*/, 2> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<VlWide<7>/*193:0*/, 2> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;
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
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__id_map__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__id_map__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__id_map__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__addr_map__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__addr_map__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_link__DOT__addr_map__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__io_cce__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__io_cce__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__io_cce__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__req_router_cord__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__req_router_cord__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__req_router_cord__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__cmd_router_cord__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__cmd_router_cord__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__cmd_router_cord__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__dma_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_coh_socket__DOT__cord_markers_pos_p = {{
        0x00000000U, 0x00000002U, 0x00000004U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_socket__DOT__cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_io_tile_node__Bz1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_io_tile_node__Bz1();
    VL_UNCOPYABLE(Vtestbench_bp_io_tile_node__Bz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
