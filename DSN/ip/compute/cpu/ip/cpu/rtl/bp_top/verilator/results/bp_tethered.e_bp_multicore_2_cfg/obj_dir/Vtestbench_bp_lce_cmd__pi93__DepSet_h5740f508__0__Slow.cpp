// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"

VL_ATTR_COLD void Vtestbench_bp_lce_cmd__pi93___ctor_var_reset(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    vlSelf->__PVT__lce_id_i = 0;
    vlSelf->__PVT__lce_mode_i = 0;
    vlSelf->__PVT__cache_init_done_o = 0;
    vlSelf->__PVT__sync_done_o = 0;
    vlSelf->__PVT__tag_mem_pkt_v_o = 0;
    vlSelf->__PVT__tag_mem_pkt_o = 0;
    vlSelf->__PVT__tag_mem_pkt_yumi_i = 0;
    vlSelf->__PVT__tag_mem_i = 0;
    vlSelf->__PVT__data_mem_pkt_v_o = 0;
    VL_ZERO_RESET_W(143, vlSelf->__PVT__data_mem_pkt_o);
    vlSelf->__PVT__data_mem_pkt_yumi_i = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__data_mem_i);
    vlSelf->__PVT__stat_mem_pkt_v_o = 0;
    vlSelf->__PVT__stat_mem_pkt_o = 0;
    vlSelf->__PVT__stat_mem_pkt_yumi_i = 0;
    vlSelf->__PVT__stat_mem_i = 0;
    vlSelf->__PVT__cache_req_id_o = 0;
    vlSelf->__PVT__cache_req_critical_o = 0;
    vlSelf->__PVT__cache_req_last_o = 0;
    vlSelf->__PVT__credit_return_o = 0;
    vlSelf->__PVT__cache_req_done_o = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__lce_cmd_header_i);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__lce_cmd_data_i);
    vlSelf->__PVT__lce_cmd_v_i = 0;
    vlSelf->__PVT__lce_cmd_ready_and_o = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__lce_fill_header_o);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__lce_fill_data_o);
    vlSelf->__PVT__lce_fill_v_o = 0;
    vlSelf->__PVT__lce_fill_ready_and_i = 0;
    vlSelf->__PVT__lce_resp_header_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__lce_resp_data_o);
    vlSelf->__PVT__lce_resp_v_o = 0;
    vlSelf->__PVT__lce_resp_ready_and_i = 0;
    VL_ZERO_RESET_W(143, vlSelf->__PVT__data_mem_pkt_cast_o);
    vlSelf->__PVT__tag_mem_pkt_cast_o = 0;
    vlSelf->__PVT__stat_mem_pkt_cast_o = 0;
    vlSelf->__PVT__state_n = 0;
    vlSelf->__PVT__state_r = 0;
    vlSelf->__PVT__fsm_cmd_yumi_lo = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__fsm_fill_header_lo);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__fsm_fill_data_lo);
    vlSelf->__PVT__fsm_fill_v_lo = 0;
    vlSelf->__PVT__fsm_fill_ready_then_li = 0;
    vlSelf->__PVT__fsm_fill_last_lo = 0;
    vlSelf->__PVT__fsm_resp_header_lo = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__fsm_resp_data_lo);
    vlSelf->__PVT__fsm_resp_v_lo = 0;
    vlSelf->__PVT__fsm_resp_ready_then_li = 0;
    vlSelf->__PVT__fsm_resp_last_lo = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__dirty_data_selected);
    vlSelf->__PVT__dirty_data_select = 0;
    vlSelf->__PVT__dirty_stat_r = 0;
    vlSelf->__PVT__cnt_inc = 0;
    vlSelf->__PVT__cnt_clear = 0;
    vlSelf->__PVT__cnt_r = 0;
    vlSelf->__VdfgTmp_h462b05e0__0 = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r);
    vlSelf->__PVT__fill_pump_out__DOT__msg_v_lo = 0;
    vlSelf->__PVT__fill_pump_out__DOT__stream_size = 0;
    vlSelf->__PVT__fill_pump_out__DOT__cnt_up = 0;
    vlSelf->fill_pump_out__DOT____VdfgExtracted_hd82698c1__5 = 0;
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i = 0;
    VL_ZERO_RESET_W(203, vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o);
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i = 0;
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r = 0;
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r = 0;
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r = 0;
    vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(203, vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask = 0;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr = 0;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__fill_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo = 0;
    vlSelf->__PVT__resp_pump_out__DOT__msg_v_lo = 0;
    vlSelf->__PVT__resp_pump_out__DOT__stream_size = 0;
    vlSelf->__PVT__resp_pump_out__DOT__cnt_up = 0;
    vlSelf->resp_pump_out__DOT____VdfgExtracted_hd82698c1__6 = 0;
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i = 0;
    VL_ZERO_RESET_W(188, vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o);
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i = 0;
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r = 0;
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r = 0;
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r = 0;
    vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(188, vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__addr_mask = 0;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr = 0;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__resp_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_lo = 0;
    vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r);
    vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__sync_done_reg__DOT__data_r = 0;
}
