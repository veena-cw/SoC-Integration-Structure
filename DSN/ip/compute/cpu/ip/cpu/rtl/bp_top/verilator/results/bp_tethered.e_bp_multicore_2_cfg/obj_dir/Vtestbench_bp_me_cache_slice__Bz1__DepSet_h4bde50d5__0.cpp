// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_out__pi87.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2\n"); );
    // Body
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_data_yumi_o) 
           & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__empty_r)));
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__2(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__2\n"); );
    // Body
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_data_yumi_o) 
           & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__empty_r)));
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__2\n"); );
    // Body
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_data_yumi_o) 
           & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__empty_r)));
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__2(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__2\n"); );
    // Body
    vlSelf->__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_data_yumi_o) 
           & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__empty_r)));
    vlSelf->__PVT__cache_controller__DOT__fsm_rev_ready_then_li 
        = (1U & ((~ ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                     & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r))) 
                 & ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__VdfgExtracted_hd82698c1__4)
                     ? (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r))
                     : (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__out->__PVT__gearbox__DOT__fifo__DOT__full_r)))));
}
