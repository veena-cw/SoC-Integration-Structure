// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi21.h"

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi21___ctor_var_reset(Vtestbench_bp_me_stream_to_wormhole__pi21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi21___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__pr_hdr_i);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__pr_data_i);
    vlSelf->__PVT__pr_v_i = 0;
    vlSelf->__PVT__pr_ready_and_o = 0;
    vlSelf->__PVT__dst_cord_i = 0;
    vlSelf->__PVT__dst_cid_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__link_data_o);
    vlSelf->__PVT__link_v_o = 0;
    vlSelf->__PVT__link_ready_and_i = 0;
    vlSelf->__PVT__piso_v_li = 0;
    vlSelf->__Vcellinp__wh_data_reg__en_i = 0;
    vlSelf->__Vcellinp__stream_control__link_accept_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__encode__DOT__wh_header_cast_o);
    vlSelf->__PVT__encode__DOT__msg_len_li = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__wh_data_reg__DOT__data_r);
    vlSelf->__PVT__wh_data_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__stream_control__DOT__set_counter = 0;
    vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0;
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
}
