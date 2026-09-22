// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi86.h"

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__0(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*193:0*/ __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(194, __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<3>/*66:0*/ __Vdlyvval__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(67, __Vdlyvval__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdly__cache_controller__DOT__set_cnt;
    __Vdly__cache_controller__DOT__set_cnt = 0;
    CData/*1:0*/ __Vdlyvdim0__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvval__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvval__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*2:0*/ __Vdly__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r;
    __Vdly__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r = 0;
    CData/*1:0*/ __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<3>/*83:0*/ __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(84, __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*6:0*/ __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h23510110__0;
    VlWide<3>/*95:0*/ __Vtemp_had5bf377__0;
    VlWide<4>/*127:0*/ __Vtemp_hd9f7191d__0;
    VlWide<4>/*127:0*/ __Vtemp_h2da170f8__0;
    VlWide<16>/*511:0*/ __Vtemp_hb3d08297__0;
    VlWide<4>/*127:0*/ __Vtemp_ha684adab__0;
    VlWide<16>/*511:0*/ __Vtemp_h5e13698b__0;
    VlWide<5>/*159:0*/ __Vtemp_h434fc121__0;
    // Body
    __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__Vcellinp__fifo__yumi_i)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.fifo.unhardened.un.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__cache_controller__DOT__set_cnt = vlSelf->__PVT__cache_controller__DOT__set_cnt;
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty) 
                      & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.dma.in_fifo.unhardened.un.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdly__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r;
    __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (VL_UNLIKELY((1U & ((((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                             & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r)) 
                            & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)) 
                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.cache_controller.stream_pump.stream_fifo.unhardened.un.fifo error: enque full fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
                       & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r)) 
                      & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.cache_controller.stream_pump.stream_fifo.unhardened.un.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    __Vdlyvset__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (VL_UNLIKELY((1U & (((((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                              == (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r)) 
                             & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r)) 
                            & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque)) 
                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.cache_controller.tag[0].fifo.unhardened.un.fifo error: enque full fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                        == (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r)) 
                       & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r)) 
                      & (IData)(vlSelf->__PVT__cache_data_yumi_li)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.cache_controller.tag[0].fifo.unhardened.un.fifo error: deque empty fifo at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_v_li) 
         & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_w_li))) {
        __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U];
        __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U];
        __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U];
        __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li;
    }
    if (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_v_li) 
         & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_li))) {
        __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = ((0x40U & (((0x40U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li))
                           ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li) 
                              >> 6U) : ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0) 
                                        >> 6U)) << 6U)) 
               | ((0x20U & (((0x20U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li))
                              ? ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li) 
                                 >> 5U) : ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0) 
                                           >> 5U)) 
                            << 5U)) | ((0x10U & (((0x10U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li) 
                                                   >> 4U)
                                                   : 
                                                  ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0) 
                                                   >> 4U)) 
                                                 << 4U)) 
                                       | ((8U & (((8U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li) 
                                                   >> 3U)
                                                   : 
                                                  ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0) 
                                                   >> 3U)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (((4U 
                                                 & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0) 
                                                 >> 2U)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (((2U 
                                                      & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li) 
                                                      >> 1U)
                                                      : 
                                                     ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0) 
                                                      >> 1U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((1U 
                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_w_mask_li))
                                                       ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_li)
                                                       : (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0)))))))));
        __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_addr_li;
    }
    if (vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) {
        __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[4U];
        __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[5U];
        __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[0U] 
                << 2U) | (3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[6U]));
        __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[0U] 
                >> 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[1U] 
                             << 2U));
        __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[1U] 
                >> 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[2U] 
                             << 2U));
        __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[2U] 
                >> 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[3U] 
                             << 2U));
        __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot.__PVT__data_o[3U] 
               >> 0x1eU);
        __Vdlyvset__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r;
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) {
        __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo.data_o[0U];
        __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo.data_o[1U];
        __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo.data_o[2U];
        __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo.data_o[3U];
        __Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r;
    }
    if (vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) {
        vlSelf->cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_hed4cbd58__0 
            = (3U == (IData)(vlSelf->__PVT__cache_controller__DOT__state_r));
        if ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r))) {
            __Vdlyvval__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
                = vlSelf->cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_hed4cbd58__0;
            __Vdlyvset__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
            __Vdlyvdim0__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
                = vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r;
        }
    }
    if (vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) {
        vlSelf->cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_h8a4d873f__0[0U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[4U];
        vlSelf->cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_h8a4d873f__0[1U] 
            = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[5U];
        vlSelf->cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_h8a4d873f__0[2U] 
            = (3U & vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__in->gearbox__DOT____Vcellout__fifo__data_o[6U]);
        if ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r))) {
            __Vdlyvval__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
                = vlSelf->cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_h8a4d873f__0[0U];
            __Vdlyvval__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
                = vlSelf->cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_h8a4d873f__0[1U];
            __Vdlyvval__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
                = vlSelf->cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT____Vlvbound_h8a4d873f__0[2U];
            __Vdlyvset__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
            __Vdlyvdim0__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
                = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r;
        }
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_addr_li)
            : 0U);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_addr_li)
            : 0U);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_n));
    if ((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))) {
        if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_data_we_lo) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__track_mem_data_r = 0xffffU;
        }
        if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o) {
            if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[0U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[1U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[1U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[2U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[2U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[3U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[3U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[4U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[4U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[5U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[5U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[6U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[6U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[7U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[7U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[8U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[8U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[9U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[9U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[0xaU] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xaU];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[0xbU] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xbU];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[0xcU] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xcU];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[0xdU] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xdU];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[0xeU] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xeU];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[0xfU] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[0xfU];
            }
        }
        if (((1U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r)) 
             & ((~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty)) 
                & ((3U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                   == (3U & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_addr_lo 
                                     >> 4U))))))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[0U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[0U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[1U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[1U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[2U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[2U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[3U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_data_lo[3U];
        }
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__cache_controller__DOT__set_cnt = 0U;
        __Vdly__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r = 0U;
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 1U;
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0U;
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 1U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[2U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r = 0U;
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[2U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[3U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_data_v_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r = 0ULL;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r = 0U;
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0U;
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 1U;
        vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0U;
        vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 1U;
        vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__cache_controller__DOT__state_r = 0U;
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[0U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[1U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[2U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[3U] = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_tl_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r = 0ULL;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r = 0U;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r = 0U;
    } else {
        if (vlSelf->__PVT__cache_controller__DOT__set_clear) {
            __Vdly__cache_controller__DOT__set_cnt 
                = vlSelf->__PVT__cache_controller__DOT__set_up;
        } else if (vlSelf->__PVT__cache_controller__DOT__set_up) {
            __Vdly__cache_controller__DOT__set_cnt 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)));
        }
        if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_clear) {
            __Vdly__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up;
        } else if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up) {
            __Vdly__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)));
        }
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r 
            = (3U & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__num_els_r) 
                      + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_li)) 
                     - ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_v_lo) 
                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_yumi_li))));
        if (((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__Vcellinp__fifo__yumi_i))) {
            vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r 
                = vlSelf->__Vcellinp__fifo__yumi_i;
            vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r 
                = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque;
        }
        if (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li))) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque;
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li;
        }
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r 
            = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_r 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_n;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_r 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__chosen_way_n;
        if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_bypass_v_li) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[0U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[1U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[2U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__bypass_data_n[3U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo 
                = (0xffffU & ((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i) 
                              | (((- (IData)((((0x1fffffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                                                           >> 4U))) 
                                               == (0x1fffffffU 
                                                   & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U] 
                                                       << 0xaU) 
                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                                                         >> 0x16U)))) 
                                              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__el1_valid)))) 
                                  & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                      << 0x1eU) | (
                                                   vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                                                   >> 2U))) 
                                 | (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))));
        }
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o;
        if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_we_o) {
            if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[0U] 
                    = (IData)((((QData)((IData)((0x7ffffU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                                    >> 0xaU)))) 
                                << 0x26U) | (((QData)((IData)(
                                                              (0x7ffffU 
                                                               & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                                                   << 0xbU) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
                                                                     >> 0x15U))))) 
                                              << 0x13U) 
                                             | (QData)((IData)(
                                                               (0x7ffffU 
                                                                & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U]))))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[1U] 
                    = ((0xfe000000U & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
                                        << 0x1aU) | 
                                       (0x2000000U 
                                        & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                           >> 6U)))) 
                       | (IData)(((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                                        >> 0xaU)))) 
                                    << 0x26U) | (((QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                                                       << 0xbU) 
                                                                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
                                                                         >> 0x15U))))) 
                                                  << 0x13U) 
                                                 | (QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U]))))) 
                                  >> 0x20U)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[2U] 
                    = (0xfffU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
                                 >> 6U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[0U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[1U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[2U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[2U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[3U] 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[3U];
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__track_data_v_r = 0xffffU;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r 
                    = ((8U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
                              >> 0xfU)) | ((4U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                                  >> 0x1bU)) 
                                           | ((2U & 
                                               (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                                >> 7U)) 
                                              | (1U 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
                                                    >> 0x13U)))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r 
                    = ((8U & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[2U] 
                              >> 0x10U)) | ((4U & (
                                                   vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                                   >> 0x1cU)) 
                                            | ((2U 
                                                & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[1U] 
                                                   >> 8U)) 
                                               | (1U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem_data_lo[0U] 
                                                     >> 0x14U)))));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_tl_r;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r = 1U;
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_v_r = 0U;
            }
        }
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_n;
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r 
            = (3U & ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap))
                      ? (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap)
                      : (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap)));
        if (((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque))) {
            vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r 
                = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque;
            vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r 
                = vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__deque;
        }
        if (((IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque) 
             | (IData)(vlSelf->__PVT__cache_data_yumi_li))) {
            vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r 
                = vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque;
            vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r 
                = vlSelf->__PVT__cache_data_yumi_li;
        }
        vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r 
            = (3U & ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap))
                      ? (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap)
                      : (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap)));
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r 
            = vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__n_o;
        vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r 
            = (3U & ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap))
                      ? (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap)
                      : (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap)));
        vlSelf->__PVT__cache_controller__DOT__state_r 
            = vlSelf->__PVT__cache_controller__DOT__state_n;
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r 
            = (3U & ((4U & (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap))
                      ? (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap)
                      : (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap)));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_n;
        if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tl_we) {
            if (vlSelf->__PVT__cache_controller__DOT__cache_pkt_v_lo) {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[0U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                        << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U] 
                                     >> 0x10U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[1U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                        << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[1U] 
                                     >> 0x10U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[2U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                        << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[2U] 
                                     >> 0x10U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_tl_r[3U] 
                    = ((vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U] 
                        << 0x10U) | (vlSelf->__PVT__cache_controller__DOT__cache_pkt[3U] 
                                     >> 0x10U));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_tl_r 
                    = (0xffffU & vlSelf->__PVT__cache_controller__DOT__cache_pkt[0U]);
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_tl_r 
                    = (0x1ffffffffULL & (((QData)((IData)(
                                                          vlSelf->__PVT__cache_controller__DOT__cache_pkt[5U])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->__PVT__cache_controller__DOT__cache_pkt[4U])) 
                                            >> 0x10U)));
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r 
                    = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r = 1U;
            } else {
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r = 0U;
            }
        } else if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_hazard) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__v_tl_r = 0U;
        }
    }
    if (__Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    if (__Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__cache_controller__DOT__set_cnt = __Vdly__cache_controller__DOT__set_cnt;
    if (__Vdlyvset__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r 
        = __Vdly__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r;
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U];
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en;
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
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
            ? (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out)
            : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r));
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
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_data_we_lo 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo) 
              & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                             << 7U))) ? 0U : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
                                              ((IData)(1U) 
                                               + (0xcU 
                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                      << 7U))))) 
           | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
              (0xcU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                       << 2U))] >> (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                             << 7U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                             << 7U))) ? 0U : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
                                              ((IData)(2U) 
                                               + (0xcU 
                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                      << 7U))))) 
           | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
              ((IData)(1U) + (0xcU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                      << 2U)))] >> 
              (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                        << 7U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                             << 7U))) ? 0U : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
                                              ((IData)(3U) 
                                               + (0xcU 
                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                      << 7U))))) 
           | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
              ((IData)(2U) + (0xcU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                      << 2U)))] >> 
              (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                        << 7U))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                             << 7U))) ? 0U : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
                                              ((IData)(4U) 
                                               + (0xcU 
                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                                      << 7U))))) 
           | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_v_r[
              ((IData)(3U) + (0xcU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                                      << 2U)))] >> 
              (0x1fU & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id) 
                        << 7U))));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_enable) {
        if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__mux0_sel) {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U];
        } else {
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[0U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[1U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[2U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[3U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[4U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el1_r[5U] 
                = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
        }
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__miss__track_mem_data_o = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__recover_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo = 0U;
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
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_done_lo = 0U;
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h33d81de3__0 
        = (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                 >> (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_way_id)));
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
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[0U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[1U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__tag_mem_data_out[2U] = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__goto_flush_op 
        = (IData)((0U != (0x2700U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__partial_st_v 
        = (1U & ((~ ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                      >> 0x11U) & (0xffffU == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r)))) 
                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                    >> 0xfU)));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h2796af4e__0 
        = (IData)((0U != (0x8010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)));
    vlSelf->__PVT__cache_controller__DOT__op_data_lo 
        = ((2U >= (IData)(vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r)) 
           & vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
           [vlSelf->__PVT__cache_controller__DOT__tag__BRA__0__KET____DOT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r]);
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
    if ((8U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk7__DOT__i = 4U;
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__unnamedblk8__DOT__i = 4U;
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
                    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
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
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_v_lo = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__miss_state_r))) {
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
            vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss_track_mem_w_lo = 1U;
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
    __Vtemp_h23510110__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x80U 
                                                              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                              ? 
                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                 >> 0x18U)))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & ((0x40U 
                                                                 & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                 ? 
                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                    >> 0x10U))
                                                                 : 
                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                    >> 0x10U)))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & ((0x20U 
                                                                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                    ? 
                                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                     << 0x18U) 
                                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                       >> 8U))
                                                                    : 
                                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                     << 0x18U) 
                                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                       >> 8U)))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((0x10U 
                                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                       ? 
                                                                      vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U]
                                                                       : 
                                                                      vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U])))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                       ? 
                                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                        << 8U) 
                                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                          >> 0x18U))
                                                                       : 
                                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                        << 8U) 
                                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                          >> 0x18U))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                             ? 
                                                                            ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                              << 0x10U) 
                                                                             | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                >> 0x10U))
                                                                             : 
                                                                            ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                              << 0x10U) 
                                                                             | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                >> 0x10U))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((2U 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                                ? 
                                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                >> 8U))
                                                                                : 
                                                                               ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                >> 8U))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((1U 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                                 ? 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U]
                                                                                 : 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U]))))))))))));
    __Vtemp_h23510110__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & ((0x80U 
                                                               & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                               ? 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                << 8U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                  >> 0x18U))
                                                               : 
                                                              ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                << 8U) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                  >> 0x18U)))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                  ? 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                     >> 0x10U))
                                                                  : 
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                     >> 0x10U)))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((0x20U 
                                                                     & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                     ? 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U] 
                                                                        >> 8U))
                                                                     : 
                                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U] 
                                                                        >> 8U)))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((0x10U 
                                                                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                        ? 
                                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[1U]
                                                                        : 
                                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[1U])))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                        ? 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                         << 8U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                           >> 0x18U))
                                                                        : 
                                                                       ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                         << 8U) 
                                                                        | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                           >> 0x18U))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (((4U 
                                                                              & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                              ? 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                >> 0x10U))
                                                                              : 
                                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                >> 0x10U))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (((2U 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                                 ? 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U] 
                                                                                >> 8U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U] 
                                                                                >> 8U))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & ((1U 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                                                 ? 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[0U]
                                                                                 : 
                                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[0U]))))))))))) 
                                        >> 0x20U));
    __Vtemp_had5bf377__0[2U] = ((((0x800U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                   ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                       << 8U) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                 >> 0x18U))
                                   : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                       << 8U) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                 >> 0x18U))) 
                                 << 0x18U) | ((0xff0000U 
                                               & (((0x400U 
                                                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                       >> 0x10U))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (((0x200U 
                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                       ? 
                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U] 
                                                          >> 8U))
                                                       : 
                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U] 
                                                          >> 8U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((0x100U 
                                                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                        ? 
                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[2U]
                                                        : 
                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[2U])))));
    __Vtemp_hd9f7191d__0[3U] = ((((0x8000U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                   ? ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                       << 8U) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                 >> 0x18U))
                                   : ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                       << 8U) | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                 >> 0x18U))) 
                                 << 0x18U) | ((0xff0000U 
                                               & (((0x4000U 
                                                    & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                    ? 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                       >> 0x10U))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (((0x2000U 
                                                       & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                       ? 
                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U] 
                                                          >> 8U))
                                                       : 
                                                      ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U] 
                                                          >> 8U))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((0x1000U 
                                                        & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_mask_lo))
                                                        ? 
                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_lo[3U]
                                                        : 
                                                       vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_way_picked[3U])))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[0U] 
        = __Vtemp_h23510110__0[0U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[1U] 
        = __Vtemp_h23510110__0[1U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[2U] 
        = __Vtemp_had5bf377__0[2U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[3U] 
        = __Vtemp_hd9f7191d__0[3U];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__flush_way_decode 
        = (0xfU & ((0x2000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                    ? ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 0xeU))))
                    : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_hit_v)));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
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
    vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__cache_controller__DOT__stream_pump__DOT__stream_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__select_snoop_data_r) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_word_lo[3U];
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__bypass_data_masked[3U];
    }
    if (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_enable) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[0U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[0U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[1U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[1U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[2U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[2U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[3U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[3U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[4U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[4U];
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf__DOT__q0__DOT__el0_r[5U] 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__sbuf_entry_li[5U];
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo_v_li = 0U;
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_evict_lo = 0U;
    vlSelf->__PVT__dma_pkt_v_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_pkt_v_o = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_pkt_v_o = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_pkt_v_o = 1U;
                }
            }
        }
    }
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT____VdfgTmp_h958858df__0 
        = (IData)((0U != (0x10010U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_tl_r)));
    vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r));
    vlSelf->bank__BRA__0__KET____DOT__cache__DOT__miss__DOT__lru_encode__DOT____Vcellinp__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__sel_i 
        = (1U & (((3U == (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                >> 2U))) | (3U == (3U 
                                                   & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r))))
                  ? (3U == (3U & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r)))
                  : (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__stat_mem_data_lo)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel 
        = (0xffffU & (((0U == (0x10U & ((IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                 >> 1U)) 
                                        << 4U))) ? 0U
                        : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                           (((IData)(0xfU) + (0x70U 
                                              & ((IData)(
                                                         (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                          >> 1U)) 
                                                 << 4U))) 
                            >> 5U)] << ((IData)(0x20U) 
                                        - (0x10U & 
                                           ((IData)(
                                                    (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                     >> 1U)) 
                                            << 4U))))) 
                      | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                         (3U & ((IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                         >> 1U)) >> 1U))] 
                         >> (0x10U & ((IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                               >> 1U)) 
                                      << 4U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel 
        = (0xffU & (((0U == (0x18U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                                      << 3U))) ? 0U
                      : (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                         (((IData)(7U) + (0x78U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                                                  << 3U))))) 
                    | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                       (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                              >> 2U))] >> (0x18U & 
                                           ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r) 
                                            << 3U)))));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
        = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
        (3U & (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                       >> 2U)))];
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in 
        = (((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                            (((IData)(0x3fU) + (0x40U 
                                                & ((IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 3U)) 
                                                   << 6U))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[
                                                                   (2U 
                                                                    & ((IData)(
                                                                               (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 3U)) 
                                                                       << 1U))])));
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
    __Vtemp_h2da170f8__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x4bU 
                                                           >= 
                                                           (0x7fU 
                                                            & ((IData)(0x13U) 
                                                               * 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                           >> 0xeU))))))
                                                           ? 
                                                          (0x7ffffU 
                                                           & (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(0x13U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU))))))
                                                                ? 0U
                                                                : 
                                                               (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                                (((IData)(0x12U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x13U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))))) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & ((IData)(0x13U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))))))) 
                                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                                 (3U 
                                                                  & (((IData)(0x13U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))) 
                                                                     >> 5U))] 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & ((IData)(0x13U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU))))))))
                                                           : 0U))) 
                                         << 0xeU) | (QData)((IData)(
                                                                    (0x3fc0U 
                                                                     & ((IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 6U)) 
                                                                        << 6U))))));
    __Vtemp_h2da170f8__0[1U] = (IData)(((((QData)((IData)(
                                                          ((0x4bU 
                                                            >= 
                                                            (0x7fU 
                                                             & ((IData)(0x13U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                            >> 0xeU))))))
                                                            ? 
                                                           (0x7ffffU 
                                                            & (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(0x13U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU))))))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                                 (((IData)(0x12U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x13U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(0x13U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))))))) 
                                                               | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__tag_v_r[
                                                                  (3U 
                                                                   & (((IData)(0x13U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU)))) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(0x13U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 0xeU))))))))
                                                            : 0U))) 
                                          << 0xeU) 
                                         | (QData)((IData)(
                                                           (0x3fc0U 
                                                            & ((IData)(
                                                                       (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                        >> 6U)) 
                                                               << 6U))))) 
                                        >> 0x20U));
    __Vtemp_hb3d08297__0[0U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                        >> 7U))))) 
                                 << 8U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel));
    __Vtemp_hb3d08297__0[1U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                        >> 7U))))) 
                                 >> 0x18U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                                     >> 7U))))) 
                                              << 8U));
    __Vtemp_hb3d08297__0[2U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                        >> 7U))))) 
                                 >> 0x18U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                                     >> 7U))))) 
                                              << 8U));
    __Vtemp_hb3d08297__0[3U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                        >> 7U))))) 
                                 >> 0x18U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__0__KET____DOT__byte_sel) 
                                                                     >> 7U))))) 
                                              << 8U));
    __Vtemp_hb3d08297__0[4U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                        >> 0xfU))))) 
                                 << 0x10U) | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel));
    __Vtemp_hb3d08297__0[5U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                        >> 0xfU))))) 
                                 >> 0x10U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                                     >> 0xfU))))) 
                                              << 0x10U));
    __Vtemp_hb3d08297__0[6U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                        >> 0xfU))))) 
                                 >> 0x10U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                                     >> 0xfU))))) 
                                              << 0x10U));
    __Vtemp_hb3d08297__0[7U] = (((- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                        >> 0xfU))))) 
                                 >> 0x10U) | ((- (IData)((IData)(
                                                                 ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                                   >> 0x12U) 
                                                                  & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__1__KET____DOT__byte_sel) 
                                                                     >> 0xfU))))) 
                                              << 0x10U));
    __Vtemp_hb3d08297__0[8U] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel;
    __Vtemp_hb3d08297__0[9U] = (- (IData)((IData)((
                                                   (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                    >> 0x12U) 
                                                   & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
                                                      >> 0x1fU)))));
    __Vtemp_hb3d08297__0[0xaU] = (- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
                                                        >> 0x1fU)))));
    __Vtemp_hb3d08297__0[0xbU] = (- (IData)((IData)(
                                                    ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                      >> 0x12U) 
                                                     & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel 
                                                        >> 0x1fU)))));
    __Vtemp_hb3d08297__0[0xcU] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in);
    __Vtemp_hb3d08297__0[0xdU] = (IData)((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in 
                                          >> 0x20U));
    __Vtemp_hb3d08297__0[0xeU] = (IData)((- (QData)((IData)(
                                                            ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                              >> 0x12U) 
                                                             & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in 
                                                                >> 0x3fU))))));
    __Vtemp_hb3d08297__0[0xfU] = (IData)(((- (QData)((IData)(
                                                             ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                               >> 0x12U) 
                                                              & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in 
                                                                 >> 0x3fU))))) 
                                          >> 0x20U));
    if ((0x1000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        __Vtemp_ha684adab__0[0U] = ((2U & (((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__lock_v_r) 
                                            >> (3U 
                                                & (IData)(
                                                          (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                           >> 0xeU)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__valid_v_r) 
                                             >> (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                            >> 0xeU))))));
        __Vtemp_ha684adab__0[1U] = 0U;
        __Vtemp_ha684adab__0[2U] = 0U;
        __Vtemp_ha684adab__0[3U] = 0U;
    } else if ((0x800U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        __Vtemp_ha684adab__0[0U] = __Vtemp_h2da170f8__0[0U];
        __Vtemp_ha684adab__0[1U] = __Vtemp_h2da170f8__0[1U];
        __Vtemp_ha684adab__0[2U] = 0U;
        __Vtemp_ha684adab__0[3U] = 0U;
    } else if ((0x20000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        __Vtemp_ha684adab__0[0U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[0U] 
                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[0U]);
        __Vtemp_ha684adab__0[1U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[1U] 
                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[1U]);
        __Vtemp_ha684adab__0[2U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[2U] 
                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[2U]);
        __Vtemp_ha684adab__0[3U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__snoop_or_ld_data[3U] 
                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__expanded_mask_v[3U]);
    } else {
        __Vtemp_ha684adab__0[0U] = __Vtemp_hb3d08297__0[
            (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                     >> 0x11U))];
        __Vtemp_ha684adab__0[1U] = __Vtemp_hb3d08297__0[
            ((IData)(1U) + (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                    >> 0x11U)))];
        __Vtemp_ha684adab__0[2U] = __Vtemp_hb3d08297__0[
            ((IData)(2U) + (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                    >> 0x11U)))];
        __Vtemp_ha684adab__0[3U] = __Vtemp_hb3d08297__0[
            ((IData)(3U) + (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                    >> 0x11U)))];
    }
    if ((0U != (0x11810U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r))) {
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] 
            = __Vtemp_ha684adab__0[0U];
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U] 
            = __Vtemp_ha684adab__0[1U];
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[2U] 
            = __Vtemp_ha684adab__0[2U];
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[3U] 
            = __Vtemp_ha684adab__0[3U];
    } else {
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[0U] = 0U;
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[1U] = 0U;
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[2U] = 0U;
        vlSelf->__Vcellout__bank__BRA__0__KET____DOT__cache__data_o[3U] = 0U;
    }
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr_n_o 
        = (3U & ((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__in_fifo_yumi_li)));
    vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_alu_result = 0ULL;
    if ((0x80000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_reg_data 
            = (((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])));
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_mem_data 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_64__DOT__amo64_mem_in;
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result 
            = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_alu_result;
    } else {
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_reg_data 
            = ((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])) 
               << 0x20U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_mem_data 
            = ((QData)((IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__ld_data_sel__BRA__2__KET____DOT__byte_sel)) 
               << 0x20U);
        vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result 
            = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_alu_result 
               >> 0x20U);
    }
    __Vtemp_h5e13698b__0[0U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]))));
    __Vtemp_h5e13698b__0[1U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]))));
    __Vtemp_h5e13698b__0[2U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]))));
    __Vtemp_h5e13698b__0[3U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]))));
    __Vtemp_h5e13698b__0[4U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]));
    __Vtemp_h5e13698b__0[5U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]));
    __Vtemp_h5e13698b__0[6U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]));
    __Vtemp_h5e13698b__0[7U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U]));
    if ((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        __Vtemp_h5e13698b__0[8U] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result);
        __Vtemp_h5e13698b__0[9U] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result);
        __Vtemp_h5e13698b__0[0xaU] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result);
        __Vtemp_h5e13698b__0[0xbU] = (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result);
    } else {
        __Vtemp_h5e13698b__0[8U] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U];
        __Vtemp_h5e13698b__0[9U] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U];
        __Vtemp_h5e13698b__0[0xaU] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U];
        __Vtemp_h5e13698b__0[0xbU] = vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U];
    }
    __Vtemp_h5e13698b__0[0xcU] = (IData)(((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                                           ? vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result
                                           : (((QData)((IData)(
                                                               vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))));
    __Vtemp_h5e13698b__0[0xdU] = (IData)((((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                                            ? vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result
                                            : (((QData)((IData)(
                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))) 
                                          >> 0x20U));
    __Vtemp_h5e13698b__0[0xeU] = (IData)(((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                                           ? vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result
                                           : (((QData)((IData)(
                                                               vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))));
    __Vtemp_h5e13698b__0[0xfU] = (IData)((((0x10U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)
                                            ? vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__atomic_result
                                            : (((QData)((IData)(
                                                                vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U])))) 
                                          >> 0x20U));
    __Vtemp_h434fc121__0[0U] = ((__Vtemp_h5e13698b__0[
                                 (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                          >> 0x11U))] 
                                 << 0x10U) | (0xffffU 
                                              & (IData)(
                                                        ((((QData)((IData)(
                                                                           ((0xff00U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 3U)))) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r 
                                                                                >> 3U))))))))))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              (((IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__2__KET____DOT__exp__o) 
                                                                                << 0x10U) 
                                                                               | (IData)(vlSelf->bank__BRA__0__KET____DOT__cache__DOT____Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o)))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                << 
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__addr_v_r)))))))) 
                                                         >> 
                                                         (0x30U 
                                                          & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                             >> 0xfU))))));
    __Vtemp_h434fc121__0[1U] = ((__Vtemp_h5e13698b__0[
                                 (0xcU & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                          >> 0x11U))] 
                                 >> 0x10U) | (__Vtemp_h5e13698b__0[
                                              ((IData)(1U) 
                                               + (0xcU 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                     >> 0x11U)))] 
                                              << 0x10U));
    __Vtemp_h434fc121__0[2U] = ((__Vtemp_h5e13698b__0[
                                 ((IData)(1U) + (0xcU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                    >> 0x11U)))] 
                                 >> 0x10U) | (__Vtemp_h5e13698b__0[
                                              ((IData)(2U) 
                                               + (0xcU 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                     >> 0x11U)))] 
                                              << 0x10U));
    __Vtemp_h434fc121__0[3U] = ((__Vtemp_h5e13698b__0[
                                 ((IData)(2U) + (0xcU 
                                                 & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                    >> 0x11U)))] 
                                 >> 0x10U) | (__Vtemp_h5e13698b__0[
                                              ((IData)(3U) 
                                               + (0xcU 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                     >> 0x11U)))] 
                                              << 0x10U));
    if ((0x20000U & vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r)) {
        vlSelf->__VdfgTmp_hc34d21c0__0[0U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                               << 0x10U) 
                                              | (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__mask_v_r));
        vlSelf->__VdfgTmp_hc34d21c0__0[1U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[0U] 
                                               >> 0x10U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U] 
                                                 << 0x10U));
        vlSelf->__VdfgTmp_hc34d21c0__0[2U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[1U] 
                                               >> 0x10U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[2U] 
                                                 << 0x10U));
        vlSelf->__VdfgTmp_hc34d21c0__0[3U] = ((vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[2U] 
                                               >> 0x10U) 
                                              | (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[3U] 
                                                 << 0x10U));
        vlSelf->__VdfgTmp_hc34d21c0__0[4U] = (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_v_r[3U] 
                                              >> 0x10U);
    } else {
        vlSelf->__VdfgTmp_hc34d21c0__0[0U] = __Vtemp_h434fc121__0[0U];
        vlSelf->__VdfgTmp_hc34d21c0__0[1U] = __Vtemp_h434fc121__0[1U];
        vlSelf->__VdfgTmp_hc34d21c0__0[2U] = __Vtemp_h434fc121__0[2U];
        vlSelf->__VdfgTmp_hc34d21c0__0[3U] = __Vtemp_h434fc121__0[3U];
        vlSelf->__VdfgTmp_hc34d21c0__0[4U] = (__Vtemp_h5e13698b__0[
                                              ((IData)(3U) 
                                               + (0xcU 
                                                  & (vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__decode_v_r 
                                                     >> 0x11U)))] 
                                              >> 0x10U);
    }
}
