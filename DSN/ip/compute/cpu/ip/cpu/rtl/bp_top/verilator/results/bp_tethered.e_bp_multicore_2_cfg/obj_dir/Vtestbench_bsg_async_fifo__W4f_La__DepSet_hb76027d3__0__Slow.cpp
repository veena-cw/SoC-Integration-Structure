// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_async_fifo__W4f_La.h"

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__0__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__0__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__0__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__0__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__1__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__1__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__1__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__1__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__2__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__2__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__2__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__2__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__3__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__3__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__3__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__3__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__4__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__4__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__4__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__4__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__5__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__5__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__5__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__5__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__6__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__6__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__6__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__6__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__7__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__7__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__7__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__7__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__8__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__8__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__8__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__8__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__9__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__9__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__9__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__9__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__10__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__10__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__10__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__10__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__11__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__11__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__11__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__11__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__12__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__12__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__12__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__12__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__13__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__13__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__13__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__13__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__14__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__14__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__14__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__14__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__15__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__15__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__15__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__15__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__16__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__16__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__16__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__16__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__17__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__17__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__17__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__17__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__18__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__18__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__18__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__18__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__19__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__19__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__19__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__19__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__20__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__20__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__20__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__20__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__21__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__21__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__21__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__21__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__22__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__22__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__22__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__22__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__23__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__23__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__23__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__23__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__24__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__24__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__24__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__24__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__25__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__25__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__25__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__25__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__26__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__26__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__26__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__26__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__27__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__27__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__27__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__27__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__28__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__28__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__28__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__28__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__29__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__29__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__29__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__29__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__30__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__30__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__30__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__30__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__31__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__31__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__31__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__31__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__0__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__0__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__0__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__0__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__1__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__1__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__1__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__1__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__2__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__2__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__2__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__2__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__3__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__3__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__3__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__3__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__4__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__4__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__4__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__4__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__5__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__5__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__5__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__5__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__6__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__6__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__6__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__6__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__7__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__7__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__7__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__7__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__8__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__8__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__8__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__8__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__9__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__9__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__9__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__9__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__10__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__10__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__10__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__10__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__11__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__11__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__11__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__11__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__12__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__12__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__12__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__12__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__13__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__13__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__13__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__13__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__14__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__14__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__14__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__14__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__15__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__15__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__15__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__15__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__16__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__16__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__16__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__16__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__17__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__17__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__17__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__17__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__18__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__18__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__18__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__18__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__19__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__19__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__19__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__19__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__20__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__20__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__20__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__20__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__21__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__21__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__21__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__21__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__22__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__22__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__22__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__22__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__23__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__23__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__23__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__23__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__24__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__24__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__24__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__24__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__25__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__25__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__25__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__25__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__26__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__26__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__26__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__26__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__27__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__27__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__27__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__27__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__28__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__28__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__28__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__28__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__29__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__29__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__29__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__29__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__30__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__30__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__30__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__30__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__31__KET____DOT__ird_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__31__KET____DOT__ird_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__ird_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__ird_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__31__KET____DOT__frd_fifo__0(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__wb__BRA__31__KET____DOT__frd_fifo__0\n"); );
    // Body
    vlSelf->__PVT__r_ptr_gray_r = (((IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                    << 8U) | (IData)(vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = (0x7ffU 
                                               & ((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                                                  + (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__frd_fifo__w_enq_i)));
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__frd_fifo__w_enq_i) {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = vlSelf->__PVT__bapg_wr__DOT__w_ptr_r;
        vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 
            (0x7ffU & (((IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                        << 8U) | (IData)(vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)));
    }
}
