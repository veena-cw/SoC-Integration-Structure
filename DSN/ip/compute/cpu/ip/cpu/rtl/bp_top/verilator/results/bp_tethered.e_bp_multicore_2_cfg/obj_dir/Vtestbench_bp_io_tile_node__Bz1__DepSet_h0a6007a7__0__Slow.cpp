// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_io_tile_node__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_io_tile_node__Bz1___ctor_var_reset(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___ctor_var_reset\n"); );
    // Body
    vlSelf->core_clk_i = 0;
    vlSelf->core_reset_i = 0;
    vlSelf->coh_clk_i = 0;
    vlSelf->coh_reset_i = 0;
    vlSelf->mem_clk_i = 0;
    vlSelf->mem_reset_i = 0;
    vlSelf->my_did_i = 0;
    vlSelf->host_did_i = 0;
    vlSelf->my_cord_i = 0;
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_req_link_i);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_req_link_o);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_cmd_link_i);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_cmd_link_o);
    VL_ZERO_RESET_W(260, vlSelf->mem_fwd_link_i);
    VL_ZERO_RESET_W(260, vlSelf->mem_fwd_link_o);
    VL_ZERO_RESET_W(260, vlSelf->mem_rev_link_i);
    VL_ZERO_RESET_W(260, vlSelf->mem_rev_link_o);
    VL_ZERO_RESET_W(130, vlSelf->__Vcellout__io_tile__mem_rev_link_o);
    VL_ZERO_RESET_W(130, vlSelf->__Vcellout__io_tile__mem_fwd_link_o);
    VL_ZERO_RESET_W(130, vlSelf->__Vcellout__io_tile__lce_cmd_link_o);
    VL_ZERO_RESET_W(130, vlSelf->__Vcellout__io_tile__lce_req_link_o);
    vlSelf->__PVT__io_tile__DOT__mem_fwd_v_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_dst_cord_lo = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_v_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_dst_cord_lo = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_v_li = 0;
    vlSelf->__PVT__io_tile__DOT__mem_rev_v_li = 0;
    vlSelf->__PVT__io_tile__DOT__reset_r = 0;
    vlSelf->__PVT__io_tile__DOT__cce_id_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_id_li = 0;
    vlSelf->io_tile__DOT____Vcellout__lce_req_wh_to_stream__link_ready_and_o = 0;
    vlSelf->io_tile__DOT____Vcellout__lce_cmd_wh_to_stream__link_ready_and_o = 0;
    vlSelf->io_tile__DOT____Vcellout__mem_fwd_wormhole_to_stream__link_ready_and_o = 0;
    vlSelf->io_tile__DOT____Vcellout__mem_rev_wormhole_to_stream__link_ready_and_o = 0;
    vlSelf->__PVT__io_tile__DOT__id_map__DOT__lce_id1_o = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_yumi_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_fwd_last_lo = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_header_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_req_v_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_cmd_yumi_li = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li);
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_v_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_last_lo = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cce_id_lo = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__msg_yumi_lo = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__stream_size = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up = 0;
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT____VdfgExtracted_h5933db0c__0 = 0;
    vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i = 0;
    VL_ZERO_RESET_W(194, vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o);
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__enq_i = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(194, vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__addr_mask = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_lo = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__msg_v_lo = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__stream_size = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up = 0;
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT____VdfgExtracted_hd82698c1__1 = 0;
    vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i = 0;
    VL_ZERO_RESET_W(194, vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o);
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(194, vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo = 0;
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_req_yumi_li = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_header_li);
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_fwd_v_li = 0;
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_rev_yumi_li = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_header_li);
    vlSelf->__PVT__io_tile__DOT__io_cce__DOT__fsm_cmd_v_li = 0;
    vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i = 0;
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i = 0;
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    VL_ZERO_RESET_W(650, vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i);
    VL_ZERO_RESET_W(650, vlSelf->io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i);
    VL_ZERO_RESET_W(390, vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i);
    VL_ZERO_RESET_W(390, vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i);
}
