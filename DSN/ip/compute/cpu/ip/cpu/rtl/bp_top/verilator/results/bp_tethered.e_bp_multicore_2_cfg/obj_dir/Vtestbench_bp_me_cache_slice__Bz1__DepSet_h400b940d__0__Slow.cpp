// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi86.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__0(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__0\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 0U;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
    vlSelf->__PVT__cache_controller__DOT__set_up = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
                vlSelf->__PVT__cache_controller__DOT__set_up 
                    = (0x3ffU != (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt));
            }
        }
    }
    vlSelf->__Vcellout__fifo__data_o[0U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
    vlSelf->__Vcellout__fifo__data_o[1U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
    vlSelf->__Vcellout__fifo__data_o[2U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    vlSelf->__Vcellout__fifo__data_o[3U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][3U];
    vlSelf->__Vcellout__fifo__data_o[4U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][4U];
    vlSelf->__Vcellout__fifo__data_o[5U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][5U];
    vlSelf->__Vcellout__fifo__data_o[6U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][6U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][3U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 1U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 3U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 2U)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 5U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 4U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 7U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 6U)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 9U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 8U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 0xbU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 0xaU)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 0xdU)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 0xcU)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 0xfU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 0xeU)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v 
        = ((0xfffffff8U & ((((0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                  >> 0xeU))) 
                             == (0x7ffffU & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[2U] 
                                              << 7U) 
                                             | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                >> 0x19U)))) 
                            << 3U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
           | ((0xfffffffcU & ((((0x7ffffU & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))) 
                                == (0x7ffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                >> 6U))) 
                               << 2U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
              | ((0xfffffffeU & ((((0x7ffffU & (IData)(
                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                        >> 0xeU))) 
                                   == (0x7ffffU & (
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U] 
                                                      >> 0x13U)))) 
                                  << 1U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
                 | (((0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                          >> 0xeU))) 
                     == (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U])) 
                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfff0U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                  >> 1U))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xff0fU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xf0ffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc00U & ((- (IData)((1U & (((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                           >> 1U)))) 
                                           >> 5U)))) 
                         << 0xaU)) | (0x300U & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                            >> 1U)))) 
                                                               >> 4U)))) 
                                                << 8U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 1U)))) 
                                            >> 7U)))) 
                          << 0xeU)) | (0x3000U & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                              >> 1U)))) 
                                                                 >> 6U)))) 
                                                  << 0xcU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o 
        = ((0xff00U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o)) 
           | ((0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 2U)))) 
                                          >> 1U)))) 
                        << 4U)) | (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                     >> 2U))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o 
        = ((0xffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o)) 
           | ((0xf000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 2U)))) 
                                            >> 3U)))) 
                          << 0xcU)) | (0xf00U & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                             >> 2U)))) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_reg_data 
        = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
            ? (((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))
            : ((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])) 
               << 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op 
        = (IData)((0U != (0x2700U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0 
        = (IData)((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__op_data_lo 
        = ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r)) 
           & vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
           [vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r]);
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk7__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk8__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0);
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | (0xfff80000U & (0x100000U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 0x13U))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0x15U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              >> 0xbU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xffffff00U & (0x200U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 8U))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0xaU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xe0000000U & (0x40000000U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 0x1dU))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0x1fU));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                                          >> 1U)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xc0000U & (0x80000U 
                                          | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                             << 0x12U))));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 1U;
                }
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0xffffU;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | (0xfff80000U & (0x100000U 
                                         | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                            << 0x13U))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0x15U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          >> 0xbU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xffffff00U & (0x200U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                                   << 8U))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0xaU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xe0000000U & (0x40000000U 
                                         | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                            << 0x1dU))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0x1fU));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                                      >> 1U)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xc0000U & (0x80000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                                  << 0x12U))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | (0xfff80000U & (0x100000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                                  << 0x13U))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0x15U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      >> 0xbU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (0xffffff00U & (0x200U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                               << 8U))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0xaU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (0xe0000000U & (0x40000000U | 
                                     ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                      << 0x1dU))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0x1fU));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                   | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                                  >> 1U)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                   | (0xc0000U & (0x80000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                              << 0x12U))));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
        }
    } else {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = (0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xfff00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                          << 0x13U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = (0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffffe00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0x1fff00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                       << 8U)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xc00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xfffffc00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                         << 0x1dU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xc0000U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                      << 0x12U)));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__partial_st_v 
        = (1U & ((~ ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                      >> 0x11U) & (0xffffU == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))) 
                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                    >> 0xfU)));
    if ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r))) {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[0U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[1U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    } else {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[0U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[1U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] = 0U;
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0 
        = (IData)((0U != (0x8010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
    }
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode 
        = (0xfU & ((0x2000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                    ? ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))))
                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_r)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__dma_pkt_v_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk4__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk3__DOT__i = 4U;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk5__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk6__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 4U;
                }
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo 
                    = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                        ? 8U : 1U);
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 2U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk2__DOT__i = 4U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk1__DOT__i = 4U;
                }
            }
        }
    }
    vlSelf->__Vcellinp__fifo__yumi_i = (1U & ((~ (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
                                              & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__2__KET____DOT__rr0__grants_o));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i 
        = (1U & (((3U == (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                >> 2U))) | (3U == (3U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r))))
                  ? (3U == (3U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                        = ((QData)((IData)((0x1fffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                       >> 4U))))) 
                           << 4U);
                }
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                    = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                        ? (((QData)((IData)(((0x4bU 
                                              >= (0x7fU 
                                                  & ((IData)(0x13U) 
                                                     * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                              ? (0x7ffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x13U) 
                                                          * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                      (((IData)(0x12U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x13U) 
                                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))))) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                       (3U 
                                                        & (((IData)(0x13U) 
                                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))
                                              : 0U))) 
                            << 0xeU) | (QData)((IData)(
                                                       (0x3fc0U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                    >> 6U)) 
                                                           << 6U)))))
                        : ((QData)((IData)((0x7ffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                       >> 6U))))) 
                           << 6U));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                    = (((QData)((IData)(((0x4bU >= 
                                          (0x7fU & 
                                           ((IData)(0x13U) 
                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                          ? (0x7ffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                  (((IData)(0x12U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x13U) 
                                                        * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))))) 
                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                   (3U 
                                                    & (((IData)(0x13U) 
                                                        * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))
                                          : 0U))) << 0xeU) 
                       | (QData)((IData)((0x3fc0U & 
                                          ((IData)(
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                    >> 6U)) 
                                           << 6U)))));
            }
        }
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o 
        = ((0xffffffff00000000ULL & vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o) 
           | (IData)((IData)((((- (IData)((1U & (((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                 >> 1U)))) 
                               << 0x10U) | (0xffffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & ((IData)(1U) 
                                                             << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o 
        = ((0xffffffffULL & vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o) 
           | ((QData)((IData)((((- (IData)((1U & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                  >> 3U)))) 
                                << 0x10U) | (0xffffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (((IData)(1U) 
                                                               << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                              >> 2U)))))))) 
              << 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_data_v_o));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo = 0U;
    if ((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        if ((1U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
            if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li 
                = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo 
                = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0U;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__Vcellinp__fifo__yumi_i)));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o 
        = (3U & ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_way_id 
        = (((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i) 
            << 1U) | (1U & (((2U & (((0U != (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                                   >> 2U)))
                                      ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                         >> 2U) : ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                                   >> 2U)) 
                                    << 1U)) | (1U & 
                                               ((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                                                 ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)
                                                 : 
                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                                 >> 1U)))) 
                            >> (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
        = ((QData)((IData)((0x7ffffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                                                  >> 6U))))) 
           << 0xaU);
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_pkt_v_o = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0U;
        if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 2U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
        }
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
            = (0x1fffffffffULL & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_pkt_v_o = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                            = (0x2000000000ULL | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                            = (0xfULL | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_pkt_v_o = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                        = (0x1fffffffffULL & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
               & (3U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
               & (3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n 
            = (((3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)))
                ? 0U : 1U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo 
            = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n 
            = (((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)))
                ? 0U : 2U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li)));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__0(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__0\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 0U;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
    vlSelf->__PVT__cache_controller__DOT__set_up = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
                vlSelf->__PVT__cache_controller__DOT__set_up 
                    = (0x3ffU != (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt));
            }
        }
    }
    vlSelf->__Vcellout__fifo__data_o[0U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
    vlSelf->__Vcellout__fifo__data_o[1U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
    vlSelf->__Vcellout__fifo__data_o[2U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    vlSelf->__Vcellout__fifo__data_o[3U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][3U];
    vlSelf->__Vcellout__fifo__data_o[4U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][4U];
    vlSelf->__Vcellout__fifo__data_o[5U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][5U];
    vlSelf->__Vcellout__fifo__data_o[6U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][6U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][3U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 1U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 3U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 2U)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 5U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 4U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 7U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 6U)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 9U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 8U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 0xbU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 0xaU)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 0xdU)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 0xcU)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 0xfU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 0xeU)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v 
        = ((0xfffffff8U & ((((0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                  >> 0xeU))) 
                             == (0x7ffffU & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[2U] 
                                              << 7U) 
                                             | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                >> 0x19U)))) 
                            << 3U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
           | ((0xfffffffcU & ((((0x7ffffU & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))) 
                                == (0x7ffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                >> 6U))) 
                               << 2U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
              | ((0xfffffffeU & ((((0x7ffffU & (IData)(
                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                        >> 0xeU))) 
                                   == (0x7ffffU & (
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U] 
                                                      >> 0x13U)))) 
                                  << 1U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
                 | (((0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                          >> 0xeU))) 
                     == (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U])) 
                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfff0U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                  >> 1U))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xff0fU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xf0ffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc00U & ((- (IData)((1U & (((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                           >> 1U)))) 
                                           >> 5U)))) 
                         << 0xaU)) | (0x300U & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                            >> 1U)))) 
                                                               >> 4U)))) 
                                                << 8U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 1U)))) 
                                            >> 7U)))) 
                          << 0xeU)) | (0x3000U & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                              >> 1U)))) 
                                                                 >> 6U)))) 
                                                  << 0xcU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o 
        = ((0xff00U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o)) 
           | ((0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 2U)))) 
                                          >> 1U)))) 
                        << 4U)) | (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                     >> 2U))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o 
        = ((0xffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o)) 
           | ((0xf000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 2U)))) 
                                            >> 3U)))) 
                          << 0xcU)) | (0xf00U & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                             >> 2U)))) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_reg_data 
        = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
            ? (((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))
            : ((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])) 
               << 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op 
        = (IData)((0U != (0x2700U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0 
        = (IData)((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__op_data_lo 
        = ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r)) 
           & vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
           [vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r]);
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk7__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk8__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0);
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | (0xfff80000U & (0x100000U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 0x13U))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0x15U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              >> 0xbU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xffffff00U & (0x200U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 8U))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0xaU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xe0000000U & (0x40000000U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 0x1dU))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0x1fU));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                                          >> 1U)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xc0000U & (0x80000U 
                                          | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                             << 0x12U))));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 1U;
                }
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0xffffU;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | (0xfff80000U & (0x100000U 
                                         | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                            << 0x13U))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0x15U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          >> 0xbU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xffffff00U & (0x200U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                                   << 8U))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0xaU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xe0000000U & (0x40000000U 
                                         | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                            << 0x1dU))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0x1fU));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                                      >> 1U)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xc0000U & (0x80000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                                  << 0x12U))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | (0xfff80000U & (0x100000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                                  << 0x13U))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0x15U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      >> 0xbU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (0xffffff00U & (0x200U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                               << 8U))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0xaU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (0xe0000000U & (0x40000000U | 
                                     ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                      << 0x1dU))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0x1fU));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                   | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                                  >> 1U)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                   | (0xc0000U & (0x80000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                              << 0x12U))));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
        }
    } else {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = (0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xfff00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                          << 0x13U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = (0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffffe00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0x1fff00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                       << 8U)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xc00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xfffffc00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                         << 0x1dU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xc0000U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                      << 0x12U)));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__partial_st_v 
        = (1U & ((~ ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                      >> 0x11U) & (0xffffU == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))) 
                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                    >> 0xfU)));
    if ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r))) {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[0U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[1U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    } else {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[0U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[1U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] = 0U;
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0 
        = (IData)((0U != (0x8010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
    }
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode 
        = (0xfU & ((0x2000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                    ? ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))))
                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_r)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__dma_pkt_v_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk4__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk3__DOT__i = 4U;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk5__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk6__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 4U;
                }
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo 
                    = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                        ? 8U : 1U);
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 2U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk2__DOT__i = 4U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk1__DOT__i = 4U;
                }
            }
        }
    }
    vlSelf->__Vcellinp__fifo__yumi_i = (1U & ((~ (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
                                              & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__3__KET____DOT__rr0__grants_o));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i 
        = (1U & (((3U == (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                >> 2U))) | (3U == (3U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r))))
                  ? (3U == (3U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                        = ((QData)((IData)((0x1fffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                       >> 4U))))) 
                           << 4U);
                }
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                    = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                        ? (((QData)((IData)(((0x4bU 
                                              >= (0x7fU 
                                                  & ((IData)(0x13U) 
                                                     * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                              ? (0x7ffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x13U) 
                                                          * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                      (((IData)(0x12U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x13U) 
                                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))))) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                       (3U 
                                                        & (((IData)(0x13U) 
                                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))
                                              : 0U))) 
                            << 0xeU) | (QData)((IData)(
                                                       (0x3fc0U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                    >> 6U)) 
                                                           << 6U)))))
                        : ((QData)((IData)((0x7ffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                       >> 6U))))) 
                           << 6U));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                    = (((QData)((IData)(((0x4bU >= 
                                          (0x7fU & 
                                           ((IData)(0x13U) 
                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                          ? (0x7ffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                  (((IData)(0x12U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x13U) 
                                                        * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))))) 
                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                   (3U 
                                                    & (((IData)(0x13U) 
                                                        * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))
                                          : 0U))) << 0xeU) 
                       | (QData)((IData)((0x3fc0U & 
                                          ((IData)(
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                    >> 6U)) 
                                           << 6U)))));
            }
        }
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o 
        = ((0xffffffff00000000ULL & vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o) 
           | (IData)((IData)((((- (IData)((1U & (((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                 >> 1U)))) 
                               << 0x10U) | (0xffffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & ((IData)(1U) 
                                                             << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o 
        = ((0xffffffffULL & vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o) 
           | ((QData)((IData)((((- (IData)((1U & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                  >> 3U)))) 
                                << 0x10U) | (0xffffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (((IData)(1U) 
                                                               << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                              >> 2U)))))))) 
              << 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_data_v_o));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo = 0U;
    if ((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        if ((1U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
            if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li 
                = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo 
                = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0U;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__Vcellinp__fifo__yumi_i)));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o 
        = (3U & ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_way_id 
        = (((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i) 
            << 1U) | (1U & (((2U & (((0U != (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                                   >> 2U)))
                                      ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                         >> 2U) : ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                                   >> 2U)) 
                                    << 1U)) | (1U & 
                                               ((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                                                 ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)
                                                 : 
                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                                 >> 1U)))) 
                            >> (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
        = ((QData)((IData)((0x7ffffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                                                  >> 6U))))) 
           << 0xaU);
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_pkt_v_o = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0U;
        if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 2U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
        }
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
            = (0x1fffffffffULL & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_pkt_v_o = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                            = (0x2000000000ULL | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                            = (0xfULL | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_pkt_v_o = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                        = (0x1fffffffffULL & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
               & (3U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
               & (3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n 
            = (((3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)))
                ? 0U : 1U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo 
            = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n 
            = (((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)))
                ? 0U : 2U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li)));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__0(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__0\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 0U;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
    vlSelf->__PVT__cache_controller__DOT__set_up = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
                vlSelf->__PVT__cache_controller__DOT__set_up 
                    = (0x3ffU != (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt));
            }
        }
    }
    vlSelf->__Vcellout__fifo__data_o[0U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
    vlSelf->__Vcellout__fifo__data_o[1U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
    vlSelf->__Vcellout__fifo__data_o[2U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    vlSelf->__Vcellout__fifo__data_o[3U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][3U];
    vlSelf->__Vcellout__fifo__data_o[4U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][4U];
    vlSelf->__Vcellout__fifo__data_o[5U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][5U];
    vlSelf->__Vcellout__fifo__data_o[6U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][6U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][3U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 1U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 3U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 2U)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 5U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 4U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 7U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 6U)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 9U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 8U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 0xbU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 0xaU)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 0xdU)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 0xcU)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 0xfU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 0xeU)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v 
        = ((0xfffffff8U & ((((0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                  >> 0xeU))) 
                             == (0x7ffffU & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[2U] 
                                              << 7U) 
                                             | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                >> 0x19U)))) 
                            << 3U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
           | ((0xfffffffcU & ((((0x7ffffU & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))) 
                                == (0x7ffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                >> 6U))) 
                               << 2U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
              | ((0xfffffffeU & ((((0x7ffffU & (IData)(
                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                        >> 0xeU))) 
                                   == (0x7ffffU & (
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U] 
                                                      >> 0x13U)))) 
                                  << 1U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
                 | (((0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                          >> 0xeU))) 
                     == (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U])) 
                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfff0U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                  >> 1U))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xff0fU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xf0ffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc00U & ((- (IData)((1U & (((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                           >> 1U)))) 
                                           >> 5U)))) 
                         << 0xaU)) | (0x300U & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                            >> 1U)))) 
                                                               >> 4U)))) 
                                                << 8U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 1U)))) 
                                            >> 7U)))) 
                          << 0xeU)) | (0x3000U & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                              >> 1U)))) 
                                                                 >> 6U)))) 
                                                  << 0xcU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o 
        = ((0xff00U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o)) 
           | ((0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 2U)))) 
                                          >> 1U)))) 
                        << 4U)) | (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                     >> 2U))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o 
        = ((0xffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o)) 
           | ((0xf000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 2U)))) 
                                            >> 3U)))) 
                          << 0xcU)) | (0xf00U & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                             >> 2U)))) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_reg_data 
        = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
            ? (((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))
            : ((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])) 
               << 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op 
        = (IData)((0U != (0x2700U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0 
        = (IData)((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__op_data_lo 
        = ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r)) 
           & vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
           [vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r]);
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk7__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk8__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0);
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | (0xfff80000U & (0x100000U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 0x13U))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0x15U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              >> 0xbU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xffffff00U & (0x200U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 8U))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0xaU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xe0000000U & (0x40000000U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 0x1dU))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0x1fU));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                                          >> 1U)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xc0000U & (0x80000U 
                                          | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                             << 0x12U))));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 1U;
                }
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0xffffU;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | (0xfff80000U & (0x100000U 
                                         | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                            << 0x13U))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0x15U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          >> 0xbU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xffffff00U & (0x200U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                                   << 8U))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0xaU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xe0000000U & (0x40000000U 
                                         | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                            << 0x1dU))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0x1fU));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                                      >> 1U)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xc0000U & (0x80000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                                  << 0x12U))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | (0xfff80000U & (0x100000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                                  << 0x13U))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0x15U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      >> 0xbU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (0xffffff00U & (0x200U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                               << 8U))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0xaU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (0xe0000000U & (0x40000000U | 
                                     ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                      << 0x1dU))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0x1fU));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                   | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                                  >> 1U)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                   | (0xc0000U & (0x80000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                              << 0x12U))));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
        }
    } else {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = (0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xfff00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                          << 0x13U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = (0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffffe00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0x1fff00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                       << 8U)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xc00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xfffffc00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                         << 0x1dU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xc0000U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                      << 0x12U)));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__partial_st_v 
        = (1U & ((~ ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                      >> 0x11U) & (0xffffU == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))) 
                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                    >> 0xfU)));
    if ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r))) {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[0U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[1U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    } else {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[0U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[1U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] = 0U;
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0 
        = (IData)((0U != (0x8010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
    }
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode 
        = (0xfU & ((0x2000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                    ? ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))))
                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_r)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__dma_pkt_v_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk4__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk3__DOT__i = 4U;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk5__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk6__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 4U;
                }
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo 
                    = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                        ? 8U : 1U);
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 2U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk2__DOT__i = 4U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk1__DOT__i = 4U;
                }
            }
        }
    }
    vlSelf->__Vcellinp__fifo__yumi_i = (1U & ((~ (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
                                              & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__2__KET____DOT__rr0__grants_o));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i 
        = (1U & (((3U == (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                >> 2U))) | (3U == (3U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r))))
                  ? (3U == (3U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                        = ((QData)((IData)((0x1fffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                       >> 4U))))) 
                           << 4U);
                }
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                    = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                        ? (((QData)((IData)(((0x4bU 
                                              >= (0x7fU 
                                                  & ((IData)(0x13U) 
                                                     * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                              ? (0x7ffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x13U) 
                                                          * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                      (((IData)(0x12U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x13U) 
                                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))))) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                       (3U 
                                                        & (((IData)(0x13U) 
                                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))
                                              : 0U))) 
                            << 0xeU) | (QData)((IData)(
                                                       (0x3fc0U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                    >> 6U)) 
                                                           << 6U)))))
                        : ((QData)((IData)((0x7ffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                       >> 6U))))) 
                           << 6U));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                    = (((QData)((IData)(((0x4bU >= 
                                          (0x7fU & 
                                           ((IData)(0x13U) 
                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                          ? (0x7ffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                  (((IData)(0x12U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x13U) 
                                                        * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))))) 
                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                   (3U 
                                                    & (((IData)(0x13U) 
                                                        * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))
                                          : 0U))) << 0xeU) 
                       | (QData)((IData)((0x3fc0U & 
                                          ((IData)(
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                    >> 6U)) 
                                           << 6U)))));
            }
        }
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o 
        = ((0xffffffff00000000ULL & vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o) 
           | (IData)((IData)((((- (IData)((1U & (((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                 >> 1U)))) 
                               << 0x10U) | (0xffffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & ((IData)(1U) 
                                                             << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o 
        = ((0xffffffffULL & vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o) 
           | ((QData)((IData)((((- (IData)((1U & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                  >> 3U)))) 
                                << 0x10U) | (0xffffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (((IData)(1U) 
                                                               << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                              >> 2U)))))))) 
              << 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_data_v_o));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo = 0U;
    if ((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        if ((1U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
            if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li 
                = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo 
                = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0U;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__Vcellinp__fifo__yumi_i)));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o 
        = (3U & ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_way_id 
        = (((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i) 
            << 1U) | (1U & (((2U & (((0U != (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                                   >> 2U)))
                                      ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                         >> 2U) : ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                                   >> 2U)) 
                                    << 1U)) | (1U & 
                                               ((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                                                 ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)
                                                 : 
                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                                 >> 1U)))) 
                            >> (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
        = ((QData)((IData)((0x7ffffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                                                  >> 6U))))) 
           << 0xaU);
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_pkt_v_o = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0U;
        if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 2U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
        }
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
            = (0x1fffffffffULL & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_pkt_v_o = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                            = (0x2000000000ULL | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                            = (0xfULL | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_pkt_v_o = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                        = (0x1fffffffffULL & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
               & (3U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
               & (3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n 
            = (((3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)))
                ? 0U : 1U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo 
            = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n 
            = (((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)))
                ? 0U : 2U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li)));
}

VL_ATTR_COLD void Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__0(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__0\n"); );
    // Body
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 0U;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
    vlSelf->__PVT__cache_controller__DOT__set_up = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__cache_controller__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__cache_controller__DOT__state_r))) {
                vlSelf->__PVT__cache_controller__DOT__set_up 
                    = (0x3ffU != (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt));
            }
        }
    }
    vlSelf->__Vcellout__fifo__data_o[0U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
    vlSelf->__Vcellout__fifo__data_o[1U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
    vlSelf->__Vcellout__fifo__data_o[2U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    vlSelf->__Vcellout__fifo__data_o[3U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][3U];
    vlSelf->__Vcellout__fifo__data_o[4U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][4U];
    vlSelf->__Vcellout__fifo__data_o[5U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][5U];
    vlSelf->__Vcellout__fifo__data_o[6U] = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][6U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][3U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 1U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 3U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 2U)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 5U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 4U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 7U)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 6U)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 9U)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 8U)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 0xbU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 0xaU)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U] 
        = ((0xffff0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]) 
           | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                            >> 0xdU)))) 
                          << 8U)) | (0xffU & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                            >> 0xcU)))))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U] 
        = ((0xffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]) 
           | (0xffff0000U & (((- (IData)((1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                >> 0xfU)))) 
                              << 0x18U) | (0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r) 
                                                             >> 0xeU)))) 
                                              << 0x10U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v 
        = ((0xfffffff8U & ((((0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                  >> 0xeU))) 
                             == (0x7ffffU & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[2U] 
                                              << 7U) 
                                             | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                >> 0x19U)))) 
                            << 3U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
           | ((0xfffffffcU & ((((0x7ffffU & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))) 
                                == (0x7ffffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                >> 6U))) 
                               << 2U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
              | ((0xfffffffeU & ((((0x7ffffU & (IData)(
                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                        >> 0xeU))) 
                                   == (0x7ffffU & (
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U] 
                                                      >> 0x13U)))) 
                                  << 1U) & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r))) 
                 | (((0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                          >> 0xeU))) 
                     == (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U])) 
                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfff0U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xcU & ((- (IData)((1U & (((IData)(1U) 
                                          << (7U & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 1U)))) 
                                         >> 1U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                  >> 1U))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xff0fU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 1U)))) 
                                          >> 3U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                        >> 1U)))) 
                                                           >> 2U)))) 
                                            << 4U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xf0ffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc00U & ((- (IData)((1U & (((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                           >> 1U)))) 
                                           >> 5U)))) 
                         << 0xaU)) | (0x300U & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                            >> 1U)))) 
                                                               >> 4U)))) 
                                                << 8U))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o 
        = ((0xfffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)) 
           | ((0xc000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 1U)))) 
                                            >> 7U)))) 
                          << 0xeU)) | (0x3000U & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                              >> 1U)))) 
                                                                 >> 6U)))) 
                                                  << 0xcU))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o 
        = ((0xff00U & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o)) 
           | ((0xf0U & ((- (IData)((1U & (((IData)(1U) 
                                           << (3U & (IData)(
                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                             >> 2U)))) 
                                          >> 1U)))) 
                        << 4U)) | (0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                     >> 2U))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o 
        = ((0xffU & (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o)) 
           | ((0xf000U & ((- (IData)((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 2U)))) 
                                            >> 3U)))) 
                          << 0xcU)) | (0xf00U & ((- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                             >> 2U)))) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_reg_data 
        = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
            ? (((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))
            : ((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])) 
               << 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op 
        = (IData)((0U != (0x2700U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0 
        = (IData)((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 0U;
    vlSelf->__PVT__cache_controller__DOT__op_data_lo 
        = ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r)) 
           & vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
           [vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r]);
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk7__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk8__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0);
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | (0xfff80000U & (0x100000U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 0x13U))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                        = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0x15U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              >> 0xbU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xffffff00U & (0x200U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 8U))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0xaU));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (0xe0000000U & (0x40000000U 
                                             | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                                << 0x1dU))));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                        = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 0xeU)));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                        = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                           | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                              << 0x1fU));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h747f1a56__0 
                                          >> 1U)));
                    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0 
                        = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                 >> 7U));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                        = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                           | (0xc0000U & (0x80000U 
                                          | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h62e0b344__0) 
                                             << 0x12U))));
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 1U;
                }
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0xffffU;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | (0xfff80000U & (0x100000U 
                                         | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                            << 0x13U))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0x15U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          >> 0xbU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xffffff00U & (0x200U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                                   << 8U))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0xaU));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xe0000000U & (0x40000000U 
                                         | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                            << 0x1dU))));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                    = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                           >> 0xeU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                          << 0x1fU));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_ha2afedc7__0 
                                      >> 1U)));
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xc0000U & (0x80000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h10d687c2__0) 
                                                  << 0x12U))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0xfff80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0);
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0xffe7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | (0xfff80000U & (0x100000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                                  << 0x13U))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                = ((0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0x15U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xffffff00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      >> 0xbU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xfffffcffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (0xffffff00U & (0x200U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                               << 8U))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0xe00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0xaU));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0x9fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (0xe0000000U & (0x40000000U | 
                                     ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                      << 0x1dU))));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                = (0x7ffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                       >> 0xeU)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                = ((0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                   | (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                      << 0x1fU));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                = ((0xc0000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                   | (0xfffffU & (vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_hcf4a6a0f__0 
                                  >> 1U)));
            vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0 
                = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                         >> 7U));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                = ((0x3ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                   | (0xc0000U & (0x80000U | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h5aca9a9c__0) 
                                              << 0x12U))));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
        }
    } else {
        if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = (0xffefffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = ((0xfff00000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]) 
                       | ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                          << 0x13U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xfffffdffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] 
                    = (0x1fffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xfffffe00U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0x1fff00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                       << 8U)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0xbfffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = ((0xc00003ffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]) 
                       | (0xfffffc00U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                         << 0x1dU)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = (0x7ffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]);
                vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0 
                    = (1U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                             >> 7U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] 
                    = (0x7fffffffU & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] 
                    = ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U]) 
                       | (0xc0000U & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT____Vlvbound_h3d11e9c1__0) 
                                      << 0x12U)));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 1U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__partial_st_v 
        = (1U & ((~ ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                      >> 0x11U) & (0xffffU == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))) 
                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                    >> 0xfU)));
    if ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r))) {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[0U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][0U];
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[1U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][1U];
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
            [vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r][2U];
    } else {
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[0U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[1U] = 0U;
        vlSelf->__PVT__cache_controller__DOT__fsm_rev_metadata_lo[2U] = 0U;
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0 
        = (IData)((0U != (0x8010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
    }
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode 
        = (0xfU & ((0x2000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                    ? ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))))
                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_r)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__dma_pkt_v_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk4__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk3__DOT__i = 4U;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk5__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk6__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 4U;
                }
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo 
                    = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                        ? 8U : 1U);
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 2U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk2__DOT__i = 4U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk1__DOT__i = 4U;
                }
            }
        }
    }
    vlSelf->__Vcellinp__fifo__yumi_i = (1U & ((~ (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
                                              & (~ (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->__PVT__gearbox__DOT__fifo__DOT__full_r))));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__3__KET____DOT__rr0__grants_o));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i 
        = (1U & (((3U == (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                >> 2U))) | (3U == (3U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r))))
                  ? (3U == (3U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                        = ((QData)((IData)((0x1fffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                       >> 4U))))) 
                           << 4U);
                }
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                    = ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))
                        ? (((QData)((IData)(((0x4bU 
                                              >= (0x7fU 
                                                  & ((IData)(0x13U) 
                                                     * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                              ? (0x7ffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x13U) 
                                                          * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                      (((IData)(0x12U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x13U) 
                                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))))) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                       (3U 
                                                        & (((IData)(0x13U) 
                                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x13U) 
                                                           * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))
                                              : 0U))) 
                            << 0xeU) | (QData)((IData)(
                                                       (0x3fc0U 
                                                        & ((IData)(
                                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                    >> 6U)) 
                                                           << 6U)))))
                        : ((QData)((IData)((0x7ffffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                       >> 6U))))) 
                           << 6U));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                    = (((QData)((IData)(((0x4bU >= 
                                          (0x7fU & 
                                           ((IData)(0x13U) 
                                            * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                          ? (0x7ffffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x13U) 
                                                      * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                  (((IData)(0x12U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x13U) 
                                                        * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)))))) 
                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                   (3U 
                                                    & (((IData)(0x13U) 
                                                        * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       * (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))
                                          : 0U))) << 0xeU) 
                       | (QData)((IData)((0x3fc0U & 
                                          ((IData)(
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                    >> 6U)) 
                                           << 6U)))));
            }
        }
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o 
        = ((0xffffffff00000000ULL & vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o) 
           | (IData)((IData)((((- (IData)((1U & (((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                 >> 1U)))) 
                               << 0x10U) | (0xffffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & ((IData)(1U) 
                                                             << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo))))))))));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o 
        = ((0xffffffffULL & vlSelf->bank__BRA__0__KET____DOT__cache__DOT__dma__DOT____Vcellout__expand0__o) 
           | ((QData)((IData)((((- (IData)((1U & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                  >> 3U)))) 
                                << 0x10U) | (0xffffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (((IData)(1U) 
                                                               << (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo)) 
                                                              >> 2U)))))))) 
              << 0x20U));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque 
        = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full)) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_data_v_o));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo = 0U;
    if ((0U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        if ((1U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
            if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li 
                = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_w_lo 
                = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0U;
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__Vcellinp__fifo__yumi_i)));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o 
        = (3U & ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_way_id 
        = (((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i) 
            << 1U) | (1U & (((2U & (((0U != (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                                   >> 2U)))
                                      ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                         >> 2U) : ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                                   >> 2U)) 
                                    << 1U)) | (1U & 
                                               ((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                                                 ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)
                                                 : 
                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo) 
                                                 >> 1U)))) 
                            >> (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
        = ((QData)((IData)((0x7ffffffU & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                                                  >> 6U))))) 
           << 0xaU);
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_pkt_v_o = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 0U;
        if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 2U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
        }
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
            = (0x1fffffffffULL & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_pkt_v_o = 1U;
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                            = (0x2000000000ULL | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                            = (0xfULL | vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_pkt_v_o = 1U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt 
                        = (0x1fffffffffULL & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_pkt);
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
               & (3U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
               & (3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n 
            = (((3U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)))
                ? 0U : 1U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo 
            = (1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n 
            = (((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)))
                ? 0U : 2U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_data_mem_v_lo 
            = ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo->__PVT__full_r)) 
               & (4U != (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n = 0U;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li)));
}
