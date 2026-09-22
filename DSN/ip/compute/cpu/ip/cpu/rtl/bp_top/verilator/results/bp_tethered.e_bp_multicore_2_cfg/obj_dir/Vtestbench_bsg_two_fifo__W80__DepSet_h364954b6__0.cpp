// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}
