// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0)));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0)));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_ATTR_COLD void Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
                                        >> 0xbU))));
}
