// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi9.h"

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole__0(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole__0\n"); );
    // Body
    vlSelf->__Vcellinp__wh_data_reg__en_i = (((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                               ? ((~ 
                                                   ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
                                                     >> 0xaU))
                                               : ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
                                                     >> 0xaU))) 
                                             & (IData)(vlSymsp->TOP.testbench__DOT__mem_fwd_v_li));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x3ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[0U] 
              << 0xaU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[0U] 
            >> 0x16U) | (vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U] 
                         << 0xaU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xfffff000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U] 
               >> 0x16U) | (vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[2U] 
                            << 0xaU)));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = (1U | (0xfffffff8U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = (0xfffffc7fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]);
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff87U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (6U >> (0xfU & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[0U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 3U));
    vlSelf->__PVT__piso_v_li = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                & (IData)(vlSymsp->TOP.testbench__DOT__mem_fwd_v_li));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->link_data_o[0U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->link_data_o[1U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->link_data_o[2U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->link_data_o[3U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[3U];
        vlSelf->link_v_o = vlSelf->__PVT__wh_data_v_reg__DOT__data_r;
    } else {
        vlSelf->link_data_o[0U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->link_data_o[1U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->link_data_o[2U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->link_data_o[3U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U];
        vlSelf->link_v_o = vlSelf->__PVT__piso_v_li;
    }
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
            >> 0xaU) & (IData)(vlSelf->link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
            = vlSelf->__Vcellinp__stream_control__link_accept_i;
    } else {
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1dU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 3U)) 
                                                   - (IData)(1U)))))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0U;
    }
    vlSelf->__PVT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 3U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole__0(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole__0\n"); );
    // Body
    vlSelf->__PVT__wh_data_v_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                                                 & (((IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r) 
                                                     & (~ (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i))) 
                                                    | ((IData)(vlSelf->__Vcellinp__wh_data_reg__en_i) 
                                                       & (0U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                 << 0x1dU) 
                                                                | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                   >> 3U)) 
                                                               - (IData)(1U))))))));
    if (vlSelf->__Vcellinp__wh_data_reg__en_i) {
        vlSelf->__PVT__wh_data_reg__DOT__data_r[0U] 
            = vlSymsp->TOP.testbench__DOT__mem_fwd_data_li[0U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[1U] 
            = vlSymsp->TOP.testbench__DOT__mem_fwd_data_li[1U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[2U] 
            = vlSymsp->TOP.testbench__DOT__mem_fwd_data_li[2U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[3U] 
            = vlSymsp->TOP.testbench__DOT__mem_fwd_data_li[3U];
    }
    if (vlSymsp->TOP.testbench__DOT__dut_reset) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
    }
    vlSelf->__PVT__stream_control__DOT__state_r = (
                                                   (~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                                                   & (IData)(vlSelf->__PVT__stream_control__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole__1(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole__1\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i)) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.mem_fwd_stream_to_wormhole.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.mem_fwd_stream_to_wormhole.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole__0(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole__0\n"); );
    // Body
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x3ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[0U] 
              << 0xaU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[0U] 
            >> 0x16U) | (vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U] 
                         << 0xaU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xfffff000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U] 
               >> 0x16U) | (vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[2U] 
                            << 0xaU)));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = (1U | (0xfffffff8U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = (0xfffffc7fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]);
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[1U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff87U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (6U >> (0xfU & vlSymsp->TOP.testbench__DOT__loader__DOT__mem_fwd_header_cast_o[0U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 3U));
    vlSelf->__PVT__piso_v_li = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                & (IData)(vlSymsp->TOP.testbench__DOT__mem_fwd_v_li));
    vlSelf->__Vcellinp__wh_data_reg__en_i = (((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                               ? ((~ 
                                                   ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                    & (1U 
                                                       == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
                                                     >> 0xaU))
                                               : ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
                                                     >> 0xaU))) 
                                             & (IData)(vlSymsp->TOP.testbench__DOT__mem_fwd_v_li));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->link_data_o[0U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[0U];
        vlSelf->link_data_o[1U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[1U];
        vlSelf->link_data_o[2U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[2U];
        vlSelf->link_data_o[3U] = vlSelf->__PVT__wh_data_reg__DOT__data_r[3U];
        vlSelf->link_v_o = vlSelf->__PVT__wh_data_v_reg__DOT__data_r;
    } else {
        vlSelf->link_data_o[0U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U];
        vlSelf->link_data_o[1U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U];
        vlSelf->link_data_o[2U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U];
        vlSelf->link_data_o[3U] = vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U];
        vlSelf->link_v_o = vlSelf->__PVT__piso_v_li;
    }
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
            >> 0xaU) & (IData)(vlSelf->link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
            = vlSelf->__Vcellinp__stream_control__link_accept_i;
    } else {
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1dU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 3U)) 
                                                   - (IData)(1U)))))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0U;
    }
    vlSelf->__PVT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 3U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__0(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__0\n"); );
    // Body
    vlSelf->__PVT__wh_data_v_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
                                                 & (((IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r) 
                                                     & (~ (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i))) 
                                                    | ((IData)(vlSelf->__Vcellinp__wh_data_reg__en_i) 
                                                       & (0U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                 << 0x1dU) 
                                                                | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                   >> 3U)) 
                                                               - (IData)(1U))))))));
    if (vlSelf->__Vcellinp__wh_data_reg__en_i) {
        vlSelf->__PVT__wh_data_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[0U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[1U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[2U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[3U];
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    }
    vlSelf->__PVT__stream_control__DOT__state_r = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
                                                   & (IData)(vlSelf->__PVT__stream_control__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__1(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__1\n"); );
    // Body
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x3ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
              << 0xaU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
            >> 0x16U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                         << 0xaU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xfffff000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
               >> 0x16U) | (0xc00U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                      << 0xaU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff8U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((0U != (0x1ffU & (~ ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                     << 0x19U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                  >> 7U))))) 
               & (1U == (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
                         >> 0x1cU))) ? 7U : (7U & (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 9U))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = (0xfffffc7fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]);
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff87U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (6U >> (0xfU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 3U));
    vlSelf->pr_ready_and_o = (1U & ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                     ? ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                            & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U])
                                     : ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U])));
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->pr_ready_and_o) 
                                             & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r)));
    vlSelf->link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                         ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                         : (IData)(vlSelf->__PVT__piso_v_li));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
           & (IData)(vlSelf->link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
            = vlSelf->__Vcellinp__stream_control__link_accept_i;
    } else {
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1dU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 3U)) 
                                                   - (IData)(1U)))))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0U;
    }
    vlSelf->__PVT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 3U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__2(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
                      & (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i)) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.mem_fwd_stream_to_wormhole.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.mem_fwd_stream_to_wormhole.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__0(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__0\n"); );
    // Body
    vlSelf->__PVT__wh_data_v_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
                                                 & (((IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r) 
                                                     & (~ (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i))) 
                                                    | ((IData)(vlSelf->__Vcellinp__wh_data_reg__en_i) 
                                                       & (0U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                 << 0x1dU) 
                                                                | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                                   >> 3U)) 
                                                               - (IData)(1U))))))));
    if (vlSelf->__Vcellinp__wh_data_reg__en_i) {
        vlSelf->__PVT__wh_data_reg__DOT__data_r[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[0U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[1U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[2U];
        vlSelf->__PVT__wh_data_reg__DOT__data_r[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[3U];
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    }
    vlSelf->__PVT__stream_control__DOT__state_r = (
                                                   (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
                                                   & (IData)(vlSelf->__PVT__stream_control__DOT__state_n));
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__1(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__1\n"); );
    // Body
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x3ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
              << 0xaU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
            >> 0x16U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                         << 0xaU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xfffff000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
               >> 0x16U) | (0xc00U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                      << 0xaU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff8U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((0U != (0x1ffU & (~ ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                     << 0x19U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                  >> 7U))))) 
               & (1U == (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
                         >> 0x1cU))) ? 7U : (7U & (
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                   >> 9U))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = (0xfffffc7fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]);
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff87U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (6U >> (0xfU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 3U));
    vlSelf->pr_ready_and_o = (1U & ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                     ? ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                            & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U])
                                     : ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U])));
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->pr_ready_and_o) 
                                             & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__fwd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r)));
    vlSelf->link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                         ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                         : (IData)(vlSelf->__PVT__piso_v_li));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
           & (IData)(vlSelf->link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
            = vlSelf->__Vcellinp__stream_control__link_accept_i;
    } else {
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1dU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 3U)) 
                                                   - (IData)(1U)))))));
        vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i = 0U;
    }
    vlSelf->__PVT__stream_control__DOT__set_counter 
        = ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
           & ((0U == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r)) 
              & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i)));
    vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 1U;
    }
    if (((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) {
        vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
        = vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r;
    if (vlSelf->__PVT__stream_control__DOT__set_counter) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(1U) + (((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 3U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__2(Vtestbench_bp_me_stream_to_wormhole__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi9___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_stream_to_wormhole__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
                      & (IData)(vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i)) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.mem_fwd_stream_to_wormhole.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->__Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.mem_fwd_stream_to_wormhole.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}
