// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

extern const VlUnpacked<CData/*3:0*/, 128> Vtestbench__ConstPool__TABLE_h83ca26ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5029f386_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5efd7157_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h70f1aaf3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h49ada9e1_0;

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
                                             & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_v_li) 
                                                & ((~ 
                                                    (0x18U 
                                                     >> 
                                                     (0xfU 
                                                      & (vlSelf->data_o[0U] 
                                                         >> 0xbU)))) 
                                                   | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                      & (1U 
                                                         == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx1];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx1];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx1];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_resp_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_resp_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r)) 
                                             & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_resp_v_li) 
                                                & ((~ 
                                                    (8U 
                                                     >> 
                                                     (0xfU 
                                                      & (vlSelf->data_o[0U] 
                                                         >> 0xbU)))) 
                                                   | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                      & (1U 
                                                         == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx2];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx2];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx2];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_resp_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce_resp_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx3];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx3];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx3];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx4 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx4];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx4];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx4];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx4];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                           << 2U))] >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                 << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(1U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(2U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(3U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx5])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx5];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx5])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx5];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx5];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx5];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
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

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                           << 2U))] >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                 << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(1U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(2U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(3U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx6 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx6];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx6];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx6];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx6];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
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

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx7 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_yumis))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx7])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx7];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx7])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx7];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx7];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx7];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx8 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          ((0xfffffff8U 
                                            & (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_ready_and_o) 
                                                << 2U) 
                                               & (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT____Vcellinp__fe_lce__lce_cmd_v_i) 
                                                   & ((~ 
                                                       (0x810U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r))))) 
                                                  << 3U))) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx8])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx8];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx8])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx8];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx8];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx8];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__valid_o)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx9 = (((IData)(vlSelf->__PVT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                           << 4U) | 
                                          ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_ready_and_o) 
                                             & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT____Vcellinp__fe_lce__lce_fill_v_i) 
                                                & ((~ 
                                                    (0x10U 
                                                     >> 
                                                     (0xfU 
                                                      & (vlSelf->data_o[0U] 
                                                         >> 0xbU)))) 
                                                   | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                      & (1U 
                                                         == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx9])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx9];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx9])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx9];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx9];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx9];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__valid_o)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx10 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((0xfffffff8U 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                                                   << 2U) 
                                                  & (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__pr_v_o) 
                                                      & ((~ 
                                                          (0x810U 
                                                           >> 
                                                           (0xfU 
                                                            & (vlSelf->data_o[0U] 
                                                               >> 0xbU)))) 
                                                         | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                            & (1U 
                                                               == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r))))) 
                                                     << 3U))) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx10])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx10];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx10])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx10];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx10];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx10];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx11 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__pr_v_o) 
                                                   & ((~ 
                                                       (0x10U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx11])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx11];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx11])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx11];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx11];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx11];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx12 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__return_fifo_yumi_li) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx12])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx12];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx12])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx12];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx12];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx12];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__2(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__2\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT____Vcellinp__br__DOT__return_fifo__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx13 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__return_fifo_yumi_li) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx13])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx13];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx13])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx13];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx13];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx13];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__2(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__2\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT____Vcellinp__br__DOT__return_fifo__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx14 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx14])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx14];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx14])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx14];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx14];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx14];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx15 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx15])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx15];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx15])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx15];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx15];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx15];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx16 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx16])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx16];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx16])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx16];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx16];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx16];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx17 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx17])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx17];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx17])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx17];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx17];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx17];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx18 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx18])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx18];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx18])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx18];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx18];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx18];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx19 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx19])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx19];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx19])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx19];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx19];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx19];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx20 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx20])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx20];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx20])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx20];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx20];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx20];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx21 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx21])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx21];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx21])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx21];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx21];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx21];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx22 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx22])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx22];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx22])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx22];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx22];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx22];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx23 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx23])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx23];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx23])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx23];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx23];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx23];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx24 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx24])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx24];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx24])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx24];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx24];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx24];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx25 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx25])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx25];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx25])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx25];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx25];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx25];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx26 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx26])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx26];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx26])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx26];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx26];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx26];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx27 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx27])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx27];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx27])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx27];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx27];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx27];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx28 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx28])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx28];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx28])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx28];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx28];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx28];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx29 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx29])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx29];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx29])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx29];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx29];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx29];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx30 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx30])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx30];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx30])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx30];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx30];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx30];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx31 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx31])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx31];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx31])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx31];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx31];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx31];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx32 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx32])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx32];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx32])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx32];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx32];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx32];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx33 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx33])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx33];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx33])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx33];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx33];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx33];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx34 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx34])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx34];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx34])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx34];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx34];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx34];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    // Body
    __Vtableidx35 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx35])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx35];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx35])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx35];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx35];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx35];
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h00a540f1_0;

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h31bdb563__0;
    // Body
    VL_SHIFTL_WWI(520,520,32, __Vtemp_h31bdb563__0, vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xcU] 
                                      & __Vtemp_h31bdb563__0[0xcU]) 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<17>/*543:0*/ __Vtemp_h31bdb563__0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        VL_SHIFTL_WWI(520,520,32, __Vtemp_h31bdb563__0, vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = (((Vtestbench__ConstPool__CONST_h00a540f1_0[9U] 
                 & __Vtemp_h31bdb563__0[9U]) << 0x1cU) 
               | ((Vtestbench__ConstPool__CONST_h00a540f1_0[8U] 
                   & __Vtemp_h31bdb563__0[8U]) >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xaU] 
                 & __Vtemp_h31bdb563__0[0xaU]) << 0x1cU) 
               | ((Vtestbench__ConstPool__CONST_h00a540f1_0[9U] 
                   & __Vtemp_h31bdb563__0[9U]) >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xbU] 
                 & __Vtemp_h31bdb563__0[0xbU]) << 0x1cU) 
               | ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xaU] 
                   & __Vtemp_h31bdb563__0[0xaU]) >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xcU] 
                 & __Vtemp_h31bdb563__0[0xcU]) << 0x1cU) 
               | ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xbU] 
                   & __Vtemp_h31bdb563__0[0xbU]) >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx36 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__VdfgTmp_h1989588e__0) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx36])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx36];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx36])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx36];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx36];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx36];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx37 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_v_li) 
                                                   & ((~ 
                                                       (0x18U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx37])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx37];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx37])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx37];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx37];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx37];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_resp_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_resp_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx38 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_resp_v_li) 
                                                   & ((~ 
                                                       (8U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx38])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx38];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx38])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx38];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx38];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx38];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_resp_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce_resp_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx39 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx39])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx39];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx39])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx39];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx39];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx39];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__link_o[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx40 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx40])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx40];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx40])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx40];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx40];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx40];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                           << 2U))] >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                 << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(1U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(2U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(3U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx41 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s.__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx41])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx41];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx41])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx41];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx41];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx41];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
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

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__dma__DOT__out_fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                           << 2U))] >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                 << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(1U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(2U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                 << 7U))) ? 0U : (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xcU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                                       << 7U))))) 
               | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__data_mem_data_lo[
                  ((IData)(3U) + (0xcU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                                          << 2U)))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__PVT__bank__BRA__0__KET____DOT__cache__DOT__dma_way_lo) 
                               << 7U))));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx42 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s.__Vcellinp__bank__BRA__0__KET____DOT__cache__dma_data_yumi_i) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx42])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx42];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx42])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx42];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx42];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx42];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
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

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx43 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_yumis))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx43])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx43];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx43])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx43];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx43];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx43];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx44 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((0xfffffff8U 
                                               & (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_ready_and_o) 
                                                   << 2U) 
                                                  & (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT____Vcellinp__fe_lce__lce_cmd_v_i) 
                                                      & ((~ 
                                                          (0x810U 
                                                           >> 
                                                           (0xfU 
                                                            & (vlSelf->data_o[0U] 
                                                               >> 0xbU)))) 
                                                         | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                            & (1U 
                                                               == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r))))) 
                                                     << 3U))) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx44])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx44];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx44])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx44];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx44];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx44];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__valid_o)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx45 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar.__PVT__msg_ready_and_o) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT____Vcellinp__fe_lce__lce_fill_v_i) 
                                                   & ((~ 
                                                       (0x10U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx45])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx45];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx45])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx45];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx45];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx45];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__valid_o)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__cmd_concentrator__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx46 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((0xfffffff8U 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                                                   << 2U) 
                                                  & (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__pr_v_o) 
                                                      & ((~ 
                                                          (0x810U 
                                                           >> 
                                                           (0xfU 
                                                            & (vlSelf->data_o[0U] 
                                                               >> 0xbU)))) 
                                                         | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                            & (1U 
                                                               == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r))))) 
                                                     << 3U))) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx46])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx46];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx46])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx46];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx46];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx46];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx47 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r[0U] 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__pr_v_o) 
                                                   & ((~ 
                                                       (0x10U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx47])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx47];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx47])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx47];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx47];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx47];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx48 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__return_fifo_yumi_li) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx48])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx48];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx48])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx48];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx48];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx48];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__2(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__2\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT____Vcellinp__br__DOT__return_fifo__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer.data_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx49 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__return_fifo_yumi_li) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx49])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx49];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx49])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx49];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx49];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx49];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__2(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__br__DOT__return_fifo__2\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT____Vcellinp__br__DOT__return_fifo__v_i));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx50 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx50])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx50];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx50])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx50];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx50];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx50];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx51 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx51])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx51];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx51])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx51];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx51];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx51];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx52 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx52])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx52];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx52])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx52];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx52];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx52];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx53 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx53])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx53];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx53])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx53];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx53];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx53];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx54 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx54])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx54];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx54])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx54];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx54];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx54];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx55 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx55])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx55];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx55])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx55];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx55];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx55];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx56 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx56])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx56];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx56])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx56];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx56];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx56];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx57 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx57])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx57];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx57])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx57];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx57];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx57];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx58 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx58])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx58];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx58])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx58];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx58];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx58];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx59 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx59])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx59];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx59])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx59];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx59];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx59];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx60 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx60])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx60];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx60])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx60];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx60];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx60];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx61 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx61])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx61];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx61])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx61];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx61];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx61];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx62 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx62])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx62];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx62])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx62];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx62];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx62];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx63 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx63])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx63];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx63])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx63];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx63];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx63];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx64 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx64])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx64];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx64])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx64];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx64];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx64];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx65 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx65])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx65];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx65])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx65];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx65];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx65];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx66 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx66])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx66];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx66])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx66];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx66];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx66];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx67 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx67])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx67];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx67])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx67];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx67];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx67];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx68 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx68])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx68];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx68])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx68];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx68];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx68];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx69 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx69])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx69];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx69])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx69];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx69];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx69];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx70 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx70])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx70];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx70])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx70];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx70];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx70];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (0U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx71 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx71])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx71];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx71])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx71];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx71];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx71];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[8U] 
                               >> 3U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx72 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx72])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx72];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx72])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx72];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx72];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx72];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx73;
    __Vtableidx73 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx73 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__req_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_req_v_li) 
                                                   & ((~ 
                                                       (0x18U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx73])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx73];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx73])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx73];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx73];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx73];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx74 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_v_li) 
                                                   & ((~ 
                                                       (0x810U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx74])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx74];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx74])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx74];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx74];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx74];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx75;
    __Vtableidx75 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx75 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_v_li) 
                                                   & ((~ 
                                                       (6U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xaU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx75])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx75];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx75])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx75];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx75];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx75];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx76;
    __Vtableidx76 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx76 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__io_cce__DOT__rev_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_v_li) 
                                                   & ((~ 
                                                       (5U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xaU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx76])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx76];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx76])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx76];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx76];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx76];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx77;
    __Vtableidx77 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx77 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx77])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx77];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx77])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx77];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx77];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx77];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx78;
    __Vtableidx78 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx78 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx78])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx78];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx78])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx78];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx78];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx78];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx79;
    __Vtableidx79 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx79 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx79])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx79];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx79])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx79];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx79];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx79];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx80;
    __Vtableidx80 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx80 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx80])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx80];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx80])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx80];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx80];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx80];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx81;
    __Vtableidx81 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx81 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx81])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx81];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx81])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx81];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx81];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx81];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx82;
    __Vtableidx82 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx82 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx82])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx82];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx82])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx82];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx82];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx82];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx83;
    __Vtableidx83 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx83 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx83])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx83];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx83])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx83];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx83];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx83];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx84;
    __Vtableidx84 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx84 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx84])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx84];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx84])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx84];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx84];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx84];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx85;
    __Vtableidx85 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx85 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx85])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx85];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx85])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx85];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx85];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx85];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}
