// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi24.h"

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_cmd_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_cmd_stream_to_wh__0\n"); );
    // Body
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                                : (IData)(vlSelf->__PVT__piso_v_li));
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_cmd_stream_to_wh__1(Vtestbench_bp_me_stream_to_wormhole__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_cmd_stream_to_wh__1\n"); );
    // Body
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x7ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
              << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
            >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                         << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xffc00000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
               >> 0x15U) | (0x3ff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                         << 0xbU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_cmd_dst_cord_lo));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffff8ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((4U > (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U))) ? (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U))
                : 0U) << 8U));
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (0x810U >> (0xfU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 4U));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[4U] 
           & (IData)(vlSelf->__PVT__link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__pr_ready_and_o = (1U & ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[4U]));
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
    } else {
        vlSelf->__PVT__pr_ready_and_o = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[4U]));
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U)))))));
    }
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->__PVT__pr_ready_and_o) 
                                             & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r)));
    vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
        = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
           & (IData)(vlSelf->__PVT__stream_control__DOT__state_r));
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
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_cmd_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_cmd_stream_to_wh__0\n"); );
    // Body
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                                : (IData)(vlSelf->__PVT__piso_v_li));
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_cmd_stream_to_wh__1(Vtestbench_bp_me_stream_to_wormhole__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_cmd_stream_to_wh__1\n"); );
    // Body
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x7ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
              << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
            >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                         << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xffc00000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
               >> 0x15U) | (0x3ff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                         << 0xbU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_cmd_dst_cord_lo));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffff8ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((4U > (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U))) ? (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U))
                : 0U) << 8U));
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (0x810U >> (0xfU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 4U));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[4U] 
           & (IData)(vlSelf->__PVT__link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__pr_ready_and_o = (1U & ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[4U]));
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
    } else {
        vlSelf->__PVT__pr_ready_and_o = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[4U]));
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U)))))));
    }
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->__PVT__pr_ready_and_o) 
                                             & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__cmd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r)));
    vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
        = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
           & (IData)(vlSelf->__PVT__stream_control__DOT__state_r));
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
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_stream_to_wh__0\n"); );
    // Body
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                                : (IData)(vlSelf->__PVT__piso_v_li));
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_stream_to_wh__1(Vtestbench_bp_me_stream_to_wormhole__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_stream_to_wh__1\n"); );
    // Body
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x7ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
              << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
            >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                         << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xffc00000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
               >> 0x15U) | (0x3ff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                         << 0xbU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_dst_cord_lo));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffff8ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((4U > (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U))) ? (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U))
                : 0U) << 8U));
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (0x810U >> (0xfU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 4U));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
           & (IData)(vlSelf->__PVT__link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__pr_ready_and_o = (1U & ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U]));
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
    } else {
        vlSelf->__PVT__pr_ready_and_o = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U]));
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U)))))));
    }
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->__PVT__pr_ready_and_o) 
                                             & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r)));
    vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
        = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
           & (IData)(vlSelf->__PVT__stream_control__DOT__state_r));
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
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_stream_to_wh__0(Vtestbench_bp_me_stream_to_wormhole__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_stream_to_wh__0\n"); );
    // Body
    vlSelf->__PVT__piso_v_li = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                      & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r))));
    vlSelf->__PVT__link_v_o = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r)
                                ? (IData)(vlSelf->__PVT__wh_data_v_reg__DOT__data_r)
                                : (IData)(vlSelf->__PVT__piso_v_li));
}

VL_ATTR_COLD void Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_stream_to_wh__1(Vtestbench_bp_me_stream_to_wormhole__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bp_me_stream_to_wormhole__pi24___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_stream_to_wh__1\n"); );
    // Body
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[3U] = 0U;
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0x7ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
              << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[1U] 
        = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U] 
            >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                         << 0xbU));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U] 
        = ((0xffc00000U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[2U]) 
           | ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
               >> 0x15U) | (0x3ff800U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[6U] 
                                         << 0xbU))));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_dst_cord_lo));
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xfffff8ffU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((4U > (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                            >> 0x16U))) ? (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U] 
                                                 >> 0x16U))
                : 0U) << 8U));
    vlSelf->__PVT__encode__DOT__msg_len_li = ((0x40000U 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                               ? ((0x20000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((0x10000U 
                                                    & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[5U])
                                                    ? 2U
                                                    : 1U))
                                               : 1U);
    vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U]) 
           | (((1U & (0x810U >> (0xfU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.gearbox__DOT____Vcellout__fifo__data_o[4U])))
                ? (IData)(vlSelf->__PVT__encode__DOT__msg_len_li)
                : 0U) << 4U));
    vlSelf->__Vcellinp__stream_control__link_accept_i 
        = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
           & (IData)(vlSelf->__PVT__link_v_o));
    if (vlSelf->__PVT__stream_control__DOT__state_r) {
        vlSelf->__PVT__pr_ready_and_o = (1U & ((~ ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))) 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U]));
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__PVT__stream_control__DOT__state_r) 
               & (~ ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
                     & (1U == (IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))));
    } else {
        vlSelf->__PVT__pr_ready_and_o = (1U & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U]));
        vlSelf->__PVT__stream_control__DOT__state_n 
            = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
               & ((~ (IData)(vlSelf->__PVT__stream_control__DOT__state_r)) 
                  & (0U != (0xfU & ((IData)(1U) + (
                                                   ((vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                                       >> 4U)) 
                                                   - (IData)(1U)))))));
    }
    vlSelf->__Vcellinp__wh_data_reg__en_i = ((IData)(vlSelf->__PVT__pr_ready_and_o) 
                                             & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__cmd_pump_out.__PVT__gearbox__DOT__fifo__DOT__empty_r)));
    vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i 
        = ((IData)(vlSelf->__Vcellinp__stream_control__link_accept_i) 
           & (IData)(vlSelf->__PVT__stream_control__DOT__state_r));
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
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__encode__DOT__wh_header_cast_o[0U] 
                                        >> 4U)) - (IData)(1U))));
    }
    if (vlSelf->stream_control__DOT____Vcellinp__data_flit_counter__down_i) {
        vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__stream_control__DOT__data_flit_counter__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}
