// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_xbar_stream__pi92.h"

VL_ATTR_COLD void Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__2(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__2\n"); );
    // Body
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (3U & ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                 >> 6U));
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (7U & ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                 >> 1U));
}

VL_ATTR_COLD void Vtestbench_bp_me_xbar_stream__pi92___ctor_var_reset(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    VL_ZERO_RESET_W(150, vlSelf->__PVT__msg_header_i);
    VL_ZERO_RESET_W(256, vlSelf->__PVT__msg_data_i);
    vlSelf->__PVT__msg_v_i = 0;
    vlSelf->__PVT__msg_ready_and_o = 0;
    vlSelf->__PVT__msg_dst_i = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__msg_header_o);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__msg_data_o);
    vlSelf->__PVT__msg_v_o = 0;
    vlSelf->__PVT__msg_ready_and_i = 0;
    VL_ZERO_RESET_W(203, vlSelf->__Vcellout__cb__o);
    VL_ZERO_RESET_W(204, vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o);
    VL_ZERO_RESET_W(204, vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o);
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__msg_last_lo = 0;
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i = 0;
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = 0;
    vlSelf->__PVT__cbc__DOT__rr_yumi_lo = 0;
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li = 0;
    vlSelf->cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__req_words_reg__en_i = 0;
    vlSelf->cbc__DOT____Vcellout__rr__BRA__0__KET____DOT__rr0__grants_o = 0;
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r = 0;
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r = 0;
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect = 0;
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 = 0;
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r = 0;
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(204, vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r = 0;
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(204, vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__first_cnt = 0;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_lo = 0;
    vlSelf->sink_comb__BRA__0__KET____DOT__pump_control__DOT____VdfgTmp_he38ce85f__0 = 0;
    vlSelf->__VdfgTmp_h0f22199c__0 = 0;
    vlSelf->__VdfgTmp_h181011a8__0 = 0;
    vlSelf->__VdfgTmp_h772747fa__0 = 0;
    vlSelf->__VdfgTmp_hb091bc19__0 = 0;
    vlSelf->__VdfgTmp_hb00358d1__0 = 0;
    vlSelf->__VdfgTmp_h6ab5e676__0 = 0;
    vlSelf->__VdfgTmp_h65376864__0 = 0;
    vlSelf->__VdfgTmp_h6772542c__0 = 0;
    vlSelf->__VdfgTmp_h655ffdd5__0 = 0;
    vlSelf->__VdfgTmp_hb1592d1c__0 = 0;
    vlSelf->__VdfgTmp_h4e50f6e4__0 = 0;
    vlSelf->__VdfgTmp_h6b5371e2__0 = 0;
    vlSelf->__VdfgTmp_h4b367f8f__0 = 0;
    vlSelf->__VdfgTmp_h236ea017__0 = 0;
    vlSelf->__VdfgTmp_h2267af31__0 = 0;
    vlSelf->__VdfgTmp_h391c95c8__0 = 0;
    vlSelf->__VdfgTmp_h3c815295__0 = 0;
    vlSelf->__VdfgTmp_h179353b2__0 = 0;
    vlSelf->__VdfgTmp_h67660178__0 = 0;
    vlSelf->__VdfgTmp_h38c69c30__0 = 0;
    vlSelf->__VdfgTmp_h23e3760f__0 = 0;
    vlSelf->__VdfgTmp_h3b03126d__0 = 0;
    vlSelf->__VdfgTmp_h1a1658dd__0 = 0;
    vlSelf->__VdfgTmp_h3c16aee6__0 = 0;
    vlSelf->__VdfgTmp_h1735aa7f__0 = 0;
    vlSelf->__VdfgTmp_h2da58882__0 = 0;
    vlSelf->__VdfgTmp_h2ea526fe__0 = 0;
    vlSelf->__VdfgTmp_h386a06d0__0 = 0;
    vlSelf->__VdfgTmp_h2c8f4ee5__0 = 0;
    vlSelf->__VdfgTmp_h69abeb5d__0 = 0;
    vlSelf->__VdfgTmp_h54a5a87f__0 = 0;
    vlSelf->__VdfgTmp_h3e15e606__0 = 0;
    vlSelf->__VdfgTmp_h3f574305__0 = 0;
    vlSelf->__VdfgTmp_h85d105d3__0 = 0;
    vlSelf->__VdfgTmp_h80a867da__0 = 0;
    vlSelf->__VdfgTmp_h6bf30d0d__0 = 0;
    vlSelf->__VdfgTmp_h6ea59ccb__0 = 0;
    vlSelf->__VdfgTmp_h8679115c__0 = 0;
    vlSelf->__VdfgTmp_h6d46a861__0 = 0;
    vlSelf->__VdfgTmp_h11eb6ad7__0 = 0;
    vlSelf->__VdfgTmp_h7e835fde__0 = 0;
}
