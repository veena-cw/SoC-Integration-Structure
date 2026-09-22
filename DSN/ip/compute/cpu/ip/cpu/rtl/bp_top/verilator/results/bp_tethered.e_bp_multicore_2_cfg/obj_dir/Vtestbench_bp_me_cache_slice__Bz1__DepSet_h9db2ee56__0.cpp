// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        194, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[0].l2s.fifo.unhardened.un.fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=         84, els_p=        256 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[0].l2s.bank[0].cache.tag_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_byte: instantiating data_width_p=        512, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[0].l2s.bank[0].cache.data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=          7, els_p=        256 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[0].l2s.bank[0].cache.stat_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        128, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[0].l2s.bank[0].cache.dma.in_fifo.unhardened.un.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3\n"); );
    // Body
    if (VL_UNLIKELY((((0x3ffU == (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                      & (IData)(vlSelf->__PVT__cache_controller__DOT__set_up)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[0].l2s.cache_controller.set_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                      & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[0].l2s.bank[0].cache.dma.dma_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        194, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[1].l2s.fifo.unhardened.un.fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=         84, els_p=        256 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[1].l2s.bank[0].cache.tag_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_byte: instantiating data_width_p=        512, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[1].l2s.bank[0].cache.data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=          7, els_p=        256 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[1].l2s.bank[0].cache.stat_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        128, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[1].l2s.bank[0].cache.dma.in_fifo.unhardened.un.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__3(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__3\n"); );
    // Body
    if (VL_UNLIKELY((((0x3ffU == (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                      & (IData)(vlSelf->__PVT__cache_controller__DOT__set_up)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[1].l2s.cache_controller.set_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                      & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.slices[1].l2s.bank[0].cache.dma.dma_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        194, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[0].l2s.fifo.unhardened.un.fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=         84, els_p=        256 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[0].l2s.bank[0].cache.tag_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_byte: instantiating data_width_p=        512, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[0].l2s.bank[0].cache.data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=          7, els_p=        256 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[0].l2s.bank[0].cache.stat_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        128, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[0].l2s.bank[0].cache.dma.in_fifo.unhardened.un.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__3\n"); );
    // Body
    if (VL_UNLIKELY((((0x3ffU == (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                      & (IData)(vlSelf->__PVT__cache_controller__DOT__set_up)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[0].l2s.cache_controller.set_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                      & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[0].l2s.bank[0].cache.dma.dma_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        194, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.fifo.unhardened.un.fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=         84, els_p=        256 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.tag_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_byte: instantiating data_width_p=        512, els_p=       1024 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=          7, els_p=        256 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.stat_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        128, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.dma.in_fifo.unhardened.un.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__3(Vtestbench_bp_me_cache_slice__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bp_me_cache_slice__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__3\n"); );
    // Body
    if (VL_UNLIKELY((((0x3ffU == (IData)(vlSelf->__PVT__cache_controller__DOT__set_cnt)) 
                      & (IData)(vlSelf->__PVT__cache_controller__DOT__set_up)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.cache_controller.set_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((4U == (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_r)) 
                      & (IData)(vlSelf->__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__counter_up)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.slices[1].l2s.bank[0].cache.dma.dma_counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}
